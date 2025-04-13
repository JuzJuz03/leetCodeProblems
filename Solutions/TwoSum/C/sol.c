/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
struct Number {
    int value;
    int ind;
};

void bsort(struct Number n1[], int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - 1 - i; j++){
            if(n1[j].value > n1[j + 1].value){
                struct Number aux;
                aux = n1[j];
                n1[j] = n1[j + 1];
                n1[j + 1] = aux;
            }
        }
    }
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* result = (int*)malloc(*returnSize * sizeof(int));
    struct Number n1[numsSize];
    for(int i = 0; i < numsSize; i++) {
        n1[i].value = nums[i];
        n1[i].ind = i;
    }
    bsort(n1, numsSize);
    int left = 0;
    int right = numsSize - 1;
    int sum  = n1[left].value + n1[right].value;
    while(sum != target){
        if(sum > target){
            right--;
        }else{
            left++;
        }
        sum  = n1[left].value + n1[right].value;
    }
    result[0] = n1[left].ind;
    result[1] = n1[right].ind;
    return result;

}

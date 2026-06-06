void moveZeroes(int* nums, int numsSize) {
    int insertPos = 0;

    // Move non-zero elements forward
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[insertPos++] = nums[i];
        }
    }

    // Fill the rest with zeros
    while (insertPos < numsSize) {
        nums[insertPos++] = 0;
    }
}

#define _CRT_SECURE_NO_WARNINGS 1
//167.两数之和 II-输入有序数组
//int* twoSum(int* numbers, int numbersSize, int target, int* returnSize)
//{
//    int* arr = (int*)malloc(sizeof(int) * 2);
//    *returnSize = 2;
//    int slow = 0;
//    int fast = numbersSize - 1;
//    while (slow < fast)
//    {
//        if (numbers[slow] + numbers[fast] == target)
//        {
//            arr[0] = slow + 1;
//            arr[1] = fast + 1;
//            return arr;
//        }
//        else if (numbers[slow] + numbers[fast] < target)
//        {
//            slow++;
//        }
//        else
//        {
//            fast--;
//        }
//    }
//    arr[0] = -1;
//    arr[1] = -1;
//    return arr;
//}
//283.移动零
//void moveZeroes(int* nums, int numsSize)
//{
//    if (numsSize == 0)
//    {
//        return;
//    }
//    int slow = 0;
//    int fast = 1;
//    while (fast < numsSize)
//    {
//        if (nums[slow] != 0 && nums[fast] != 0)
//        {
//            slow++;
//            fast++;
//        }
//        else if (nums[slow] == 0 && nums[fast] != 0)
//        {
//            int temp = nums[slow];
//            nums[slow] = nums[fast];
//            nums[fast] = temp;
//            slow++;
//            fast++;
//        }
//        else if (nums[slow] != 0 && nums[fast] == 0)
//        {
//            slow++;
//            fast++;
//        }
//        else if (nums[slow] == 0 && nums[fast] == 0)
//        {
//            fast++;
//        }
//    }
//}
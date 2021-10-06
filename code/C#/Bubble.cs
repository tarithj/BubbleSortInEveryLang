using System;
using System.Collections.Generic;
 
namespace RosettaCode.BubbleSort
{
    public static class BubbleSortMethods
    {
        public static void BubbleSort<T>(this List<T> list) where T : IComparable
        {
            bool madeChanges;
            int itemCount = list.Count;
            do
            {
                madeChanges = false;
                itemCount--;
                for (int i = 0; i < itemCount; i++)
                {
                    if (list[i].CompareTo(list[i + 1]) > 0)
                    {
                        T temp = list[i + 1];
                        list[i + 1] = list[i];
                        list[i] = temp;
                        madeChanges = true;
                    }
                }
            } while (madeChanges);
        }
    }
 
    class Program
    {
        static void Main()
        {
            List<int> testList = new List<int> {21, 50, 12, 31, 61, 40, 30};
            testList.BubbleSort();
            foreach (var t in testList) Console.Write(t + " ");
        }
    }
}
import os
import sys

import pytest
from hypothesis import given, strategies as st

currentdir = os.path.dirname(os.path.realpath(__file__))
parentdir = os.path.dirname(currentdir)
sys.path.append(parentdir)

from bubblesort import bubble_sort


@given(original_array=st.lists(st.integers(min_value=-1, max_value=1e12)))
def test_sort(original_array):
    expected_result = sorted(original_array)

    for i in range(len(original_array) - 1):
        assert bubble_sort(original_array) == expected_result

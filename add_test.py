import unittest
import basic


class TestAdd(unittest.TestCase):

    def test_add(self):
        assert basic.add(1, 1) == 2


if __name__ == "__main__":
    unittest.main()

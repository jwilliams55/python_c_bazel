import unittest
import basic.add


class TestAdd(unittest.TestCase):

    def test_add(self):
        assert add(1, 1) == 2


if __name__ == "__main__":
    unittest.main()

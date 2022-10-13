import unittest

import pylib.hello


class TestHello(unittest.TestCase):
    def test_hello():
        self.assertEq(hello(), "hello")

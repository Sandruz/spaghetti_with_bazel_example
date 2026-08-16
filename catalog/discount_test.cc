// discount_test.cc — MISNAMED on purpose for the wrong_file_name demo.
//
// This is a real test, but it lives directly under catalog/ rather than a
// test/ folder. The //:config filename_rules map says a *_test source must sit
// under a `test/` folder segment, so the aspect flags this target (discount_test)
// with the advisory `wrong_file_name` (suggestion: "discount_test.cc belongs in a
// test/ folder"). Purely advisory — the build and the test still pass.
namespace catalog {

static double ApplyDiscount(double price, double fraction) {
  return price - price * fraction;
}

}  // namespace catalog

int main() {
  // 100 with a 25% discount is 75.
  double got = catalog::ApplyDiscount(100.0, 0.25);
  return (got == 75.0) ? 0 : 1;
}

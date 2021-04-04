#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pairs;

struct point {
  int x, y;
};
 
auto is_central_point(const point p, const vector<point>& points) -> bool {
  auto left = false, right = false, up = false, down = false;
  for (auto i = 0; i < points.size(); ++i) {
    if (p.x == points[i].x and p.y == points[i].y) { continue; }
    if (p.x == points[i].x and p.y > points[i].y) { up = true; }
    if (p.x == points[i].x and p.y < points[i].y) { down = true; }
    if (p.x > points[i].x and p.y == points[i].y) { right = true; }
    if (p.x < points[i].x and p.y == points[i].y) { left = true; }
  }
 
  return left and right and up and down;
}
 
int main() {
  int num_points;
  cin >> num_points;
 
  auto points = vector<point>(num_points);
  for (auto i = 0; i < num_points; ++i) { cin >> points[i].x >> points[i].y; }
 
  auto centrals = 0;
  for (auto i = 0; i < num_points; ++i) {
    if (is_central_point(points[i], points)) { centrals += 1; }
  }
 
  cout << centrals << endl;
}

//要取得[a, b)的随机整数，使用(rand() % (b - a)) + a （结果值含a不含b）。
//要取得[a, b]的随机整数，使用(rand() % (b - a + 1)) + a （结果值含a和b）。
//要取得(a, b]的随机整数，使用(rand() % (b - a)) + a + 1 （结果值不含a含b）。
//（总的来说，通用公式：a + rand() % n ；其中的a是起始值，n是整数的范围）
//要取得a到b之间的随机整数，另一种表示：a + (int)b * rand() / (RAND_MAX + 1)。
//要取得0～1之间的浮点数，可以使用rand() / double(RAND_MAX)。
#include <iostream>
#include <locale>

int main() {
  try {
    std::locale::global(std::locale(
        "en_US.UTF-8")); // 设置一个有效的 locale，比如英文或者中文 UTF-8
    std::wcout.imbue(std::locale()); // 关联 wcout 和全局 locale

    std::wstring txt = L"中国人";
    std::wcout << txt << std::endl; // 输出宽字符字符串

  } catch (const std::exception &e) {
    std::cerr << "Exception caught: " << e.what() << std::endl;
  }

  return 0;
}

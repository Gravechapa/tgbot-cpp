//
// Created by Oleg Morozenkov on 25.01.17.
//

#include "tgbot/types/InputFile.h"

using namespace std;

namespace TgBot {

InputFile::Ptr InputFile::fromFile(const string& filePath, const string& mimeType) {
    auto result(make_shared<InputFile>());
    result->mimeType = mimeType;
    result->filePath = filePath;
    return result;
}

};

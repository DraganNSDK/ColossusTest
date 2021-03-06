/**
 * @file       Denominations.h
 *
 * @brief      Denomination info for the Zerocoin library.
 *
 * @copyright  Copyright 2017 PIVX Developers
 * @license    This project is released under the MIT license.
 **/

#ifndef DENOMINATIONS_H_
#define DENOMINATIONS_H_

#include <cstdint>
#include <string>
#include <vector>

namespace libzerocoin {

enum  CoinDenomination {
    ZQ_ERROR = 0,
    ZQ_ONE = 100, //1,
    ZQ_FIVE = 500, //5,
    ZQ_TEN = 1000, //10,
    ZQ_FIFTY = 5000, //50,
    ZQ_ONE_HUNDRED = 10000, //100,
    ZQ_FIVE_HUNDRED = 50000, //500,
    ZQ_ONE_THOUSAND = 100000, //1000,
    ZQ_FIVE_THOUSAND = 500000, //5000
    ZQ_MIN = 100,
};

// Order is with the Smallest Denomination first and is important for a particular routine that this order is maintained
const std::vector<CoinDenomination> zerocoinDenomList = {ZQ_ONE, ZQ_FIVE, ZQ_TEN, ZQ_FIFTY, ZQ_ONE_HUNDRED, ZQ_FIVE_HUNDRED, ZQ_ONE_THOUSAND, ZQ_FIVE_THOUSAND}; //, ZQ_TEN_THOUSAND};

int64_t ZerocoinDenominationToInt(const CoinDenomination& denomination);
int64_t ZerocoinDenominationToAmount(const CoinDenomination& denomination);
CoinDenomination IntToZerocoinDenomination(int64_t amount);
CoinDenomination AmountToZerocoinDenomination(int64_t amount);
CoinDenomination AmountToClosestDenomination(int64_t nAmount, int64_t& nRemaining);
CoinDenomination get_denomination(std::string denomAmount);
int64_t get_amount(std::string denomAmount);

} /* namespace libzerocoin */
#endif /* DENOMINATIONS_H_ */

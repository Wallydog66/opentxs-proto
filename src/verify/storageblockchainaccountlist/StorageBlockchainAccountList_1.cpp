/************************************************************
 *
 *                 OPEN TRANSACTIONS
 *
 *       Financial Cryptography and Digital Cash
 *       Library, Protocol, API, Server, CLI, GUI
 *
 *       -- Anonymous Numbered Accounts.
 *       -- Untraceable Digital Cash.
 *       -- Triple-Signed Receipts.
 *       -- Cheques, Vouchers, Transfers, Inboxes.
 *       -- Basket Currencies, Markets, Payment Plans.
 *       -- Signed, XML, Ricardian-style Contracts.
 *       -- Scripted smart contracts.
 *
 *  EMAIL:
 *  fellowtraveler@opentransactions.org
 *
 *  WEBSITE:
 *  http://www.opentransactions.org/
 *
 *  -----------------------------------------------------
 *
 *   LICENSE:
 *   This Source Code Form is subject to the terms of the
 *   Mozilla Public License, v. 2.0. If a copy of the MPL
 *   was not distributed with this file, You can obtain one
 *   at http://mozilla.org/MPL/2.0/.
 *
 *   DISCLAIMER:
 *   This program is distributed in the hope that it will
 *   be useful, but WITHOUT ANY WARRANTY; without even the
 *   implied warranty of MERCHANTABILITY or FITNESS FOR A
 *   PARTICULAR PURPOSE.  See the Mozilla Public License
 *   for more details.
 *
 ************************************************************/

#include "opentxs-proto/Types.hpp"
#include "opentxs-proto/Check.hpp"
#include "opentxs-proto/Contact.hpp"

#include <iostream>

namespace opentxs
{
namespace proto
{

bool CheckProto_1(const StorageBlockchainAccountList& list, const bool silent)
{
    if (false == list.has_id()) {
        FAIL("storage blockchain account list", "missing id")
    }

    const bool validChain = ValidContactItemType(
        {CONTACT_VERSION, CONTACTSECTION_CONTRACT}, list.id());

    if (false == validChain) {
        FAIL("transaction", "invalid chain")
    }

    for (const auto& it : list.list()) {
        if (MIN_PLAUSIBLE_IDENTIFIER > it.size()) {
            FAIL2("storage blockchain account list", "invalid list item", it)
        }

        if (MAX_PLAUSIBLE_IDENTIFIER < it.size()) {
            FAIL2("storage blockchain account list", "invalid list item", it)
        }
    }

    return true;
}

bool CheckProto_2(const StorageBlockchainAccountList&, const bool silent)
{
    UNDEFINED_VERSION("storage blockchain account list", 2)
}

bool CheckProto_3(const StorageBlockchainAccountList&, const bool silent)
{
    UNDEFINED_VERSION("storage blockchain account list", 3)
}

bool CheckProto_4(const StorageBlockchainAccountList&, const bool silent)
{
    UNDEFINED_VERSION("storage blockchain account list", 4)
}

bool CheckProto_5(const StorageBlockchainAccountList&, const bool silent)
{
    UNDEFINED_VERSION("storage blockchain account list", 5)
}
}  // namespace proto
}  // namespace opentxs

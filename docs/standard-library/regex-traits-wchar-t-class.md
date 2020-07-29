---
title: Classe regex_traits&lt;wchar_t&gt;
ms.date: 09/10/2018
f1_keywords:
- regex/std::regex_traits<wchar_t>
helpviewer_keywords:
- regex_traits<wchar_t> class
ms.assetid: 288d6fdb-fb8e-4a4d-904a-53916be7f95b
ms.openlocfilehash: dd0b54470f026635c1e09829f37d02bbe8b3f0c0
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87217558"
---
# <a name="regex_traitsltwchar_tgt-class"></a>Classe regex_traits&lt;wchar_t&gt;

Specializzazione di `regex_traits` per **`wchar_t`** .

## <a name="syntax"></a>Sintassi

```cpp
template <>
class regex_traits<wchar_t>
```

## <a name="remarks"></a>Osservazioni

La classe è una specializzazione esplicita del modello di classe [regex_traits](../standard-library/regex-traits-class.md) per gli elementi di tipo **`wchar_t`** (in modo che possa sfruttare i vantaggi delle funzioni della libreria che modificano oggetti di questo tipo).

## <a name="requirements"></a>Requisiti

**Intestazione:**\<regex>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[\<regex>](../standard-library/regex.md)\
[Classe regex_constants](../standard-library/regex-constants-class.md)\
[Classe regex_error](../standard-library/regex-error-class.md)\
[\<regex>funzioni](../standard-library/regex-functions.md)\
[Classe regex_iterator](../standard-library/regex-iterator-class.md)\
[\<regex>operatori](../standard-library/regex-operators.md)\
[Classe regex_token_iterator](../standard-library/regex-token-iterator-class.md)\
[Classe regex_traits](../standard-library/regex-traits-class.md)\
[\<regex>typedef](../standard-library/regex-typedefs.md)

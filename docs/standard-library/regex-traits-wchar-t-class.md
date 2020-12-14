---
description: 'Altre informazioni su: regex_traits &lt; &gt; classe wchar_t'
title: Classe regex_traits&lt;wchar_t&gt;
ms.date: 09/10/2018
f1_keywords:
- regex/std::regex_traits<wchar_t>
helpviewer_keywords:
- regex_traits<wchar_t> class
ms.assetid: 288d6fdb-fb8e-4a4d-904a-53916be7f95b
ms.openlocfilehash: d02d0abf5b6ca3f428bc94e153f93e428bec7c56
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97240455"
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

## <a name="see-also"></a>Vedi anche

[\<regex>](../standard-library/regex.md)\
[Classe regex_constants](../standard-library/regex-constants-class.md)\
[Classe regex_error](../standard-library/regex-error-class.md)\
[\<regex> funzioni](../standard-library/regex-functions.md)\
[Classe regex_iterator](../standard-library/regex-iterator-class.md)\
[\<regex> operatori](../standard-library/regex-operators.md)\
[Classe regex_token_iterator](../standard-library/regex-token-iterator-class.md)\
[Classe regex_traits](../standard-library/regex-traits-class.md)\
[\<regex> typedef](../standard-library/regex-typedefs.md)

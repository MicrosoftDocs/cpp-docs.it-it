---
title: Classe regex_traits&lt;wchar_t&gt;
ms.date: 09/10/2018
f1_keywords:
- regex/std::regex_traits<wchar_t>
helpviewer_keywords:
- regex_traits<wchar_t> class
ms.assetid: 288d6fdb-fb8e-4a4d-904a-53916be7f95b
ms.openlocfilehash: 31c47e43996ee0d6d8a495c0ff294e296b4b5888
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72686652"
---
# <a name="regex_traitsltwchar_tgt-class"></a>Classe regex_traits&lt;wchar_t&gt;

Specializzazione di `regex_traits` per **wchar_t**.

## <a name="syntax"></a>Sintassi

```cpp
template <>
class regex_traits<wchar_t>
```

## <a name="remarks"></a>Note

La classe è una specializzazione esplicita del modello di classe [regex_traits](../standard-library/regex-traits-class.md) per gli elementi di tipo **wchar_t** (in modo che possa sfruttare i vantaggi delle funzioni della libreria che modificano oggetti di questo tipo).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<regex>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[\<regex>](../standard-library/regex.md)\
[classe regex_constants](../standard-library/regex-constants-class.md) \
[classe regex_error](../standard-library/regex-error-class.md) \
[\<regex funzioni >](../standard-library/regex-functions.md) \
[Classe regex_iterator](../standard-library/regex-iterator-class.md) \
[operatori \<regex >](../standard-library/regex-operators.md) \
[Classe regex_token_iterator](../standard-library/regex-token-iterator-class.md) \
[Classe regex_traits](../standard-library/regex-traits-class.md) \
[Typedef \<regex>](../standard-library/regex-typedefs.md)

---
title: _bstr_t::Detach
ms.date: 11/04/2016
f1_keywords:
- _bstr_t::Detach
helpviewer_keywords:
- Detach method [C++]
ms.assetid: cc8284bd-f68b-4fff-b2e6-ce8354dabf8b
ms.openlocfilehash: e56ad29ae9e7fdcf7e8d354bda570364c7be8901
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80181265"
---
# <a name="_bstr_tdetach"></a>_bstr_t::Detach

**Sezione specifica Microsoft**

Restituisce `BSTR` sottoposto a wrapping da un oggetto `_bstr_t` e rimuove `BSTR` da `_bstr_t`.

## <a name="syntax"></a>Sintassi

```
BSTR Detach( ) throw;
```

## <a name="return-value"></a>Valore restituito

L'elemento `BSTR` di cui è stato eseguito il wrapping da `_bstr_t`.

## <a name="example"></a>Esempio

Vedere [_bstr_t:: Assign](../cpp/bstr-t-assign.md) per un esempio di utilizzo di **Detach**.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _bstr_t](../cpp/bstr-t-class.md)

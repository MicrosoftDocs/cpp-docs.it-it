---
description: 'Altre informazioni su: _bstr_t::D etach'
title: _bstr_t::Detach
ms.date: 11/04/2016
f1_keywords:
- _bstr_t::Detach
helpviewer_keywords:
- Detach method [C++]
ms.assetid: cc8284bd-f68b-4fff-b2e6-ce8354dabf8b
ms.openlocfilehash: 0baa246e8a849a9cfb747a4a7e224ecbec328d0a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97229327"
---
# <a name="_bstr_tdetach"></a>_bstr_t::Detach

**Specifico di Microsoft**

Restituisce `BSTR` sottoposto a wrapping da un oggetto `_bstr_t` e rimuove `BSTR` da `_bstr_t`.

## <a name="syntax"></a>Sintassi

```
BSTR Detach( ) throw;
```

## <a name="return-value"></a>Valore restituito

L'elemento `BSTR` di cui è stato eseguito il wrapping da `_bstr_t`.

## <a name="example"></a>Esempio

Vedere [_bstr_t:: Assign](../cpp/bstr-t-assign.md) per un esempio di utilizzo di **Detach**.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Classe _bstr_t](../cpp/bstr-t-class.md)

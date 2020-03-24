---
title: _bstr_t::GetAddress
ms.date: 11/04/2016
f1_keywords:
- _bstr_t::GetAddress
helpviewer_keywords:
- GetAddress method [C++]
ms.assetid: 09bc9180-867e-4ee5-b22a-8339dc663142
ms.openlocfilehash: ca78bd1b607ba4a86bbc824887a7ec767cd5476e
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80181252"
---
# <a name="_bstr_tgetaddress"></a>_bstr_t::GetAddress

**Sezione specifica Microsoft**

Libera la memoria per qualsiasi stringa esistente e restituisce l'indirizzo di una nuova stringa allocata.

## <a name="syntax"></a>Sintassi

```
BSTR* GetAddress( );
```

## <a name="return-value"></a>Valore restituito

Puntatore all'oggetto `BSTR` sottoposto a wrapping da `_bstr_t`.

## <a name="remarks"></a>Osservazioni

**GetAddress** influiscono su tutti gli oggetti `_bstr_t` che condividono una `BSTR`. Più di un `_bstr_t` può condividere una `BSTR` tramite l'utilizzo del costruttore di copia e dell' **operatore =** .

## <a name="example"></a>Esempio

Per un esempio di utilizzo di **GetAddress**, vedere [_Bstr_t:: Assign](../cpp/bstr-t-assign.md) .

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _bstr_t](../cpp/bstr-t-class.md)

---
title: _bstr_t::GetBSTR
ms.date: 11/04/2016
f1_keywords:
- _bstr_t::GetBSTR
helpviewer_keywords:
- GetBSTR method [C++]
ms.assetid: 0c62ff16-4433-4183-a03c-d5a0a9b731ef
ms.openlocfilehash: da438c65256d9a7e5bf5b02e108fee1385171d2d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80181213"
---
# <a name="_bstr_tgetbstr"></a>_bstr_t::GetBSTR

**Sezione specifica Microsoft**

Punta all'inizio dell'oggetto `BSTR` sottoposto a wrapping da `_bstr_t`.

## <a name="syntax"></a>Sintassi

```
BSTR& GetBSTR( );
```

## <a name="return-value"></a>Valore restituito

Inizio dell'oggetto `BSTR` sottoposto a wrapping da `_bstr_t`.

## <a name="remarks"></a>Osservazioni

**GETbstr** influiscono su tutti gli oggetti `_bstr_t` che condividono una `BSTR`. Più di un `_bstr_t` può condividere una `BSTR` tramite l'utilizzo del costruttore di copia e dell' **operatore =** .

## <a name="example"></a>Esempio

Vedere [_bstr_t:: Assign](../cpp/bstr-t-assign.md) per un esempio di utilizzo di **GetBSTR**.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _bstr_t](../cpp/bstr-t-class.md)

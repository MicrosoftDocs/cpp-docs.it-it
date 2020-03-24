---
title: _bstr_t::Attach
ms.date: 11/04/2016
f1_keywords:
- _bstr_t::Attach
helpviewer_keywords:
- Attach method [C++]
ms.assetid: 8cad867e-40fc-435b-841f-0d412c2f58d3
ms.openlocfilehash: 3b52661097ca1feab4c8045be240e4138a0c0f21
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80190664"
---
# <a name="_bstr_tattach"></a>_bstr_t::Attach

**Sezione specifica Microsoft**

Collega un wrapper `_bstr_t` a  `BSTR`.

## <a name="syntax"></a>Sintassi

```
void Attach(
   BSTR s
);
```

#### <a name="parameters"></a>Parametri

*s*<br/>
`BSTR` da associare a o assegnato alla variabile `_bstr_t`.

## <a name="remarks"></a>Osservazioni

Se `_bstr_t` in precedenza era associato a un altro `BSTR`, `_bstr_t` eseguirà la pulizia della risorsa `BSTR`, se nessun'altra variabile `_bstr_t` utilizza `BSTR`.

## <a name="example"></a>Esempio

Per un esempio di utilizzo di **Connetti**, vedere [_Bstr_t:: Assign](../cpp/bstr-t-assign.md) .

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _bstr_t](../cpp/bstr-t-class.md)

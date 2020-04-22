---
title: _bstr_t::Attach
ms.date: 11/04/2016
f1_keywords:
- _bstr_t::Attach
helpviewer_keywords:
- Attach method [C++]
ms.assetid: 8cad867e-40fc-435b-841f-0d412c2f58d3
ms.openlocfilehash: 718efb9e3dac0d776678fe9efd912a602e041659
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81749696"
---
# <a name="_bstr_tattach"></a>_bstr_t::Attach

**Specifico di Microsoft**

Collega un wrapper `_bstr_t` a  `BSTR`.

## <a name="syntax"></a>Sintassi

```cpp
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

Vedere [_bstr_t::Assign](../cpp/bstr-t-assign.md) per un esempio utilizzando **Attach**.

**FINE Specifico di Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _bstr_t](../cpp/bstr-t-class.md)

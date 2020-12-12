---
description: 'Altre informazioni su: _bstr_t:: Connetti'
title: _bstr_t::Attach
ms.date: 11/04/2016
f1_keywords:
- _bstr_t::Attach
helpviewer_keywords:
- Attach method [C++]
ms.assetid: 8cad867e-40fc-435b-841f-0d412c2f58d3
ms.openlocfilehash: b3f29c8eaf81a492f7e3c4282227d3d6d246988e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97229431"
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

## <a name="remarks"></a>Commenti

Se `_bstr_t` in precedenza era associato a un altro `BSTR`, `_bstr_t` eseguirà la pulizia della risorsa `BSTR`, se nessun'altra variabile `_bstr_t` utilizza `BSTR`.

## <a name="example"></a>Esempio

Per un esempio di utilizzo di **Connetti**, vedere [_Bstr_t:: Assign](../cpp/bstr-t-assign.md) .

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Classe _bstr_t](../cpp/bstr-t-class.md)

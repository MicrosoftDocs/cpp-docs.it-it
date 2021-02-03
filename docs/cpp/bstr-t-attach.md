---
description: 'Altre informazioni su: _bstr_t:: Connetti'
title: _bstr_t::Attach
ms.date: 02/02/2021
f1_keywords:
- _bstr_t::Attach
helpviewer_keywords:
- Attach method [C++]
ms.openlocfilehash: 02717fad98e4d68dde70995abcfad4cb55b8c45c
ms.sourcegitcommit: c20734f18d3d49bb38b1628c68b53b54b3eeeb03
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/03/2021
ms.locfileid: "99522885"
---
# `_bstr_t::Attach`

**Specifico di Microsoft**

Collega un wrapper `_bstr_t` a  `BSTR`.

## <a name="syntax"></a>Sintassi

```cpp
void Attach(
   BSTR s
);
```

### <a name="parameters"></a>Parametri

*`s`*\
`BSTR` da associare a o assegnato alla variabile `_bstr_t`.

## <a name="remarks"></a>Commenti

Se `_bstr_t` in precedenza era associato a un altro `BSTR`, `_bstr_t` eseguirà la pulizia della risorsa `BSTR`, se nessun'altra variabile `_bstr_t` utilizza `BSTR`.

## <a name="example"></a>Esempio

[`_bstr_t::Assign`](../cpp/bstr-t-assign.md)Per un esempio di utilizzo di **`Attach`** , vedere.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[`_bstr_t` Classe](../cpp/bstr-t-class.md)

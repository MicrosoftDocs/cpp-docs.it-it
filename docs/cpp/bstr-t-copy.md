---
description: 'Altre informazioni su: _bstr_t:: Copy'
title: _bstr_t::copy
ms.date: 02/02/2021
f1_keywords:
- _bstr_t::copy
helpviewer_keywords:
- Copy method [C++]
- BSTR object [C++], copy
ms.openlocfilehash: 98726e0c3100851d1496e532310ece2209d71ae0
ms.sourcegitcommit: c20734f18d3d49bb38b1628c68b53b54b3eeeb03
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/03/2021
ms.locfileid: "99522859"
---
# `_bstr_t::copy`

**Specifico di Microsoft**

Costruisce una copia dell'oggetto `BSTR` incapsulato.

## <a name="syntax"></a>Sintassi

```cpp
BSTR copy( bool fCopy = true ) const;
```

### <a name="parameters"></a>Parametri

*`fCopy`*\
Se **`true`** , **`copy`** restituisce una copia dell'oggetto contenuto `BSTR` ; in caso contrario, **`copy`** restituisce l'oggetto effettivo `BSTR` .

## <a name="remarks"></a>Commenti

Restituisce una copia appena allocata dell'oggetto incapsulato `BSTR` o l'oggetto incapsulato, a seconda del parametro.

## <a name="example"></a>Esempio

```cpp
STDMETHODIMP CAlertMsg::get_ConnectionStr(BSTR *pVal){ //  m_bsConStr is _bstr_t
   *pVal = m_bsConStr.copy();
}
```

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[`_bstr_t` classe](../cpp/bstr-t-class.md)

---
description: 'Altre informazioni su: _bstr_t:: Copy'
title: _bstr_t::copy
ms.date: 11/04/2016
f1_keywords:
- _bstr_t::copy
helpviewer_keywords:
- Copy method [C++]
- BSTR object [C++], copy
ms.assetid: 00ba7311-e82e-4a79-8106-5329fa2f869a
ms.openlocfilehash: 29ca965730dbcc22b4b725661ece68442d39aeba
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97229340"
---
# <a name="_bstr_tcopy"></a>_bstr_t::copy

**Specifico di Microsoft**

Costruisce una copia dell'oggetto `BSTR` incapsulato.

## <a name="syntax"></a>Sintassi

```
BSTR copy( bool fCopy = true ) const;
```

#### <a name="parameters"></a>Parametri

*fCopy*<br/>
Se **`true`** , **Copy** restituisce una copia dell'oggetto contenuto `BSTR` ; in caso contrario, **Copy** restituisce l'oggetto BSTR effettivo.

## <a name="remarks"></a>Commenti

Restituisce una copia allocata dell'oggetto `BSTR` incapsulato.

## <a name="example"></a>Esempio

```cpp
STDMETHODIMP CAlertMsg::get_ConnectionStr(BSTR *pVal){ //  m_bsConStr is _bstr_t
   *pVal = m_bsConStr.copy();
}
```

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Classe _bstr_t](../cpp/bstr-t-class.md)

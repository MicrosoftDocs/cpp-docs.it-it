---
title: _bstr_t::copy
ms.date: 11/04/2016
f1_keywords:
- _bstr_t::copy
helpviewer_keywords:
- Copy method [C++]
- BSTR object [C++], copy
ms.assetid: 00ba7311-e82e-4a79-8106-5329fa2f869a
ms.openlocfilehash: 13ddf57e0bdbdbcc0c5b487e879e14b000de3ad0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50506838"
---
# <a name="bstrtcopy"></a>_bstr_t::copy

**Sezione specifica Microsoft**

Costruisce una copia dell'oggetto `BSTR` incapsulato.

## <a name="syntax"></a>Sintassi

```
BSTR copy( bool fCopy = true ) const;
```

#### <a name="parameters"></a>Parametri

*fCopy*<br/>
Se TRUE, **copia** restituisce una copia dell'oggetto contenuto `BSTR`; in caso contrario **copia** restituisce l'oggetto BSTR effettivo.

## <a name="remarks"></a>Note

Restituisce una copia allocata dell'oggetto `BSTR` incapsulato.

## <a name="example"></a>Esempio

```cpp
STDMETHODIMP CAlertMsg::get_ConnectionStr(BSTR *pVal){ //  m_bsConStr is _bstr_t
   *pVal = m_bsConStr.copy();
}
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _bstr_t](../cpp/bstr-t-class.md)
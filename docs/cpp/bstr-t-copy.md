---
title: _bstr_t::copy
ms.date: 11/04/2016
f1_keywords:
- _bstr_t::copy
helpviewer_keywords:
- Copy method [C++]
- BSTR object [C++], copy
ms.assetid: 00ba7311-e82e-4a79-8106-5329fa2f869a
ms.openlocfilehash: 1fe8cfb5b644b3c7c34cf3325a91ebdf23a04946
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80190326"
---
# <a name="_bstr_tcopy"></a>_bstr_t::copy

**Sezione specifica Microsoft**

Costruisce una copia dell'oggetto `BSTR` incapsulato.

## <a name="syntax"></a>Sintassi

```
BSTR copy( bool fCopy = true ) const;
```

#### <a name="parameters"></a>Parametri

*fCopy*<br/>
Se TRUE, **Copy** restituisce una copia del `BSTR`contenuto. in caso contrario, **Copy** restituisce l'oggetto BSTR effettivo.

## <a name="remarks"></a>Osservazioni

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

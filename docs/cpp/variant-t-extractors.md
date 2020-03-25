---
title: Estrattori _variant_t
ms.date: 11/04/2016
f1_keywords:
- _variant_t.operatordouble
- operatorlong
- _variant_t::operator_bstr_t
- operatordouble
- _variant_t.operatorCY
- operatorCY
- _variant_t::operatorCY
- _variant_t::operatordouble
- operatorfloat
- operatorBYTE
- _variant_t.operatorDECIMAL
- _variant_t::operatorlong
- operatorIDispatch
- _variant_t.operatorBYTE
- operatorDECIMAL
- _variant_t.operator_bstr_t
- _variant_t::operatorDECIMAL
- _variant_t.operatorIUnknown
- _variant_t.operatorlong
- _variant_t::operatorIDispatch
- _variant_t::operatorIUnknown
- operatorIUnknown
- _variant_t.operatorbool
- _variant_t::operatorBYTE
- _variant_t.operatorfloat
- operator_bstr_t
- _variant_t::operatorbool
- operatorshort
- _variant_t::operatorshort
- _variant_t::operatorfloat
- _variant_t.operatorIDispatch
- _variant_t.operatorshort
helpviewer_keywords:
- extractors, _variant_t class
- operator CY
- operator IDispatch
- operator SHORT
- operator double
- operator long
- operator _bstr_t
- operator DECIMAL
- operator float
- operator bool
- operator BYTE
- operator IUnknown
ms.assetid: 33c1782f-045a-4673-9619-1d750efc83a9
ms.openlocfilehash: 685df7285e58e0cf2ceeded5ac27641364897298
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80187700"
---
# <a name="_variant_t-extractors"></a>Estrattori _variant_t

**Sezione specifica Microsoft**

Estrae i dati dall'oggetto `VARIANT` incapsulato.

## <a name="syntax"></a>Sintassi

```
operator short( ) const;
operator long( ) const;
operator float( ) const;
operator double( ) const;
operator CY( ) const;
operator _bstr_t( ) const;
operator IDispatch*( ) const;
operator bool( ) const;
operator IUnknown*( ) const;
operator DECIMAL( ) const;
operator BYTE( ) const;
operator VARIANT() const throw();
operator char() const;
operator unsigned short() const;
operator unsigned long() const;
operator int() const;
operator unsigned int() const;
operator __int64() const;
operator unsigned __int64() const;
```

## <a name="remarks"></a>Osservazioni

Estrae i dati non elaborati da un `VARIANT`incapsulato. Se il `VARIANT` non è già il tipo appropriato, viene usato `VariantChangeType` per tentare una conversione e viene generato un errore in caso di errore:

- **operatore Short ()** Estrae un valore integer **breve** .

- **operatore Long ()** Estrae un valore **Long** Integer.

- **operatore float ()** Estrae un valore numerico **float** .

- **Operatore Double ()** Estrae un valore integer **doppio** .

- **operatore CY ()** Estrae un oggetto `CY`.

- **operator bool ()** Estrae un valore **bool** .

- **Operatore Decimal ()** Estrae un valore `DECIMAL`.

- **operatore byte ()** Estrae un valore `BYTE`.

- **operatore _bstr_t ()** Estrae una stringa che viene incapsulata in un oggetto `_bstr_t`.

- **operatore IDispatch\*()** Estrae un puntatore all'interfaccia dispatch da un `VARIANT`incapsulato. `AddRef` viene chiamato sul puntatore risultante, quindi è possibile chiamare `Release` per liberarlo.

- **operatore IUnknown\*()** Estrae un puntatore a interfaccia COM da un `VARIANT`incapsulato. `AddRef` viene chiamato sul puntatore risultante, quindi è possibile chiamare `Release` per liberarlo.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _variant_t](../cpp/variant-t-class.md)

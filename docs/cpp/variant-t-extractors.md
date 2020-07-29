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
ms.openlocfilehash: a1b7c713b5d82ff54250b622f2d4afe17abac468
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87185606"
---
# <a name="_variant_t-extractors"></a>Estrattori _variant_t

**Specifico di Microsoft**

Estrae i dati dall'oggetto incapsulato `VARIANT` .

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

Estrae i dati non elaborati da un oggetto incapsulato `VARIANT` . Se `VARIANT` non è già il tipo corretto, `VariantChangeType` viene usato per tentare una conversione e viene generato un errore in caso di errore:

- **operatore Short ()** Estrae un **`short`** valore integer.

- **operatore Long ()** Estrae un **`long`** valore integer.

- **operatore float ()** Estrae un **`float`** valore numerico.

- **Operatore Double ()** Estrae un **`double`** valore integer.

- **operatore CY ()** Estrae un `CY` oggetto.

- **operator bool ()** Estrae un **`bool`** valore.

- **Operatore Decimal ()** Estrae un `DECIMAL` valore.

- **operatore byte ()** Estrae un `BYTE` valore.

- **operatore _bstr_t ()** Estrae una stringa che viene incapsulata in un `_bstr_t` oggetto.

- **operator IDispatch \* ()** estrae un puntatore all'interfaccia dispatch da un oggetto incapsulato `VARIANT` . `AddRef`viene chiamato sul puntatore risultante, quindi è possibile chiamare `Release` per liberarlo.

- **operator IUnknown \* ()** estrae un puntatore a interfaccia com da un incapsulato `VARIANT` . `AddRef`viene chiamato sul puntatore risultante, quindi è possibile chiamare `Release` per liberarlo.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _variant_t](../cpp/variant-t-class.md)

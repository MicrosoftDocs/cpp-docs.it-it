---
title: Funzioni &lt;istream&gt;
ms.date: 11/04/2016
f1_keywords:
- istream/std::swap
- istream/std::ws
ms.assetid: 0301ea0d-4ded-4841-83dd-4253b55b3188
ms.openlocfilehash: 6d1fede2726d3d8f5dd678b95fd7a22a301ea95a
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88840973"
---
# <a name="ltistreamgt-functions"></a>Funzioni &lt;istream&gt;

[scambio](#istream_swap)\
[WS](#ws)

## <a name="swap"></a><a name="istream_swap"></a> scambio

Scambia gli elementi di due oggetti di flusso.

```cpp
template <class Elem, class Tr>
void swap(
    basic_istream<Elem, Tr>& left,
    basic_istream<Elem, Tr>& right);

template <class Elem, class Tr>
void swap(
    basic_iostream<Elem, Tr>& left,
    basic_iostream<Elem, Tr>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Flusso.

*Ok*\
Flusso.

## <a name="ws"></a><a name="ws"></a> WS

Ignora gli spazi nel flusso.

```cpp
template class<Elem, Tr> basic_istream<Elem, Tr>& ws(basic_istream<Elem, Tr>& _Istr);
```

### <a name="parameters"></a>Parametri

*_Istr*\
Flusso.

### <a name="return-value"></a>Valore restituito

Flusso.

### <a name="remarks"></a>Osservazioni

Il manipolatore estrae ed Elimina tutti gli elementi `ch` per i quali [use_facet](../standard-library/basic-filebuf-class.md#open) <  **CType** \< **Elem**> > ( [getloc](../standard-library/ios-base-class.md#getloc)). **is**( **CType** \< **Elem**> :: **Space**, **ch**) è true.

La funzione chiama [setstate](../standard-library/basic-ios-class.md#setstate)( **eofbit**) se raggiunge la fine del file durante l'estrazione degli elementi. Restituisce *_Istr*.

### <a name="example"></a>Esempio

Vedere [operator>>](../standard-library/istream-operators.md#op_gt_gt) per un esempio d'uso di `ws`.

## <a name="see-also"></a>Vedere anche

[\<istream>](../standard-library/istream.md)

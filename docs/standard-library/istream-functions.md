---
title: Funzioni &lt;istream&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- istream/std::swap
- istream/std::ws
ms.assetid: 0301ea0d-4ded-4841-83dd-4253b55b3188
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1193e7ab65c49f0f79aeae52ca6563310296116d
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38953648"
---
# <a name="ltistreamgt-functions"></a>Funzioni &lt;istream&gt;

|||
|-|-|
|[swap](#istream_swap)|[ws](#ws)|

## <a name="istream_swap"></a>  swap

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

*a sinistra* un flusso.

*a destra* un flusso.

## <a name="ws"></a>  ws

Ignora gli spazi nel flusso.

```cpp
template class<Elem, Tr> basic_istream<Elem, Tr>& ws(basic_istream<Elem, Tr>& _Istr);
```

### <a name="parameters"></a>Parametri

*_Istr* un flusso.

### <a name="return-value"></a>Valore restituito

Flusso.

### <a name="remarks"></a>Note

Il manipolatore estrae e rimuove gli elementi `ch` per cui [use_facet](../standard-library/basic-filebuf-class.md#open)< **ctype**\< **Elem**> >( [getloc](../standard-library/ios-base-class.md#getloc)). **is**( **ctype**\< **Elem**>:: **space**, **ch**) è true.

La funzione chiama [setstate](../standard-library/basic-ios-class.md#setstate)( **eofbit**) se raggiunge la fine del file durante l'estrazione degli elementi. Viene restituito *_Istr*.

### <a name="example"></a>Esempio

Vedere [operator>>](../standard-library/istream-operators.md#op_gt_gt) per un esempio d'uso di `ws`.

## <a name="see-also"></a>Vedere anche

[\<istream>](../standard-library/istream.md)<br/>

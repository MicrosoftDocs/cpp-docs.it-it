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
ms.openlocfilehash: 6310281aa86c48ae0a8b0fb313e79994d0b9b538
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33863891"
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

`left` Un flusso.

`right` Un flusso.

## <a name="ws"></a>  ws

Ignora gli spazi nel flusso.

```cpp
template class<Elem, Tr> basic_istream<Elem, Tr>& ws(basic_istream<Elem, Tr>& _Istr);
```

### <a name="parameters"></a>Parametri

`_Istr` Un flusso.

### <a name="return-value"></a>Valore restituito

Flusso.

### <a name="remarks"></a>Note

Il manipolatore estrae e rimuove gli elementi `ch` per cui [use_facet](../standard-library/basic-filebuf-class.md#open)< **ctype**\< **Elem**> >( [getloc](../standard-library/ios-base-class.md#getloc)). **is**( **ctype**\< **Elem**>:: **space**, **ch**) è true.

La funzione chiama [setstate](../standard-library/basic-ios-class.md#setstate)( **eofbit**) se raggiunge la fine del file durante l'estrazione degli elementi. Restituisce `_Istr`.

### <a name="example"></a>Esempio

Vedere [operator>>](../standard-library/istream-operators.md#op_gt_gt) per un esempio d'uso di `ws`.

## <a name="see-also"></a>Vedere anche

[\<istream>](../standard-library/istream.md)<br/>

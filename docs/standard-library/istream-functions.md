---
title: Funzioni &lt;istream&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- istream/std::swap
- istream/std::ws
ms.assetid: 0301ea0d-4ded-4841-83dd-4253b55b3188
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 65f4e356ad0d46333b0d443d0fd6ac0b9f2b6f58
ms.openlocfilehash: da4b05286c56bf809914b142a254a311f8655ce9
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

---
# <a name="ltistreamgt-functions"></a>Funzioni &lt;istream&gt;
|||  
|-|-|  
|[swap](#istream_swap)|[ws](#ws)|  
  
##  <a name="istream_swap"></a>  swap  
 Scambia gli elementi di due oggetti di flusso.  
  
```  
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
 `left`  
 Flusso.  
  
 `right`  
 Flusso.  
  
##  <a name="ws"></a>  ws  
 Ignora gli spazi nel flusso.  
  
```  
template class<Elem, Tr> basic_istream<Elem, Tr>& ws(basic_istream<Elem, Tr>& _Istr);
```  
  
### <a name="parameters"></a>Parametri  
 `_Istr`  
 Flusso.  
  
### <a name="return-value"></a>Valore restituito  
 Flusso.  
  
### <a name="remarks"></a>Note  
 Il manipolatore estrae e rimuove gli elementi `ch` per cui [use_facet](../standard-library/basic-filebuf-class.md#open)< **ctype**\< **Elem**> >( [getloc](../standard-library/ios-base-class.md#getloc)). **is**( **ctype**\< **Elem**>:: **space**, **ch**) è true.  
  
 La funzione chiama [setstate](../standard-library/basic-ios-class.md#setstate)( **eofbit**) se raggiunge la fine del file durante l'estrazione degli elementi. Restituisce `_Istr`.  
  
### <a name="example"></a>Esempio  
  Vedere [operator>>](../standard-library/istream-operators.md#op_gt_gt) per un esempio d'uso di `ws`.  
  
## <a name="see-also"></a>Vedere anche  
 [\<istream>](../standard-library/istream.md)


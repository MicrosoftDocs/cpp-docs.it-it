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
translationtype: Machine Translation
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: aa35f177bcb986e141d0e46e48dc007a96f94498
ms.lasthandoff: 02/24/2017

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
 Il manipolatore estrae e rimuove gli elementi `ch` per cui [use_facet](../standard-library/basic-filebuf-class.md#basic_filebuf__open)< **ctype**\< **Elem**> >( [getloc](../standard-library/ios-base-class.md#ios_base__getloc)). **is**( **ctype**\< **Elem**>:: **space**, **ch**) è true.  
  
 La funzione chiama [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)( **eofbit**) se raggiunge la fine del file durante l'estrazione degli elementi. Restituisce `_Istr`.  
  
### <a name="example"></a>Esempio  
  Vedere [operator>>](../standard-library/istream-operators.md#operator_gt__gt_) per un esempio d'uso di `ws`.  
  
## <a name="see-also"></a>Vedere anche  
 [\<istream>](../standard-library/istream.md)



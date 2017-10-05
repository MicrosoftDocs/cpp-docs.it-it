---
title: Funzioni &lt;sstream&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- sstream/std::swap
ms.assetid: bc9607e8-7c6b-44ef-949b-19e917b450ad
caps.latest.revision: 10
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 65f4e356ad0d46333b0d443d0fd6ac0b9f2b6f58
ms.openlocfilehash: dfa71e79d801fbe48f55b81ae4189cdd6d977afe
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

---
# <a name="ltsstreamgt-functions"></a>Funzioni &lt;sstream&gt;
||  
|-|  
|[swap](#sstream_swap)|  
  
##  <a name="sstream_swap"></a>  swap  
 Scambia i valori tra due oggetti `sstream`.  
  
```  
template <class Elem, class Tr, class Alloc>  
void swap(
    basic_stringbuf<Elem, Tr, Alloc>& left,  
    basic_stringbuf<Elem, Tr, Alloc>& right);

template <class Elem, class Tr, class Alloc>  
void swap(
    basic_istringstream<Elem, Tr, Alloc>& left,  
    basic_istringstream<Elem, Tr, Alloc>& right);

template <class Elem, class Tr, class Alloc>  
void swap(
    basic_ostringstream<Elem, Tr, Alloc>& left,  
    basic_ostringstream<Elem, Tr, Alloc>& right);

template <class Elem, class Tr, class Alloc>  
void swap(
    basic_stringstream<Elem, Tr, Alloc>& left,  
    basic_stringstream<Elem, Tr, Alloc>& right);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`left`|Riferimento a un oggetto `sstream`.|  
|`right`|Riferimento a un oggetto `sstream`.|  
  
### <a name="remarks"></a>Note  
 La funzione modello esegue `left.swap(right)`.  
  
## <a name="see-also"></a>Vedere anche  
 [\<sstream>](../standard-library/sstream.md)



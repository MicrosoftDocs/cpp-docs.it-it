---
title: Bool vector&lt;bool&gt;::reference::operator | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- operatorbool
- vector<bool>::reference::operatorbool
- bool
- std::vector<bool>::reference::operatorbool
dev_langs:
- C++
helpviewer_keywords:
- BOOL operator
- reference::operator bool
ms.assetid: b0e57869-18cc-4296-9061-da502f30120d
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: acc0ecd4edaf1e58977dcbdeb483d497a72bc4c8
ms.openlocfilehash: f79b54237aa3a3b53000aaa47ef6a8e198ed6725
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="vectorltboolgtreferenceoperator-bool"></a>Bool vector&lt;bool&gt;::reference::operator
Fornisce una conversione implicita da `vector<bool>::reference` a `bool`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
operator bool() const;
```  
  
## <a name="return-value"></a>Valore restituito  
 Valore booleano dell'elemento dell'oggetto [vector\<bool>](../standard-library/vector-bool-class.md).  
  
## <a name="remarks"></a>Note  
 L'oggetto `vector<bool>` non può essere modificato da questo operatore.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<vector>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Classe vector\<bool>::reference](../standard-library/vector-bool-reference-class.md)   
 [Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)



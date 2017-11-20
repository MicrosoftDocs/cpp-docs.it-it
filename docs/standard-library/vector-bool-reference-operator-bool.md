---
title: Bool vector&lt;bool&gt;::reference::operator | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- operatorbool
- vector<bool>::reference::operatorbool
- bool
- std::vector<bool>::reference::operatorbool
dev_langs: C++
helpviewer_keywords:
- BOOL operator
- reference::operator bool
ms.assetid: b0e57869-18cc-4296-9061-da502f30120d
caps.latest.revision: "20"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: d53f9cb384c24e3bd59318c5cabb8f13e7dc9028
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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


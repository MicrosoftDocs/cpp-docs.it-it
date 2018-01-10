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
ms.workload: cplusplus
ms.openlocfilehash: cbfe1f002c038f5dcc1b3a024891780d56c3572c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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


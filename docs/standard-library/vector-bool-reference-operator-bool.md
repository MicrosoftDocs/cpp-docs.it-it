---
title: Bool vector&lt;bool&gt;::reference::operator | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
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
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ec0407c413c44e5ca7778940dd51d8e776bfc687
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
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


---
title: Errore del compilatore C2458 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2458
dev_langs: C++
helpviewer_keywords: C2458
ms.assetid: ed21901f-1067-42f5-b275-19b480decf5c
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ded0e3c022a1feadbe03f635b718e819ec13c6bb
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2458"></a>Errore del compilatore C2458
'identifier': ridefinizione all'interno della definizione  
  
 Ridefinizione di una classe, struttura, unione o enumerazione nella propria dichiarazione.  
  
 L'esempio seguente genera l'errore C2458:  
  
```  
// C2458.cpp  
class C {  
   enum i { C };   // C2458  
};  
```
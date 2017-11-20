---
title: Errore del compilatore C2256 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2256
dev_langs: C++
helpviewer_keywords: C2256
ms.assetid: 171fa2bc-8c72-49cd-afe5-d723b7acd3c5
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 54802178136f02d0b334203ebcedf020942f0ed9
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c2256"></a>Errore del compilatore C2256
utilizzo non valido dell'identificatore friend su 'function'  
  
 Un distruttore o un costruttore non può essere specificato come un [friend](../../cpp/friend-cpp.md).  
  
 L'esempio seguente genera l'errore C2256:  
  
```  
// C2256.cpp  
// compile with: /c  
class C {  
public:  
   friend ~C();   // C2256  
   ~C();   // OK  
};  
```
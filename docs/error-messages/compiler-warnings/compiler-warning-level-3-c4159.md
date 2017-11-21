---
title: Compilatore (livello 3) Avviso C4159 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4159
dev_langs: C++
helpviewer_keywords: C4159
ms.assetid: e2cf964e-f4b8-4b2c-9569-1abb94307232
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 1997fc9b210723c5747f67e3b042987043c5c161
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-3-c4159"></a>Compilatore (livello 3) Avviso C4159
\#pragma pragma(pop,...): ha estratto l'identificatore 'identificatore' precedentemente inserito  
  
 Il codice sorgente contiene un **push** istruzione con un identificatore per un pragma seguita da un **pop** istruzione senza un identificatore. Di conseguenza, ***identificatore*** viene estratto e durante i successivi utilizzi di ***identificatore*** può causare comportamenti imprevisti.  
  
 Per evitare questo avviso, è necessario fornire un identificatore **pop** istruzione. Ad esempio:  
  
```  
// C4159.cpp  
// compile with: /W3  
#pragma pack(push, f)  
#pragma pack(pop)   // C4159  
  
// using the identifier resolves the warning  
// #pragma pack(pop, f)  
  
int main()  
{  
}  
```
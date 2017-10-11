---
title: Errore irreversibile C1197 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C1197
dev_langs:
- C++
helpviewer_keywords:
- C1197
ms.assetid: 22b801b7-e792-41f6-a461-973c03c69f25
caps.latest.revision: 6
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: d0eb3ab152e9299d47210a6d2c1eb58e3f92a925
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="fatal-error-c1197"></a>Errore irreversibile C1197
non può fare riferimento a 'mscorlib. dll_1' poiché il programma ha già fatto riferimento 'mscorlib.dll_2'  
  
 Il compilatore corrisponde a una versione di common language runtime.  Tuttavia, è stato effettuato un tentativo per fare riferimento a una versione di un file di common language runtime da una versione precedente.  
  
 Per correggere l'errore, fare riferimento solo i file dalla versione di common language runtime fornito con la versione di Visual C++, si esegue la compilazione con.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C1197:  
  
```  
// C1197.cpp  
// compile with: /clr /c  
// processor: x86  
#using "C:\Windows\Microsoft.NET\Framework\v1.1.4322\mscorlib.dll"   // C1197  
// try the following line instead  
// #using "mscorlib.dll"  
```

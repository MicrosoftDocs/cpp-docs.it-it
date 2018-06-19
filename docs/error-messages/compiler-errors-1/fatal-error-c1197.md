---
title: Errore irreversibile C1197 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1197
dev_langs:
- C++
helpviewer_keywords:
- C1197
ms.assetid: 22b801b7-e792-41f6-a461-973c03c69f25
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dacd459729161cf635287697a4a6d35c15eab3e4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33227280"
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
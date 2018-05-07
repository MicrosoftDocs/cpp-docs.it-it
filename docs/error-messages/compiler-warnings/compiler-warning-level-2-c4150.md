---
title: Compilatore (livello 2) Avviso C4150 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4150
dev_langs:
- C++
helpviewer_keywords:
- C4150
ms.assetid: ff1760ec-0d9f-4d45-b797-94261624becf
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3108da1b203160456e0823b4d9a3fd594b705a8b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-2-c4150"></a>Compilatore (livello 2) Avviso C4150
eliminazione del puntatore a tipo incompleto 'type'. chiamato nessun distruttore  
  
 Il **eliminare** operatore viene chiamato per eliminare un tipo che è stato dichiarato ma non è definito, in modo il compilatore non trova un distruttore.  
  
 L'esempio seguente genera l'errore C4150:  
  
```  
// C4150.cpp  
// compile with: /W2  
class  IncClass;  
  
void NoDestruct( IncClass* pIncClass )  
{  
   delete pIncClass;  
} // C4150, define class to resolve  
  
int main()  
{  
}  
```
---
title: Errore del compilatore C2093 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2093
dev_langs:
- C++
helpviewer_keywords:
- C2093
ms.assetid: 17529a70-9169-46b5-9fc6-57a5ce224e6a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 11419a7df335bd87077759228be1256c92d09caa
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33170713"
---
# <a name="compiler-error-c2093"></a>Errore del compilatore C2093
'variabile1': non può essere inizializzato con l'indirizzo della variabile automatica 'variabile2'  
  
 Durante la compilazione con [/Za](../../build/reference/za-ze-disable-language-extensions.md), il programma ha tentato di utilizzare l'indirizzo di una variabile automatica come inizializzatore.  
  
 L'esempio seguente genera l'errore C2093:  
  
```  
// C2093.c  
// compile with: /Za /c  
void func() {  
   int li;   // an implicit auto variable  
   int * s[]= { &li };   // C2093 address is not a constant  
  
   // OK  
   static int li2;  
   int * s2[]= { &li2 };  
}  
```
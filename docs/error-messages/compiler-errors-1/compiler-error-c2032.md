---
title: Errore del compilatore C2032 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2032
dev_langs:
- C++
helpviewer_keywords:
- C2032
ms.assetid: 625d7c83-70b6-42c2-a558-81fbc0026324
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1db268222f3b9f7ca6f9ce297680866185e6661d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2032"></a>Errore del compilatore C2032
'identifier': funzione non può essere membro di struct/unione '  
  
 Nella struttura o unione è una funzione membro, che è consentita in C++, ma non in C. Per risolvere l'errore, compilare un programma C++ o rimuovere la funzione membro.  
  
 L'esempio seguente genera l'errore C2032:  
  
```  
// C2032.c  
struct z {  
   int i;  
   void func();   // C2032  
};  
```  
  
 Possibile soluzione:  
  
```  
// C2032b.c  
// compile with: /c  
struct z {  
   int i;  
};  
```
---
title: Errore del compilatore C2032 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2032
dev_langs: C++
helpviewer_keywords: C2032
ms.assetid: 625d7c83-70b6-42c2-a558-81fbc0026324
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 87703c289dc522f62c29fd2110e969fd44abf645
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
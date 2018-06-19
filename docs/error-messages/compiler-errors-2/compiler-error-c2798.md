---
title: Errore del compilatore C2798 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2798
dev_langs:
- C++
helpviewer_keywords:
- C2798
ms.assetid: fb0cd861-b228-4f81-8090-e28344a727e0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: de30a19a2a27cde991cfce0ca061ce6f5447f033
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33236907"
---
# <a name="compiler-error-c2798"></a>Errore del compilatore C2798
'super:: membro' è ambiguo  
  
 Più strutture ereditate contengono il membro si è fatto riferimento con [super](../../cpp/super.md). Per correggere l'errore tramite:  
  
-   Rimozione B1 o B2 dall'elenco di ereditarietà di D.  
  
-   Modificare il nome del membro dati in B1 o B2.  
  
 L'esempio seguente genera l'errore C2798:  
  
```  
// C2798.cpp  
struct B1 {  
   int i;  
};  
  
struct B2 {  
   int i;  
};  
  
struct D : B1, B2 {  
   void g() {  
      __super::i = 4; // C2798  
   }  
};  
```
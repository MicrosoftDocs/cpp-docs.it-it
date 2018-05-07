---
title: Errore del compilatore C2801 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2801
dev_langs:
- C++
helpviewer_keywords:
- C2801
ms.assetid: 35dfc7ea-9e37-4e30-baa1-944dc61302f5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f68b3f575fcb8b909f58ac2ffbcaca26580279da
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2801"></a>Errore del compilatore C2801
'operatore' deve essere un membro non statico  
  
 Gli operatori seguenti possono essere sottoposti a overload solo come membri non statici:  
  
-   Assegnazione `=`  
  
-   Accesso ai membri di classe `->`  
  
-   Indice `[]`  
  
-   Chiamata di funzione `()`  
  
 Possibili cause C2801:  
  
-   Operatore di overload non è una classe, struttura o unione membro.  
  
-   Operatore di overload è dichiarato `static`.  
  
-   L'esempio seguente genera l'errore C2801:  
  
```  
// C2801.cpp  
// compile with: /c  
operator[]();   // C2801 not a member  
class A {  
   static operator->();   // C2801 static  
   operator()();   // OK  
};  
```
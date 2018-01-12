---
title: Errore del compilatore C2801 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2801
dev_langs: C++
helpviewer_keywords: C2801
ms.assetid: 35dfc7ea-9e37-4e30-baa1-944dc61302f5
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: bbdbfdc1b7bb9445b1a709afb42944eea0d7f241
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2801"></a>Errore del compilatore C2801
'operatore' deve essere un membro non statico  
  
 Gli operatori seguenti possono essere sottoposti a overload solo come membri non statici:  
  
-   Assegnazione`=`  
  
-   Accesso ai membri di classe`->`  
  
-   Indice`[]`  
  
-   Chiamata di funzione`()`  
  
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
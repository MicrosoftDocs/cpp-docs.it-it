---
title: "Errore del compilatore C2801 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2801"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2801"
ms.assetid: 35dfc7ea-9e37-4e30-baa1-944dc61302f5
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2801
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operator operatore' deve essere un membro non statico  
  
 È possibile eseguire l'overload dei seguenti operatori solo come membri non static:  
  
-   Operatore di assegnazione `=`  
  
-   Operatore di accesso ai membri di classe `->`  
  
-   Indice `[]`  
  
-   Chiamata di funzione `()`  
  
 Possibili cause dell'errore C2801:  
  
-   L'operatore di overload non è un membro di una classe, struttura o unione.  
  
-   L'operatore di overload è dichiarato `static`.  
  
-   Il seguente codice di esempio genera l'errore C2801:  
  
```  
// C2801.cpp  
// compile with: /c  
operator[]();   // C2801 not a member  
class A {  
   static operator->();   // C2801 static  
   operator()();   // OK  
};  
```
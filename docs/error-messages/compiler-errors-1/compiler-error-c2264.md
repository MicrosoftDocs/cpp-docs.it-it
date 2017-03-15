---
title: "Errore del compilatore C2264 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2264"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2264"
ms.assetid: 158b72cc-cee9-4a08-bd79-b7a5955345a8
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2264
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': errore nella definizione o dichiarazione di funzione. Funzione non chiamata  
  
 Non è possibile chiamare la funzione a causa di una dichiarazione o di una definizione non corretta.  
  
 Il seguente codice di esempio genera l'errore C2264:  
  
```  
// C2264.cpp  
struct C {  
   // Delete the following line to resolve.  
   operator int(int = 0){}   // incorrect declaration  
};  
  
struct D {  
   operator int(){return 0;}   // OK  
};  
  
int main() {  
   int i;  
  
   C c;  
   i = c;   // C2264  
  
   D d;  
   i = d;   // OK  
}  
```
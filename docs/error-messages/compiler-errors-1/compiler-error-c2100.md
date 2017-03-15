---
title: "Errore del compilatore C2100 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2100"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2100"
ms.assetid: 9ed5ea11-9d55-4ddf-8b1a-162c74f3c390
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2100
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

riferimento indiretto non valido  
  
 L'operatore di riferimento indiretto \( `*` \) è stato applicato a un valore non di tipo puntatore.  
  
 Il seguente codice di esempio genera l'errore C2100:  
  
```  
// C2100.cpp  
int main() {  
   int r = 0, *s = 0;  
   s = &r;  
   *r = 200;   // C2100  
   *s = 200;   // OK  
}  
```
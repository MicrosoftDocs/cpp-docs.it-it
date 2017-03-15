---
title: "Errore del compilatore C2117 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2117"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2117"
ms.assetid: b947379d-5861-42fc-ac26-170318579cbd
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2117
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': overflow dei limiti della matrice  
  
 Troppi inizializzatori in una matrice:  
  
-   Gli inizializzatori e gli elementi della matrice non corrispondono per dimensione e quantità.  
  
-   Una stringa non ha spazio per il terminatore null.  
  
 Il seguente codice di esempio genera l'errore C2117:  
  
```  
// C2117.cpp  
int main() {  
   char abc[4] = "abcd";   // C2117  
   char def[4] = "abd";   // OK  
}  
```
---
title: "Errore del compilatore C2838 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2838"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2838"
ms.assetid: 176b2ad6-7a84-4019-b97e-328866054457
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C2838
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'membro': nome completo non valido nella dichiarazione di un membro  
  
 Una classe, struttura o unione utilizza un nome completo per ridichiarare un membro di un'altra classe, struttura o unione.  
  
 Il seguente codice di esempio genera l'errore C2838:  
  
```  
// C2838.cpp  
// compile with: /c  
class Bellini {  
public:  
    void Norma();  
};  
  
class Bottesini {  
   Bellini::Norma();  // C2838  
};  
```
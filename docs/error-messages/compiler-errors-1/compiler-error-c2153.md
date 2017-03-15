---
title: "Errore del compilatore C2153 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2153"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2153"
ms.assetid: cfc50cb7-9a0f-4b5b-879a-d419c99f7be1
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2153
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

le costanti esadecimali devono avere almeno una cifra esadecimale  
  
 Le costanti esadecimali 0x, 0X e \\x non sono valide.  È necessario che x o X siano seguite da almeno una cifra esadecimale.  
  
 Il seguente codice di esempio genera l'errore C2153:  
  
```  
// C2153.cpp  
int main() {  
   int a= 0x;    // C2153  
   int b= 0xA;   // OK  
}  
```
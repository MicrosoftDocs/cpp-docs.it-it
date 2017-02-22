---
title: "Avviso del compilatore (livello 3) C4390 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4390"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4390"
ms.assetid: c95c2f1b-9bce-4b1f-a80c-565d4cde0b1e
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Avviso del compilatore (livello 3) C4390
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

";" : trovata istruzione controllata vuota. È ciò che si desidera?  
  
 È stato rilevato un punto e virgola dopo un'istruzione di controllo che non contiene istruzioni.  
  
 Se viene visualizzato l'avviso C4390 a causa di una macro, utilizzare il pragma [warning](../../preprocessor/warning.md) per disabilitare l'avviso nel modulo che contiene la macro.  
  
 Il seguente codice di esempio genera l'errore C4390:  
  
```  
// C4390.cpp  
// compile with: /W3  
int main() {  
   int i = 0;  
   if (i);   // C4390  
      i++;  
}  
```
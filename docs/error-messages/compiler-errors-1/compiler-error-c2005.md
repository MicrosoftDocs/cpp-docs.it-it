---
title: "Errore del compilatore C2005 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2005"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2005"
ms.assetid: 090530ed-e0ec-4358-833a-ca24260e7ffe
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C2005
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

previsto un numero di riga dopo \#line. Trovato 'token'  
  
 È necessario che la direttiva `#line` sia seguita da un numero di riga.  
  
 Il seguente codice di esempio genera l'errore C2005:  
  
```  
// C2005.cpp  
int main() {  
   int i = 0;  
   #line i   // C2005  
}  
```  
  
 Possibile soluzione:  
  
```  
// C2005b.cpp  
int main() {  
   int i = 0;  
   #line 0  
}  
```
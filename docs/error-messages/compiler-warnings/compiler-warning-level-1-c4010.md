---
title: "Avviso del compilatore (livello 1) C4010 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4010"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4010"
ms.assetid: d607a9ff-8f8f-45c0-b07b-3b2f439e5485
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 1) C4010
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

commento a riga singola contenente il carattere di continuazione di riga  
  
 Un commento a riga singola, introdotto da \/\/, contiene una barra rovesciata \(\\\) che funge da carattere di continuazione di riga.  La riga successiva viene considerata una continuazione ed elaborata come commento.  
  
 Alcuni editor diretti dalla sintassi non indicano come commento la riga che segue il carattere di continuazione.  Ignorare i colori della sintassi su ogni riga che provoca questo avviso.  
  
 Il seguente codice di esempio genera l'errore C4010:  
  
```  
// C4010.cpp  
// compile with: /WX  
int main() {  
   // the next line is also a comment because of the backslash \  
   int a = 3; // C4010  
   a++;  
}  
```
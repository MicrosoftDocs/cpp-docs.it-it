---
title: "Avviso del compilatore (livello 4) C4212 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4212"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4212"
ms.assetid: df781ea1-182d-4f9f-9a31-55b6ce80c711
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 4) C4212
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

utilizzata estensione non standard: dichiarazione di funzione con puntini di sospensione  
  
 Il prototipo di funzione contiene un numero variabile di argomenti,  a differenza della definizione di funzione.  
  
 Il seguente codice di esempio genera l'errore C4212:  
  
```  
// C4212.c  
// compile with: /W4 /Ze /c  
void f(int , ...);  
void f(int i, int j) {}  
```
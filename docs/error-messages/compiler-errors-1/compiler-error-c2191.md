---
title: "Errore del compilatore C2191 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2191"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2191"
ms.assetid: 051b8350-e5de-4f51-ab6e-96d32366bcef
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2191
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

secondo elenco di parametri più lungo del primo  
  
 Una funzione C è stata dichiarata una seconda volta con un elenco di parametri più lungo.  C non supporta le funzioni con overload.  
  
## Esempio  
 Il seguente codice di esempio genera l'errore C2191:  
  
```  
// C2191.c  
// compile with: /Za /c  
void func( int );  
void func( int, float );   // C2191 different parameter list  
void func2( int, float );   // OK  
```
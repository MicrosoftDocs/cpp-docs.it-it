---
title: "Avviso del compilatore (livello 1) C4399 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4399"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4399"
ms.assetid: f58d9ba7-71a0-4c3b-b26f-f946dda8af30
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Avviso del compilatore (livello 1) C4399
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'simbolo': il simbolo per processo non dovrebbe essere contrassegnato con \_\_declspec\(dllimport\) quando compilato con \/clr:pure  
  
 Non è possibile importare in un'immagine di tipo pure i dati di un'immagine nativa o di un'immagine con costrutti nativi e CLR.  Per risolvere il problema, eseguire la compilazione con **\/clr** \(non con **\/clr:pure**\) oppure eliminare `__declspec(dllimport)`.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4399:  
  
```  
// C4399.cpp  
// compile with: /clr:pure /doc /W1 /c  
__declspec(dllimport) __declspec(process) extern const int i;   // C4399  
```
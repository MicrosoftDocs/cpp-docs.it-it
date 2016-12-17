---
title: "Avviso del compilatore (livello 1) C4616 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4616"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4616"
ms.assetid: 71e15265-c5bc-42ce-a6a9-4879892472b1
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4616
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

avviso \#pragma: il numero di avviso 'numero' non è un avviso del compilatore valido  
  
 Non è possibile riassegnare il numero di avviso specificato nel pragma [warning](../../preprocessor/warning.md).  Il pragma è stato ignorato.  
  
 Il seguente codice di esempio genera l'errore C4616:  
  
```  
// C4616.cpp  
// compile with: /W1 /c  
#pragma warning( disable : 0 )   // C4616  
#pragma warning( disable : 999 )   // OK  
#pragma warning( disable : 4998 )   // OK  
```
---
title: "Avviso del compilatore (livello 1) C4615 | Microsoft Docs"
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
  - "C4615"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4615"
ms.assetid: 7b107c01-0da2-4e01-8b40-93813e30b94c
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4615
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

avviso \#pragma: tipo di avviso utente sconosciuto  
  
 È stato utilizzato un identificatore di avviso non valido con un **pragma** [warning](../../preprocessor/warning.md).  Per risolvere l'errore, utilizzare un identificatore di avviso valido.  
  
 Il seguente codice di esempio genera l'errore C4615:  
  
```  
// C4615.cpp  
// compile with: /W1 /LD  
#pragma warning(enable : 4401)   // C4615, 'enable' not valid specifier  
  
// use the code below to resolve the error  
// #pragma warning(default : 4401)  
```
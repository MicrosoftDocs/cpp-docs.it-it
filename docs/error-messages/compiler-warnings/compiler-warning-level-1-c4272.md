---
title: "Avviso del compilatore (livello 1) C4272 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4272"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4272"
ms.assetid: 0d6c1de4-2eef-42c4-b861-c221f8b495ef
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Avviso del compilatore (livello 1) C4272
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': è contrassegnato \_\_declspec\(dllimport\). Quando si importa una funzione è necessario specificare una convenzione di chiamata nativa.  
  
 Non è corretto esportare una funzione contrassegnata con la convenzione di chiamata [\_\_clrcall](../../cpp/clrcall.md). Questo avviso viene visualizzato quando si tenta di importare una funzione contrassegnata con `__clrcall`.  
  
 Il seguente codice di esempio genera l'errore C4272:  
  
```  
// C4272.cpp  
// compile with: /c /W1 /clr  
__declspec(dllimport) void __clrcall Test();   // C4272  
__declspec(dllimport) void Test2();   // OK  
```
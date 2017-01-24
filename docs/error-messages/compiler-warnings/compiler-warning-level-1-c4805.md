---
title: "Avviso del compilatore (livello 1) C4805 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4805"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4805"
ms.assetid: 99c7b7e2-272e-4ab5-8580-17c42e62e2ef
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4805
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operation': combinazione non affidabile del tipo 'type' e del tipo 'type' nell'operazione  
  
 Questo avviso viene generato per le operazioni di confronto tra [bool](../../cpp/bool-cpp.md) e [int](../../c-language/integer-types.md). L'esempio seguente genera l'errore C4805:  
  
```  
// C4805.cpp // compile with: /W1 int main() { int i = 1; bool b = true; if (i == b) {   // C4805, comparing bool and int variables } }  
```
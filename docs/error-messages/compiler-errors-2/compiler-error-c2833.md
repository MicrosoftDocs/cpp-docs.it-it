---
title: "Errore del compilatore C2833 | Microsoft Docs"
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
  - "C2833"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2833"
ms.assetid: b9418ce1-e2ee-4599-8959-6fde89c27569
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2833
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operator operatore' non è un operatore o un tipo riconosciuto  
  
 ‎La parola `operator` deve essere seguita da un operatore di cui si desidera eseguire l'override o da un tipo che si desidera convertire.  
  
 Per un elenco degli operatori che è possibile definire in un tipo gestito, vedere [Operatori definiti dall'utente](../../dotnet/user-defined-operators-cpp-cli.md).  
  
 Il seguente codice di esempio genera l'errore C2833:  
  
```  
// C2833.cpp  
// compile with: /c  
class A {};  
  
void operator ::* ();   // C2833  
void operator :: ();   // OK  
```
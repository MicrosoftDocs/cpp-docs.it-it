---
title: "Errore del compilatore C2570 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2570"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2570"
ms.assetid: d65d0b32-2fac-464a-bcdf-0ebcedf3bf32
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2570
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': un'unione non può avere classi base  
  
 Un'unione deriva da una classe, struttura o unione,  ma questa operazione non è consentita.  Dichiarare il tipo derivato come classe o struttura.  
  
 Il seguente codice di esempio genera l'errore C2570:  
  
```  
// C2570.cpp  
// compile with: /c  
class base {};  
union hasPubBase : public base {};   // C2570  
union hasNoBase {};   // OK  
```
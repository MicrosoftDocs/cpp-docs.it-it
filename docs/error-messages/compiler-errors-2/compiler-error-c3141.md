---
title: "Errore del compilatore C3141 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3141"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3141"
ms.assetid: b4fd65c3-50cc-46cd-8de0-6a6d24cb9cda
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C3141
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'nome\_interfaccia': le interfacce supportano solo l'ereditarietà pubblica  
  
 Le interfacce definite con la parola chiave [interface \(o \_\_interface\)](../../cpp/interface.md) supportano solo l'ereditarietà pubblica.  
  
 Il seguente codice di esempio genera l'errore C3141:  
  
```  
// C3141.cpp  
__interface IBase {};  
__interface IDerived1 : protected IBase {};  // C3141  
__interface IDerived2 : private IBase {};    // C3141  
```
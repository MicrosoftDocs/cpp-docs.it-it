---
title: "Errore irreversibile C1191 | Microsoft Docs"
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
  - "C1191"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1191"
ms.assetid: 2888c6c4-b4e6-449e-8ee0-7917f31086df
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile C1191
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'dll' può essere importato solo in ambito globale  
  
 L'istruzione per l'importazione di mscorlib.dll in un programma che utilizza \/clr non può essere specificata in uno spazio dei nomi o in una funzione, ma solo in ambito globale.  
  
 Il seguente codice di esempio genera l'errore C1191:  
  
```  
// C1191.cpp  
// compile with: /clr  
namespace sample {  
   #using <mscorlib.dll>   // C1191 not at global scope  
}  
```  
  
 Possibile soluzione:  
  
```  
// C1191b.cpp  
// compile with: /clr /c  
#using <mscorlib.dll>  
namespace sample {}  
```
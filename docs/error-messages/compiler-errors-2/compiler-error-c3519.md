---
title: "Errore del compilatore C3519 | Microsoft Docs"
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
  - "C3519"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3519"
ms.assetid: ca24b2bc-7e90-4448-ae84-3fedddf9bca7
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3519
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'param\_non\_valido': parametro non valido per l'attributo embedded\_idl  
  
 Il parametro passato all'attributo `embedded_idl` di [\#import](../../preprocessor/hash-import-directive-cpp.md) non è stato riconosciuto dal compilatore.  
  
 Gli unici parametri consentiti per `embedded_idl` sono `emitidl` e `no_emitidl`.  
  
 Il seguente codice di esempio genera l'errore C3519:  
  
```  
// C3519.cpp  
// compile with: /LD  
[module(name="MyLib2")];  
#import "C:\testdir\bin\importlib.tlb" embedded_idl("no_emitidcl")     
// C3519  
#import "C:\testdir\bin\importlib.tlb" embedded_idl("no_emitidl")     
// OK  
```
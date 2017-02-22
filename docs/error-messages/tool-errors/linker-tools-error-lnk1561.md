---
title: "Errore degli strumenti del linker LNK1561 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1561"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1561"
ms.assetid: cb0b709b-7c9c-4496-8a4e-9e1e4aefe447
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore degli strumenti del linker LNK1561
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il punto d'ingresso deve essere definito  
  
 Non è stato individuato alcun punto di ingresso.  Se si intende eseguire il collegamento come DLL, è necessario utilizzare l'opzione [\/DLL](../../build/reference/dll-build-a-dll.md) per il collegamento.  È possibile che il nome del punto di ingresso non sia stato specificato. Eseguire il collegamento con l'opzione [\/ENTRY](../../build/reference/entry-entry-point-symbol.md).  
  
 In caso contrario, è necessario includere una funzione main, wmain, WinMain o wMain nel codice.  
  
 Se si utilizza [LIB](../../build/reference/lib-reference.md) e si desidera compilare un file dll, questo errore può essere dovuto al fatto che si è fornito un file def.  In questo caso, rimuovere il file def dalla build.  
  
 Il seguente codice di esempio genera l'errore LNK1561:  
  
```  
// LNK1561.cpp  
// LNK1561 expected  
int i;  
// add a main function to resolve this error  
```
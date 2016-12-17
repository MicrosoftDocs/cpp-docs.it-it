---
title: "Avviso degli strumenti del linker LNK4237 | Microsoft Docs"
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
  - "LNK4237"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4237"
ms.assetid: 87bfec39-5241-464f-9feb-517b49f352ea
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso degli strumenti del linker LNK4237
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Si è specificato \/SUBSYSTEM:NATIVE durante l'importazione da 'dll'. Utilizzare \/SUBSYSTEM:CONSOLE o \/SUBSYSTEM:WINDOWS.  
  
 Si è specificato [\/SUBSYSTEM:NATIVE](../../build/reference/subsystem-specify-subsystem.md) durante la compilazione di un'applicazione di Windows \(Win32\) che utilizza direttamente una o più delle DLL seguenti:  
  
-   kernel32.dll  
  
-   gdi32.dll  
  
-   user32.dll  
  
-   una delle dll msvcrt\*.  
  
 Per risolvere il problema, evitare di specificare **\/SUBSYSTEM:NATIVE**.
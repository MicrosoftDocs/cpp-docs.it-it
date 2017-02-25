---
title: "Avviso degli strumenti del linker LNK4104 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4104"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4104"
ms.assetid: ca6728db-d616-419a-a570-65e8445c6079
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Avviso degli strumenti del linker LNK4104
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

l'esportazione del simbolo 'simbolo' dovrebbe essere di tipo PRIVATE  
  
 `symbol` può essere costituito da uno dei seguenti elementi:  
  
-   `DllCanUnloadNow`  
  
-   `DllGetClassObject`  
  
-   `DllGetClassFactoryFromClassString`  
  
-   `DllGetDocumentation`  
  
-   `DllInitialize`  
  
-   `DllInstall`  
  
-   `DllRegisterServer`  
  
-   `DllRegisterServerEx`  
  
-   `DllRegisterServerExW`  
  
-   `DllUnload`  
  
-   `DllUnregisterServer`  
  
-   `RasCustomDeleteEntryNotify`  
  
-   `RasCustomDial`  
  
-   `RasCustomDialDlg`  
  
-   `RasCustomEntryDlg`  
  
 Questo avviso viene generato quando si compila una libreria di importazione per una DLL e si esporta una delle funzioni suddette senza specificarla come tipo PRIVATE nel file di definizione dei moduli.  In genere, queste funzioni vengono esportate per essere utilizzate solo da OLE.  Se vengono collocate nella libreria di importazione, il comportamento può risultare insolito quando un programma collegato alla libreria esegue erroneamente chiamate a tali funzioni.  Per ulteriori informazioni sulla parola chiave PRIVATE, vedere [EXPORTS](../../build/reference/exports.md).
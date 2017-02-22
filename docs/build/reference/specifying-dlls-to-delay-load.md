---
title: "Specifica delle DLL per il caricamento ritardato | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/DELAYLOAD (opzione del linker)"
  - "caricamento ritardato di DLL"
  - "caricamento ritardato di DLL, specifica"
  - "DELAYLOAD (opzione del linker)"
ms.assetid: 94cbecfe-7a42-40d1-a618-9f2786bac0d8
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Specifica delle DLL per il caricamento ritardato
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile specificare le DLL da caricare in modo ritardato con l'opzione del linker [\/delayload](../../build/reference/delayload-delay-load-import.md):`dllname`.  Se non si intende usare una versione personalizzata di una funzione di supporto, è necessario anche collegare il programma a delayimp.lib \(per le applicazioni desktop\) o a dloadhelper.lib \(per le app dello Store\).  
  
 Di seguito è riportato un esempio semplice di caricamento ritardato di una DLL:  
  
```  
// cl t.cpp user32.lib delayimp.lib  /link /DELAYLOAD:user32.dll  
#include <windows.h>  
// uncomment these lines to remove .libs from command line  
// #pragma comment(lib, "delayimp")  
// #pragma comment(lib, "user32")  
  
int main() {  
   // user32.dll will load at this point  
   MessageBox(NULL, "Hello", "Hello", MB_OK);  
}  
```  
  
 Compilare la versione DEBUG del progetto.  Eseguire il codice un'istruzione alla volta usando il debugger in modo da notare che il file user32.dll verrà caricato solo quando si effettua la chiamata a `MessageBox`.  
  
## Vedere anche  
 [Supporto per le DLL a caricamento ritardato nel linker](../../build/reference/linker-support-for-delay-loaded-dlls.md)
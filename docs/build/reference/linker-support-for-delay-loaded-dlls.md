---
title: Supporto per le DLL a caricamento ritardato nel linker | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- delayed loading of DLLs, linker support
ms.assetid: b2d7e449-2809-42b1-9c90-2c0ca5e31a14
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: aea4ca6d5391f71f27d59d0192fcf1f832dd6702
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="linker-support-for-delay-loaded-dlls"></a>Supporto per le DLL a caricamento ritardato nel linker
Il linker Visual C++ supporta ora il caricamento ritardato di DLL. Questo elimina la necessità di utilizzare le funzioni di Windows SDK **LoadLibrary** e **GetProcAddress** per implementare una DLL a caricamento ritardato.  
  
 Prima di Visual C++ 6.0, l'unico modo per caricare una DLL in fase di esecuzione è tramite **LoadLibrary** e **GetProcAddress**; carica la DLL del sistema operativo quando il file eseguibile o DLL tramite è stato caricato.  
  
 A partire da Visual C++ 6.0, quando il collegamento statico a una DLL, il linker fornisce opzioni di attesa del caricamento della DLL fino a quando il programma chiama una funzione nella DLL.  
  
 Un'applicazione può ritardare caricare una DLL utilizzando il [/DELAYLOAD (caricamento ritardato)](../../build/reference/delayload-delay-load-import.md) l'opzione del linker con una funzione di supporto (implementazione predefinita fornita da Visual C++). La funzione di supporto DLL verrà caricata in fase di esecuzione chiamando **LoadLibrary** e **GetProcAddress** automaticamente.  
  
 È necessario considerare se una DLL a caricamento ritardato:  
  
-   Il programma non può chiamare una funzione nella DLL.  
  
-   Una funzione nella DLL può essere chiamata finché in ritardo nell'esecuzione del programma.  
  
 Il caricamento ritardato di una DLL può essere specificato durante la compilazione di una. File EXE o. Progetto DLL. A. Progetto DLL che ritarda il caricamento di uno o più DLL non stesso chiami un punto di ingresso a caricamento ritardato in Dllmain.  
  
 Gli argomenti seguenti descrivono caricamento ritardato di DLL:  
  
-   [Specifica delle DLL per il caricamento ritardato](../../build/reference/specifying-dlls-to-delay-load.md)  
  
-   [Scaricamento esplicito di una DLL a caricamento ritardato](../../build/reference/explicitly-unloading-a-delay-loaded-dll.md)  
  
-   [Caricamento di tutte le importazioni per una DLL a caricamento ritardato](../../build/reference/loading-all-imports-for-a-delay-loaded-dll.md)  
  
-   [Associazione di importazioni](../../build/reference/binding-imports.md)  
  
-   [Gestione e notifica degli errori](../../build/reference/error-handling-and-notification.md)  
  
-   [Dump delle importazioni a caricamento ritardato](../../build/reference/dumping-delay-loaded-imports.md)  
  
-   [Vincoli delle DLL a caricamento ritardato](../../build/reference/constraints-of-delay-loading-dlls.md)  
  
-   [Informazioni sulla funzione di supporto](understanding-the-helper-function.md)  
  
-   [Sviluppo di una funzione di supporto personalizzata](../../build/reference/developing-your-own-helper-function.md)  
  
## <a name="see-also"></a>Vedere anche  
 [DLL in Visual C++](../../build/dlls-in-visual-cpp.md)   
 [Collegamento](../../build/reference/linking.md)
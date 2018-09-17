---
title: Supporto per le DLL a caricamento ritardato nel linker | Microsoft Docs
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
ms.openlocfilehash: 555a46ee65a5d5d5565128a15af01a2c1cf18540
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45711908"
---
# <a name="linker-support-for-delay-loaded-dlls"></a>Supporto per le DLL a caricamento ritardato nel linker

Il linker di Visual C++ supporta ora il caricamento ritardato di DLL. Ciò elimina la necessità di usare le funzioni di Windows SDK **LoadLibrary** e **GetProcAddress** per implementare il caricamento ritardato di DLL.

Prima di Visual C++ 6.0, è l'unico modo per caricare una DLL in fase di esecuzione tramite **LoadLibrary** e **GetProcAddress**; il sistema operativo carica la DLL quando il file eseguibile o DLL tramite cui è stata caricata.

A partire da Visual C++ 6.0, quando si collegano in modo statico a una DLL, il linker offre opzioni di ritardo del caricamento della DLL fino a quando il programma chiama una funzione nella DLL.

Un'applicazione può ritardare caricare una DLL mediante il [/DELAYLOAD (importazione a caricamento ritardato)](../../build/reference/delayload-delay-load-import.md) l'opzione del linker con una funzione di supporto (implementazione predefinita fornita da Visual C++). La funzione di supporto verrà caricato la DLL in fase di esecuzione chiamando **LoadLibrary** e **GetProcAddress** automaticamente.

È necessario considerare se una DLL a caricamento ritardato:

- Il programma non può chiamare una funzione nella DLL.

- Una funzione nella DLL può essere chiamata fino a quando non in ritardo nell'esecuzione del programma.

Il caricamento ritardato di una DLL può essere specificato durante la compilazione di una. File EXE o. Progetto DLL. OGGETTO. Progetto DLL che ritarda il caricamento di una o più DLL non stesso chiami un punto di ingresso a caricamento ritardato in Dllmain.

Gli argomenti seguenti descrivono le DLL a caricamento ritardato:

- [Specifica delle DLL per il caricamento ritardato](../../build/reference/specifying-dlls-to-delay-load.md)

- [Scaricamento esplicito di una DLL a caricamento ritardato](../../build/reference/explicitly-unloading-a-delay-loaded-dll.md)

- [Caricamento di tutte le importazioni per una DLL a caricamento ritardato](../../build/reference/loading-all-imports-for-a-delay-loaded-dll.md)

- [Associazione di importazioni](../../build/reference/binding-imports.md)

- [Gestione e notifica degli errori](../../build/reference/error-handling-and-notification.md)

- [Dump delle importazioni a caricamento ritardato](../../build/reference/dumping-delay-loaded-imports.md)

- [Vincoli delle DLL a caricamento ritardato](../../build/reference/constraints-of-delay-loading-dlls.md)

- [Informazioni sulla funzione di supporto](understanding-the-helper-function.md)

- [Sviluppo di una funzione di supporto personalizzata](../../build/reference/developing-your-own-helper-function.md)

## <a name="see-also"></a>Vedere anche

[DLL in Visual C++](../../build/dlls-in-visual-cpp.md)<br/>
[Collegamento](../../build/reference/linking.md)
---
description: 'Altre informazioni su: supporto del linker per le DLL di Delay-Loaded'
title: Supporto per le DLL a caricamento ritardato nel linker
ms.date: 11/04/2016
helpviewer_keywords:
- delayed loading of DLLs, linker support
ms.assetid: b2d7e449-2809-42b1-9c90-2c0ca5e31a14
ms.openlocfilehash: 6bf4527d14c7313874f162f0597114132b1a81cb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97190965"
---
# <a name="linker-support-for-delay-loaded-dlls"></a>Supporto per le DLL a caricamento ritardato nel linker

Il linker MSVC supporta ora il caricamento ritardato delle dll. In questo modo si evita di dover utilizzare le funzioni Windows SDK **LoadLibrary** e **GetProcAddress** per implementare il caricamento ritardato della dll.

Prima di Visual C++ 6,0, l'unico modo per caricare una DLL in fase di esecuzione era tramite **LoadLibrary** e **GetProcAddress**; il sistema operativo caricherà la DLL quando è stato caricato il file eseguibile o la DLL che lo utilizza.

A partire da Visual C++ 6,0, quando si collega in modo implicito a una DLL, il linker fornisce le opzioni per ritardare il caricamento della DLL fino a quando il programma non chiama una funzione in tale DLL.

Un'applicazione può ritardare il caricamento di una DLL usando l'opzione del linker [/DELAYLOAD (importazione a caricamento ritardato)](delayload-delay-load-import.md) con una funzione helper (implementazione predefinita fornita da Visual C++). Tramite la funzione helper la DLL viene caricata in fase di esecuzione chiamando **LoadLibrary** e **GetProcAddress** .

Si consiglia di ritardare il caricamento di una DLL se:

- Il programma non può chiamare una funzione nella DLL.

- Una funzione nella DLL potrebbe non essere chiamata fino alla fine dell'esecuzione del programma.

Il caricamento ritardato di una DLL può essere specificato durante la compilazione di un oggetto. EXE o. Progetto DLL. Un. Il progetto DLL che ritarda il caricamento di una o più dll non deve chiamare un punto di ingresso a caricamento ritardato in DllMain.

Negli argomenti seguenti viene descritto il caricamento ritardato delle dll:

- [Specifica delle dll per il caricamento ritardato](specifying-dlls-to-delay-load.md)

- [Scaricamento esplicito di una DLL di Delay-Loaded](explicitly-unloading-a-delay-loaded-dll.md)

- [Caricamento di tutte le importazioni per una DLL Delay-Loaded](loading-all-imports-for-a-delay-loaded-dll.md)

- [Importazioni di binding](binding-imports.md)

- [Gestione e notifica degli errori](error-handling-and-notification.md)

- [Dump di Delay-Loaded importazioni](dumping-delay-loaded-imports.md)

- [Vincoli di caricamento ritardato delle dll](constraints-of-delay-loading-dlls.md)

- [Informazioni sulla funzione helper](understanding-the-helper-function.md)

- [Sviluppo di una funzione helper personalizzata](developing-your-own-helper-function.md)

## <a name="see-also"></a>Vedi anche

[Creare DLL C/C++ in Visual Studio](../dlls-in-visual-cpp.md)<br/>
[Informazioni di riferimento sul linker MSVC](linking.md)

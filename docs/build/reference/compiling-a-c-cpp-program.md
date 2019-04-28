---
title: Riferimenti al compilatore MSVC. C/C++ - Visual Studio
description: Opzioni set di strumenti del compilatore MSVC.
ms.date: 12/10/2018
helpviewer_keywords:
- cl.exe compiler
- cl.exe compiler, setting options
ms.assetid: f3eef5ab-d0be-4fb2-90f9-927e6ed58736
ms.openlocfilehash: 2269ba69cea2702ff190c791eb6753acb3619f7d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62294148"
---
# <a name="compiling-a-cc-project"></a>Quando si compila un progetto C/C++

Nell'IDE di Visual Studio o dalla riga di comando, è possono impostare le opzioni del compilatore C e C++. 

## <a name="in-visual-studio"></a>In Visual Studio

È possibile impostare le opzioni del compilatore per ogni progetto nella relativa Visual Studio **pagine delle proprietà** nella finestra di dialogo. Nel riquadro sinistro, selezionare **le proprietà di configurazione**, **C/C++** e quindi scegliere la categoria di opzioni del compilatore. Nell'argomento relativo a ciascuna opzione del compilatore viene descritto come impostarla e dove reperirla nell'ambiente di sviluppo. Visualizzare [opzioni del compilatore MSVC](compiler-options.md) per un elenco completo.

## <a name="from-the-command-line"></a>Dalla riga di comando

È possibile impostare le opzioni del compilatore (CL.exe):

- [Nella riga di comando](compiler-command-line-syntax.md)

- [Nei file di comando](cl-command-files.md)

- [Nella variabile di ambiente CL](cl-environment-variables.md)

Le opzioni specificate nella variabile di ambiente CL vengono utilizzate ogni volta che viene richiamato CL. Se un file di comando viene denominato nella variabile di ambiente CL o sulla riga di comando, vengono utilizzate le opzioni specificate nel file di comando. A differenza della riga di comando o della variabile di ambiente CL, un file di comando consente di utilizzare più righe di opzioni e nomi file.

Le opzioni del compilatore vengono elaborate "da sinistra a destra" e quando viene rilevato un conflitto, prevale l'ultima opzione, ovvero quella all'estrema destra. La variabile di ambiente CL viene elaborata prima della riga di comando in modo che al verificarsi di un conflitto tra CL e la riga di comando, quest'ultima abbia la precedenza.

## <a name="additional-compiler-topics"></a>Ulteriori argomenti relativi al compilatore

- [Opzioni del compilatore MSVC](compiler-options.md)

- [File di intestazione precompilata](../creating-precompiled-header-files.md)

- [CL richiama il linker](cl-invokes-the-linker.md)

Per informazioni su come scegliere l'architettura di host e di destinazione del compilatore, vedere [C++ configurare progetti per 64 bit, x64 destinazioni](../configuring-programs-for-64-bit-visual-cpp.md).

## <a name="see-also"></a>Vedere anche

[Riferimenti alla compilazione in C/C++](c-cpp-building-reference.md)

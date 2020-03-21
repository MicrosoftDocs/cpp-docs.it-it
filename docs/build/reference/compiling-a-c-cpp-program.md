---
title: MSVC C/C++ riferimento al compilatore-Visual Studio
description: Opzioni del set di strumenti del compilatore MSVC.
ms.date: 12/10/2018
helpviewer_keywords:
- cl.exe compiler
- cl.exe compiler, setting options
ms.assetid: f3eef5ab-d0be-4fb2-90f9-927e6ed58736
ms.openlocfilehash: c75176b139895d7b00d88aca1c58604b47386894
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80077370"
---
# <a name="compiling-a-cc-project"></a>Compilazione di un C/C++ progetto

Le opzioni C++ C e del compilatore possono essere impostate nell'IDE di Visual Studio o nella riga di comando.

## <a name="in-visual-studio"></a>In Visual Studio

È possibile impostare le opzioni del compilatore per ogni progetto nella finestra di dialogo **pagine delle proprietà** di Visual Studio. Nel riquadro sinistro selezionare proprietà di **configurazione**, **C/C++**  e quindi scegliere la categoria opzione del compilatore. Nell'argomento relativo a ciascuna opzione del compilatore viene descritto come impostarla e dove reperirla nell'ambiente di sviluppo. Per un elenco completo, vedere [Opzioni del compilatore MSVC](compiler-options.md) .

## <a name="from-the-command-line"></a>Dalla riga di comando

È possibile impostare le opzioni del compilatore (CL.exe):

- [Dalla riga di comando](compiler-command-line-syntax.md)

- [Nei file di comando](cl-command-files.md)

- [Nella variabile di ambiente CL](cl-environment-variables.md)

Le opzioni specificate nella variabile di ambiente CL vengono utilizzate ogni volta che viene richiamato CL. Se un file di comando viene denominato nella variabile di ambiente CL o sulla riga di comando, vengono utilizzate le opzioni specificate nel file di comando. A differenza della riga di comando o della variabile di ambiente CL, un file di comando consente di utilizzare più righe di opzioni e nomi file.

Le opzioni del compilatore vengono elaborate "da sinistra a destra" e quando viene rilevato un conflitto, prevale l'ultima opzione, ovvero quella all'estrema destra. La variabile di ambiente CL viene elaborata prima della riga di comando in modo che al verificarsi di un conflitto tra CL e la riga di comando, quest'ultima abbia la precedenza.

## <a name="additional-compiler-topics"></a>Ulteriori argomenti relativi al compilatore

- [Opzioni del compilatore MSVC](compiler-options.md)

- [File di intestazione precompilata](../creating-precompiled-header-files.md)

- [CL richiama il linker](cl-invokes-the-linker.md)

Per informazioni sulla scelta dell'host e dell'architettura di destinazione del compilatore, vedere [Configure C++ projects for 64 bit, x64 targets](../configuring-programs-for-64-bit-visual-cpp.md).

## <a name="see-also"></a>Vedere anche

[Riferimenti alla compilazione in C/C++](c-cpp-building-reference.md)

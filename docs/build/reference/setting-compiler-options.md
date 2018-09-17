---
title: Impostazione delle opzioni del compilatore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- compiler options, setting
- cl.exe compiler, setting options
ms.assetid: 4b079f5b-0017-4124-aad6-0d2b58e427e0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cf7ee185f43f62f9e9a735650801e0cbd1a1b43d
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45712465"
---
# <a name="setting-compiler-options"></a>Impostazione delle opzioni del compilatore

Le opzioni del compilatore C e C++ possono essere impostate nell'ambiente di sviluppo o sulla riga di comando.

## <a name="in-the-development-environment"></a>Nell'ambiente di sviluppo

È possibile impostare le opzioni del compilatore per ogni progetto nella relativa **pagine delle proprietà** nella finestra di dialogo. Nel riquadro sinistro, selezionare **le proprietà di configurazione**, **C/C++** e quindi scegliere la categoria di opzioni del compilatore. Nell'argomento relativo a ciascuna opzione del compilatore viene descritto come impostarla e dove reperirla nell'ambiente di sviluppo. Visualizzare [opzioni del compilatore](../../build/reference/compiler-options.md) per un elenco completo.

## <a name="outside-the-development-environment"></a>Al di fuori dell'ambiente di sviluppo

È possibile impostare le opzioni del compilatore (CL.exe):

- [Nella riga di comando](../../build/reference/compiler-command-line-syntax.md)

- [Nei file di comando](../../build/reference/cl-command-files.md)

- [Nella variabile di ambiente CL](../../build/reference/cl-environment-variables.md)

Le opzioni specificate nella variabile di ambiente CL vengono utilizzate ogni volta che viene richiamato CL. Se un file di comando viene denominato nella variabile di ambiente CL o sulla riga di comando, vengono utilizzate le opzioni specificate nel file di comando. A differenza della riga di comando o della variabile di ambiente CL, un file di comando consente di utilizzare più righe di opzioni e nomi file.

Le opzioni del compilatore vengono elaborate "da sinistra a destra" e quando viene rilevato un conflitto, prevale l'ultima opzione, ovvero quella all'estrema destra. La variabile di ambiente CL viene elaborata prima della riga di comando in modo che al verificarsi di un conflitto tra CL e la riga di comando, quest'ultima abbia la precedenza.

## <a name="additional-compiler-topics"></a>Ulteriori argomenti relativi al compilatore

- [Compilazione veloce](../../build/reference/fast-compilation.md)

- [CL richiama il linker](../../build/reference/cl-invokes-the-linker.md)

## <a name="see-also"></a>Vedere anche

[Riferimenti alla compilazione in C/C++](../../build/reference/c-cpp-building-reference.md)<br/>
[Opzioni del compilatore](../../build/reference/compiler-options.md)
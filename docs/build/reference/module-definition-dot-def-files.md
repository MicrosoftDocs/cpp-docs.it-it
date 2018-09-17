---
title: Definizione di modulo (. I file def) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- def files
- module definition files
- .def files
ms.assetid: 08c0bc28-c5d2-47aa-9624-7fc68bcaa4d8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f04035f3c5f0acd77fc197cbef3d2ab507feb0d4
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45710190"
---
# <a name="module-definition-def-files"></a>File di definizione moduli (DEF)

I file di definizione moduli (def) forniscono linker con informazioni sulle esportazioni, attributi e altre informazioni sul programma da collegare. Un file con estensione def è particolarmente utile quando si compila una DLL. Poiché esistono [opzioni del linker](../../build/reference/linker-options.md) che può essere usato invece le istruzioni di definizione moduli, i file DEF sono in genere non necessari. È anche possibile usare [dllexport](../../build/exporting-from-a-dll-using-declspec-dllexport.md) come un modo per specificare le funzioni esportate.

È possibile richiamare un file con estensione def durante la fase di collegamento con il [/DEF (specifica del File di definizione moduli)](../../build/reference/def-specify-module-definition-file.md) l'opzione del linker.

Se si sta creando un file .exe che non contiene esportazioni, usando un file con estensione def renderà l'output del file più grande e più lento il caricamento.

Per un esempio, vedere [esportazione da una DLL tramite i file DEF](../../build/exporting-from-a-dll-using-def-files.md).

Vedere le sezioni seguenti per altre informazioni:

- [Regole relative alle istruzioni di definizione dei moduli](../../build/reference/rules-for-module-definition-statements.md)

- [EXPORTS](../../build/reference/exports.md)

- [HEAPSIZE](../../build/reference/heapsize.md)

- [LIBRARY](../../build/reference/library.md)

- [NOME](../../build/reference/name-c-cpp.md)

- [SEZIONI](../../build/reference/sections-c-cpp.md)

- [STACKSIZE](../../build/reference/stacksize.md)

- [STUB](../../build/reference/stub.md)

- [VERSIONE](../../build/reference/version-c-cpp.md)

- [Parole riservate](../../build/reference/reserved-words.md)

## <a name="see-also"></a>Vedere anche

[Riferimenti alla compilazione in C/C++](../../build/reference/c-cpp-building-reference.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)
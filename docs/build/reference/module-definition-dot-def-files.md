---
title: File di definizione moduli (DEF)
ms.date: 11/04/2016
helpviewer_keywords:
- def files
- module definition files
- .def files
ms.assetid: 08c0bc28-c5d2-47aa-9624-7fc68bcaa4d8
ms.openlocfilehash: 0047f24722644cd9a68bbbf827ced26ad085d4c1
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57812239"
---
# <a name="module-definition-def-files"></a>File di definizione moduli (DEF)

I file di definizione moduli (def) forniscono linker con informazioni sulle esportazioni, attributi e altre informazioni sul programma da collegare. Un file con estensione def è particolarmente utile quando si compila una DLL. Poiché esistono [opzioni del Linker MSVC](linker-options.md) che può essere usato invece le istruzioni di definizione moduli, i file def in genere non sono necessari. È anche possibile usare [dllexport](../exporting-from-a-dll-using-declspec-dllexport.md) come un modo per specificare le funzioni esportate.

È possibile richiamare un file con estensione def durante la fase di collegamento con il [/DEF (specifica del File di definizione moduli)](def-specify-module-definition-file.md) l'opzione del linker.

Se si sta creando un file .exe che non contiene esportazioni, usando un file con estensione def renderà l'output del file più grande e più lento il caricamento.

Per un esempio, vedere [esportazione da una DLL tramite i file DEF](../exporting-from-a-dll-using-def-files.md).

Vedere le sezioni seguenti per altre informazioni:

- [Regole relative alle istruzioni di definizione dei moduli](rules-for-module-definition-statements.md)

- [EXPORTS](exports.md)

- [HEAPSIZE](heapsize.md)

- [LIBRARY](library.md)

- [NAME](name-c-cpp.md)

- [SEZIONI](sections-c-cpp.md)

- [STACKSIZE](stacksize.md)

- [STUB](stub.md)

- [VERSION](version-c-cpp.md)

- [Parole riservate](reserved-words.md)

## <a name="see-also"></a>Vedere anche

[Riferimenti alla compilazione in C/C++](c-cpp-building-reference.md)<br/>
[Opzioni del linker MSVC](linker-options.md)

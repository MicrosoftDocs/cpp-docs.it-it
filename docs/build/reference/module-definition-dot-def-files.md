---
description: 'Ulteriori informazioni su: Module-Definition (. File def)'
title: File di definizione moduli (DEF)
ms.date: 11/04/2016
helpviewer_keywords:
- def files
- module definition files
- .def files
ms.assetid: 08c0bc28-c5d2-47aa-9624-7fc68bcaa4d8
ms.openlocfilehash: d52141a2917b2c82616597b2d070a84b96d1a653
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97137813"
---
# <a name="module-definition-def-files"></a>File di definizione moduli (DEF)

I file di definizione moduli (con estensione def) forniscono al linker informazioni su esportazioni, attributi e altre informazioni sul programma da collegare. Un file con estensione def è particolarmente utile quando si compila una DLL. Poiché sono disponibili [Opzioni del linker MSVC](linker-options.md) che possono essere usate al posto delle istruzioni di definizione dei moduli, i file con estensione def non sono in genere necessari. È inoltre possibile utilizzare [__declspec (dllexport)](../exporting-from-a-dll-using-declspec-dllexport.md) come metodo per specificare le funzioni esportate.

È possibile richiamare un file con estensione def durante la fase del linker con l'opzione del linker [/def (specificare il file di Module-Definition)](def-specify-module-definition-file.md) .

Se si compila un file con estensione exe privo di esportazioni, l'utilizzo di un file con estensione def renderà il caricamento del file di output maggiore e più lento.

Per un esempio, vedere [esportazione da una dll tramite i file def](../exporting-from-a-dll-using-def-files.md).

Per ulteriori informazioni, vedere le sezioni seguenti:

- [Regole per Module-Definition istruzioni](rules-for-module-definition-statements.md)

- [Esporta](exports.md)

- [HEAPSIZE](heapsize.md)

- [LIBRERIA](library.md)

- [NOME](name-c-cpp.md)

- [SEZIONI](sections-c-cpp.md)

- [STACKSIZE](stacksize.md)

- [STUB](stub.md)

- [VERSION](version-c-cpp.md)

- [Parole riservate](reserved-words.md)

## <a name="see-also"></a>Vedi anche

[Riferimenti alla compilazione in C/C++](c-cpp-building-reference.md)<br/>
[Opzioni del linker MSVC](linker-options.md)

---
title: Parole riservate
ms.date: 11/04/2016
f1_keywords:
- code
- CONFORMING
- DISCARDABLE
- Description
- base
- APPLOADER
- Data
- DYNAMIC
- DEV386
helpviewer_keywords:
- .def files [C++], reserved words
- def files [C++], reserved words
- linker [C++], reserved words
- reserved words [C++]
ms.assetid: 9b9f49e5-0739-45ab-a37e-81e3915ceb25
ms.openlocfilehash: 7d51f599dfb81dfa860e1bdba86c4372e80379fb
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57822444"
---
# <a name="reserved-words"></a>Parole riservate

Le parole seguenti sono riservate dal linker. Questi nomi possono essere utilizzati come argomenti nel [istruzioni di definizione moduli](module-definition-dot-def-files.md) solo se il nome è racchiuso tra virgolette doppie ("").

||||
|-|-|-|
|**APPLOADER**<sup>1</sup>|**INITINSTANCE**<sup>2</sup>|**PRELOAD**|
|**BASE**|**IOPL**|**PRIVATE**|
|**CODICE**|**LIBRARY**<sup>1</sup>|**PROTMODE**<sup>2</sup>|
|**CONFORME**|**LOADONCALL**<sup>1</sup>|**PURE**<sup>1</sup>|
|**DATA**|**LONGNAMES**<sup>2</sup>|**READONLY**|
|**DESCRIPTION**|**MOVABLE**<sup>1</sup>|**READWRITE**|
|**DEV386**|**MOVEABLE**<sup>1</sup>|**REALMODE**<sup>1</sup>|
|**DISCARDABLE**|**MULTIPLE**|**RESIDENTE**|
|**DYNAMIC**|**NAME**|**RESIDENTNAME**<sup>1</sup>|
|**EXECUTE-ONLY**|**NEWFILES**<sup>2</sup>|**SEZIONI**|
|**EXECUTEONLY**|**NODATA**<sup>1</sup>|**SEGMENTS**|
|**EXECUTEREAD**|**NOIOPL**<sup>1</sup>|**SHARED**|
|**EXETYPE**|**NONAME**|**SINGOLO**|
|**EXPORTS**|**NONCONFORMING**<sup>1</sup>|**STACKSIZE**|
|**FISSO**<sup>1</sup>|**NONDISCARDABLE**|**STUB**|
|**LE FUNZIONI**<sup>2</sup>|**NESSUNO**|**VERSION**|
|**HEAPSIZE**|**NON CONDIVISI**|**WINDOWAPI**|
|**IMPORTS**|**NOTWINDOWCOMPAT**<sup>1</sup>|**WINDOWCOMPAT**|
|**IMPURE**<sup>1</sup>|**OBJECTS**|**WINDOWS**|
|**INCLUDE**<sup>2</sup>|**OLD**<sup>1</sup>||

<sup>1</sup> il linker genera un avviso ("ignorato") quando rileva questo termine. Tuttavia, la parola è ancora riservata.

<sup>2</sup> linker ignora questa parola ma non genera alcun avviso.

## <a name="see-also"></a>Vedere anche

- [Informazioni di riferimento sul linker MSVC](linking.md)
- [Opzioni del linker MSVC](linker-options.md)
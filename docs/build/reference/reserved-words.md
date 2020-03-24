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
ms.openlocfilehash: 16caacb77e052eebc8e2cd101990ee373535bd6e
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80171151"
---
# <a name="reserved-words"></a>Parole riservate

Le parole seguenti sono riservate al linker. Questi nomi possono essere utilizzati come argomenti nelle [istruzioni di definizione dei moduli](module-definition-dot-def-files.md) solo se il nome è racchiuso tra virgolette doppie ("").

||||
|-|-|-|
|**Apploader**<sup>1</sup>|**INITINSTANCE**<sup>2</sup>|**PRECARICARE**|
|**BASE**|**IOPL**|**PRIVATA**|
|**CODICE**|**Libreria**<sup>1</sup>|**PROTMODE**<sup>2</sup>|
|**CONFORMI**|**LOADONCALL**<sup>1</sup>|**Pure**<sup>1</sup>|
|**DATI**|**LONGNAMES**<sup>2</sup>|**READONLY**|
|**DESCRIZIONE**|**Mobile**<sup>1</sup>|**READWRITE**|
|**DEV386**|**Mobile**<sup>1</sup>|**REALMODE**<sup>1</sup>|
|**ANNULLABILE**|**PIÙ**|**RESIDENTI**|
|**DINAMICO**|**NOME**|**RESIDENTNAME**<sup>1</sup>|
|**SOLO ESECUZIONE**|**NewFiles**<sup>2</sup>|**SEZIONI**|
|**EXECUTEONLY**|**NoData**<sup>1</sup>|**SEGMENTI**|
|**ESECUZIONESCRITTURA**|**NOIOPL**<sup>1</sup>|**CONDIVISO**|
|**EXETYPE**|**NONAME**|**SINGOLO**|
|**EXPORTS**|Non **conforme**<sup>1</sup>|**STACKSIZE**|
|**Corretto**<sup>1</sup>|**Non ELIMINAbile**|**STUB**|
|**Funzioni**<sup>2</sup>|**NONE**|**VERSION**|
|**HEAPSIZE**|**NONSHARED**|**WINDOWAPI**|
|**IMPORTAZIONI**|**NOTWINDOWCOMPAT**<sup>1</sup>|**WINDOWCOMPAT**|
|**Impure**<sup>1</sup>|**OGGETTI**|**WINDOWS**|
|**Includi**<sup>2</sup>|**Vecchio**<sup>1</sup>||

<sup>1</sup> il linker genera un avviso ("ignorato") quando rileva questo termine. Tuttavia, la parola è ancora riservata.

<sup>2</sup> il linker ignora questa parola ma non emette alcun avviso.

## <a name="see-also"></a>Vedere anche

- [Informazioni di riferimento sul linker MSVC](linking.md)
- [Opzioni del linker MSVC](linker-options.md)

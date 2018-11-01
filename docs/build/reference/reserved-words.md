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
ms.openlocfilehash: 360baf479f9100483fe694ca8860dfc1d7ebfe11
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50502466"
---
# <a name="reserved-words"></a>Parole riservate

Le parole seguenti sono riservate dal linker. Questi nomi possono essere utilizzati come argomenti nel [istruzioni di definizione moduli](../../build/reference/module-definition-dot-def-files.md) solo se il nome è racchiuso tra virgolette doppie ("").

||||
|-|-|-|
|**APPLOADER**<sup>1</sup>|**INITINSTANCE**<sup>2</sup>|**PRECARICAMENTO**|
|**BASE**|**IOPL**|**PRIVATO**|
|**CODICE**|**LIBRERIA**<sup>1</sup>|**PROTMODE**<sup>2</sup>|
|**CONFORME**|**LOADONCALL**<sup>1</sup>|**PURA**<sup>1</sup>|
|**DATI**|**LONGNAMES**<sup>2</sup>|**SOLA LETTURA**|
|**DESCRIZIONE**|**MOBILE**<sup>1</sup>|**LETTURA/SCRITTURA**|
|**DEV386**|**MOVEABLE**<sup>1</sup>|**REALMODE**<sup>1</sup>|
|**SCARICABILE**|**PIÙ**|**RESIDENTE**|
|**DINAMICA**|**NOME**|**RESIDENTNAME**<sup>1</sup>|
|**SOLA ESECUZIONE**|**NEWFILES**<sup>2</sup>|**SEZIONI**|
|**EXECUTEONLY**|**NODATA**<sup>1</sup>|**SEGMENTI**|
|**ESECUZIONESCRITTURA**|**NOIOPL**<sup>1</sup>|**CONDIVISO**|
|**EXETYPE**|**NONAME**|**SINGOLO**|
|**EXPORTS**|**NON CONFORME**<sup>1</sup>|**STACKSIZE**|
|**FISSO**<sup>1</sup>|**NONDISCARDABLE**|**STUB**|
|**LE FUNZIONI**<sup>2</sup>|**NESSUNO**|**VERSIONE**|
|**HEAPSIZE**|**NON CONDIVISI**|**WINDOWAPI**|
|**IMPORTAZIONI**|**NOTWINDOWCOMPAT**<sup>1</sup>|**WINDOWCOMPAT**|
|**IMPURI**<sup>1</sup>|**OGGETTI**|**WINDOWS**|
|**INCLUDERE**<sup>2</sup>|**VECCHIO**<sup>1</sup>||

<sup>1</sup> il linker genera un avviso ("ignorato") quando rileva questo termine. Tuttavia, la parola è ancora riservata.

<sup>2</sup> linker ignora questa parola ma non genera alcun avviso.

## <a name="see-also"></a>Vedere anche

- [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)
- [Opzioni del linker](../../build/reference/linker-options.md)
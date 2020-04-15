---
title: File di input LINK
ms.date: 11/04/2016
helpviewer_keywords:
- files [C++], LINK
- module definition files
- resources [C++], linker files
- LINK tool [C++], input files
- module definition files, linker files
- input files [C++], LINK
- linker [C++], input files
- import libraries [C++], linker files
- command input to linker files [C++]
ms.assetid: bb26fcc5-509a-4620-bc3e-b6c6e603a412
ms.openlocfilehash: aec71d4622821618f377953d36a9676e2233eefc
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81328196"
---
# <a name="link-input-files"></a>File di input LINK

Fornire al linker file che contengono oggetti, librerie di importazione e standard, risorse, definizioni di moduli e input di comandi. IN LINK non vengono utilizzate le estensioni di file per formulare ipotesi sul contenuto di un file. Al contrario, LINK esamina ogni file di input per determinare il tipo di file.

I file oggetto nella riga di comando vengono elaborati nell'ordine in cui appaiono nella riga di comando. Anche le librerie vengono cercate in ordine della riga di comando, con la seguente avvertenza: i simboli che non sono risolti quando si porta un file oggetto da una libreria vengono cercati prima in tale libreria, quindi le seguenti librerie dalla riga di comando e le direttive [/DEFAULTLIB (Specifica libreria predefinita)](defaultlib-specify-default-library.md) e quindi a tutte le librerie all'inizio della riga di comando.

> [!NOTE]
> LINK non accetta più un punto e virgola (o qualsiasi altro carattere) come inizio di un commento nei file di risposta e nei file di ordine. I punti e virgola vengono riconosciuti solo come inizio dei commenti nei file di definizione moduli (def).

IN LINK vengono utilizzati i seguenti tipi di file di input:

- [OBJ (file)](dot-obj-files-as-linker-input.md)

- [File .netmodule](netmodule-files-as-linker-input.md)

- [lib (file)](dot-lib-files-as-linker-input.md)

- [File .exp](dot-exp-files-as-linker-input.md)

- [File .def](dot-def-files-as-linker-input.md)

- [File con estensione pdb](dot-pdb-files-as-linker-input.md)

- [File con estensione res](dot-res-files-as-linker-input.md)

- [.exe (file)](dot-exe-files-as-linker-input.md)

- [.txt (file)](dot-txt-files-as-linker-input.md)

- [ilk (file)](dot-ilk-files-as-linker-input.md)

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)

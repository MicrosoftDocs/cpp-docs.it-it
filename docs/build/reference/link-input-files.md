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
ms.openlocfilehash: 25d8e20903a97186e2c32a079fd74ece3626b7fa
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79439347"
---
# <a name="link-input-files"></a>File di input LINK

Si fornisce al linker i file che contengono oggetti, le librerie standard e di importazione, le risorse, le definizioni dei moduli e l'input del comando. Il collegamento non usa le estensioni di file per creare presupposti sul contenuto di un file. Al contrario, il collegamento esamina ogni file di input per determinare il tipo di file.

I file oggetto nella riga di comando vengono elaborati nell'ordine in cui vengono visualizzati nella riga di comando. Le librerie vengono ricercate anche nell'ordine della riga di comando, con l'avvertenza seguente: i simboli che non sono stati risolti quando si porta un file oggetto da una libreria vengono cercati prima in tale libreria, quindi le librerie seguenti dalla riga di comando e le direttive [/DEFAULTLIB (specifica la libreria predefinita)](defaultlib-specify-default-library.md) e quindi a tutte le librerie all'inizio della riga di comando.

> [!NOTE]
>  Il collegamento non accetta più un punto e virgola (o qualsiasi altro carattere) come inizio di un commento nei file di risposta e negli ordini. I punti e virgola vengono riconosciuti solo come inizio dei commenti nei file di definizione moduli (con estensione def).

Il collegamento USA i seguenti tipi di file di input:

- [file con estensione obj](dot-obj-files-as-linker-input.md)

- [file con estensione netmodule](netmodule-files-as-linker-input.md)

- [file lib](dot-lib-files-as-linker-input.md)

- [file exp](dot-exp-files-as-linker-input.md)

- [file def](dot-def-files-as-linker-input.md)

- [PDB (file)](dot-pdb-files-as-linker-input.md)

- [file res](dot-res-files-as-linker-input.md)

- [file con estensione exe](dot-exe-files-as-linker-input.md)

- [file con estensione txt](dot-txt-files-as-linker-input.md)

- [file ilk](dot-ilk-files-as-linker-input.md)

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)

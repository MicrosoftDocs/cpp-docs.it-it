---
title: File di input LINK
ms.date: 11/04/2016
f1_keywords:
- link
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
ms.openlocfilehash: 48ad9423ae35c22a97a873fe6a2a0479c12ab33b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62291509"
---
# <a name="link-input-files"></a>File di input LINK

Il linker è fornire con i file che contengono oggetti, importazione e librerie standard, le risorse, definizioni di moduli e comandi di input. COLLEGAMENTO non utilizza estensioni di file per fare ipotesi sul contenuto di un file. Al contrario, collegamento esamina ogni file di input per determinare quale tipo di file è.

Oggetto file nella riga di comando vengono elaborati in ordine che vengono visualizzati nella riga di comando. Le librerie vengono cercate nella riga di comando di ordinamento, con l'eccezione è rappresentata dal seguente: Simboli non risolti quando assolutamente innovativo, in un file di oggetti da una raccolta vengono cercati in tale raccolta prima di tutto, quindi le librerie seguenti dalla riga di comando e [/DEFAULTLIB (specifica di libreria predefinita)](defaultlib-specify-default-library.md) direttive e quindi a tutte le librerie all'inizio della riga di comando.

> [!NOTE]
>  COLLEGAMENTO non accetta più un punto e virgola (o qualsiasi altro carattere) come l'inizio di un commento nel file di risposta e ordinare i file. Un punto e virgola viene riconosciuto solo come punto di partenza di commenti nei file di definizione moduli (def).

COLLEGAMENTO Usa i tipi di file di input seguenti:

- [file con estensione obj](dot-obj-files-as-linker-input.md)

- [file con estensione netmodule](netmodule-files-as-linker-input.md)

- [file con estensione LIB](dot-lib-files-as-linker-input.md)

- [file EXP](dot-exp-files-as-linker-input.md)

- [DEF (file)](dot-def-files-as-linker-input.md)

- [file con estensione pdb](dot-pdb-files-as-linker-input.md)

- [file res](dot-res-files-as-linker-input.md)

- [file .exe](dot-exe-files-as-linker-input.md)

- [.txt files](dot-txt-files-as-linker-input.md)

- [ILK (file)](dot-ilk-files-as-linker-input.md)

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)

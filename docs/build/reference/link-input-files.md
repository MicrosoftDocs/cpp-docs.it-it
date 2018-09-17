---
title: I file di Input di collegamento | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- link
dev_langs:
- C++
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5974914e736278ebb336b6814661845740855fe6
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45710241"
---
# <a name="link-input-files"></a>File di input LINK

Il linker è fornire con i file che contengono oggetti, importazione e librerie standard, le risorse, definizioni di moduli e comandi di input. COLLEGAMENTO non utilizza estensioni di file per fare ipotesi sul contenuto di un file. Al contrario, collegamento esamina ogni file di input per determinare quale tipo di file è.

Oggetto file nella riga di comando vengono elaborati in ordine che vengono visualizzati nella riga di comando. Vengono effettuata la ricerca di librerie nella riga di comando di ordinamento, precisando seguenti: simboli non risolti quando assolutamente innovativo, in un file di oggetti da una raccolta vengono cercati in tale raccolta prima di tutto, quindi le librerie seguenti dalla riga di comando e [/DEFAULTLIB (specifica di libreria predefinita)](../../build/reference/defaultlib-specify-default-library.md) direttive e quindi a tutte le librerie all'inizio della riga di comando.

> [!NOTE]
>  COLLEGAMENTO non accetta più un punto e virgola (o qualsiasi altro carattere) come l'inizio di un commento nel file di risposta e ordinare i file. Un punto e virgola viene riconosciuto solo come punto di partenza di commenti nei file di definizione moduli (def).

COLLEGAMENTO Usa i tipi di file di input seguenti:

- [file con estensione obj](../../build/reference/dot-obj-files-as-linker-input.md)

- [file con estensione netmodule](../../build/reference/netmodule-files-as-linker-input.md)

- [file con estensione LIB](../../build/reference/dot-lib-files-as-linker-input.md)

- [file EXP](../../build/reference/dot-exp-files-as-linker-input.md)

- [DEF (file)](../../build/reference/dot-def-files-as-linker-input.md)

- [file con estensione pdb](../../build/reference/dot-pdb-files-as-linker-input.md)

- [file res](../../build/reference/dot-res-files-as-linker-input.md)

- [file .exe](../../build/reference/dot-exe-files-as-linker-input.md)

- [file con estensione txt](../../build/reference/dot-txt-files-as-linker-input.md)

- [ILK (file)](../../build/reference/dot-ilk-files-as-linker-input.md)

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)
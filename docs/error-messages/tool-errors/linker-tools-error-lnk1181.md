---
title: Errore degli strumenti del linker LNK1181
ms.date: 08/22/2018
f1_keywords:
- LNK1181
helpviewer_keywords:
- LNK1181
ms.assetid: 984b0db6-e331-4284-b2a7-a212fe96c486
ms.openlocfilehash: 657e78ece2ce4039eb8dc8561abd455c60aaff75
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62254920"
---
# <a name="linker-tools-error-lnk1181"></a>Errore degli strumenti del linker LNK1181

Impossibile aprire il file di input 'filename'

Non è riuscito a trovare il linker `filename` perché non esiste o il percorso non trovato.

Alcune cause comuni dell'errore LNK1181 includono:

- `filename` viene fatto riferimento come dipendenza aggiuntiva nella riga del linker, ma il file non esiste.

- Oggetto **/LIBPATH** istruzione che specifica la directory contenente `filename` mancante.

Per risolvere i problemi riportati sopra, assicurarsi che tutti i file cui viene fatto riferimento nella riga del linker sono presenti nel sistema.  Assicurarsi inoltre che vi sia un **/LIBPATH** istruzione per ogni directory che contiene un file dipendente dal linker.

Per altre informazioni, vedere [file con estensione LIB come Input del Linker](../../build/reference/dot-lib-files-as-linker-input.md).

Un'altra possibile causa LNK1181 è un nome di file lungo con spazi vuoti non è stato racchiuso tra virgolette.  In tal caso, il linker riconosce solo un nome di file precede il primo spazio e si supponga quindi di un'estensione di file. obj.  La soluzione al problema consiste nel racchiudere il nome di file lunghi (nome del percorso, più file) racchiusi tra virgolette.

La compilazione con il [/P (pre-elabora in un File)](../../build/reference/p-preprocess-to-a-file.md) opzione può comportare LNK1181 perché tale opzione non viene eseguita la creazione di file con estensione obj.

## <a name="see-also"></a>Vedere anche

[/LIBPATH (percorso LIB aggiuntivo)](../../build/reference/libpath-additional-libpath.md)
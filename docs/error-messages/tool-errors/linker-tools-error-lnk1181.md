---
title: Errore degli strumenti del linker LNK1181
ms.date: 08/22/2018
f1_keywords:
- LNK1181
helpviewer_keywords:
- LNK1181
ms.assetid: 984b0db6-e331-4284-b2a7-a212fe96c486
ms.openlocfilehash: d2b28af52a2ca2263a7bad77c8c69242396ff2b4
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80195253"
---
# <a name="linker-tools-error-lnk1181"></a>Errore degli strumenti del linker LNK1181

non è possibile aprire il file di input ' filename '

Il linker non è riuscito a trovare `filename` perché non esiste o il percorso non è stato trovato.

Di seguito sono riportate alcune cause comuni di errore LNK1181:

- viene fatto riferimento a `filename` come dipendenza aggiuntiva dalla riga del linker, ma il file non esiste.

- Un'istruzione **/LIBPATH** che specifica la directory che contiene `filename` è mancante.

Per risolvere i problemi sopra indicati, verificare che nel sistema siano presenti file a cui viene fatto riferimento nella riga del linker.  Assicurarsi inoltre che sia presente un'istruzione **/LIBPATH** per ogni directory contenente un file dipendente dal linker.

Per altre informazioni, vedere [file lib come input del linker](../../build/reference/dot-lib-files-as-linker-input.md).

Un'altra possibile provocazione di LNK1181 è che un nome di file lungo con spazi incorporati non è racchiuso tra virgolette.  In tal caso, il linker riconosce solo un nome file fino al primo spazio, quindi presuppone un'estensione di file. obj.  La soluzione a questa situazione consiste nell'racchiudere il nome file lungo (percorso più il nome file) tra virgolette.

La compilazione con l'opzione [/p (pre-elabora in un file)](../../build/reference/p-preprocess-to-a-file.md) può comportare la creazione di LNK1181 perché tale opzione impedisce la creazione di file con estensione obj.

## <a name="see-also"></a>Vedere anche

[/LIBPATH (percorso LIB aggiuntivo)](../../build/reference/libpath-additional-libpath.md)

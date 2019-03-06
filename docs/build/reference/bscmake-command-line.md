---
title: Riga di comando di BSCMAKE
ms.date: 11/04/2016
helpviewer_keywords:
- BSCMAKE, command line
ms.assetid: 8006e8cf-8bfe-4c23-868a-b0a25e6bbf0f
ms.openlocfilehash: b6268eb6d0ea39e72a1d8fd40ab563347c05f0c6
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57416839"
---
# <a name="bscmake-command-line"></a>Riga di comando di BSCMAKE

Per eseguire BSCMAKE, usare la sintassi della riga di comando seguente:

```
BSCMAKE [options] sbrfiles
```

Le opzioni possono essere visualizzati solo nel `options` campo nella riga di comando.

Il *sbrfiles è possibile* campo specifica uno o più file SBR creati da un compilatore o l'assembler. Separare i nomi dei file sbr con spazi o tabulazioni. È necessario specificare l'estensione. non prevede alcun valore predefinito. È possibile specificare un percorso con il nome del file e si possono usare caratteri jolly del sistema operativo (\* e?).

Durante una compilazione incrementale, è possibile specificare nuovi file sbr che non facevano parte della compilazione originale. Se si desidera che tutti i contributi di rimanere nel file di informazioni di visualizzazione, è necessario specificare tutti i file SBR (tra cui file troncati) che sono stati utilizzati originariamente per creare il file BSC. Se si omette un file sbr, i relativi contributi per il file di informazioni viene rimosso.

Non si specifica un file SBR troncati per una compilazione completa. Una build completa richiede i contributi di tutti i file SBR specificato. Prima di eseguire una build completa, ricompilare il progetto e creare un nuovo file sbr per ogni file vuoto.

Il comando seguente esegue BSCMAKE per compilare un file denominato Main. BSC dai tre file SBR:

```
BSCMAKE main.sbr file1.sbr file2.sbr
```

Per informazioni correlate, vedere [File di comando di BSCMAKE](../../build/reference/bscmake-command-file-response-file.md) e [opzioni di BSCMAKE](../../build/reference/bscmake-options.md).

## <a name="see-also"></a>Vedere anche

[Riferimento a BSCMAKE](../../build/reference/bscmake-reference.md)

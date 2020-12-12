---
description: 'Altre informazioni su: riga di comando di BSCMAKE'
title: Riga di comando di BSCMAKE
ms.date: 11/04/2016
helpviewer_keywords:
- BSCMAKE, command line
ms.assetid: 8006e8cf-8bfe-4c23-868a-b0a25e6bbf0f
ms.openlocfilehash: a0d6cb81fb207c30cd89fbfe3a988380a865a399
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97182658"
---
# <a name="bscmake-command-line"></a>Riga di comando di BSCMAKE

> [!WARNING]
> Sebbene BSCMAKE venga ancora installato con Visual Studio, non viene più usato dall'IDE. A partire da Visual Studio 2008, le informazioni di visualizzazione e sui simboli vengono automaticamente archiviate in un file sdf di SQL Server nella cartella della soluzione.

Per eseguire BSCMAKE, usare la sintassi della riga di comando seguente:

```
BSCMAKE [options] sbrfiles
```

Le opzioni possono essere visualizzate solo nel `options` campo nella riga di comando.

Il campo *sbrfiles* specifica uno o più file SBR creati da un compilatore o un assembler. Separare i nomi dei file SBR con spazi o tabulazioni. È necessario specificare l'estensione. non esiste alcun valore predefinito. È possibile specificare un percorso con il nome del file ed è possibile usare i caratteri jolly del sistema operativo ( \* e?).

Durante una compilazione incrementale, è possibile specificare nuovi file SBR che non facevano parte della compilazione originale. Se si desidera che tutti i contributi rimangano nel file di informazioni di visualizzazione, è necessario specificare tutti i file SBR (inclusi i file troncati) usati originariamente per creare il file BSC. Se si omette un file SBR, il contributo del file al file di informazioni di visualizzazione verrà rimosso.

Non specificare un file SBR troncato per una compilazione completa. Una compilazione completa richiede contributi da tutti i file sbr specificati. Prima di eseguire una compilazione completa, ricompilare il progetto e creare un nuovo file SBR per ogni file vuoto.

Il comando seguente esegue BSCMAKE per compilare un file denominato MAIN. BSC da tre file SBR:

```
BSCMAKE main.sbr file1.sbr file2.sbr
```

Per informazioni correlate, vedere [file di comando BSCMAKE](bscmake-command-file-response-file.md) e [Opzioni BSCMAKE](bscmake-options.md).

## <a name="see-also"></a>Vedi anche

[Riferimento a BSCMAKE](bscmake-reference.md)

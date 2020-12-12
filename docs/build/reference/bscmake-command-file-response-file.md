---
description: 'Altre informazioni su: file di comando di BSCMAKE (file di risposta)'
title: File di comando di BSCMAKE (file di risposta)
ms.date: 11/04/2016
helpviewer_keywords:
- BSCMAKE, response file
- BSCMAKE, command file
- response files, BSCMAKE
- command files, BSCMAKE
- response files
- command files
ms.assetid: abdffeea-35c7-4f2d-8c17-7d0d80bac314
ms.openlocfilehash: 4bb321cd7aa705d7e33d0f539ab3e0aa2e3cb8bf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97187156"
---
# <a name="bscmake-command-file-response-file"></a>File di comando di BSCMAKE (file di risposta)

> [!WARNING]
> Sebbene BSCMAKE venga ancora installato con Visual Studio, non viene più usato dall'IDE. A partire da Visual Studio 2008, le informazioni di visualizzazione e sui simboli vengono automaticamente archiviate in un file sdf di SQL Server nella cartella della soluzione.

È possibile fornire parte o tutto l'input della riga di comando in un file di comando. Specificare il file di comando utilizzando la sintassi seguente:

```
BSCMAKE @filename
```

È consentito un solo file di comando. È possibile specificare un percorso con *filename*. Precede *filename* con un simbolo di chiocciola ( **\@** ). BSCMAKE non presuppone un'estensione. È possibile specificare *sbrfiles* aggiuntivi nella riga di comando dopo *filename*. Il file di comando è un file di testo che contiene l'input per BSCMAKE nello stesso ordine in cui viene specificato nella riga di comando. Separare gli argomenti della riga di comando con uno o più spazi, tabulazioni o caratteri di nuova riga.

Il comando seguente chiama BSCMAKE usando un file di comando:

```
BSCMAKE @prog1.txt
```

Di seguito è riportato un esempio di file di comando:

```
/n /v /o main.bsc /El
/S (
toolbox.h
verdate.h c:\src\inc\screen.h
)
file1.sbr file2.sbr file3.sbr file4.sbr
```

## <a name="see-also"></a>Vedi anche

[Riferimento a BSCMAKE](bscmake-reference.md)

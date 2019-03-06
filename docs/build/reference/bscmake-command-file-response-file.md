---
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
ms.openlocfilehash: 43f5a886dd41941a0675e31bc8c9d3f23c607023
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57426238"
---
# <a name="bscmake-command-file-response-file"></a>File di comando di BSCMAKE (file di risposta)

È possibile specificare parzialmente o totalmente l'input della riga di comando in un file di comando. Specificare il file di comando usando la sintassi seguente:

```
BSCMAKE @filename
```

Viene accettato un solo comando file. È possibile specificare un percorso con *filename*. Anteporre *nomefile* con un simbolo di chiocciola (**\@**). BSCMAKE non dispone di un'estensione. È possibile specificare ulteriori *sbrfiles è possibile* nella riga di comando dopo *filename*. Il file di comando è un file di testo che contiene l'input a BSCMAKE nello stesso ordine, come verrebbe specificato nella riga di comando. Separare gli argomenti della riga di comando con uno o più spazi, tabulazioni o caratteri di nuova riga.

Il comando seguente viene chiamato utilizzando un file di comando BSCMAKE:

```
BSCMAKE @prog1.txt
```

Di seguito è riportato un file di comando di esempio:

```
/n /v /o main.bsc /El
/S (
toolbox.h
verdate.h c:\src\inc\screen.h
)
file1.sbr file2.sbr file3.sbr file4.sbr
```

## <a name="see-also"></a>Vedere anche

[Riferimento a BSCMAKE](../../build/reference/bscmake-reference.md)

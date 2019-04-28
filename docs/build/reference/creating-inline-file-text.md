---
title: Creazione del testo di un file inline
ms.date: 11/04/2016
helpviewer_keywords:
- inline files, creating text
- NMAKE program, inline files
- text, inline file
ms.assetid: b8a332ed-8244-4ff8-89e6-029d7f659725
ms.openlocfilehash: a45aa526ca99af93cda86a2a8e0580d4d036ca6d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62272321"
---
# <a name="creating-inline-file-text"></a>Creazione del testo di un file inline

File inline possono essere temporaneo o permanente.

## <a name="syntax"></a>Sintassi

```
inlinetext
.
.
.
<<[KEEP | NOKEEP]
```

## <a name="remarks"></a>Note

Specificare *inlinetext* sulla prima riga dopo il comando. Contrassegnare la fine con doppie parentesi angolari (<<) all'inizio di una riga separata. Il file contiene tutti *inlinetext* prima di delimitazione tra parentesi quadre. Il *inlinetext* può contenere espansioni della macro e le sostituzioni, ma non le direttive o commenti makefile. Gli spazi, tabulazioni e caratteri di nuova riga vengono trattati in modo letterale.

Un file temporaneo esisterà per la durata della sessione e può essere riutilizzato da altri comandi. Specificare **mantenere** dopo le parentesi acute chiusura per conservare il file al termine della sessione NMAKE; un file senza nome verrà mantenuto su disco con il nome del file generato. Specificare **NOKEEP** o nessun segno per un file temporaneo. **MANTIENI** e **NOKEEP** non sono tra maiuscole e minuscole.

## <a name="see-also"></a>Vedere anche

[File inline in un makefile](inline-files-in-a-makefile.md)

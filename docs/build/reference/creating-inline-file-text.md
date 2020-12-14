---
description: 'Altre informazioni su: creazione di testo di file inline'
title: Creazione del testo di un file inline
ms.date: 11/04/2016
helpviewer_keywords:
- inline files, creating text
- NMAKE program, inline files
- text, inline file
ms.assetid: b8a332ed-8244-4ff8-89e6-029d7f659725
ms.openlocfilehash: 849273fff4ca0853e4589a38096cbb067c380aae
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97196854"
---
# <a name="creating-inline-file-text"></a>Creazione del testo di un file inline

I file inline sono temporanei o permanenti.

## <a name="syntax"></a>Sintassi

```
inlinetext
.
.
.
<<[KEEP | NOKEEP]
```

## <a name="remarks"></a>Osservazioni

Specificare *inlinetext* nella prima riga dopo il comando. Contrassegnare la fine con parentesi quadre doppie (<<) all'inizio di una riga separata. Il file contiene tutti *inlinetext* prima delle parentesi di delimitazione. *Inlinetext* può includere espansioni e sostituzioni di macro, ma non direttive o commenti Makefile. Spazi, tabulazioni e caratteri di nuova riga vengono trattati letteralmente.

Un file temporaneo esiste per la durata della sessione e può essere riutilizzato da altri comandi. Specificare **Mantieni** dopo le parentesi angolari di chiusura per mantenere il file dopo la sessione NMAKE; un file senza nome viene mantenuto su disco con il nome file generato. Specificare **nokeep** o Nothing per un file temporaneo. **Keep** e **nokeep** non fanno distinzione tra maiuscole e minuscole.

## <a name="see-also"></a>Vedi anche

[File inline in un makefile](inline-files-in-a-makefile.md)

---
title: Creazione di testo di un File Inline | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- inline files, creating text
- NMAKE program, inline files
- text, inline file
ms.assetid: b8a332ed-8244-4ff8-89e6-029d7f659725
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ce0a345c6c2f48d3d5c2e6fb9d9cfc2a5c03e4ed
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45720917"
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

[File inline in un makefile](../build/inline-files-in-a-makefile.md)
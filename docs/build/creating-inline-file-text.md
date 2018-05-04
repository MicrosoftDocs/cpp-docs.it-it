---
title: Creazione di testo File Inline | Documenti Microsoft
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
ms.openlocfilehash: 3ab1154935ac4eb8b0595c84ba8d75a9ca13e4d3
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="creating-inline-file-text"></a>Creazione del testo di un file inline
File inline sono temporaneo o permanente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      inlinetext  
.  
.  
.  
<<[KEEP | NOKEEP]  
```  
  
## <a name="remarks"></a>Note  
 Specificare *inlinetext* nella prima riga dopo il comando. Contrassegnare la fine con doppie parentesi angolari (<<) all'inizio di una riga separata. Il file contiene tutte *inlinetext* precede le parentesi di delimitazione. Il *inlinetext* può contenere espansioni della macro e le sostituzioni, ma non le direttive o commenti di makefile. Gli spazi, tabulazioni e caratteri di nuova riga vengono trattati letteralmente.  
  
 Un file temporaneo per la durata della sessione e può essere riutilizzato da altri comandi. Specificare **mantenere** dopo le parentesi angolari di chiusura per conservare il file al termine della sessione NMAKE; un file senza nome verrà mantenuto su disco con il nome del file generato. Specificare **NOKEEP** o nessun segno per un file temporaneo. **MANTENERE** e **NOKEEP** non sono più distinzione maiuscole / minuscole.  
  
## <a name="see-also"></a>Vedere anche  
 [File inline in un makefile](../build/inline-files-in-a-makefile.md)
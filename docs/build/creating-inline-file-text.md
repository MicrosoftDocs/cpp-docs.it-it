---
title: Creazione di testo File Inline | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- inline files, creating text
- NMAKE program, inline files
- text, inline file
ms.assetid: b8a332ed-8244-4ff8-89e6-029d7f659725
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: dcc27a303e9d03d2e899a76703bcfae5abfd0c04
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
  
 Un file temporaneo per la durata della sessione e può essere riutilizzato da altri comandi. Specificare **mantenere** dopo le parentesi angolari di chiusura per conservare il file al termine della sessione NMAKE; un file senza nome verrà mantenuto su disco con il nome del file generato. Specificare **NOKEEP** o nessun segno per un file temporaneo. **MANTENERE** e **NOKEEP** non sono tra maiuscole e minuscole.  
  
## <a name="see-also"></a>Vedere anche  
 [File inline in un makefile](../build/inline-files-in-a-makefile.md)
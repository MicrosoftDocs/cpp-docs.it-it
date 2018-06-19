---
title: Riga di comando BSCMAKE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- BSCMAKE, command line
ms.assetid: 8006e8cf-8bfe-4c23-868a-b0a25e6bbf0f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7866d2960acdd89c3015470ef3971307ba162cd3
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32369497"
---
# <a name="bscmake-command-line"></a>Riga di comando di BSCMAKE
Per eseguire BSCMAKE, utilizzare la sintassi della riga di comando seguente:  
  
```  
BSCMAKE [options] sbrfiles  
```  
  
 Le opzioni possono apparire solo nel `options` campo nella riga di comando.  
  
 Il *sbrfiles è possibile* campo specifica uno o più file SBR creati da un compilatore o l'assembler. Separare i nomi dei file sbr con spazi o tabulazioni. È necessario specificare l'estensione. non vi è alcun valore predefinito. È possibile specificare un percorso con il nome del file e, è possibile utilizzare caratteri jolly del sistema operativo (* e?).  
  
 Durante una compilazione incrementale, è possibile specificare i nuovi file sbr che non sono parte della compilazione originale. Se si desidera tutti i contributi deve rimanere nel file di informazioni di visualizzazione, è necessario specificare tutti i file SBR (compresi i file troncati) che sono stati originariamente utilizzati per creare il file BSC. Se si omette un file sbr, viene rimosso il contributo del file per il file di informazioni.  
  
 Non specificare un file SBR troncati per una compilazione completa. Una compilazione completa richiede i contributi di tutti i file SBR specificato. Prima di eseguire una compilazione completa, ricompilare il progetto e creare un nuovo file sbr per ogni file vuoto.  
  
 Il comando seguente esegue BSCMAKE per compilare un file chiamato Main. BSC da tre file SBR:  
  
```  
BSCMAKE main.sbr file1.sbr file2.sbr  
```  
  
 Per informazioni correlate, vedere [File di comando di BSCMAKE](../../build/reference/bscmake-command-file-response-file.md) e [opzioni BSCMAKE](../../build/reference/bscmake-options.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a BSCMAKE](../../build/reference/bscmake-reference.md)
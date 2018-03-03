---
title: File di comando BSCMAKE (File di risposta) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- BSCMAKE, response file
- BSCMAKE, command file
- response files, BSCMAKE
- command files, BSCMAKE
- response files
- command files
ms.assetid: abdffeea-35c7-4f2d-8c17-7d0d80bac314
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 0c250af9f1af96bb051be0b2cd347ecd8d98d809
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="bscmake-command-file-response-file"></a>File di comando di BSCMAKE (file di risposta)
È possibile fornire parzialmente o totalmente l'input della riga di comando in un file di comando. Specificare il file di comando utilizzando la sintassi seguente:  
  
```  
BSCMAKE @filename  
```  
  
 File di un solo comando è consentito. È possibile specificare un percorso con *filename*. Anteporre *filename* con un simbolo di chiocciola (@). BSCMAKE non dispone di un'estensione. È possibile specificare ulteriori *sbrfiles è possibile* nella riga di comando dopo *filename*. Il file di comando è un file di testo contenente l'input BSCMAKE nello stesso ordine si specificherà nella riga di comando. Separare gli argomenti della riga di comando con uno o più spazi, tabulazioni o caratteri di nuova riga.  
  
 BSCMAKE utilizzando un file di comando viene chiamato il comando seguente:  
  
```  
BSCMAKE @prog1.txt  
```  
  
 Di seguito è un file di comando di esempio:  
  
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
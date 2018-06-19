---
title: Strumenti del linker LNK1201 errore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1201
dev_langs:
- C++
helpviewer_keywords:
- LNK1201
ms.assetid: 64c3f496-a428-4b54-981e-faa82ef9c8a1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5ad83fecfe4df211cb7c5f301626454b5d2c9e47
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33298769"
---
# <a name="linker-tools-error-lnk1201"></a>Errore degli strumenti del linker LNK1201
Errore durante la scrittura nel database di programma 'nomefile'; Verificare la presenza di spazio su disco insufficiente o percorso non valido, privilegi insufficienti  
  
 COLLEGAMENTO non è possibile scrivere nel database di programma (PDB) per il file di output.  
  
### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili  
  
1.  File è danneggiato. Eliminare il file PDB e ripetere il collegamento.  
  
2.  Spazio su disco insufficiente per scrivere il file.  
  
3.  Unità non è disponibile, probabilmente a causa di un problema di rete.  
  
4.  Il debugger è attivo sul programma a cui che si sta cercando di collegarsi.  
  
5.  Spazio dell'heap insufficiente.  Vedere [C1060](../../error-messages/compiler-errors-1/fatal-error-c1060.md) per ulteriori informazioni.
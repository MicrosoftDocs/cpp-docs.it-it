---
title: Strumenti del linker LNK1201 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: LNK1201
dev_langs: C++
helpviewer_keywords: LNK1201
ms.assetid: 64c3f496-a428-4b54-981e-faa82ef9c8a1
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 44e2ad811645889cd655bf297f6f8b9492574def
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
---
title: Strumenti del linker LNK1140 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- LNK1140
dev_langs:
- C++
helpviewer_keywords:
- LNK1140
ms.assetid: 468d7651-a7cd-47b9-aead-5bb2fab56121
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a5a7bce157359d547f91ba2b560cf258e231b4a2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-error-lnk1140"></a>Errore degli strumenti del linker LNK1140
Troppi moduli per i database di programma. il collegamento con /PDB: NONE  
  
 Il progetto contiene più di 4096 moduli.  
  
### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili  
  
1.  Ripetere il collegamento utilizzando [/PDB: NONE](../../build/reference/pdb-use-program-database.md).  
  
2.  Compilare alcuni moduli senza informazioni di debug.  
  
3.  Ridurre il numero di moduli.
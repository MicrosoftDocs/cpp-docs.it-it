---
title: Strumenti del linker LNK1277 errore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1277
dev_langs:
- C++
helpviewer_keywords:
- LNK1277
ms.assetid: afca3de0-50cc-4140-af7a-13493a170835
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ec8f00793fcda748c60d9d8ea775611e3d025cd9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="linker-tools-error-lnk1277"></a>Errore degli strumenti del linker LNK1277
record dell'oggetto non trovato in pgd (nomefile)  
  
 Quando si utilizza [PGOPTIMZE](../../build/reference/ltcg-link-time-code-generation.md), il percorso di uno dei file di input lib, def o obj è diverso dal percorso in cui sono stati trovati durante /LTCG: PGINSTRUMENT. Può essere spiegato da una modifica nella variabile di ambiente LIB dopo /LTCG: PGINSTRUMENT. Il percorso completo per i file di input viene archiviato nel file pgd.  
  
 /LTCG: PGOPTIMIZE richiede che gli input siano identiche alla fase di /LTCG: PGINSTRUMENT.  
  
 Per risolvere il problema, effettuare una delle seguenti operazioni:  
  
-   Esecuzione di /LTCG: PGINSTRUMENT, ripristinare tutte le esecuzioni di test ed eseguire /LTCG: PGOPTIMIZE.  
  
-   Modificare la variabile di ambiente LIB in vigore al momento dell'esecuzione di /LTCG: PGINSTRUMENT.  
  
 Non è consigliabile risolvere LNK1277 utilizzando /LTCG: PGUPDATE.
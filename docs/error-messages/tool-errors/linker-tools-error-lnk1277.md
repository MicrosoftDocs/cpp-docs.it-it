---
title: Strumenti del linker LNK1277 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: LNK1277
dev_langs: C++
helpviewer_keywords: LNK1277
ms.assetid: afca3de0-50cc-4140-af7a-13493a170835
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3606207afc197dc26ac0540d476b74f52c0dc0a9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-error-lnk1277"></a>Errore degli strumenti del linker LNK1277
record dell'oggetto non trovato in pgd (nomefile)  
  
 Quando si utilizza [PGOPTIMZE](../../build/reference/ltcg-link-time-code-generation.md), il percorso di uno dei file di input lib, def o obj è diverso dal percorso in cui sono stati trovati durante /LTCG: PGINSTRUMENT. Può essere spiegato da una modifica nella variabile di ambiente LIB dopo /LTCG: PGINSTRUMENT. Il percorso completo per i file di input viene archiviato nel file pgd.  
  
 /LTCG: PGOPTIMIZE richiede che gli input siano identiche alla fase di /LTCG: PGINSTRUMENT.  
  
 Per risolvere il problema, effettuare una delle seguenti operazioni:  
  
-   Esecuzione di /LTCG: PGINSTRUMENT, ripristinare tutte le esecuzioni di test ed eseguire /LTCG: PGOPTIMIZE.  
  
-   Modificare la variabile di ambiente LIB in vigore al momento dell'esecuzione di /LTCG: PGINSTRUMENT.  
  
 Non è consigliabile risolvere LNK1277 utilizzando /LTCG: PGUPDATE.
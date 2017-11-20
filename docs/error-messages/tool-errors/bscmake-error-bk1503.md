---
title: Errore BK1503 di BSCMAKE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: BK1503
dev_langs: C++
helpviewer_keywords: BK1503
ms.assetid: e6582344-b91e-486f-baf3-4f9028d83c3b
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: c75e8513ead68befe2ca4ecd22475dc0a9071431
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="bscmake-error-bk1503"></a>Errore BK1503 di BSCMAKE
Impossibile scrivere nel file 'nomefile' [: motivo]  
  
 BSCMAKE unisce i file SBR generati durante la compilazione in un unico database. Se il database risultante supera i 64 MB, o se il numero di file di input (con estensione SBR) è maggiore di 4092, verrà generato l'errore.  
  
 Se il problema è causato da file SBR maggiore di 4092, è necessario ridurre il numero di file di input. Dall'interno di Visual Studio, questo può essere eseguito da [/FR](../../build/reference/fr-fr-create-dot-sbr-file.md) l'intero progetto, quindi nuova verifica su base file dal file.  
  
 Se il problema è causato da un file BSC maggiore di 64MB, riducendo il numero di file sbr come input ridurrà le dimensioni del file BSC risultante. Inoltre, la quantità di informazioni di visualizzazione potrebbe risultare ridotte tramite l'utilizzo di em (Exclude Macro Expanded Symbols), /El (escludere le variabili locali) e /Es (escludere i file di sistema).  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni di BSCMAKE](../../build/reference/bscmake-options.md)
---
title: Creazione di un. File SBR | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- SBR files
- BSCMAKE, input files
- .sbr files
- source browser files
- local symbols in browse information
- symbols
ms.assetid: bdb4b93c-a88a-441a-84fd-01087d03be25
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 1fb3638f70d19d88228b8ff65eb78c479868f1b9
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="creating-an-sbr-file"></a>Creazione di un file SBR
I file di input per BSCMAKE sono file SBR. Il compilatore crea un file sbr per ogni file oggetto (obj), che la compilazione. Quando si compila o aggiornamento del file di informazioni di visualizzazione, tutti i file sbr per il progetto devono essere disponibili su disco.  
  
 Per creare un file sbr con tutte le informazioni possibili, specificare [/FR](../../build/reference/fr-fr-create-dot-sbr-file.md).  
  
 Per creare un file sbr che non contiene simboli locali, specificare [/Fr](../../build/reference/fr-fr-create-dot-sbr-file.md). Se i file SBR contengono simboli locali, è comunque possibile ometterli dal file BSC usando BSCMAKE [/El (opzione)](../../build/reference/bscmake-options.md)`.`  
  
 È possibile creare un file sbr senza eseguire una compilazione completa. Ad esempio, è possibile specificare l'opzione /Zs al compilatore di eseguire un controllo della sintassi e ancora generare un file SBR se si specifica /FR o /Fr.  
  
 Il processo di compilazione può essere più efficiente se i file SBR prima vengono compressi per rimuovere le definizioni senza riferimenti. Il compilatore comprime automaticamente i file SBR.  
  
## <a name="see-also"></a>Vedere anche  
 [Compilazione di un file BSC](../../build/reference/building-a-dot-bsc-file.md)
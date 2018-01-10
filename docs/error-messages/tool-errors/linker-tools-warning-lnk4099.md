---
title: Strumenti del linker LNK4099 avviso | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: LNK4099
dev_langs: C++
helpviewer_keywords: LNK4099
ms.assetid: 358170a4-07cd-43fe-918f-82c32757ffc5
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 364c2f9303707328ebf3bdf3284398e6d4f9f0d7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-warning-lnk4099"></a>Avviso degli strumenti del linker LNK4099
Impossibile trovare il PDB 'nomefile' con '/ libreria di oggetti' o in 'path'; oggetto collegato senza informazioni di debug  
  
 Il linker non è riuscito a trovare il file con estensione pdb. Copiarlo nella directory che contiene `object/library`.  
  
 Per trovare il nome del file con estensione pdb associato al file oggetto:  
  
1.  Estrarre un file oggetto dalla raccolta con [lib](../../build/reference/lib-reference.md) **/Extract:**`objectname`**obj** `xyz` **lib**.  
  
2.  Controllare il percorso del file PDB con **dumpbin /section:. debug$ T /rawdata** `objectname` **obj**.  
  
 È anche possibile eseguire la compilazione con [/Z7](../../build/reference/z7-zi-zi-debug-information-format.md), in modo che il file pdb non è necessario utilizzare o rimuovere il [/debug](../../build/reference/debug-generate-debug-info.md) l'opzione del linker se non si dispone di file con estensione PDB per gli oggetti a cui ci si collega.
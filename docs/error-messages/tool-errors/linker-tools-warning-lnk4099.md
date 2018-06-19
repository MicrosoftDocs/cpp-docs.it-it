---
title: Strumenti del linker LNK4099 avviso | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4099
dev_langs:
- C++
helpviewer_keywords:
- LNK4099
ms.assetid: 358170a4-07cd-43fe-918f-82c32757ffc5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 22764705b35b2e882c5a03e819c9812d084dc118
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33300813"
---
# <a name="linker-tools-warning-lnk4099"></a>Avviso degli strumenti del linker LNK4099
Impossibile trovare il PDB 'nomefile' con '/ libreria di oggetti' o in 'path'; oggetto collegato senza informazioni di debug  
  
 Il linker non è riuscito a trovare il file con estensione pdb. Copiarlo nella directory che contiene `object/library`.  
  
 Per trovare il nome del file con estensione pdb associato al file oggetto:  
  
1.  Estrarre un file oggetto dalla raccolta con [lib](../../build/reference/lib-reference.md) **/Extract:**`objectname`**obj** `xyz` **lib**.  
  
2.  Controllare il percorso del file PDB con **dumpbin /section:. debug$ T /rawdata** `objectname` **obj**.  
  
 È anche possibile eseguire la compilazione con [/Z7](../../build/reference/z7-zi-zi-debug-information-format.md), in modo che il file pdb non è necessario utilizzare o rimuovere il [/debug](../../build/reference/debug-generate-debug-info.md) l'opzione del linker se non si dispone di file con estensione PDB per gli oggetti a cui ci si collega.
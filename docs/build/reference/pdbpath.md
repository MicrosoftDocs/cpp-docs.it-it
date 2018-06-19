---
title: -PDBPATH | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /pdbpath
dev_langs:
- C++
helpviewer_keywords:
- .pdb files, path
- -PDBPATH dumpbin option
- /PDBPATH dumpbin option
- PDBPATH dumpbin option
- PDB files, path
ms.assetid: ccf67dcd-0b23-4250-ad47-06c48acbe82b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 274c4a3742d99b1e4702ed332206b78dacebccbd
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32373668"
---
# <a name="pdbpath"></a>/PDBPATH
```  
/PDBPATH[:VERBOSE] filename  
```  
  
## <a name="remarks"></a>Note  
 dove:  
  
 *filename*  
 Il nome del file con estensione dll o .exe per il quale si desidera trovare il file con estensione PDB corrispondente.  
  
 VERBOSE (facoltativo)  
 Segnala tutte le directory in cui è stato effettuato un tentativo di individuare il file con estensione pdb.  
  
## <a name="remarks"></a>Note  
 /PDBPATH eseguirà la ricerca computer negli stessi percorsi che il debugger esegue una ricerca di un file con estensione pdb e verrà segnalato che, se presente, con estensione pdb corrispondono al file specificato *filename*.  
  
 Quando si utilizza il debugger di Visual Studio, è possibile che si verifichi un problema dovuto al fatto che il debugger utilizza un file con estensione PDB per una versione diversa del file di cui che si esegue il debug.  
  
 /PDBPATH eseguirà la ricerca dei file PDB nei percorsi seguenti:  
  
-   Controllare il percorso in cui si trova il file eseguibile.  
  
-   Controllare il percorso del file PDB scritto nell'eseguibile. Si tratta in genere il percorso al momento che del collegamento dell'immagine.  
  
-   Controllare lungo il percorso di ricerca configurato nell'IDE di Visual Studio.  
  
-   Controllare i percorsi NT_ALT_SYMBOL_PATH NT_SYMBOL_PATH e variabili di ambiente.  
  
-   Verificare nella directory di Windows.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)   
 [/PDBALTPATH (usa percorso PDB alternativo)](../../build/reference/pdbaltpath-use-alternate-pdb-path.md)
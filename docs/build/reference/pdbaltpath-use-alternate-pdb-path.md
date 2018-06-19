---
title: -PDBALTPATH (Usa percorso PDB alternativo) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /pdbaltpath
dev_langs:
- C++
helpviewer_keywords:
- .pdb files, path
- PDBALTPATH dumpbin option
- -PDBALTPATH dumpbin option
- /PDBALTPATH dumpbin option
- PDB files, path
ms.assetid: 72e200aa-e2c3-4ad8-b687-25528da1aaaf
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dec06c3d6a8a981a059f173700e716431acc53a7
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32374089"
---
# <a name="pdbaltpath-use-alternate-pdb-path"></a>/PDBALTPATH (Usa percorso PDB alternativo)
```  
/PDBALTPATH:pdb_file_name  
```  
  
## <a name="remarks"></a>Note  
 dove:  
  
 *pdb_file_name*  
 Percorso e nome del file con estensione pdb.  
  
## <a name="remarks"></a>Note  
 Usare questa opzione per fornire un percorso alternativo per il file del database di programma (con estensione pdb) in un file binario compilato. Di norma, il linker registra il percorso del file con estensione pdb nei file binari che produce. È possibile usare questa opzione per fornire un percorso e un nome diversi per il file con estensione pdb. Le informazioni fornite con /PDBALTPATH non modificano il percorso o il nome del file con estensione pdb effettivo, ma solo le informazioni scritte dal linker nel file binario. In questo modo è possibile fornire un percorso che sia indipendente dalla struttura di file del computer di compilazione. Due usi comuni per questa opzione consistono nel fornire un percorso di rete o un file senza informazioni sul percorso.  
  
 Il valore di *pdb_file_name* può essere una stringa arbitraria, una variabile di ambiente o **% PDB %**. Il linker espanderà una variabile di ambiente, ad esempio **% SystemRoot %**, il valore. Il linker definisce le variabili di ambiente **% PDB %** e **% ext %**. **PDB %** espande al nome del file del file pdb effettivo senza alcuna informazione sul percorso e **% ext %** rappresenta l'estensione del file eseguibile generato.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)   
 [/PDBPATH](../../build/reference/pdbpath.md)
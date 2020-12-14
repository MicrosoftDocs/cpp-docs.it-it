---
description: Altre informazioni su:/PDBALTPATH. (USA il percorso PDB alternativo)
title: /PDBALTPATH (Usa percorso PDB alternativo)
ms.date: 11/04/2016
f1_keywords:
- /pdbaltpath
helpviewer_keywords:
- .pdb files, path
- PDBALTPATH dumpbin option
- -PDBALTPATH dumpbin option
- /PDBALTPATH dumpbin option
- PDB files, path
ms.assetid: 72e200aa-e2c3-4ad8-b687-25528da1aaaf
ms.openlocfilehash: f85a39fb4570773f01a98331e746f6b37b76c161
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97226064"
---
# <a name="pdbaltpath-use-alternate-pdb-path"></a>/PDBALTPATH (Usa percorso PDB alternativo)

```
/PDBALTPATH:pdb_file_name
```

## <a name="arguments"></a>Argomenti

*pdb_file_name*<br/>
Percorso e nome del file con estensione pdb.

## <a name="remarks"></a>Commenti

Usare questa opzione per fornire un percorso alternativo per il file del database di programma (con estensione pdb) in un file binario compilato. Di norma, il linker registra il percorso del file con estensione pdb nei file binari che produce. È possibile usare questa opzione per fornire un percorso e un nome diversi per il file con estensione pdb. Le informazioni fornite con /PDBALTPATH non modificano il percorso o il nome del file con estensione pdb effettivo, ma solo le informazioni scritte dal linker nel file binario. In questo modo è possibile fornire un percorso che sia indipendente dalla struttura di file del computer di compilazione. Due usi comuni per questa opzione consistono nel fornire un percorso di rete o un file senza informazioni sul percorso.

Il valore di *pdb_file_name* può essere una stringa arbitraria, una variabile di ambiente o **% _PDB%**. Il linker espanderà il valore di una variabile di ambiente, ad esempio **% systemroot%**. Il linker definisce le variabili di ambiente **% _PDB%** e **% _EXT%**. **% _PDB%** si espande al nome del file con estensione PDB effettivo senza informazioni sul percorso e **% _EXT%** è l'estensione del file eseguibile generato.

## <a name="see-also"></a>Vedi anche

[Opzioni di DUMPBIN](dumpbin-options.md)<br/>
[/PDBPATH](pdbpath.md)

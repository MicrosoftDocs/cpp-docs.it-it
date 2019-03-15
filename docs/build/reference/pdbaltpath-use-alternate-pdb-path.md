---
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
ms.openlocfilehash: 660e39a97b9fed0c5a9228fe011e7c0fa2566e68
ms.sourcegitcommit: faa42c8a051e746d99dcebe70fd4bbaf3b023ace
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/15/2019
ms.locfileid: "57820715"
---
# <a name="pdbaltpath-use-alternate-pdb-path"></a>/PDBALTPATH (Usa percorso PDB alternativo)

```
/PDBALTPATH:pdb_file_name
```

## <a name="arguments"></a>Argomenti

*pdb_file_name*<br/>
Percorso e nome del file con estensione pdb.

## <a name="remarks"></a>Note

Usare questa opzione per fornire un percorso alternativo per il file del database di programma (con estensione pdb) in un file binario compilato. Di norma, il linker registra il percorso del file con estensione pdb nei file binari che produce. È possibile usare questa opzione per fornire un percorso e un nome diversi per il file con estensione pdb. Le informazioni fornite con /PDBALTPATH non modificano il percorso o il nome del file con estensione pdb effettivo, ma solo le informazioni scritte dal linker nel file binario. In questo modo è possibile fornire un percorso che sia indipendente dalla struttura di file del computer di compilazione. Due usi comuni per questa opzione consistono nel fornire un percorso di rete o un file senza informazioni sul percorso.

Il valore di *pdb_file_name* può essere una stringa arbitraria, una variabile di ambiente oppure **% % PDB**. Il linker espanderà una variabile di ambiente, ad esempio **% SystemRoot %**, sul relativo valore. Il linker definisce le variabili di ambiente **% % PDB** e **% % ext**. **% % PDB** si espande nel nome file del file con estensione pdb effettivo senza alcuna informazione sul percorso e **% % ext** rappresenta l'estensione del file eseguibile generato.

## <a name="see-also"></a>Vedere anche

[Opzioni di DUMPBIN](dumpbin-options.md)<br/>
[/PDBPATH](pdbpath.md)

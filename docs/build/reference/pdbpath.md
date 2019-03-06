---
title: /PDBPATH
ms.date: 11/04/2016
f1_keywords:
- /pdbpath
helpviewer_keywords:
- .pdb files, path
- -PDBPATH dumpbin option
- /PDBPATH dumpbin option
- PDBPATH dumpbin option
- PDB files, path
ms.assetid: ccf67dcd-0b23-4250-ad47-06c48acbe82b
ms.openlocfilehash: e59f36905bcb9eb379e2bc17c9041b81fd98a535
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57420037"
---
# <a name="pdbpath"></a>/PDBPATH

```
/PDBPATH[:VERBOSE] filename
```

### <a name="parameters"></a>Parametri

*filename*<br/>
Il nome del file con estensione dll o .exe per cui si desidera trovare il file con estensione PDB corrispondente.

**:VERBOSE**<br/>
(Facoltativo) Segnala tutte le directory in cui è stato effettuato un tentativo per individuare il file con estensione pdb.

## <a name="remarks"></a>Note

/PDBPATH cercherà nel computer negli stessi percorsi che il debugger esegue una ricerca di un file con estensione pdb e segnalerà che, se presente, i file con estensione pdb corrispondono al file specificato *filename*.

Quando si usa il debugger di Visual Studio, è possibile che si verifichi un problema dovuto al fatto che il debugger sta utilizzando un file con estensione PDB per una versione diversa del file di cui che si esegue il debug.

/PDBPATH eseguirà la ricerca dei file PDB nei percorsi seguenti:

- Controllare il percorso in cui si trova il file eseguibile.

- Controllare il percorso del file PDB scritto nel file eseguibile. Si tratta in genere il percorso al momento che del collegamento dell'immagine.

- Controllare lungo il percorso di ricerca configurato nell'IDE di Visual Studio.

- Controllare i percorsi NT_SYMBOL_PATH e NT_ALT_SYMBOL_PATH le variabili di ambiente.

- Verificare nella directory di Windows.

## <a name="see-also"></a>Vedere anche

[Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)<br/>
[/PDBALTPATH (usa percorso PDB alternativo)](../../build/reference/pdbaltpath-use-alternate-pdb-path.md)

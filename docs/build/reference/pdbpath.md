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
ms.openlocfilehash: f29b8e61fbfbdb0f373e3e7510cb3f1fe0b9cc2a
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57809210"
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

[Opzioni di DUMPBIN](dumpbin-options.md)<br/>
[/PDBALTPATH (usa percorso PDB alternativo)](pdbaltpath-use-alternate-pdb-path.md)

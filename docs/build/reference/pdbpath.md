---
description: 'Altre informazioni su: Specificando/PDBPATH'
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
ms.openlocfilehash: 41207d7cfce3d72ecb9517d9ad3af8bcd3f901d7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97226051"
---
# <a name="pdbpath"></a>/PDBPATH

```
/PDBPATH[:VERBOSE] filename
```

### <a name="parameters"></a>Parametri

*filename*<br/>
Nome del file con estensione dll o exe per il quale si desidera trovare il file con estensione PDB corrispondente.

**: VERBOse**<br/>
Opzionale Segnala tutte le directory in cui è stato effettuato un tentativo di individuare il file con estensione pdb.

## <a name="remarks"></a>Commenti

Specificando/PDBPATH cercherà nel computer gli stessi percorsi in cui il debugger cerca un file con estensione PDB e segnalerà i file PDB corrispondenti al file specificato in *filename*.

Quando si usa il debugger di Visual Studio, è possibile che si verifichi un problema a causa del fatto che il debugger usa un file con estensione PDB per una versione diversa del file di cui si esegue il debug.

Specificando/PDBPATH cercherà i file con estensione PDB lungo i percorsi seguenti:

- Controllare la posizione in cui risiede il file eseguibile.

- Controllare la posizione del PDB scritto nel file eseguibile. Si tratta in genere del percorso nel momento in cui l'immagine è stata collegata.

- Controllare lungo il percorso di ricerca configurato nell'IDE di Visual Studio.

- Controllare lungo i percorsi nelle variabili di ambiente _NT_SYMBOL_PATH e _NT_ALT_SYMBOL_PATH.

- Archiviare la directory di Windows.

## <a name="see-also"></a>Vedi anche

[Opzioni di DUMPBIN](dumpbin-options.md)<br/>
[/PDBALTPATH. (USA percorso PDB alternativo)](pdbaltpath-use-alternate-pdb-path.md)

---
title: Errore degli strumenti del linker LNK1318
ms.date: 05/29/2018
f1_keywords:
- LNK1318
helpviewer_keywords:
- LNK1318
ms.openlocfilehash: cce2c03783039a62b5cb6f60ecf8d76b23589483
ms.sourcegitcommit: e15b46ea7888dbdd7e0bb47da76aeed680c3c1f3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/17/2020
ms.locfileid: "86446701"
---
# <a name="linker-tools-error-lnk1318"></a>Errore degli strumenti del linker LNK1318

> Errore PDB imprevisto; *motivo* della '*Dettagli*'

Il linker ha rilevato un errore imprevisto durante l'apertura, la lettura o la scrittura in un file PDB.

Questo messaggio di errore viene generato per problemi non comuni nei file PDB. La *ragione* e i *Dettagli* rappresentano le informazioni disponibili al linker quando si è verificato l'errore. Questo potrebbe non essere molto utile, in quanto gli errori comuni quando si gestiscono i file PDB hanno messaggi di errore distinti e più informativi.

Poiché l'origine dell'errore non è comune, è disponibile solo un Consiglio generico per la risoluzione di questo problema:

- Eseguire un'operazione di pulizia nelle directory di compilazione e quindi eseguire una compilazione completa della soluzione.

- Riavviare il computer oppure verificare la presenza di processi mspdbsrv.exe randagi o non rispondenti e ucciderli in TaskManager.

- Disabilitare i controlli antivirus nelle directory del progetto.

- Usare l'opzione del compilatore [/ZF](../../build/reference/zf.md) se si usa [/MP](../../build/reference/mp-build-with-multiple-processes.md) con MSBuild o un altro processo di compilazione parallela.

- Provare a compilare usando il set di strumenti ospitato a 64 bit.

- Serializzare il collegamento per attenuare i problemi di collegamento parallelo, se necessario. Questo errore può verificarsi se mspdbsrv.exe viene avviato da un'istanza di collegamento e viene arrestato prima che un'altra istanza di link venga eseguita utilizzandola. Lo svantaggio di questa correzione è che le compilazioni di progetto possono richiedere tempi di completamento molto più lunghi.

---
title: Errore degli strumenti del linker LNK1318
ms.date: 05/29/2018
f1_keywords:
- LNK1318
helpviewer_keywords:
- LNK1318
ms.openlocfilehash: a61c11a9cbb25fea6fddc0bf1c5c4c2a7af1cf4f
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80183579"
---
# <a name="linker-tools-error-lnk1318"></a>Errore degli strumenti del linker LNK1318

> Errore PDB imprevisto; *motivo* della '*Dettagli*'

Il linker ha rilevato un errore imprevisto durante l'apertura, la lettura o la scrittura in un file PDB.

Questo messaggio di errore viene generato per problemi non comuni nei file PDB. La *ragione* e i *Dettagli* rappresentano le informazioni disponibili al linker quando si è verificato l'errore. Questo potrebbe non essere molto utile, in quanto gli errori comuni quando si gestiscono i file PDB hanno messaggi di errore distinti e più informativi.

Poiché l'origine dell'errore non è comune, è disponibile solo un Consiglio generico per la risoluzione di questo problema:

- Eseguire un'operazione di pulizia nelle directory di compilazione e quindi eseguire una compilazione completa della soluzione.

- Riavviare il computer oppure verificare la presenza di processi mspdbsrv. exe randagi o sospesi e ucciderli in TaskManager.

- Disabilitare i controlli antivirus nelle directory del progetto.

- Usare l'opzione del compilatore [/ZF](../../build/reference/zf.md) se si usa [/MP](../../build/reference/mp-build-with-multiple-processes.md) con MSBuild o un altro processo di compilazione parallela.

- Provare a compilare usando il set di strumenti ospitato a 64 bit.

- Serializzare il collegamento per attenuare i problemi di collegamento parallelo, se necessario. Questo errore può verificarsi se mspdbsrv. exe viene avviato da un'istanza di link e viene arrestato prima che un'altra istanza di link venga eseguita utilizzandola. Lo svantaggio di questa correzione è che le compilazioni di progetto possono richiedere tempi di completamento molto più lunghi.

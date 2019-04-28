---
title: Errore degli strumenti del linker LNK1318
ms.date: 05/29/2018
f1_keywords:
- LNK1318
helpviewer_keywords:
- LNK1318
ms.openlocfilehash: 8ed6489a27d4c0e117f7f18281ff188f40936e0a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62160991"
---
# <a name="linker-tools-error-lnk1318"></a>Errore degli strumenti del linker LNK1318

> Errore PDB imprevisto. *causare* '*dettagli*'

Il linker ha rilevato un errore imprevisto durante l'apertura, la lettura o scrittura in un file PDB.

Questo messaggio di errore viene generato per i problemi non comuni in file con estensione PDB. Il *causare* e *dettagli* rappresentano le informazioni disponibili per il linker quando si è verificato l'errore. Ciò potrebbe non essere molto utile, come errori comuni durante la gestione di file PDB sono messaggi di errore più informativo e separato.

Poiché l'origine dell'errore è comune, è solo Consiglio generico disponibile per la risoluzione del problema:

- Eseguire un'operazione di pulizia nelle directory di compilazione e quindi eseguire una build completa della soluzione.

- Riavviare il computer, o verificare la presenza di processi mspdbsrv.exe inutile o bloccata e li termina in TaskManager.

- Disattivare i controlli antivirus nelle directory del progetto.

- Usare la [/Zf](../../build/reference/zf.md) se si usa l'opzione del compilatore [/MP](../../build/reference/mp-build-with-multiple-processes.md) processo di compilazione con MSBuild o in un altro parallele.

- Provare a compilare con il set di strumenti a 64 bit ospitato.

- Serializzare il collegamento per mitigare i problemi di collegamento parallelo, se necessario. Questo errore può verificarsi se mspdbsrv.exe viene avviato da un'istanza di collegamento e viene arrestata prima che venga eseguita un'altra istanza del collegamento di utilizzarlo. Lo svantaggio di questa correzione è che le compilazioni di progetto potrebbero richiedere tempi notevolmente più lunghi.
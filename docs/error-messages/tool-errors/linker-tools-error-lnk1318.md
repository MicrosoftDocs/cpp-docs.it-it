---
title: Errore LNK1318 degli strumenti del linker | Documenti Microsoft
ms.custom: ''
ms.date: 05/29/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1318
dev_langs:
- C++
helpviewer_keywords:
- LNK1318
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 364c819c6ec2bf6e1195011eced6e6ad1699877b
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/01/2018
ms.locfileid: "34570698"
---
# <a name="linker-tools-error-lnk1318"></a>LNK1318 di errore degli strumenti del linker

> Errore imprevisto PDB; *causare* '*dettagli*'

Il linker ha rilevato un errore imprevisto durante l'apertura, durante la lettura o scrittura in un file PDB.

Questo messaggio di errore viene generato per i problemi comuni in file PDB. Il *causare* e *dettagli* rappresentano le informazioni disponibili per il linker quando si è verificato l'errore. Ciò potrebbe non essere molto utile, come errori comuni durante la gestione di un file PDB sono messaggi di errore separati, con maggiori.

Poiché l'origine dell'errore è insolito, sia solo avviso generico disponibile per risolvere il problema:

- Eseguire un'operazione di pulizia in directory di compilazione e quindi eseguire una compilazione completa della soluzione.

- Riavviare il computer, o verificare la presenza di processi mspdbsrv.exe errati o bloccata e li terminare in TaskManager.

- Disattivare i controlli antivirus nelle directory del progetto.

- Usare la [/Zf](../../build/reference/zf.md) se si utilizza l'opzione del compilatore [/MP](../../build/reference/mp-build-with-multiple-processes.md) processo di compilazione con MSBuild o in un altro parallele.

- Provare a compilare utilizzando il set di strumenti a 64 bit ospitato.

- Serializzare il collegamento per limitare i problemi di collegamento parallela, se necessario. Questo errore può essere causato mspdbsrv.exe viene avviata da un'istanza di collegamento, se è stato arrestato prima di eseguita un'altra istanza del collegamento di utilizzarlo. Lo svantaggio di questa correzione è che le compilazioni di progetto possono richiedere tempi notevolmente più lunghi.
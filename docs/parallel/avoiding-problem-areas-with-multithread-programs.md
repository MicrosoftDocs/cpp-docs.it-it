---
title: Suggerimenti per evitare problemi relativi ai programmi multithread
ms.date: 11/04/2016
helpviewer_keywords:
- multithreading [C++], troubleshooting
- errors [C++], multithreaded programs
- threading [C++], troubleshooting
- troubleshooting [C++], multithreading
ms.assetid: 06cc231d-bb5a-409d-8bd3-676c9e2a8c5b
ms.openlocfilehash: 598758a4ceb0a12640faf2832f9f03cd1e44ef9f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50461646"
---
# <a name="avoiding-problem-areas-with-multithread-programs"></a>Suggerimenti per evitare problemi relativi ai programmi multithread

Esistono diversi problemi che possono verificarsi nella creazione, collegamento o l'esecuzione di un programma multithread di C. Alcuni dei problemi più comuni sono descritti nella tabella seguente. (Per informazioni analoghe dal punto di vista di MFC, vedere [Multithreading: suggerimenti sulla programmazione](multithreading-programming-tips.md).)

|Problema|Probabile causa|
|-------------|--------------------|
|Viene visualizzata una finestra di messaggio che mostra che si è verificata una violazione della protezione.|Molti errori di programmazione Win32 provocano violazioni della protezione. Una causa comune di violazioni della protezione è l'assegnazione indiretta dei dati ai puntatori null. Perché in questo modo, il programma tenta di accedere alla memoria che non appartiene ad esso, viene generata una violazione della protezione.<br /><br /> Un modo semplice per rilevare la causa di una violazione della protezione è per la compilazione del programma con le informazioni di debug e quindi eseguirlo tramite il debugger nell'ambiente di Visual C++. Quando si verifica l'errore di protezione, Windows trasferisce il controllo al debugger e il cursore viene posizionato sulla riga che ha causato il problema.|
|Il programma genera numerosi errori di compilazione e collegamento.|È possibile eliminare molti problemi potenziali impostando il livello di avviso del compilatore a uno dei valori massimi, prestando attenzione a eventuali messaggi di avviso. Con il livello 3 o opzioni a livello di avviso di livello 4, è possibile rilevare le conversioni di dati non intenzionale, mancante prototipi di funzione e utilizzo delle funzionalità non ANSI.|

## <a name="see-also"></a>Vedere anche

[Multithreading con C e Win32](multithreading-with-c-and-win32.md)
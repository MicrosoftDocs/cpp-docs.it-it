---
title: Per evitare problemi relativi ai programmi Multithread | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- multithreading [C++], troubleshooting
- errors [C++], multithreaded programs
- threading [C++], troubleshooting
- troubleshooting [C++], multithreading
ms.assetid: 06cc231d-bb5a-409d-8bd3-676c9e2a8c5b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4da775a8b068db830d161936a1ca93890d54a1f2
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46425418"
---
# <a name="avoiding-problem-areas-with-multithread-programs"></a>Suggerimenti per evitare problemi relativi ai programmi multithread

Esistono diversi problemi che possono verificarsi nella creazione, collegamento o l'esecuzione di un programma multithread di C. Alcuni dei problemi più comuni sono descritti nella tabella seguente. (Per informazioni analoghe dal punto di vista di MFC, vedere [Multithreading: suggerimenti sulla programmazione](multithreading-programming-tips.md).)

|Problema|Probabile causa|
|-------------|--------------------|
|Viene visualizzata una finestra di messaggio che mostra che si è verificata una violazione della protezione.|Molti errori di programmazione Win32 provocano violazioni della protezione. Una causa comune di violazioni della protezione è l'assegnazione indiretta dei dati ai puntatori null. Perché in questo modo, il programma tenta di accedere alla memoria che non appartiene ad esso, viene generata una violazione della protezione.<br /><br /> Un modo semplice per rilevare la causa di una violazione della protezione è per la compilazione del programma con le informazioni di debug e quindi eseguirlo tramite il debugger nell'ambiente di Visual C++. Quando si verifica l'errore di protezione, Windows trasferisce il controllo al debugger e il cursore viene posizionato sulla riga che ha causato il problema.|
|Il programma genera numerosi errori di compilazione e collegamento.|È possibile eliminare molti problemi potenziali impostando il livello di avviso del compilatore a uno dei valori massimi, prestando attenzione a eventuali messaggi di avviso. Con il livello 3 o opzioni a livello di avviso di livello 4, è possibile rilevare le conversioni di dati non intenzionale, mancante prototipi di funzione e utilizzo delle funzionalità non ANSI.|

## <a name="see-also"></a>Vedere anche

[Multithreading con C e Win32](multithreading-with-c-and-win32.md)
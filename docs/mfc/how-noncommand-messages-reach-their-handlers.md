---
title: Come i messaggi Noncommand raggiungono i relativi gestori
ms.date: 11/04/2016
helpviewer_keywords:
- messages [MFC], routing
- noncommand messages
- Windows messages [MFC], routing
- message handling [MFC], noncommand messages
ms.assetid: e7df8aef-9fae-41f4-9c11-881d8465f602
ms.openlocfilehash: 4b9fb0a72b330380f0207db9968199a7e4c3d9b3
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57295058"
---
# <a name="how-noncommand-messages-reach-their-handlers"></a>Come i messaggi Noncommand raggiungono i relativi gestori

A differenza dei comandi, i messaggi Windows standard non vengono instradati attraverso una catena di comando destinazioni, ma sono in genere gestiti mediante la finestra in cui Windows invia il messaggio. La finestra può essere una finestra cornice principale, una finestra figlia MDI, un controllo standard, una finestra di dialogo, una vista o un altro tipo di finestra figlio.

In fase di esecuzione, ogni finestra di Windows è associata a un oggetto finestra (derivata direttamente o indirettamente da `CWnd`) che ha le sue funzioni di mappa e il gestore di messaggi associati. Il framework utilizza la mappa dei messaggi, come per un comando, per eseguire il mapping ai gestori di messaggi in arrivo.

## <a name="see-also"></a>Vedere anche

[Chiamata di un gestore dal framework](../mfc/how-the-framework-calls-a-handler.md)

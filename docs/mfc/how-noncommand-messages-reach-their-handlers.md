---
title: Come i messaggi Noncommand raggiungono i relativi gestori
ms.date: 11/04/2016
helpviewer_keywords:
- messages [MFC], routing
- noncommand messages
- Windows messages [MFC], routing
- message handling [MFC], noncommand messages
ms.assetid: e7df8aef-9fae-41f4-9c11-881d8465f602
ms.openlocfilehash: c7b2bf819c5305da4039fae172578298d3b4e609
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84618501"
---
# <a name="how-noncommand-messages-reach-their-handlers"></a>Come i messaggi Noncommand raggiungono i relativi gestori

A differenza dei comandi, i messaggi Windows standard non vengono instradati tramite una catena di destinazioni comandi, ma vengono in genere gestiti dalla finestra in cui Windows invia il messaggio. La finestra potrebbe essere una finestra cornice principale, una finestra figlio MDI, un controllo standard, una finestra di dialogo, una visualizzazione o un altro tipo di finestra figlio.

In fase di esecuzione, ogni finestra di Windows è associata a un oggetto finestra (derivato direttamente o indirettamente da `CWnd` ) a cui sono associate le funzioni di gestione e mappa messaggi. Il Framework utilizza la mappa messaggi, come per un comando, per eseguire il mapping dei messaggi in ingresso ai gestori.

## <a name="see-also"></a>Vedere anche

[Chiamata di un gestore dal framework](how-the-framework-calls-a-handler.md)

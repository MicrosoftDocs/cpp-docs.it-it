---
title: Come i messaggi Noncommand raggiungono i relativi gestori | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- messages [MFC], routing
- noncommand messages
- Windows messages [MFC], routing
- message handling [MFC], noncommand messages
ms.assetid: e7df8aef-9fae-41f4-9c11-881d8465f602
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 33d0d65c9916cfc571ecfd623138938c0c883ba5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-noncommand-messages-reach-their-handlers"></a>Come i messaggi Noncommand raggiungono i relativi gestori
A differenza dei comandi, messaggi standard di Windows non vengono inviati attraverso una catena di comando destinazioni, ma sono in genere gestiti mediante la finestra in cui Windows invia il messaggio. La finestra può essere una finestra cornice principale, una finestra figlio MDI, un controllo standard, una finestra di dialogo, una vista o un altro tipo di finestra figlio.  
  
 In fase di esecuzione, ogni finestra di Windows è associata a un oggetto window (derivata direttamente o indirettamente da `CWnd`) che ha le sue funzioni di mappa e il gestore di messaggi associati. Il framework utilizza la mappa dei messaggi, come per un comando, per eseguire il mapping ai gestori di messaggi in arrivo.  
  
## <a name="see-also"></a>Vedere anche  
 [Chiamata di un gestore dal framework](../mfc/how-the-framework-calls-a-handler.md)


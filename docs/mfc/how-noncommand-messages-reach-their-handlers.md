---
title: Come i messaggi Noncommand raggiungono i relativi gestori | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- messages [MFC], routing
- noncommand messages
- Windows messages [MFC], routing
- message handling [MFC], noncommand messages
ms.assetid: e7df8aef-9fae-41f4-9c11-881d8465f602
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3999c74bf7a612acb998e7a044c12948d7679d9b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33343882"
---
# <a name="how-noncommand-messages-reach-their-handlers"></a>Come i messaggi Noncommand raggiungono i relativi gestori
A differenza dei comandi, messaggi standard di Windows non vengono inviati attraverso una catena di comando destinazioni, ma sono in genere gestiti mediante la finestra in cui Windows invia il messaggio. La finestra può essere una finestra cornice principale, una finestra figlio MDI, un controllo standard, una finestra di dialogo, una vista o un altro tipo di finestra figlio.  
  
 In fase di esecuzione, ogni finestra di Windows è associata a un oggetto window (derivata direttamente o indirettamente da `CWnd`) che ha le sue funzioni di mappa e il gestore di messaggi associati. Il framework utilizza la mappa dei messaggi, come per un comando, per eseguire il mapping ai gestori di messaggi in arrivo.  
  
## <a name="see-also"></a>Vedere anche  
 [Chiamata di un gestore dal framework](../mfc/how-the-framework-calls-a-handler.md)


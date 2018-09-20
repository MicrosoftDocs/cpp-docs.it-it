---
title: L'elaborazione dei messaggi di notifica controlli Tab | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- notifications [MFC], tab controls
- CTabCtrl class [MFC], processing notifications
- notifications [MFC], processing in CTabCtrl
- processing notifications [MFC]
- tab controls [MFC], processing notifications
ms.assetid: 758ccb7a-9e73-48f8-9073-23f7cb09918c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 258a3ee579eca0262dace6d1e69a3b5daf9024f6
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46409038"
---
# <a name="processing-tab-control-notification-messages"></a>Elaborazione dei messaggi di notifica dei controlli Tab

Come gli utenti fanno clic schede o i pulsanti, il controllo struttura a schede ([CTabCtrl](../mfc/reference/ctabctrl-class.md)) invia i messaggi di notifica alla finestra padre. Se si desidera eseguire un'operazione in risposta, occorre gestire questi messaggi. Ad esempio, quando l'utente fa clic su una scheda, è possibile preimpostare i dati di controllo nella pagina prima di visualizzarli.

Elaborare i messaggi WM_NOTIFY dal controllo struttura a schede nella classe di finestra di dialogo o visualizzazione. Utilizzare la finestra proprietà per creare un [OnChildNotify](../mfc/reference/cwnd-class.md#onchildnotify) funzione del gestore con un'istruzione switch basata sul messaggio di notifica che viene gestito. Per un elenco delle notifiche di un controllo struttura a schede può inviare alla finestra padre, vedere la **notifiche** sezione [riferimento al controllo scheda](https://msdn.microsoft.com/library/windows/desktop/bb760548) nel SDK di Windows.

## <a name="see-also"></a>Vedere anche

[Uso di CTabCtrl](../mfc/using-ctabctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)


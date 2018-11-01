---
title: Convalida dei dati delle finestre di dialogo
ms.date: 11/04/2016
helpviewer_keywords:
- validating data [MFC], message boxes
- data validation [MFC], dialog boxes
- dialog boxes [MFC], validating data
- validating data [MFC], dialog box data entry
- DDV (dialog data validation) [MFC]
- data validation [MFC], message boxes
ms.assetid: f070c309-2044-4ff2-8c92-1ec1ea84af58
ms.openlocfilehash: 2283806d3fe7c4ff6bd3abc2ae6a86f5dd176d10
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50483348"
---
# <a name="dialog-data-validation"></a>Convalida dei dati delle finestre di dialogo

È possibile specificare la convalida dei dati chiamando funzioni DDV, come illustrato nell'esempio nella [Dialog Data Exchange](../mfc/dialog-data-exchange.md). Il `DDV_MaxChars` chiamata nell'esempio verifica che la stringa immessa nel controllo della casella di testo non più di 20 caratteri. La funzione DDV avvisa l'utente con una finestra di messaggio se la convalida ha esito negativo e si assegna lo stato attivo sul controllo che causa l'errore in modo che l'utente può immettere nuovamente i dati. Una funzione DDV per un determinato controllo deve essere chiamata immediatamente dopo la funzione DDX per il controllo stesso.

È anche possibile definire le proprie routine DDX e DDV personalizzati. Per informazioni dettagliate su questo e altri aspetti di DDX e DDV, vedere [MFC Nota tecnica 26](../mfc/tn026-ddx-and-ddv-routines.md).

Il [Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md) scriverà tutti di DDX e DDV chiamate nella mappa i dati per l'utente.

## <a name="see-also"></a>Vedere anche

[Convalida e DDX (Dialog Data Exchange)](../mfc/dialog-data-exchange-and-validation.md)<br/>
[Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)<br/>
[DDX (Dialog Data Exchange)](../mfc/dialog-data-exchange.md)


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
ms.openlocfilehash: c89ed82b148062ddb64fa85eaabda12f44e59895
ms.sourcegitcommit: 1e6386be9084f70def7b3b8b4bab319a117102b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2019
ms.locfileid: "71685768"
---
# <a name="dialog-data-validation"></a>Convalida dei dati delle finestre di dialogo

È possibile specificare la convalida oltre allo scambio di dati chiamando le funzioni DDV, come illustrato nell'esempio in [Dialog Data Exchange](../mfc/dialog-data-exchange.md). La chiamata `DDV_MaxChars` nell'esempio convalida che la stringa immessa nel controllo casella di testo non supera i 20 caratteri. In genere, la funzione DDV avvisa l'utente con una finestra di messaggio se la convalida ha esito negativo e attiva il controllo in modo che l'utente possa immettere nuovamente i dati. Una funzione DDV per un determinato controllo deve essere chiamata immediatamente dopo la funzione DDX per lo stesso controllo.

È anche possibile definire routine DDX e DDV personalizzate. Per informazioni dettagliate su questo e altri aspetti di DDX e DDV, vedere la [Nota tecnica 26 di MFC](../mfc/tn026-ddx-and-ddv-routines.md).

La [procedura guidata Aggiungi variabile membro](../ide/add-member-variable-wizard.md) consente di scrivere tutte le chiamate DDX e DDV nella mappa dati.

## <a name="see-also"></a>Vedere anche

[Convalida e DDX (Dialog Data Exchange)](../mfc/dialog-data-exchange-and-validation.md)<br/>
[Utilizzo delle finestre di dialogo in MFC](../mfc/life-cycle-of-a-dialog-box.md)<br/>
[DDX (Dialog Data Exchange)](../mfc/dialog-data-exchange.md)

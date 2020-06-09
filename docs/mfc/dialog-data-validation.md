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
ms.openlocfilehash: 99540214d1b903c66d350145c08ab657d12ef8f7
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84616748"
---
# <a name="dialog-data-validation"></a>Convalida dei dati delle finestre di dialogo

È possibile specificare la convalida oltre allo scambio di dati chiamando le funzioni DDV, come illustrato nell'esempio in [Dialog Data Exchange](dialog-data-exchange.md). La `DDV_MaxChars` chiamata nell'esempio convalida che la stringa immessa nel controllo casella di testo non supera i 20 caratteri. In genere, la funzione DDV avvisa l'utente con una finestra di messaggio se la convalida ha esito negativo e attiva il controllo in modo che l'utente possa immettere nuovamente i dati. Una funzione DDV per un determinato controllo deve essere chiamata immediatamente dopo la funzione DDX per lo stesso controllo.

È anche possibile definire routine DDX e DDV personalizzate. Per informazioni dettagliate su questo e altri aspetti di DDX e DDV, vedere la [Nota tecnica 26 di MFC](tn026-ddx-and-ddv-routines.md).

La [procedura guidata Aggiungi variabile membro](../ide/add-member-variable-wizard.md) consente di scrivere tutte le chiamate DDX e DDV nella mappa dati.

## <a name="see-also"></a>Vedere anche

[Convalida e DDX (Dialog Data Exchange)](dialog-data-exchange-and-validation.md)<br/>
[Utilizzo delle finestre di dialogo in MFC](life-cycle-of-a-dialog-box.md)<br/>
[DDX (Dialog Data Exchange)](dialog-data-exchange.md)

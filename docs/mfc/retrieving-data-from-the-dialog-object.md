---
title: Recupero di dati da un oggetto Dialog
ms.date: 11/04/2016
helpviewer_keywords:
- dialog boxes [MFC], retrieving user data
- dialog box data [MFC]
- data [MFC], retrieving
- GetDlgItemText method [MFC]
- SetDlgItemText method [MFC]
- SetWindowText method [MFC]
- dialog box data [MFC], retrieving
- retrieving data [MFC]
- user input [MFC], retrieving from MFC dialog boxes
- capturing user input [MFC]
- dialog box controls [MFC], initializing values
- DDX (dialog data exchange) [MFC]
- MFC dialog boxes [MFC], retrieving user input
- data retrieval [MFC], dialog boxes
- data [MFC], dialog boxes
- DDX (dialog data exchange) [MFC], about DDX
- DDX (dialog data exchange) [MFC], retrieving data from Dialog object
- GetWindowText method [MFC]
ms.assetid: bdca2b61-6b53-4c2e-b426-8712c7a38ec0
ms.openlocfilehash: 903d76a1e672d05a3c093e528f7153562df8e3e5
ms.sourcegitcommit: 1e6386be9084f70def7b3b8b4bab319a117102b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2019
ms.locfileid: "71685577"
---
# <a name="retrieving-data-from-the-dialog-object"></a>Recupero di dati da un oggetto Dialog

Il Framework fornisce un modo semplice per inizializzare i valori dei controlli in una finestra di dialogo e recuperare i valori dai controlli. L'approccio manuale più laborioso consiste nel chiamare funzioni quali le funzioni membro `SetDlgItemText` e `GetDlgItemText` della classe `CWnd`, applicabili alle finestre di controllo. Con queste funzioni è possibile accedere singolarmente a ogni controllo per impostare o ottenere il relativo valore, chiamando funzioni quali `SetWindowText` e `GetWindowText`. L'approccio del Framework automatizza sia l'inizializzazione che il recupero.

DDX (Dialog Data Exchange) consente di scambiare i dati tra i controlli della finestra di dialogo e le variabili membro nell'oggetto finestra di dialogo in modo più semplice. Questo scambio funziona in entrambi i modi. Per inizializzare i controlli nella finestra di dialogo, è possibile impostare i valori dei membri dati nell'oggetto finestra di dialogo e il framework trasferirà i valori ai controlli prima che la finestra di dialogo venga visualizzata. In qualsiasi momento, è possibile aggiornare i membri dati della finestra di dialogo con i dati immessi dall'utente. A questo punto, è possibile usare i dati facendo riferimento alle variabili del membro dati.

È anche possibile disporre i valori dei controlli della finestra di dialogo da convalidare automaticamente con la convalida dei dati della finestra di dialogo (DDV).

DDX e DDV sono illustrati in modo più dettagliato in [scambio di dati e convalida del dialogo](../mfc/dialog-data-exchange-and-validation.md).

Per una finestra di dialogo modale, è possibile recuperare tutti i dati immessi dall'utente quando `DoModal` restituisce IDOK ma prima che l'oggetto finestra di dialogo venga eliminato definitivamente. Per una finestra di dialogo non modale, è possibile recuperare i dati dall'oggetto finestra di dialogo in qualsiasi momento chiamando `UpdateData` con l'argomento **true** e quindi accedendo alle variabili membro della classe della finestra di dialogo. Questo argomento viene discusso più dettagliatamente nella pagina [relativa a scambio e convalida dei dati della finestra di dialogo](../mfc/dialog-data-exchange-and-validation.md).

## <a name="see-also"></a>Vedere anche

[Utilizzo delle finestre di dialogo in MFC](../mfc/life-cycle-of-a-dialog-box.md)

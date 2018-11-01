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
ms.openlocfilehash: 345a2894693eace5aa464ca3940c785b2da08784
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50615128"
---
# <a name="retrieving-data-from-the-dialog-object"></a>Recupero di dati da un oggetto Dialog

Il framework offre un modo semplice per inizializzare i valori dei controlli in una finestra di dialogo e per recuperare i valori dai controlli. L'approccio manuale più laboriosa consiste nel chiamare funzioni quali la `SetDlgItemText` e `GetDlgItemText` funzioni membro della classe `CWnd`, che si applicano a finestre di controllo. Con queste funzioni, è accedere a ciascun controllo individualmente per impostare o ottenere il relativo valore, chiamare funzioni quali `SetWindowText` e `GetWindowText`. Consente di automatizzare l'utilizzo del framework sia l'inizializzazione e il recupero.

DDX (DDX) consente di scambiare dati tra i controlli di finestra di dialogo casella e le variabili membro nell'oggetto finestra di dialogo più facilmente. Questo scambio funziona in entrambe le direzioni. Per inizializzare i controlli nella finestra di dialogo, è possibile impostare i valori dei membri dati nell'oggetto finestra di dialogo, quindi il framework trasferirà i valori per i controlli prima che venga visualizzata la finestra di dialogo. È possibile in qualsiasi momento aggiornare i membri di dati della finestra di dialogo con i dati immessi dall'utente. A questo punto, è possibile usare i dati facendo riferimento alle variabili di membro dati.

È inoltre possibile ordinare per i valori dei controlli di finestra di dialogo di essere convalidati automaticamente con la convalida dei dati di finestra di dialogo (DDV).

DDX e DDV sono illustrati più dettagliatamente [convalida e DDX](../mfc/dialog-data-exchange-and-validation.md).

Per una finestra di dialogo modale, è possibile recuperare tutti i dati l'utente ha immesso quando `DoModal` restituisce IDOK ma prima la finestra di dialogo viene eliminato definitivamente l'oggetto. Per una finestra di dialogo non modale, è possibile recuperare dati da un oggetto dialog in qualsiasi momento chiamando `UpdateData` con l'argomento **TRUE** e l'accesso a variabili membro della classe della finestra. Questo argomento viene discusso in maggior dettaglio nella [convalida e DDX](../mfc/dialog-data-exchange-and-validation.md).

## <a name="see-also"></a>Vedere anche

[Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)


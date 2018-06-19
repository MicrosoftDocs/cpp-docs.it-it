---
title: Il recupero dei dati da un oggetto Dialog | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0ac243333c8dc778486dd18323658f262c6d6610
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33380208"
---
# <a name="retrieving-data-from-the-dialog-object"></a>Recupero di dati da un oggetto Dialog
Il framework fornisce un modo semplice per inizializzare i valori dei controlli in una finestra di dialogo e per recuperare i valori dai controlli. Il metodo manuale più consiste nel chiamare funzioni, ad esempio il `SetDlgItemText` e `GetDlgItemText` funzioni membro della classe `CWnd`, che si applicano a finestre di controllo. Con queste funzioni, è accedere ciascun controllo individualmente per impostare o ottenere il relativo valore, la chiamata di funzioni, ad esempio `SetWindowText` e `GetWindowText`. L'utilizzo del framework consente di automatizzare sia l'inizializzazione e il recupero.  
  
 DDX (DDX) consente di scambiare dati tra i controlli di finestra di dialogo casella e le variabili membro nell'oggetto finestra di dialogo più facilmente. Questo scambio funziona in entrambe le direzioni. Per inizializzare i controlli nella finestra di dialogo, è possibile impostare i valori dei membri di dati nell'oggetto finestra di dialogo e il framework trasferirà i valori per i controlli prima che venga visualizzata la finestra di dialogo. È possibile in qualsiasi momento aggiornare i membri dati della finestra di dialogo con i dati immessi dall'utente. A questo punto, è possibile utilizzare i dati tramite un riferimento a variabili membro dati.  
  
 È inoltre possibile ordinare per i valori dei controlli di finestra di dialogo di essere convalidati automaticamente con la convalida dei dati di finestra di dialogo (DDV).  
  
 DDX e DDV sono illustrati in dettaglio in [convalida e DDX](../mfc/dialog-data-exchange-and-validation.md).  
  
 Per una finestra di dialogo modale, è possibile recuperare i dati a cui l'utente ha immesso quando `DoModal` restituisce **IDOK** ma prima la finestra di dialogo oggetto eliminato. Per una finestra di dialogo non modale, è possibile recuperare dati dall'oggetto finestra di dialogo in qualsiasi momento chiamando `UpdateData` con l'argomento **TRUE** e quindi l'accesso alle variabili membro della classe finestra di dialogo. Questo argomento viene illustrato in dettaglio in [convalida e DDX](../mfc/dialog-data-exchange-and-validation.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)


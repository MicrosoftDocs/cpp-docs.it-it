---
title: Dialog Data Exchange | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- initializing dialog boxes
- canceling data exchange
- dialog box data, retrieving
- DDX (dialog data exchange), data exchange mechanism
- dialog boxes [MFC], initializing
- dialog boxes [MFC], retrieving user input using DDX
- dialog box data
- dialog boxes [MFC], data exchange
- CDataExchange class [MFC], using DDX
- DoDataExchange method [MFC]
- user input [MFC], retrieving from MFC dialog boxes
- capturing user input [MFC]
- transferring dialog box data
- DDX (dialog data exchange), canceling
- UpdateData method [MFC]
- retrieving dialog box data [MFC]
ms.assetid: 4675f63b-41d2-45ed-b6c3-235ad8ab924b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2385efcef9949eab60b1542b2039e3ff2ac80e38
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36930859"
---
# <a name="dialog-data-exchange"></a>DDX (Dialog Data Exchange)
Se si usa il meccanismo DDX, impostare i valori iniziali della finestra di dialogo variabili membro dell'oggetto, in genere nel `OnInitDialog` gestore o il costruttore di finestra di dialogo. Immediatamente prima che venga visualizzata la finestra di dialogo, meccanismo DDX del framework trasferisce i valori delle variabili membro per i controlli nella finestra di dialogo, in cui vengono visualizzati quando la finestra di dialogo viene visualizzata in risposta a `DoModal` o `Create`. L'implementazione predefinita di `OnInitDialog` in `CDialog` chiama il `UpdateData` funzione membro di classe `CWnd` per inizializzare i controlli nella finestra di dialogo.  
  
 Lo stesso meccanismo trasferisce i valori dai controlli per le variabili membro quando l'utente fa clic sul pulsante OK (o ogni volta che chiamano le `UpdateData` funzione membro con l'argomento **TRUE**). Il meccanismo di convalida dei dati di finestra di dialogo Convalida gli elementi di dati per cui sono specificate le regole di convalida.  
  
 Nella figura seguente viene illustrato lo scambio di dati di finestra di dialogo.  
  
 ![Lo scambio di dati di finestra di dialogo](../mfc/media/vc379d1.gif "vc379d1")  
DDX (Dialog Data Exchange)  
  
 `UpdateData` funziona in entrambe le direzioni, come specificato dal **BOOL** parametro passato a esso. Per eseguire lo scambio `UpdateData` consente di impostare un `CDataExchange` oggetto e chiama l'override della classe di finestra di dialogo della `CDialog`del `DoDataExchange` funzione membro. `DoDataExchange` accetta un argomento di tipo `CDataExchange`. Il `CDataExchange` oggetto passato a `UpdateData` rappresenta il contesto dello scambio, la definizione di tali informazioni come la direzione dello scambio.  
  
 Quando l'utente (o una procedura guidata codice) esegue l'override `DoDataExchange`, si specifica una chiamata a una funzione DDX per ogni membro dati (controllo). Ogni funzione DDX sa come lo scambio di dati in entrambe le direzioni in base al contesto fornito dal `CDataExchange` argomento passato al `DoDataExchange` da `UpdateData`.  
  
 MFC fornisce numerose funzioni DDX per diversi tipi di exchange. L'esempio seguente mostra un `DoDataExchange` override nel quale DDX due vengono chiamate le funzioni e una funzione DDV:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#49](../mfc/codesnippet/cpp/dialog-data-exchange_1.cpp)]  
  
 Il `DDX_` e `DDV_` le righe sono un mapping dei dati. Le funzioni DDX e DDV di esempio illustrate sono per un controllo casella di controllo e un controllo casella di modifica, rispettivamente.  
  
 Se l'utente annulla una finestra di dialogo modale, il `OnCancel` funzione membro termina la finestra di dialogo e `DoModal` restituisce il valore **IDCANCEL**. Nessun dato in questo caso, verrà scambiato tra la finestra di dialogo e l'oggetto finestra di dialogo.  
  
## <a name="see-also"></a>Vedere anche  
 [Dialog Data Exchange e convalida](../mfc/dialog-data-exchange-and-validation.md)   
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)   
 [Convalida dei dati delle finestre di dialogo](../mfc/dialog-data-validation.md)


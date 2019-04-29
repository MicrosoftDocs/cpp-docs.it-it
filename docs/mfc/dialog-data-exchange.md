---
title: DDX (Dialog Data Exchange)
ms.date: 11/19/2018
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
ms.openlocfilehash: 338630aef358d9490461179288d5c45a2d3b821c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62348787"
---
# <a name="dialog-data-exchange"></a>DDX (Dialog Data Exchange)

Se si usa il meccanismo DDX Elimina, impostare i valori iniziali della finestra di dialogo variabili membro dell'oggetto, in genere nel `OnInitDialog` gestore o il costruttore della finestra di dialogo. Immediatamente prima che venga visualizzata la finestra di dialogo, meccanismo DDX Elimina del framework trasferisce i valori delle variabili membro per i controlli nella finestra di dialogo, in cui vengono visualizzate quando la finestra di dialogo viene visualizzata in risposta a `DoModal` o `Create`. L'implementazione predefinita di `OnInitDialog` nelle `CDialog` chiama il `UpdateData` funzione membro di classe `CWnd` per inizializzare i controlli nella finestra di dialogo.

Lo stesso meccanismo trasferisce i valori dai controlli per le variabili membro quando l'utente fa clic sul pulsante OK (o ogni volta che si chiama il `UpdateData` la funzione membro con l'argomento **TRUE**). Il meccanismo di convalida dei dati di finestra di dialogo Convalida gli elementi di dati per cui sono specificate le regole di convalida.

La figura seguente illustra lo scambio di dati della finestra.

![Lo scambio di dati finestra di dialogo](../mfc/media/vc379d1.gif "lo scambio di dati finestra di dialogo") <br/>
DDX (Dialog Data Exchange)

`UpdateData` funziona in entrambe le direzioni, come specificato dalle **BOOL** parametro passato ad esso. Per eseguire lo scambio `UpdateData` configura un `CDataExchange` oggetto e chiama l'override della classe di finestra di dialogo della `CDialog`del `DoDataExchange` funzione membro. `DoDataExchange` accetta un argomento di tipo `CDataExchange`. Il `CDataExchange` oggetto passato al `UpdateData` rappresenta il contesto dello scambio, la definizione di tali informazioni come la direzione dello scambio.

Quando l'utente (o una procedura guidata codice) esegue l'override `DoDataExchange`, si specifica una chiamata a una funzione DDX per ogni membro dati (controllo). Ogni funzione DDX sa come lo scambio di dati in entrambe le direzioni in base al contesto fornito dal `CDataExchange` argomento passato alle `DoDataExchange` da `UpdateData`.

MFC fornisce molte funzioni DDX per diversi tipi di exchange. L'esempio seguente mostra un `DoDataExchange` override nel quale DDX due funzioni e una funzione DDV sono denominati:

[!code-cpp[NVC_MFCControlLadenDialog#49](../mfc/codesnippet/cpp/dialog-data-exchange_1.cpp)]

Il `DDX_` e `DDV_` righe sono un mapping dei dati. Le funzioni DDX e DDV di esempio illustrate sono per un controllo casella di controllo e un controllo casella di modifica, rispettivamente.

Se l'utente annulla una finestra di dialogo modale, il `OnCancel` funzione membro termina la finestra di dialogo e `DoModal` restituisce il valore **IDCANCEL**. In tal caso, non i dati vengono scambiati tra la finestra di dialogo e oggetto finestra di dialogo.

## <a name="see-also"></a>Vedere anche

[Convalida e DDX (Dialog Data Exchange)](../mfc/dialog-data-exchange-and-validation.md)<br/>
[Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)<br/>
[Convalida dei dati delle finestre di dialogo](../mfc/dialog-data-validation.md)

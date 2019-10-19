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
ms.openlocfilehash: 9a0199577ea46520c2eadc308812de8a1ce4b514
ms.sourcegitcommit: 8178d22701047d24f69f10d01ba37490e3d67241
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/18/2019
ms.locfileid: "71685801"
---
# <a name="dialog-data-exchange"></a>DDX (Dialog Data Exchange)

Se si utilizza il meccanismo DDX, è possibile impostare i valori iniziali delle variabili membro dell'oggetto finestra di dialogo, in genere nel gestore `OnInitDialog` o nel costruttore della finestra di dialogo. Immediatamente prima della visualizzazione della finestra di dialogo, il meccanismo DDX del framework trasferisce i valori delle variabili membro ai controlli della finestra di dialogo, dove vengono visualizzati quando la finestra di dialogo viene visualizzata in risposta a `DoModal` o `Create`. L'implementazione predefinita di `OnInitDialog` in `CDialog` chiama la funzione membro `UpdateData` della classe `CWnd` per inizializzare i controlli nella finestra di dialogo.

Lo stesso meccanismo trasferisce i valori dai controlli alle variabili membro quando l'utente fa clic sul pulsante OK (oppure ogni volta che si chiama la funzione membro `UpdateData` con l'argomento **true**). Il meccanismo di convalida dei dati della finestra di dialogo convalida tutti gli elementi di dati per i quali sono state specificate regole di convalida.

Nella figura seguente viene illustrato lo scambio di dati della finestra di dialogo.

![Scambio di dati della finestra di dialogo](../mfc/media/vc379d1.gif "DDX (Dialog Data Exchange)") <br/>
DDX (Dialog Data Exchange)

`UpdateData` funziona in entrambe le direzioni, come specificato dal parametro **bool** passato. Per eseguire lo scambio, `UpdateData` imposta un oggetto `CDataExchange` e chiama l'override della classe della finestra di dialogo della funzione membro `DoDataExchange` di `CDialog`. `DoDataExchange` accetta un argomento di tipo `CDataExchange`. L'oggetto `CDataExchange` passato a `UpdateData` rappresenta il contesto dello scambio, definendo tali informazioni come direzione dello scambio.

Quando si esegue l'override di `DoDataExchange`, o di una creazione guidata codice, si specifica una chiamata a una funzione DDX per membro dati (controllo). Ogni funzione DDX sa come scambiare dati in entrambe le direzioni in base al contesto fornito dall'argomento `CDataExchange` passato al `DoDataExchange` da `UpdateData`.

MFC fornisce molte funzioni DDX per diversi tipi di scambio. Nell'esempio seguente viene illustrato un override `DoDataExchange` in cui vengono chiamate due funzioni DDX e una funzione DDV:

[!code-cpp[NVC_MFCControlLadenDialog#49](../mfc/codesnippet/cpp/dialog-data-exchange_1.cpp)]

Le linee `DDX_` e `DDV_` sono una mappa dati. Le funzioni DDX e DDV di esempio visualizzate sono rispettivamente per un controllo casella di controllo e un controllo della casella di modifica.

Se l'utente annulla una finestra di dialogo modale, la funzione membro `OnCancel` termina la finestra di dialogo e `DoModal` restituisce il valore **IDCANCEL**. In tal caso, non viene scambiato alcun dato tra la finestra di dialogo e l'oggetto finestra di dialogo.

## <a name="see-also"></a>Vedere anche

[Convalida e DDX (Dialog Data Exchange)](../mfc/dialog-data-exchange-and-validation.md)<br/>
[Utilizzo delle finestre di dialogo in MFC](../mfc/life-cycle-of-a-dialog-box.md)<br/>
[Convalida dei dati delle finestre di dialogo](../mfc/dialog-data-validation.md)

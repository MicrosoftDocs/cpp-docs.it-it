---
title: Descrizione comandi | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- tool tips [MFC], activating
- CBRS_TOOLTIPS constant [MFC]
- tool tips [MFC], adding text
- updates [MFC]
- CBRS_FLYBY constant [MFC]
- tool tips [MFC]
- updating status bar messages
- updates, status bar messages
- status bars [MFC], tool tips
- flyby status bar updates
ms.assetid: d1696305-b604-4fad-9f09-638878371412
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c7024284a1be22aed211e8cf58f8366df88aa917
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33383497"
---
# <a name="toolbar-tool-tips"></a>Descrizioni comandi barra degli strumenti
Descrizioni comandi sono piccole finestre popup che visualizzano una breve descrizione dello scopo del pulsante della barra degli strumenti quando si posiziona il puntatore del mouse su un pulsante per un periodo di tempo. Quando si crea un'applicazione con la creazione guidata applicazione con una barra degli strumenti, supporto della descrizione comandi viene fornito automaticamente. Questo articolo illustra entrambi il supporto della descrizione comandi creato per la creazione guidata applicazione e come aggiungere supporto della descrizione comandi per l'applicazione.  
  
 Questo articolo illustra le attività seguenti:  
  
-   [L'attivazione di descrizioni comandi](#_core_activating_tool_tips)  
  
-   [Aggiornamenti della barra di stato in tempo reale](#_core_fly_by_status_bar_updates)  
  
##  <a name="_core_activating_tool_tips"></a> L'attivazione di descrizioni comandi  
 Per attivare le descrizioni comandi nell'applicazione, è necessario eseguire due operazioni:  
  
-   Aggiungere il `CBRS_TOOLTIPS` stile per gli altri stili (ad esempio **WS_CHILD**, **WS_VISIBLE**e altri **CBRS _** stili) passato come il `dwStyle` parametro per il [ CToolBar:: Create](../mfc/reference/ctoolbar-class.md#create) funzione o in [SetBarStyle](../mfc/reference/ccontrolbar-class.md#setbarstyle).  
  
-   Come descritto nella procedura seguente, aggiungere il testo di suggerimento sulla barra degli strumenti, separato da un carattere di nuova riga ('\n'), per la risorsa stringa contenente il messaggio di richiesta della riga di comando per il comando della barra degli strumenti. La risorsa stringa condivide lo stesso ID del pulsante della barra degli strumenti.  
  
#### <a name="to-add-the-tool-tip-text"></a>Per aggiungere il testo della descrizione comando  
  
1.  Mentre si sta modificando la barra degli strumenti nell'editor barra degli strumenti, aprire il **proprietà dei pulsanti della barra degli strumenti** finestra per un pulsante specificato.  
  
2.  Nel **Prompt** , specificare il testo da visualizzare nella descrizione comandi per tale pulsante.  
  
> [!NOTE]
>  Impostazione del testo come una proprietà del pulsante nell'editor barra degli strumenti sostituisce la procedura precedente, in cui era necessario aprire e modificare la stringa di risorsa.  
  
 Se una barra di controllo con descrizioni comandi abilitato dispone di controlli figlio posizionati su di esso, la barra di controllo visualizzerà una descrizione comando per ogni controllo figlio sulla barra di controllo, purché siano soddisfatti i criteri seguenti:  
  
-   L'ID del controllo non - 1.  
  
-   La voce della tabella di stringhe con lo stesso ID del controllo figlio nel file di risorse è una stringa di descrizione comandi.  
  
##  <a name="_core_fly_by_status_bar_updates"></a> Aggiornamenti rapidi della barra di stato  
 Un è correlata alle descrizioni comandi della barra di aggiornamento di stato "in tempo reale". Per impostazione predefinita, il messaggio sulla barra di stato viene descritto solo un pulsante della barra degli strumenti specifica quando il pulsante è attivato. Includendo `CBRS_FLYBY` nell'elenco degli stili passati a `CToolBar::Create`, è possibile disporre di questi messaggi aggiornati quando il cursore del mouse viene spostato sopra la barra degli strumenti senza effettivamente attivazione del pulsante.  
  
### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Implementazione della barra degli strumenti MFC (informazioni generali sulle barre degli strumenti)](../mfc/mfc-toolbar-implementation.md)  
  
-   [Ancoraggio e barre degli strumenti mobili](../mfc/docking-and-floating-toolbars.md)  
  
-   Il [CToolBar](../mfc/reference/ctoolbar-class.md) e [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) classi  
  
-   [Utilizzo del controllo barra degli strumenti](../mfc/working-with-the-toolbar-control.md)  
  
-   [Utilizzo delle barre degli strumenti precedente](../mfc/using-your-old-toolbars.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Implementazione della barra degli strumenti MFC](../mfc/mfc-toolbar-implementation.md)


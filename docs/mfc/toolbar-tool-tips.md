---
title: Descrizioni comandi barra degli strumenti
ms.date: 11/04/2016
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
ms.openlocfilehash: 1762931b75734801659fd6271377260bd0473614
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373454"
---
# <a name="toolbar-tool-tips"></a>Descrizioni comandi barra degli strumenti

Le descrizioni comandi sono le piccole finestre popup che presentano brevi descrizioni dello scopo di un pulsante della barra degli strumenti quando si posiziona il mouse su un pulsante per un periodo di tempo. Quando si crea un'applicazione con la creazione guidata applicazione che dispone di una barra degli strumenti, viene fornito il supporto della descrizione comandi. In questo articolo viene illustrato sia il supporto dei suggerimenti per gli strumenti creato dalla Creazione guidata applicazione e come aggiungere il supporto dei suggerimenti per gli strumenti all'applicazione.

Questo articolo riguarda:

- [Attivazione delle descrizioni comandi](#_core_activating_tool_tips)

- [Aggiornamenti della barra di stato di Flyby](#_core_fly_by_status_bar_updates)

## <a name="activating-tool-tips"></a><a name="_core_activating_tool_tips"></a>Attivazione delle descrizioni comandi

Per attivare le descrizioni comandi nell'applicazione, è necessario eseguire due operazioni:To activate tool tips in your application, you must do two things:

- Aggiungere lo stile CBRS_TOOLTIPS agli altri stili (ad esempio WS_CHILD, WS_VISIBLE e altri stili **di CBRS_)** passati come parametro *dwStyle* alla funzione [CToolBar::Create](../mfc/reference/ctoolbar-class.md#create) o in [SetBarStyle](../mfc/reference/ccontrolbar-class.md#setbarstyle).

- Come descritto nella procedura riportata di seguito, aggiungere il testo del suggerimento per la barra degli strumenti, separato da un carattere di nuova riga (''n'), alla risorsa stringa contenente il prompt della riga di comando per il comando della barra degli strumenti. La risorsa stringa condivide l'ID del pulsante della barra degli strumenti.

#### <a name="to-add-the-tool-tip-text"></a>Per aggiungere il testo della descrizione comandi

1. Durante la modifica della barra degli strumenti nell'editor delle barre degli strumenti, aprire la finestra **Proprietà pulsante barra degli strumenti** per un determinato pulsante.

1. Nella casella **Prompt,** specificare il testo che si desidera visualizzare nella descrizione comandi per il pulsante.

> [!NOTE]
> L'impostazione del testo come proprietà del pulsante nell'editor della barra degli strumenti sostituisce la routine precedente, in cui era necessario aprire e modificare la risorsa stringa.

Se una barra di controllo con le descrizioni comandi abilitate dispone di controlli figlio posizionati su di esso, la barra di controllo visualizzerà una descrizione comandi per ogni controllo figlio sulla barra di controllo, purché soddisfi i seguenti criteri:

- L'ID del controllo non è - 1.

- La voce della tabella di stringhe con lo stesso ID del controllo figlio nel file di risorse ha una stringa di descrizione comandi.

## <a name="flyby-status-bar-updates"></a><a name="_core_fly_by_status_bar_updates"></a>Aggiornamenti della barra di stato Flyby

Una funzionalità relativa alle descrizioni comandi è l'aggiornamento della barra di stato "flyby". Per impostazione predefinita, il messaggio sulla barra di stato descrive solo un particolare pulsante della barra degli strumenti quando il pulsante è attivato. Includendo CBRS_FLYBY nell'elenco di `CToolBar::Create`stili passato a , è possibile aggiornare questi messaggi quando il cursore del mouse passa sulla barra degli strumenti senza attivare effettivamente il pulsante .

### <a name="what-do-you-want-to-know-more-about"></a>Cosa vuoi sapere di più su

- [Implementazione della barra degli strumenti MFC (informazioni generali sulle barre degli strumenti)](../mfc/mfc-toolbar-implementation.md)

- [Barre degli strumenti ancorate e mobili](../mfc/docking-and-floating-toolbars.md)

- Le classi [CToolBar](../mfc/reference/ctoolbar-class.md) e [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md)

- [Utilizzo del controllo barra degli strumenti](../mfc/working-with-the-toolbar-control.md)

- [Utilizzo delle barre degli strumenti precedenti](../mfc/using-your-old-toolbars.md)

## <a name="see-also"></a>Vedere anche

[Implementazione della barra degli strumenti MFC](../mfc/mfc-toolbar-implementation.md)

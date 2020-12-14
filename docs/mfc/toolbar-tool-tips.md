---
description: 'Altre informazioni su: descrizioni comandi della barra degli strumenti'
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
ms.openlocfilehash: bbf60246e778b60c2a6eacbcb55441806c00fad2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97264284"
---
# <a name="toolbar-tool-tips"></a>Descrizioni comandi barra degli strumenti

Le descrizioni comandi sono le piccole finestre popup che presentano brevi descrizioni dello scopo di un pulsante della barra degli strumenti quando si posiziona il mouse su un pulsante per un determinato periodo di tempo. Quando si crea un'applicazione con la creazione guidata applicazione che dispone di una barra degli strumenti, viene fornito il supporto per le descrizioni comandi. Questo articolo illustra sia il supporto della descrizione comando creato dalla creazione guidata applicazione che la procedura per aggiungere il supporto per le descrizioni comandi all'applicazione.

Questo articolo riguarda:

- [Attivazione delle descrizioni comandi](#_core_activating_tool_tips)

- [Aggiornamenti della barra di stato sorvolo](#_core_fly_by_status_bar_updates)

## <a name="activating-tool-tips"></a><a name="_core_activating_tool_tips"></a> Attivazione delle descrizioni comandi

Per attivare le descrizioni comandi nell'applicazione, è necessario eseguire due operazioni:

- Aggiungere lo stile CBRS_TOOLTIPS agli altri stili, ad esempio WS_CHILD, WS_VISIBLE e altri stili di **CBRS_** , passati come parametro *DwStyle* alla funzione [CToolBar:: create](../mfc/reference/ctoolbar-class.md#create) o in [SetBarStyle](../mfc/reference/ccontrolbar-class.md#setbarstyle).

- Come descritto nella procedura riportata di seguito, aggiungere il testo del suggerimento della barra degli strumenti, separato da un carattere di nuova riga (' \n '), alla risorsa di stringa contenente il prompt della riga di comando per il comando della barra degli strumenti. La risorsa stringa condivide l'ID del pulsante della barra degli strumenti.

#### <a name="to-add-the-tool-tip-text"></a>Per aggiungere il testo della descrizione comando

1. Quando si modifica la barra degli strumenti nell'editor della barra degli strumenti, aprire la finestra **Proprietà pulsante della barra degli strumenti** per un pulsante specificato.

1. Nella casella **richiesta** specificare il testo che si desidera visualizzare nella descrizione comando per il pulsante.

> [!NOTE]
> Impostando il testo come proprietà Button nell'editor della barra degli strumenti, viene sostituita la procedura precedente, in cui era necessario aprire e modificare la risorsa di stringa.

Se una barra di controllo con descrizioni comandi abilitata dispone di controlli figlio posizionati su di essa, nella barra di controllo verrà visualizzata una descrizione comando per ogni controllo figlio sulla barra di controllo purché soddisfi i criteri seguenti:

- L'ID del controllo non è-1.

- La voce della tabella di stringa con lo stesso ID del controllo figlio nel file di risorse contiene una stringa di descrizione comando.

## <a name="flyby-status-bar-updates"></a><a name="_core_fly_by_status_bar_updates"></a> Aggiornamenti della barra di stato sorvolo

Una funzionalità correlata alle descrizioni comandi è l'aggiornamento della barra di stato "sorvolo". Per impostazione predefinita, il messaggio sulla barra di stato descrive solo un particolare pulsante della barra degli strumenti quando il pulsante è attivato. Includendo CBRS_FLYBY nell'elenco degli stili passati a `CToolBar::Create` , è possibile aggiornare questi messaggi quando il cursore del mouse passa sulla barra degli strumenti senza attivare effettivamente il pulsante.

### <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Implementazione della barra degli strumenti MFC (informazioni generali sulle barre degli strumenti)](../mfc/mfc-toolbar-implementation.md)

- [Barre degli strumenti ancorate e mobili](../mfc/docking-and-floating-toolbars.md)

- Classi [CToolBar](../mfc/reference/ctoolbar-class.md) e [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md)

- [Uso del controllo barra degli strumenti](../mfc/working-with-the-toolbar-control.md)

- [Uso di barre degli strumenti precedenti](../mfc/using-your-old-toolbars.md)

## <a name="see-also"></a>Vedi anche

[Implementazione della barra degli strumenti MFC](../mfc/mfc-toolbar-implementation.md)

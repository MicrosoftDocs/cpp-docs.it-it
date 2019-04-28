---
title: Personalizzare l'elemento dell'intestazione&#39;aspetto
ms.date: 11/04/2016
helpviewer_keywords:
- header controls [MFC], customization of items
- CHeaderCtrl class [MFC], customizing the items
- HDS_ styles
ms.assetid: b1e1e326-ec7d-4dbd-a46f-96a3e2055618
ms.openlocfilehash: 081260bd5c1cf6335d398a4fd773c9590dbc8030
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62241583"
---
# <a name="customizing-the-header-item39s-appearance"></a>Personalizzare l'elemento dell'intestazione&#39;aspetto

Impostando il *dwStyle* parametro quando si crea un controllo header ([CHeaderCtrl:: Create](../mfc/reference/cheaderctrl-class.md#create)), è possibile definire l'aspetto e comportamento dell'intestazione di elementi o dell'intestazione del controllo stesso.

Di seguito sono riportati gli stili che è possibile impostare e il loro scopo:

- Per rendere un elemento di intestazione l'aspetto di un pulsante di comando, usare il **HDS_BUTTONS** stile.

   Usare questo stile se si desidera eseguire azioni in risposta ai clic del mouse su un elemento di intestazione, ad esempio l'ordinamento dei dati da una determinata colonna, come accade in Microsoft Outlook.

- Per assegnare agli elementi dell'intestazione di un aspetto "hot track" quando il cursore del mouse passa su di essi, usare il **HDS_HOTTRACK** stile.

   La funzionalità di intercettazione consente di visualizzare un bordo 3D il puntatore è posizionato su un elemento in un semplice in caso contrario, a barre.

- Per indicare che il controllo intestazione deve essere nascosto, usare il **HDS_HIDDEN** stile.

   Il **HDS_HIDDEN** stile indica che il controllo intestazione deve essere utilizzato come un contenitore di dati e non un controllo visivo. Questo stile non nasconde automaticamente il controllo ma, invece, influisce sul comportamento di `CHeaderCtrl::Layout`. Il valore restituito nel *cy* membro del `WINDOWPOS` struttura sarà zero che indica che il controllo non deve essere visibile all'utente.

Per altre informazioni su queste proprietà, vedere [elementi](/windows/desktop/Controls/header-controls) nel SDK di Windows. Per informazioni sull'aggiunta di elementi a un controllo intestazione, vedere [aggiunta di elementi al controllo Header](../mfc/adding-items-to-the-header-control.md).

## <a name="see-also"></a>Vedere anche

[Uso di CHeaderCtrl](../mfc/using-cheaderctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

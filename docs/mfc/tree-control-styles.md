---
description: 'Altre informazioni su: stili del controllo Tree'
title: Stili del controllo Tree
ms.date: 11/04/2016
f1_keywords:
- TVS_SINGLEEXPAND
- TVS_LINESATROOT
- TVS_HASBUTTONS
- TVS_NOTOOLTIPS
- TVS_HASLINES
helpviewer_keywords:
- TVS_LINESATROOT [MFC]
- styles [MFC], CTreeCtrl
- styles [MFC], tree control
- TVS_HASLINES
- TVS_SINGLEEXPAND
- CTreeCtrl class [MFC], styles
- TVS_EDITLABELS [MFC]
- TVS_NOTOOLTIPS [MFC]
- TVS_HASBUTTONS [MFC]
- tree controls [MFC], styles
ms.assetid: f43faebd-a355-479e-888a-bf0673d5e1b4
ms.openlocfilehash: a0e6f88c6dfcae906c5b5f1ef1f5f7cafa582b02
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97263920"
---
# <a name="tree-control-styles"></a>Stili del controllo Tree

Gli stili del controllo Tree ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) regolano gli aspetti dell'aspetto di un controllo di struttura ad albero. È possibile impostare gli stili iniziali durante la creazione del controllo struttura ad albero. È possibile recuperare e modificare gli stili dopo aver creato il controllo albero usando le funzioni di Windows [GetWindowLong](/windows/win32/api/winuser/nf-winuser-getwindowlongw) e [SetWindowLong](/windows/win32/api/winuser/nf-winuser-setwindowlongw) , specificando **GWL_STYLE** per il parametro *nIndex* . Per un elenco completo degli stili, vedere [stili della finestra di controllo di visualizzazione albero](/windows/win32/Controls/tree-view-control-window-styles) nella Windows SDK.

Lo stile **TVS_HASLINES** migliora la rappresentazione grafica della gerarchia di un controllo albero disegnando linee che collegano elementi figlio all'elemento padre corrispondente. Questo stile non collega gli elementi alla radice della gerarchia. A tale scopo, è necessario combinare gli stili **TVS_HASLINES** e **TVS_LINESATROOT** .

L'utente può espandere o comprimere l'elenco di elementi figlio di un elemento padre facendo doppio clic sull'elemento padre. Un controllo struttura ad albero con lo stile **TVS_SINGLEEXPAND** causa la selezione dell'elemento da espandere e l'elemento da deselezionare per comprimere. Se il mouse viene utilizzato per fare clic sull'elemento selezionato e tale elemento è chiuso, verrà espanso. Se l'elemento selezionato è a singolo clic quando è aperto, sarà compresso.

Un controllo struttura ad albero con lo stile **TVS_HASBUTTONS** aggiunge un pulsante al lato sinistro di ogni elemento padre. L'utente può fare clic sul pulsante per espandere o comprimere gli elementi figlio come alternativa a fare doppio clic sull'elemento padre. **TVS_HASBUTTONS** non aggiunge pulsanti agli elementi alla radice della gerarchia. A tale scopo, è necessario combinare **TVS_HASLINES**, **TVS_LINESATROOT** e **TVS_HASBUTTONS**.

Lo stile **TVS_EDITLABELS** consente all'utente di modificare le etichette degli elementi del controllo Tree. Per ulteriori informazioni sulla modifica delle etichette, vedere la sezione relativa alla [modifica dell'etichetta del controllo Tree](../mfc/tree-control-label-editing.md) più avanti in questo argomento.

Lo stile **TVS_NOTOOLTIPS** Disabilita la funzionalità automatica di descrizione comando dei controlli di visualizzazione albero. Questa funzionalità Visualizza automaticamente una descrizione comando contenente il titolo dell'elemento sotto il cursore del mouse, se l'intero titolo non è attualmente visibile.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

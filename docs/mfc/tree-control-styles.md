---
title: Stili del controllo albero | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- TVS_SINGLEEXPAND
- TVS_LINESATROOT
- TVS_HASBUTTONS
- TVS_NOTOOLTIPS
- TVS_HASLINES
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ef7c24fb321594c64afe45e1902676f43afd3e9b
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46412671"
---
# <a name="tree-control-styles"></a>Stili del controllo Tree

Controllo struttura ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) stili determinano gli aspetti dell'aspetto di un controllo struttura ad albero. Impostare gli stili iniziali quando si crea il controllo struttura ad albero. È possibile recuperare e modificare gli stili dopo aver creato il controllo albero utilizzando il [GetWindowLong](/windows/desktop/api/winuser/nf-winuser-getwindowlonga) e [SetWindowLong](/windows/desktop/api/winuser/nf-winuser-setwindowlonga) funzioni di Windows, specificare **GWL_STYLE** per il *nIndex* parametro. Per un elenco completo degli stili, vedere [stili finestra del controllo Tree View](/windows/desktop/Controls/tree-view-control-window-styles) nel SDK di Windows.

Il **TVS_HASLINES** stile migliora la rappresentazione grafica della gerarchia di un controllo albero disegnando linee che collegano gli elementi figlio al relativo elemento padre corrispondente. Questo stile non collegare gli elementi in corrispondenza della radice della gerarchia. A tale scopo, è necessario combinare le **TVS_HASLINES** e **TVS_LINESATROOT** stili.

L'utente può espandere o comprimere un elemento padre dell'elenco di elementi figlio facendo doppio clic dell'elemento padre. Un controllo albero che ha il **TVS_SINGLEEXPAND** stile fa sì che l'elemento selezionato viene espanso e l'elemento viene deselezionato da comprimere. Se il puntatore del mouse viene utilizzato per l'elemento selezionato a singolo clic e tale elemento viene chiuso, esso verrà esteso. Se l'elemento selezionato viene fatto clic quando è aperta, verrà compresso.

Un controllo albero che ha il **TVS_HASBUTTONS** stile aggiunto un pulsante a sinistra di ogni elemento padre. L'utente può fare clic sul pulsante per espandere o comprimere gli elementi figlio in alternativa fare doppio clic sull'elemento padre. **TVS_HASBUTTONS** non aggiungere pulsanti a elementi in corrispondenza della radice della gerarchia. A tale scopo, è necessario combinare **TVS_HASLINES**, **TVS_LINESATROOT**, e **TVS_HASBUTTONS**.

Il **TVS_EDITLABELS** stile rende possibile l'utente può modificare le etichette degli elementi del controllo albero. Per altre informazioni sulla modifica di etichette, vedere [modificare l'albero controllo etichetta](../mfc/tree-control-label-editing.md) più avanti in questo argomento.

Il **TVS_NOTOOLTIPS** stile disabilita la funzionalità di suggerimento automatico dello strumento di controlli di visualizzazione albero. Questa funzionalità consente di visualizzare automaticamente una descrizione comando, che contiene il titolo dell'elemento sotto il cursore del mouse, se il titolo intero non è attualmente visibile.

## <a name="see-also"></a>Vedere anche

[Uso di CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)


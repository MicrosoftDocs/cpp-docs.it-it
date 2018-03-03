---
title: Stili del controllo albero | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c141a2b0db673f8d3c5f2c116de5b5d2ec81a8ad
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="tree-control-styles"></a>Stili del controllo Tree
Controllo struttura ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)), determinano gli stili dell'aspetto di un controllo struttura ad albero. Impostare gli stili iniziali quando si crea il controllo struttura ad albero. È possibile recuperare e modificare gli stili dopo aver creato il controllo struttura ad albero utilizzando il [GetWindowLong](http://msdn.microsoft.com/library/windows/desktop/ms633584) e [SetWindowLong](http://msdn.microsoft.com/library/windows/desktop/ms633591) funzioni di Windows, specificare **GWL_STYLE** per il `nIndex` parametro. Per un elenco completo degli stili, vedere [stili finestra del controllo di visualizzazione albero](http://msdn.microsoft.com/library/windows/desktop/bb760013) in Windows SDK.  
  
 Il **TVS_HASLINES** stile migliora la rappresentazione grafica della gerarchia di un controllo struttura disegnando linee che collegano gli elementi figlio al relativo elemento padre corrispondente. Questo stile non collegare gli elementi alla radice della gerarchia. A tale scopo, è necessario combinare il **TVS_HASLINES** e **TVS_LINESATROOT** stili.  
  
 L'utente può espandere o comprimere l'elenco di un elemento padre degli elementi figlio facendo doppio clic su elemento padre. Un controllo struttura ad albero che ha il **TVS_SINGLEEXPAND** stile fa sì che l'elemento selezionato viene espanso e l'elemento deselezionato viene compresso. Se il mouse viene utilizzato per l'elemento selezionato a singolo clic e tale elemento viene chiusa, verrà espanso. Se l'elemento selezionato è fatto clic quando è aperta, verrà compresso.  
  
 Un controllo struttura ad albero che ha il **TVS_HASBUTTONS** stile viene aggiunto un pulsante a sinistra di ogni elemento padre. L'utente può fare clic sul pulsante per espandere o comprimere gli elementi figlio in alternativa fare doppio clic sull'elemento padre. **TVS_HASBUTTONS** non aggiunge elementi alla radice della gerarchia di pulsanti. A tale scopo, è necessario combinare **TVS_HASLINES**, **TVS_LINESATROOT**, e **TVS_HASBUTTONS**.  
  
 Il **TVS_EDITLABELS** stile consente all'utente di modificare le etichette degli elementi del controllo albero. Per ulteriori informazioni sulla modifica delle etichette, vedere [modificare l'albero controllo etichetta](../mfc/tree-control-label-editing.md) più avanti in questo argomento.  
  
 Il **TVS_NOTOOLTIPS** stile disabilita la funzionalità di suggerimento automatico dello strumento di controlli di visualizzazione albero. Questa funzionalità consente di visualizzare automaticamente una descrizione comando contenente il titolo dell'elemento sotto il cursore del mouse, se il titolo intero non è attualmente visibile.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)


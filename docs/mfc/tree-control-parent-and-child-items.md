---
title: Struttura ad albero di elementi controllo padre e figlio | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- parent items in CTreeCtrl [MFC]
- child items in tree control [MFC]
- CTreeCtrl class [MFC], parent and child items
- tree controls [MFC], parent and child items
ms.assetid: abcea1e4-fe9b-40d9-86dc-1db235f8f103
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 260cbf640f6c57e4b145d01e8f883025a4dc6507
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33382515"
---
# <a name="tree-control-parent-and-child-items"></a>Elementi padre e figlio controllo Tree
Qualsiasi elemento in un controllo struttura ad albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) può avere un elenco di elementi secondari, denominati elementi figlio, è associati. Un elemento che dispone di uno o più elementi figlio viene chiamato un elemento padre. Un elemento figlio viene visualizzato sotto l'elemento padre e viene aumentato il rientro per indicare che è subordinata all'elemento padre. Un elemento che non ha elementi padre nella parte superiore della gerarchia e viene chiamato un elemento radice.  
  
 In qualsiasi momento, lo stato dell'elenco di un elemento padre degli elementi figlio può essere espansi o compressi. Quando lo stato è espanso, gli elementi figlio vengono visualizzati sotto l'elemento padre. Quando viene compressa, gli elementi figlio non vengono visualizzati. L'elenco Alterna automaticamente tra gli stati espansi e compressi quando l'utente fa doppio clic sull'elemento padre o, se il padre dispone di **TVS_HASBUTTONS** stile, quando l'utente fa clic sul pulsante associato all'elemento padre. Un'applicazione è possibile espandere o comprimere gli elementi figlio tramite la [Espandi](../mfc/reference/ctreectrl-class.md#expand) funzione membro.  
  
 Per aggiungere un elemento a un controllo struttura ad albero, chiamare il [InsertItem](../mfc/reference/ctreectrl-class.md#insertitem) funzione membro. Questa funzione restituisce un handle del **HTREEITEM** tipo, che identifica in modo univoco l'elemento. Quando si aggiunge un elemento, è necessario specificare l'handle dell'elemento padre del nuovo elemento. Se si specifica **NULL** o **TVI_ROOT al** valore anziché un handle di elemento padre nel [struttura TVINSERTSTRUCT](http://msdn.microsoft.com/library/windows/desktop/bb773452) struttura o `hParent` parametro, l'elemento viene aggiunto come radice elemento.  
  
 Il controllo struttura invia un [TVN_ITEMEXPANDING](http://msdn.microsoft.com/library/windows/desktop/bb773537) messaggio di notifica quando un elemento padre dell'elenco degli elementi figlio sta per essere espanso o compresso. La notifica offre l'opportunità per impedire la modifica o impostare gli attributi dell'elemento padre che dipendono dallo stato dell'elenco di elementi figlio. Dopo aver modificato lo stato dell'elenco, il controllo struttura invia un [TVN_ITEMEXPANDED](http://msdn.microsoft.com/library/windows/desktop/bb773533) messaggio di notifica.  
  
 Quando si espande un elenco di elementi figlio, il rientro relativo all'elemento padre. È possibile impostare la quantità di rientro utilizzando il [SetIndent](../mfc/reference/ctreectrl-class.md#setindent) funzione membro o recuperare la quantità corrente utilizzando il [GetIndent](../mfc/reference/ctreectrl-class.md#getindent) funzione membro.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)


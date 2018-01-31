---
title: Panoramica degli stati degli elementi di controllo di struttura ad albero | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- states, CTreeCtrl items
- tree controls [MFC], item states overview
- CTreeCtrl class [MFC], item states
ms.assetid: 2db11ae0-0d87-499d-8c1f-5e0dbe9e94c8
caps.latest.revision: "14"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6311169c0c8f9ee59f3582559f07ba85f997beff
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="tree-control-item-states-overview"></a>Panoramica degli stati degli elementi del controllo Tree
Ogni elemento in un controllo struttura ad albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) ha uno stato corrente. Ad esempio, un elemento può essere selezionato, disabilitato, espanso e così via. In genere, il controllo albero imposta automaticamente lo stato di un elemento per riflettere le azioni dell'utente, come ad esempio la selezione di un elemento. Tuttavia, è possibile impostare lo stato di un elemento utilizzando il [SetItemState](../mfc/reference/ctreectrl-class.md#setitemstate) funzione membro e recuperare lo stato corrente di un elemento utilizzando il [GetItemState](../mfc/reference/ctreectrl-class.md#getitemstate) funzione membro. Per un elenco completo degli stati degli elementi, vedere [costanti del controllo di visualizzazione albero](http://msdn.microsoft.com/library/windows/desktop/bb759985) in Windows SDK.  
  
 Lo stato corrente di un elemento è specificato dal parametro `nState`. Un controllo struttura ad albero può modificare lo stato di un elemento per riflettere un'azione dell'utente, come ad esempio la selezione dell'elemento oppure l'impostazione dello stato attivo sull'elemento. Inoltre, un'applicazione può modificare lo stato di un elemento per disabilitare o nascondere l'elemento o per specificare un'immagine sovrapposta o un'immagine di stato.  
  
 Quando si specifica o si modifica lo stato di un elemento, il parametro `nStateMask` specifica quali bit di stato impostare e il parametro `nState` contiene i nuovi valori per questi bit. Ad esempio, nell'esempio seguente modifica lo stato corrente di un elemento padre (specificato da `hParentItem`) in un `CTreeCtrl` oggetto (`m_treeCtrl`) per **su TVIS_EXPANDPARTIAL**:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#71](../mfc/codesnippet/cpp/tree-control-item-states-overview_1.cpp)]  
  
 Un altro esempio di modifica dello stato consiste nell'impostare l'immagine sovrapposta di un elemento. A tale scopo, `nStateMask` deve includere il `TVIS_OVERLAYMASK` valore, e `nState` deve includere l'indice in base uno dell'immagine sovrapposta spostata otto bit a sinistra utilizzando la [INDEXTOOVERLAYMASK](http://msdn.microsoft.com/library/windows/desktop/bb761408) (macro). L'indice può essere 0 per specificare che non è presente alcuna immagine sovrapposta. L'immagine sovrapposta deve aggiunti all'elenco del controllo struttura ad albero delle immagini sovrapposte da una chiamata precedente al [CImageList:: SetOverlayImage](../mfc/reference/cimagelist-class.md#setoverlayimage) (funzione). La funzione specifica l'indice in base uno dell'immagine da aggiungere. si tratta dell'indice utilizzato con il **INDEXTOOVERLAYMASK** (macro). Un controllo albero può contenere fino a quattro immagini sovrapposte.  
  
 Per impostare l'immagine di stato di un elemento, `nStateMask` deve includere il `TVIS_STATEIMAGEMASK` valore, e `nState` deve includere l'indice in base uno dell'immagine dello stato spostato a sinistra di 12 bit utilizzando il [INDEXTOSTATEIMAGEMASK](http://msdn.microsoft.com/library/windows/desktop/bb775597) (macro). L'indice può essere 0 per specificare che non è presente alcuna immagine di stato. Per ulteriori informazioni sulle immagini sovrapposte e di stato, vedere [elenchi di immagini di controllo albero](../mfc/tree-control-image-lists.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)

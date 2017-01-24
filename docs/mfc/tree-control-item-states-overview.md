---
title: "Panoramica degli stati degli elementi del controllo Tree | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CTreeCtrl (classe), stati dell'elemento"
  - "stati, elementi CTreeCtrl"
  - "struttura ad albero (controlli), panoramica degli stati degli elementi"
ms.assetid: 2db11ae0-0d87-499d-8c1f-5e0dbe9e94c8
caps.latest.revision: 14
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Panoramica degli stati degli elementi del controllo Tree
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ogni elemento in un controllo struttura ad albero \([CTreeCtrl](../mfc/reference/ctreectrl-class.md)\) dispone di uno stato corrente.  Ad esempio, un elemento può essere selezionato, disabilitato, espanso, e così via.  In genere, il controllo struttura ad albero imposta automaticamente lo stato di un elemento per riflettere le azioni dell'utente, come la selezione di un elemento.  Tuttavia, è anche possibile impostare lo stato di un elemento utilizzando la funzione membro [SetItemState](../Topic/CTreeCtrl::SetItemState.md) e recuperare lo stato corrente di un elemento utilizzando la funzione membro [GetItemState](../Topic/CTreeCtrl::GetItemState.md).  Per un elenco completo degli stati degli elementi, vedere [Costanti del controllo di visualizzazione ad albero](http://msdn.microsoft.com/library/windows/desktop/bb759985) in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
 Lo stato corrente di un elemento è specificato dal parametro `nState`.  Un controllo struttura ad albero può modificare lo stato di un elemento per riflettere un'azione dell'utente, come selezionare l'elemento oppure impostare lo stato attivo sull'elemento.  Inoltre, un'applicazione può modificare lo stato di un elemento per disabilitare o nascondere l'elemento o per specificare un'immagine o un'immagine di stato sovrapposte.  
  
 Quando si specifica o si modifica lo stato di un elemento, il parametro `nStateMask` specifica quali bit di stato impostare e il parametro `nState` contiene i nuovi valori per questi bit.  Ad esempio, nell'esempio seguente viene modificato lo stato corrente di un elemento padre \(specificato da `hParentItem`\) in un oggetto `CTreeCtrl` \(`m_treeCtrl`\) a **TVIS\_EXPANDPARTIAL**:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#71](../mfc/codesnippet/CPP/tree-control-item-states-overview_1.cpp)]  
  
 Un altro esempio di modifica dello stato è quello di impostare l'immagine sovrapposta di un elemento.  A tale scopo, `nStateMask` deve includere il valore `TVIS_OVERLAYMASK` e `nState` deve includere l'indice in base uno di un'immagine sovrapposta effettuando il left shift di otto bit utilizzando la macro [INDEXTOOVERLAYMASK](http://msdn.microsoft.com/library/windows/desktop/bb761408).  L'indice può essere 0 per non specificare un'immagine sovrapposta.  L'immagine sovrapposta deve essere aggiunta all'elenco di controllo di struttura ad albero delle immagini sovrapposte da una chiamata precedente alla funzione [CImageList::SetOverlayImage](../Topic/CImageList::SetOverlayImage.md).  La funzione specifica l'indice in base uno dell'immagine da aggiungere; si tratta dell'indice utilizzato con la macro **INDEXTOOVERLAYMASK**.  Un controllo struttura ad albero può contenere fino a quattro immagini sovrapposte.  
  
 Per impostare l'immagine di stato di un elemento, `nStateMask` deve includere il valore `TVIS_STATEIMAGEMASK` e `nState` deve includere l'indice in base uno dell'immagine di stato effettuando il left shift di 12 bit utilizzando la macro [INDEXTOSTATEIMAGEMASK](http://msdn.microsoft.com/library/windows/desktop/bb775597).  L'indice può essere 0 per non specificare un'immagine di stato.  Per ulteriori informazioni sulla sovrapposizione e le immagini di stato, vedere [Elenchi di immagini del controllo struttura ad albero](../mfc/tree-control-image-lists.md).  
  
## Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)
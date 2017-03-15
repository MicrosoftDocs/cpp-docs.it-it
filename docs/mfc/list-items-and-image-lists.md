---
title: "Elementi elenco ed elenchi di immagini | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CImageList (classe), e voci elenco"
  - "CListCtrl (classe), elenchi di immagini"
  - "elenchi di immagini [C++], voci elenco"
  - "voci elenco, elenchi di immagini"
ms.assetid: 317d095f-f978-47da-acb6-7bfe7dd3bc69
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Elementi elenco ed elenchi di immagini
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un "elemento" in un controllo elenco \([CListCtrl](../mfc/reference/clistctrl-class.md)\) contiene un'icona, un'etichetta ed eventualmente altre informazioni \(in "elementi secondari"\).  
  
 Le icone degli elementi di un controllo elenco sono contenute negli elenchi di immagini.  Un elenco immagini contiene icone grandi utilizzate utilizzate nella visualizzazione icone.  Un secondo, facoltativo, elenco di immagini contiene le versioni più piccole delle stesse icone per l'utilizzo nelle altre visualizzazioni del controllo.  Un terzo elenco facoltativo contiene le immagini "stato", ad esempio le caselle di controllo per la visualizzazione davanti alle icone piccole in alcune visualizzazioni.  Un quarto elenco facoltativo contiene le immagini visualizzate nelle singole voci di intestazione del controllo elenco.  
  
> [!NOTE]
>  Se un controllo visualizzazione elenco viene creato con lo stile `LVS_SHAREIMAGELISTS`, è necessario provvedere all'eliminazione degli elenchi di immagini quando non sono più utilizzati.  Specificare questo stile se si assegnano gli stessi elenchi di immagini a più controlli di visualizzazione di elenchi; in caso contrario, più di un controllo potrebbe tentare di eliminare lo stesso elenco di immagini.  
  
 Per ulteriori informazioni sugli elementi di un elenco, vedere [Elenchi di immagini di visualizzazione elenco](http://msdn.microsoft.com/library/windows/desktop/bb774736) e [Elementi ed elementi secondari](http://msdn.microsoft.com/library/windows/desktop/bb774736) in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  Vedere anche la classe [CImageList](../mfc/reference/cimagelist-class.md) in *Riferimenti alla libreria MFC* e [Utilizzare CImageList](../mfc/using-cimagelist.md) in questa famiglia di articoli.  
  
 Per creare un controllo elenco, è necessario fornire gli elenchi di immagini da utilizzare quando si inseriscono nuovi elementi nell'elenco.  Nell'esempio seguente viene illustrata questa procedura, dove `m_pImagelist` è un puntatore di tipo `CImageList` e `m_listctrl` è un membro dati `CListCtrl`.  
  
 [!code-cpp[NVC_MFCControlLadenDialog#19](../mfc/codesnippet/CPP/list-items-and-image-lists_1.cpp)]  
  
 Tuttavia, se non si intende visualizzare le icone nella visualizzazione elenco o nel controllo elenco, non sono necessari gli elenchi di immagini.  
  
## Vedere anche  
 [Utilizzo di CListCtrl](../mfc/using-clistctrl.md)   
 [Controlli](../mfc/controls-mfc.md)
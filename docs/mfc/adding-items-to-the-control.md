---
title: "Aggiunta di elementi al controllo | Microsoft Docs"
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
  - "CListCtrl (classe), aggiunta di elementi"
ms.assetid: 715994bd-340d-4ad2-9882-411654137830
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Aggiunta di elementi al controllo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per aggiungere elementi al controllo elenco \([CListCtrl](../mfc/reference/clistctrl-class.md)\), chiamare una delle varie versioni della funzione membro di [InsertItem](../Topic/CListCtrl::InsertItem.md), come le informazioni disponibili.  Una versione accetta una struttura di [LV\_ITEM](http://msdn.microsoft.com/library/windows/desktop/bb774760) preparato.  Poiché la struttura di `LV_ITEM` contiene più membri, è maggiore controllo sugli attributi dell'elemento di controllo list.  
  
 Due membri importanti \(relativamente alla visualizzazione del rapporto\) della struttura di `LV_ITEM` i membri di `iSubItem` e di `iItem`.  Il membro di `iItem` è l'indice in base zero dell'elemento che la struttura è di riferimento e il membro di `iSubItem` è l'indice in base uno di un elemento secondario, o zero se la struttura contiene informazioni su un elemento.  Con questi due membri determinate, per voce, il tipo e il valore di informazioni sull'elemento secondario che viene visualizzato quando il controllo elenco è nella visualizzazione rapporti.  Per ulteriori informazioni, vedere [CListCtrl::SetItem](../Topic/CListCtrl::SetItem.md).  
  
 I membri aggiuntivi specificano il testo dell'elemento, l'icona, lo stato e i dati dell'elemento. "I dati dell'elemento" è un valore definito dall'applicazione associato a una voce della visualizzazione elenco.  Per ulteriori informazioni sulla struttura di `LV_ITEM`, vedere [CListCtrl::GetItem](../Topic/CListCtrl::GetItem.md).  
  
 Altre versioni di `InsertItem` richiedono uno o più valori separati, corrispondenti ai membri della struttura di `LV_ITEM`, consentendo di inizializzare solo i membri si desidera supportare.  In genere, il controllo elenco gestisce l'archiviazione per gli elementi di elenco, ma è possibile memorizzare le informazioni nell'applicazione invece, utilizzando le proprietà degli elementi di callback." Per ulteriori informazioni, vedere [Elementi di callback e la maschera di callback](../mfc/callback-items-and-the-callback-mask.md) in questo argomento e [Elementi di callback e la maschera di callback](http://msdn.microsoft.com/library/windows/desktop/bb774736) in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
 Per ulteriori informazioni, vedere [Voci della visualizzazione elenco e gli elementi secondari di aggiunta](http://msdn.microsoft.com/library/windows/desktop/bb774736).  
  
## Vedere anche  
 [Utilizzo di CListCtrl](../mfc/using-clistctrl.md)   
 [Controlli](../mfc/controls-mfc.md)
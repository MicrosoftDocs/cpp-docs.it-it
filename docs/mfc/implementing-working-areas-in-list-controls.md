---
title: "Implementazione di aree di lavoro nei controlli List | Microsoft Docs"
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
  - "controlli elenco, aree di lavoro"
  - "aree di lavoro nel controllo elenco"
ms.assetid: fbbb356b-3359-4348-8603-f1cb114cadde
caps.latest.revision: 13
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Implementazione di aree di lavoro nei controlli List
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per impostazione predefinita, un controllo elenco sono presenti tutti gli elementi in un modo standard della griglia.  Tuttavia, un altro metodo è supportato, aree di lavoro, che dispone gli elementi di elenco in gruppi rettangolari.  Per un'immagine di un controllo elenco che implementa le aree di lavoro, vedere utilizzo di controlli di visualizzazione elenchi in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
> [!NOTE]
>  Aree di lavoro sono visibili solo quando il controllo elenco è una piccola o in modalità piccola icona.  Tuttavia, tutte le aree di lavoro correnti vengono gestite se la visualizzazione viene passata alla modalità elenco o del rapporto.  
  
 Aree di lavoro possono essere utilizzate per visualizzare un bordo vuoto \(a sinistra, in alto e\/o a destra degli elementi\), o di una barra di scorrimento orizzontale a essere visualizzata quando sono in genere non sarebbe una.  Un altro utilizzo comune consiste nella creazione di più aree di lavoro a cui gli elementi possono essere spostati o eliminati.  Con questo metodo, è possibile creare aree in un'unica visualizzazione che hanno significati diversi.  L'utente può quindi classificare gli elementi posizionandoli in un'area diversa.  Un esempio è dato da una visualizzazione di un file system con un'area per i file di lettura\/scrittura \/scritturi e un'altra area per i file di sola lettura.  Se un elemento del file è stato trasferito nell'area di sola lettura, automaticamente diventa di sola lettura.  Lo spostamento di un file dall'area di sola lettura nell'area lettura \/scrittura farebbe in lettura\/scrittura del file.  
  
 `CListCtrl` fornisce numerose funzioni membro per creare e gestire le aree di lavoro nel controllo elenco.  [GetWorkAreas](../Topic/CListCtrl::GetWorkAreas.md) e [SetWorkAreas](../Topic/CListCtrl::SetWorkAreas.md) recuperare e impostare una matrice di oggetti di `CRect` o più strutture di `RECT` \), che archiviano le aree di lavoro attualmente implementate per il controllo elenco.  Inoltre, [GetNumberOfWorkAreas](../Topic/CListCtrl::GetNumberOfWorkAreas.md) recupera il numero corrente delle aree di lavoro per il controllo elenco \(per impostazione predefinita, zero\).  
  
## Elementi e aree di lavoro  
 Quando un'area di lavoro viene creata, gli elementi che fanno parte dell'area di lavoro diventano membri.  Analogamente, se un elemento viene spostato in un'altra area di lavoro, diventa un membro dell'area di lavoro in cui è stata spostata.  Se un elemento non si trova all'interno di qualsiasi area di lavoro, quest'ultimo diventa automaticamente un membro della prima \(indice 0\) area di lavoro.  Se si desidera creare un elemento e selezionare posizionare in un'area di lavoro specifica, è necessario creare l'elemento quindi spostarla nell'area di lavoro desiderata con una chiamata a [SetItemPosition](../Topic/CListCtrl::SetItemPosition.md).  Il secondo esempio seguente viene illustrata questa tecnica.  
  
 Nell'esempio seguente viene implementata quattro aree di lavoro \(`rcWorkAreas`\), di dimensioni uguale a un pixel a l 10 bordo intorno a ogni area di lavoro, in un controllo elenco \(`m_WorkAreaListCtrl`\).  
  
 [!code-cpp[NVC_MFCControlLadenDialog#20](../mfc/codesnippet/CPP/implementing-working-areas-in-list-controls_1.cpp)]  
  
 La chiamata a [ApproximateViewRect](../Topic/CListCtrl::ApproximateViewRect.md) è stata effettuata per ottenere una stima della superficie totale necessaria per visualizzare tutti gli elementi in un'area.  La stima quindi viene suddivisa in quattro aree e viene completata con un pixel intero bordo 5.  
  
 L'esempio seguente assegna gli elementi di elenco esistenti a ciascun gruppo \(`rcWorkAreas`\) e aggiorna la visualizzazione controlli \(`m_``WorkAreaListCtrl`\) per completare l'effetto.  
  
 [!code-cpp[NVC_MFCControlLadenDialog#21](../mfc/codesnippet/CPP/implementing-working-areas-in-list-controls_2.cpp)]  
  
## Vedere anche  
 [Utilizzo di CListCtrl](../mfc/using-clistctrl.md)   
 [Controlli](../mfc/controls-mfc.md)
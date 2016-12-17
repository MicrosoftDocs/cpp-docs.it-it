---
title: "Personalizzazione dell&#39;aspetto dell&#39;elemento di intestazione | Microsoft Docs"
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
  - "CHeaderCtrl (classe), personalizzazione degli elementi"
  - "HDS_ (stili)"
  - "controlli intestazione, personalizzazione degli elementi"
ms.assetid: b1e1e326-ec7d-4dbd-a46f-96a3e2055618
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Personalizzazione dell&#39;aspetto dell&#39;elemento di intestazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Impostando il parametro *di dwStyle* quando si crea un controllo intestazione \([CHeaderCtrl::Create](../Topic/CHeaderCtrl::Create.md)\), è possibile definire l'aspetto e il comportamento delle voci di intestazione o di controllo header stesso.  
  
 Di seguito è riportato un esempio di stili che è possibile impostare e lo scopo:  
  
-   Per fare un aspetto simile voce di intestazione a un pulsante, utilizzare lo stile di `HDS_BUTTONS`.  
  
     Utilizzare questo stile se si desidera eseguire le operazioni in risposta ai clic del mouse su una voce di intestazione, come ordinare i dati da una determinata colonna, come avviene in Microsoft Outlook.  
  
-   Per le voci di intestazione un aspetto di "hot track" quando il cursore del mouse vengono passati, utilizzare lo stile di `HDS_HOTTRACK`.  
  
     Funzionalità di intercettazione con il mouse di visualizzare una struttura tridimensionale mentre il puntatore passa un elemento in una barra altrimenti uniforme.  
  
-   Per indicare che il controllo intestazione deve essere nascosto, utilizzare lo stile di `HDS_HIDDEN`.  
  
     Lo stile di `HDS_HIDDEN` indica che il controllo intestazione deve essere utilizzato come un contenitore dei dati e il controllo non visivo.  Questo stile automaticamente non nasconde il controllo ma, al contrario, vengono adattati il comportamento di `CHeaderCtrl::Layout`.  Il valore restituito nel membro di **cy** della struttura di `WINDOWPOS` sarà zero che indica che il controllo non è visibile all'utente.  
  
 Per ulteriori informazioni su queste proprietà, vedere [Elementi](http://msdn.microsoft.com/library/windows/desktop/bb775238) in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  Per informazioni sull'aggiunta di elementi a un controllo intestazione, vedere [Aggiunta di elementi al controllo intestazione](../mfc/adding-items-to-the-header-control.md).  
  
## Vedere anche  
 [Utilizzo di CHeaderCtrl](../mfc/using-cheaderctrl.md)   
 [Controlli](../mfc/controls-mfc.md)
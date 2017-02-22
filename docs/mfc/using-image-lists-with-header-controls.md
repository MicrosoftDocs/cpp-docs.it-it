---
title: "Utilizzo di elenchi di immagini con controlli Header | Microsoft Docs"
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
  - "CHeaderCtrl (classe), elenchi di immagini"
  - "controlli intestazione, elenchi di immagini"
  - "elenchi di immagini [C++], controlli intestazione"
ms.assetid: d5e9b310-6278-406c-909c-eefa09549a47
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Utilizzo di elenchi di immagini con controlli Header
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le voci di intestazione hanno la possibilità di visualizzare un'immagine in una voce di intestazione.  Questa immagine, archiviata in un elenco immagini collegato, a 16 x 16 pixel e possiede le stesse caratteristiche delle immagini icona utilizzate in un controllo visualizzazione elenco.  Per implementare questo comportamento corretto, è necessario innanzitutto creare e inizializzare l'elenco immagini, associare l'elenco con il controllo intestazione e quindi modificare gli attributi della voce di intestazione che visualizzano l'immagine.  
  
 La procedura riportata di seguito vengono illustrati i dettagli, utilizzando un puntatore a un controllo intestazione \(`m_pHdrCtrl`\) e un puntatore a un elenco immagini \(`m_pHdrImages`\).  
  
### Per visualizzare un'immagine in una voce di intestazione  
  
1.  Creare un nuovo elenco di immagini o utilizzare un oggetto esistenteelenco immagini\) utilizzando il costruttore di [CImageList](../mfc/reference/cimagelist-class.md), archiviando il puntatore risultante.  
  
2.  Inizializzare il nuovo oggettoelenco immagini chiamando [CImageList::Create](../Topic/CImageList::Create.md).  Il codice seguente è un esempio di questa chiamata.  
  
     [!code-cpp[NVC_MFCControlLadenDialog#15](../mfc/codesnippet/CPP/using-image-lists-with-header-controls_1.cpp)]  
  
3.  Aggiungere le immagini per ogni voce di intestazione.  Il codice seguente aggiunge due immagini predefinite.  
  
     [!code-cpp[NVC_MFCControlLadenDialog#16](../mfc/codesnippet/CPP/using-image-lists-with-header-controls_2.cpp)]  
  
4.  Associare l'elenco di immagini con il controllo intestazione con una chiamata a [CHeaderCtrl::SetImageList](../Topic/CHeaderCtrl::SetImageList.md).  
  
5.  Modificare la voce di intestazione per visualizzare un'immagine dall'elenco immagini collegato.  Nell'esempio assegna la prima immagine, da `m_phdrImages`, sulla prima voce di intestazione, `m_pHdrCtrl`.  
  
     [!code-cpp[NVC_MFCControlLadenDialog#17](../mfc/codesnippet/CPP/using-image-lists-with-header-controls_3.cpp)]  
  
 Per informazioni dettagliate sui valori dei parametri utilizzati, consultare [CHeaderCtrl](../mfc/reference/cheaderctrl-class.md)rilevante.  
  
> [!NOTE]
>  È possibile avere più controlli utilizzando lo stesso elenco.  Ad esempio, in un controllo visualizzazione elenco standard, potrebbe verificarsi un elenco immagini \(16 x 16 immagini di pixel\) utilizzato sia da piccola visualizzazione icone di un controllo elenco che le voci di intestazione del controllo visualizzazione elenco.  
  
## Vedere anche  
 [Utilizzo di CHeaderCtrl](../mfc/using-cheaderctrl.md)
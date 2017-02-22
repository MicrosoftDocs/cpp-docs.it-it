---
title: "Utilizzo degli elenchi di immagini in un controllo casella combinata estesa | Microsoft Docs"
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
  - "caselle combinate estese, immagini"
  - "elenchi di immagini [C++], caselle combinate"
  - "immagini [C++], elementi di casella combinata"
ms.assetid: dfff25fe-af70-47a2-8032-3901d1e6842d
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Utilizzo degli elenchi di immagini in un controllo casella combinata estesa
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La funzionalità principale di controlli casella combinata estesi è la possibilità di associare le immagini da un elenco di immagini con i singoli elementi in un controllo casella combinata.  Ogni elemento può visualizzare tre diverse immagini: uno per il relativo stato selezionato, uno per il relativo stato nonselected e un terzo per un'immagine sovrapposta.  
  
 La procedura riportata di seguito consente di associare un elenco immagini con un controllo casella combinata estesa:  
  
### Per associare un elenco immagini con un controllo casella combinata estesa  
  
1.  Creare un nuovo elenco di immagini o utilizzare un oggetto esistenteelenco immagini\), utilizzando il costruttore di [CImageList](../mfc/reference/cimagelist-class.md) e di memorizzare il puntatore risultante.  
  
2.  Inizializzare il nuovo oggettoelenco immagini chiamando [CImageList::Create](../Topic/CImageList::Create.md).  Il codice seguente è un esempio di questa chiamata.  
  
     [!code-cpp[NVC_MFCControlLadenDialog#10](../mfc/codesnippet/CPP/using-image-lists-in-an-extended-combo-box-control_1.cpp)]  
  
3.  Aggiungere le immagini facoltative per ogni stato possibile: selezionare o nonselected e una sovrapposizione.  Il codice seguente aggiunge tre immagini predefinite.  
  
     [!code-cpp[NVC_MFCControlLadenDialog#11](../mfc/codesnippet/CPP/using-image-lists-in-an-extended-combo-box-control_2.cpp)]  
  
4.  Associare l'elenco di immagini con il controllo con una chiamata a [CComboBoxEx::SetImageList](../Topic/CComboBoxEx::SetImageList.md).  
  
 Dopo aver elenco immagini è stato associato al controllo, è possibile specificare singole immagini che ogni elemento utilizzerà per i tre stati possibili.  Per ulteriori informazioni, vedere [Impostare le immagini per un singolo elemento](../mfc/setting-the-images-for-an-individual-item.md).  
  
## Vedere anche  
 [Utilizzo di CComboBoxEx](../mfc/using-ccomboboxex.md)   
 [Controlli](../mfc/controls-mfc.md)
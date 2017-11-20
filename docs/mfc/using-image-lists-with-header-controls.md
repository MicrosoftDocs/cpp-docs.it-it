---
title: Utilizzo di elenchi immagini con controlli Header | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- header controls [MFC], image lists
- CHeaderCtrl class [MFC], image lists
- image lists [MFC], header controls
ms.assetid: d5e9b310-6278-406c-909c-eefa09549a47
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: d3346384b6b77b3ef965bb2b58b99c78f315f183
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="using-image-lists-with-header-controls"></a>Utilizzo di elenchi di immagini con controlli Header
Gli elementi di intestazione hanno la possibilità di visualizzare un'immagine all'interno di un elemento dell'intestazione. Questa immagine, archiviata in un elenco di immagini associato, è 16 x 16 pixel e ha le stesse caratteristiche di immagini icona utilizzate in un controllo visualizzazione elenco. Per implementare correttamente questo comportamento, è necessario prima creare e inizializzare l'elenco di immagini, associare l'elenco di controllo header e quindi modificare gli attributi dell'elemento dell'intestazione che consente di visualizzare l'immagine.  
  
 La procedura seguente illustra i dettagli, mediante un puntatore a un controllo header (`m_pHdrCtrl`) e un puntatore a un elenco di immagini (`m_pHdrImages`).  
  
### <a name="to-display-an-image-in-a-header-item"></a>Per visualizzare un'immagine in un elemento di intestazione  
  
1.  Creare un nuovo elenco immagini (o utilizzare un oggetto elenco immagini esistente) utilizzando il [CImageList](../mfc/reference/cimagelist-class.md) costruttore, memorizzando il puntatore risultante.  
  
2.  Inizializzare il nuovo oggetto elenco immagini chiamando [CImageList:: Create](../mfc/reference/cimagelist-class.md#create). Il codice seguente è un esempio di questa chiamata.  
  
     [!code-cpp[NVC_MFCControlLadenDialog#15](../mfc/codesnippet/cpp/using-image-lists-with-header-controls_1.cpp)]  
  
3.  Aggiungere le immagini per ogni elemento di intestazione. Il codice seguente aggiunge due immagini predefinite.  
  
     [!code-cpp[NVC_MFCControlLadenDialog#16](../mfc/codesnippet/cpp/using-image-lists-with-header-controls_2.cpp)]  
  
4.  Associare l'elenco di immagini con il controllo di intestazione con una chiamata a [CHeaderCtrl:: SetImageList](../mfc/reference/cheaderctrl-class.md#setimagelist).  
  
5.  Modificare l'elemento di intestazione per visualizzare un'immagine dall'elenco di immagini associato. Nell'esempio seguente assegna la prima immagine, di `m_phdrImages`, per il primo elemento di intestazione, `m_pHdrCtrl`.  
  
     [!code-cpp[NVC_MFCControlLadenDialog#17](../mfc/codesnippet/cpp/using-image-lists-with-header-controls_3.cpp)]  
  
 Per informazioni dettagliate sui valori del parametro utilizzato, consultare il pertinenti [CHeaderCtrl](../mfc/reference/cheaderctrl-class.md).  
  
> [!NOTE]
>  È possibile disporre di più controlli utilizzando lo stesso elenco immagini. Ad esempio, in un controllo di visualizzazione elenco standard, potrebbe esserci un elenco di immagini (immagini 16x16 pixel) utilizzato da entrambi la visualizzazione dell'icona piccola di un controllo visualizzazione elenco e gli elementi dell'intestazione del controllo di visualizzazione elenco.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di CHeaderCtrl](../mfc/using-cheaderctrl.md)


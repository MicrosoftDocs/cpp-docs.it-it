---
title: Utilizzo degli elenchi immagini in un controllo casella combinata estesa | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- image lists [MFC], combo boxes
- extended combo boxes [MFC], images
- images [MFC], combo box items
ms.assetid: dfff25fe-af70-47a2-8032-3901d1e6842d
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3ac69e7d0dbe1748a409b107579c747b7f9a4a7c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="using-image-lists-in-an-extended-combo-box-control"></a>Utilizzo degli elenchi di immagini in un controllo casella combinata estesa
La funzionalità principale dei controlli casella combinata estesa è la possibilità di associare le immagini da un elenco di immagini a singoli elementi in un controllo casella combinata. Ogni elemento è in grado di visualizzare tre diverse immagini: una per lo stato selezionato, uno per il relativo stato per e un terzo per un'immagine sovrapposta.  
  
 La procedura seguente consente di associare un elenco di immagini con un controllo casella combinata estesa:  
  
### <a name="to-associate-an-image-list-with-an-extended-combo-box-control"></a>Per associare un elenco di immagini a un controllo casella combinata estesa  
  
1.  Creare un nuovo elenco immagini (o utilizzare un oggetto elenco immagini esistente), utilizzando il [CImageList](../mfc/reference/cimagelist-class.md) costruttore e memorizza il puntatore risulta.  
  
2.  Inizializzare il nuovo oggetto elenco immagini chiamando [CImageList:: Create](../mfc/reference/cimagelist-class.md#create). Il codice seguente è un esempio di questa chiamata.  
  
     [!code-cpp[NVC_MFCControlLadenDialog#10](../mfc/codesnippet/cpp/using-image-lists-in-an-extended-combo-box-control_1.cpp)]  
  
3.  Aggiungere immagini facoltative per ogni possibile stato: selezionato o non selezionato e una sovrapposizione. Il codice seguente aggiunge tre immagini predefinite.  
  
     [!code-cpp[NVC_MFCControlLadenDialog#11](../mfc/codesnippet/cpp/using-image-lists-in-an-extended-combo-box-control_2.cpp)]  
  
4.  Associare l'elenco di immagini con il controllo con una chiamata a [CComboBoxEx:: SetImageList](../mfc/reference/ccomboboxex-class.md#setimagelist).  
  
 Una volta l'elenco di immagini associato al controllo, è possibile specificare singolarmente le immagini di che ogni elemento verrà utilizzato per i tre stati possibili. Per ulteriori informazioni, vedere [impostazione delle immagini per un singolo elemento](../mfc/setting-the-images-for-an-individual-item.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CComboBoxEx](../mfc/using-ccomboboxex.md)   
 [Controlli](../mfc/controls-mfc.md)


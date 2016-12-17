---
title: "Elenchi di immagini del controllo Tree | Microsoft Docs"
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
  - "CTreeCtrl (classe), elenchi di immagini"
  - "immagini [C++], elenchi nei controllo struttura ad albero"
  - "struttura ad albero (controlli), elenchi di immagini"
ms.assetid: f560c4f2-20d2-4d28-ac33-4017e65fb0a6
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Elenchi di immagini del controllo Tree
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ogni elemento in un controllo struttura ad albero \([Problemi](../mfc/reference/ctreectrl-class.md)\) può avere una coppia di immagini destinate a bit associate.  Le immagini vengono visualizzati a sinistra dell'etichetta di un elemento.  Un'immagine viene visualizzato quando l'elemento è selezionato e l'altro viene visualizzato quando l'elemento non è attualmente selezionato.  Ad esempio, un elemento può visualizzare una cartella aperta quando viene selezionato e una cartella chiusa quando non è selezionato.  
  
 Per utilizzare immagini dell'elemento, è necessario creare un elenco immagini la costruzione dell'oggetto di [CImageList](../mfc/reference/cimagelist-class.md) e utilizzando la funzione di [CImageList::Create](../Topic/CImageList::Create.md) per creare l'elenco di immagini collegato.  Aggiungere quindi le bitmap si all'elenco e associare l'elenco con il controllo struttura ad albero utilizzando la funzione membro di [SetImageList](../Topic/CTreeCtrl::SetImageList.md).  Per impostazione predefinita, tutti gli elementi visualizzati la prima immagine nell'elenco immagini per gli stati selezionati che nonselected.  È possibile modificare il comportamento predefinito per un particolare elemento specificando gli indici di immagini selezionate e nonselected quando si aggiunge l'elemento al controllo di struttura ad albero mediante la funzione membro di [InsertItem](../Topic/CTreeCtrl::InsertItem.md).  È possibile modificare indici dopo l'aggiunta di un elemento utilizzando la funzione membro di [SetItemImage](../Topic/CTreeCtrl::SetItemImage.md).  
  
 Gli elenchi di immagini di un controllo struttura ad albero possono inoltre contenere immagini sovrapposte, progettate per essere sovrapposte immagini dell'elemento.  Un valore diverso da zero in bit da 8 a 11 dello stato di un elemento del controllo struttura ad albero specifica l'indice in base uno di un'immagine sovrapposta \(0 indica l'assenza un'immagine sovrapposta\).  Poiché un bit 4, indice in base uno viene utilizzato, le immagini sovrapposte deve essere compresa tra le prime 15 immagini negli elenchi di immagini.  Per ulteriori informazioni sugli stati degli elementi del controllo struttura ad albero, vedere [Cenni preliminari sugli stati degli elementi del controllo struttura ad albero](../mfc/tree-control-item-states-overview.md) precedentemente in questo argomento.  
  
 Se un elenco di immagini di stato viene specificato, uno spazio le riserve del controllo struttura ad albero a sinistra dell'icona di ogni elemento per un'immagine di stato.  Un'applicazione può utilizzare le immagini di stato, ad esempio le caselle di controllo selezionate e si deseleziona, per indicare gli stati definiti dall'applicazione dell'elemento.  Un valore diverso da zero in bit da 12 a 15 indica l'indice in base uno di un'immagine di stato \(0 indica l'assenza un'immagine di stato\).  
  
 Specificando il valore di **I\_IMAGECALLBACK** anziché indice di un'immagine, è possibile ritardare specificare selezionato o l'immagine nonselected se l'elemento non viene che si sta per viene ridisegnato.  **I\_IMAGECALLBACK** indirizza il controllo di struttura ad albero per eseguire una query sulla domanda di indice inviando il messaggio di notifica di [TVN\_GETDISPINFO](http://msdn.microsoft.com/library/windows/desktop/bb773518).  
  
 La funzione membro di [GetImageList](../Topic/CTreeCtrl::GetImageList.md) recupera l'handleelenco immagini di un controllo struttura ad albero.  Questa funzione è utile se è necessario aggiungere più immagini all'elenco.  Per ulteriori informazioni sugli elenchi di immagini, vedere [Utilizzando CImageList](../mfc/using-cimagelist.md), [CImageList](../mfc/reference/cimagelist-class.md)*in riferimenti alla libreria MFC* e [Elenchi di immagini](http://msdn.microsoft.com/library/windows/desktop/bb761389) in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
## Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)
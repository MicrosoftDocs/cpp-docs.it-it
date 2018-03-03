---
title: Struttura ad albero di elenchi di immagini di controllo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- images [MFC], lists in tree controls
- tree controls [MFC], image lists
- CTreeCtrl class [MFC], image lists
ms.assetid: f560c4f2-20d2-4d28-ac33-4017e65fb0a6
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5015a001bf2c15f3144303ba5e19b2a9ea8c34f6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="tree-control-image-lists"></a>Elenchi di immagini del controllo Tree
Ogni elemento in un controllo struttura ad albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) può disporre di una coppia di immagini bitmap è associato. Le immagini vengono visualizzate a sinistra dell'etichetta di un elemento. Un'immagine viene visualizzata quando l'elemento è selezionato e l'altra viene visualizzata quando l'elemento non è selezionata. Ad esempio, un elemento potrebbe visualizzare una cartella aperta quando è selezionata e una cartella chiusa quando non è selezionato.  
  
 Per utilizzare le immagini degli elementi, è necessario creare un elenco di immagini costruendo un [CImageList](../mfc/reference/cimagelist-class.md) oggetto e l'utilizzo di [CImageList:: Create](../mfc/reference/cimagelist-class.md#create) funzione per creare l'elenco di immagini associato. Aggiungere le bitmap desiderate nell'elenco, quindi associare l'elenco di controllo di struttura ad albero tramite il [SetImageList](../mfc/reference/ctreectrl-class.md#setimagelist) funzione membro. Per impostazione predefinita, tutti gli elementi visualizzati prima immagine nell'elenco per entrambi gli stati selezionati e le immagini. È possibile modificare il comportamento predefinito per un particolare elemento specificando gli indici delle selezionato e le immagini quando si aggiunge l'elemento per il controllo struttura ad albero utilizzando il [InsertItem](../mfc/reference/ctreectrl-class.md#insertitem) funzione membro. È possibile modificare gli indici dopo l'aggiunta di un elemento utilizzando il [funzione membro SetItemImage](../mfc/reference/ctreectrl-class.md#setitemimage) funzione membro.  
  
 Elenchi di immagini di un controllo struttura ad albero possono inoltre contenere immagini sovrapposte, sono progettate per le immagini degli elementi sovrapposti. Un valore diverso da zero in bit da 8 a 11 dello stato dell'elemento di un controllo struttura ad albero specifica l'indice in base uno di un'immagine sovrapposta (0 indica nessuna immagine sovrapposta). Poiché viene utilizzato un indice 4 bit, in base uno immagini sovrapposte devono essere tra i primi 15 immagini negli elenchi di immagini. Per ulteriori informazioni sugli stati di elemento di controllo struttura ad albero, vedere [panoramica degli stati degli elementi di controllo albero](../mfc/tree-control-item-states-overview.md) più indietro in questo argomento.  
  
 Se viene specificato un elenco di immagini di stato, un controllo albero riserva spazio a sinistra dell'icona di ciascun elemento per un'immagine di stato. Un'applicazione può utilizzare le immagini di stato, ad esempio caselle di controllo selezionate e deselezionate, per indicare gli stati degli elementi definiti dall'applicazione. Un valore diverso da zero in 12 a 15 bit specifica l'indice in base uno di un'immagine di stato (0 non indica nessuna immagine di stato).  
  
 Specificando il **I_IMAGECALLBACK** valore anziché l'indice di un'immagine, è possibile ritardare specificando l'immagine selezionata o per fino a quando l'elemento sta per essere ridisegnato. **I_IMAGECALLBACK** indirizza il controllo struttura ad albero per l'applicazione per l'indice di query mediante l'invio di [TVN_GETDISPINFO](http://msdn.microsoft.com/library/windows/desktop/bb773518) messaggio di notifica.  
  
 Il [funzione membro GetImageList](../mfc/reference/ctreectrl-class.md#getimagelist) funzione membro recupera l'handle dell'elenco di immagini di un controllo struttura ad albero. Questa funzione è utile se è necessario aggiungere altre immagini all'elenco. Per ulteriori informazioni sugli elenchi di immagini, vedere [utilizzo di CImageList](../mfc/using-cimagelist.md), [CImageList](../mfc/reference/cimagelist-class.md) nel *riferimenti alla libreria MFC*, e [elenchi di immagini](http://msdn.microsoft.com/library/windows/desktop/bb761389) di Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)


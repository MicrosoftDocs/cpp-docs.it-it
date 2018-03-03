---
title: Immagine sovrapposizioni negli elenchi di immagini | Documenti Microsoft
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
- overlays [MFC]
- image lists [MFC], image overlays in
- CImageList class [MFC], image overlays in
ms.assetid: aaf4e1c4-cd12-42c8-9af4-1bb458889b4e
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5e70365040b5f009e634a4867a4a1f974d47bd61
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="image-overlays-in-image-lists"></a>Sovrapposizioni immagini negli elenchi di immagini
Ogni elenco di immagini ([CImageList](../mfc/reference/cimagelist-class.md)) include un elenco di immagini da utilizzare come maschere di sovrapposizione. Una maschera di sovrapposizione"" è un'immagine disegnata in modo trasparente in un'altra immagine. Qualsiasi immagine utilizzabile come maschera di sovrapposizione. È possibile specificare fino a quattro maschere di sovrapposizione per ogni elenco di immagini.  
  
 Aggiungere l'indice di un'immagine all'elenco di maschere di sovrapposizione utilizzando il [funzione membro SetOverlayImage](../mfc/reference/cimagelist-class.md#setoverlayimage) funzione membro, l'indice di un'immagine e l'indice di una maschera di sovrapposizione. Si noti che gli indici delle maschere di sovrapposizione in base uno anziché in base zero.  
  
 Si disegna una maschera di sovrapposizione su un'immagine utilizzando una singola chiamata a **disegnare**. I parametri includono l'indice dell'immagine da disegnare e l'indice di una maschera di sovrapposizione. È necessario utilizzare il [INDEXTOOVERLAYMASK](http://msdn.microsoft.com/library/windows/desktop/bb761408) (macro) per specificare l'indice della maschera di sovrapposizione. È inoltre possibile specificare un'immagine sovrapposta quando si chiama il [DrawIndirect](../mfc/reference/cimagelist-class.md#drawindirect) funzione membro.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CImageList](../mfc/using-cimagelist.md)   
 [Controlli](../mfc/controls-mfc.md)


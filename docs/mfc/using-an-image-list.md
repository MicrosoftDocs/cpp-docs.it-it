---
title: Utilizzo di un elenco di immagini | Documenti Microsoft
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
- lists [MFC], image
- CImageList class [MFC], using
- image lists [MFC]
ms.assetid: e0aed188-a1e6-400e-9f51-033d61c5541f
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4321649bf4e8fe0e34fef8fe37b8c96598bef2c2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="using-an-image-list"></a>Utilizzo di un elenco di immagini
L'utilizzo tipico di un elenco di immagini segue il modello seguente:  
  
-   Costruire un [CImageList](../mfc/reference/cimagelist-class.md) e chiamare uno degli overload del relativo [crea](../mfc/reference/cimagelist-class.md#create) funzione per creare un elenco di immagini e associarlo al `CImageList` oggetto.  
  
-   Se si non sono state aggiunte le immagini di una volta creato l'elenco di immagini, aggiungere le immagini all'elenco di immagini chiamando il [Aggiungi](../mfc/reference/cimagelist-class.md#add) o [lettura](../mfc/reference/cimagelist-class.md#read) funzione membro.  
  
-   Associare l'elenco di immagini a un controllo chiamando la funzione membro appropriato del controllo o disegnare immagini dall'elenco di immagini manualmente usando l'elenco di immagini [disegnare](../mfc/reference/cimagelist-class.md#draw) funzione membro.  
  
-   È possibile consentire all'utente di trascinare un'immagine, con il supporto incorporato dell'elenco immagini per il trascinamento.  
  
> [!NOTE]
>  Se l'elenco di immagini è stato creato con la **nuova** operatore, è necessario eliminare definitivamente il `CImageList` oggetto una volta con esso.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CImageList](../mfc/using-cimagelist.md)   
 [Controlli](../mfc/controls-mfc.md)


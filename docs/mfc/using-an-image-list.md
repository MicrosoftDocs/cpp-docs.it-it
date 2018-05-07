---
title: Utilizzo di un elenco di immagini | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- lists [MFC], image
- CImageList class [MFC], using
- image lists [MFC]
ms.assetid: e0aed188-a1e6-400e-9f51-033d61c5541f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5722a2ef8c4e93e4996ee243b3c01b6dd6aeca78
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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


---
title: Modifica degli elenchi immagini | Documenti Microsoft
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
- image lists [MFC], manipulating
- lists [MFC], image
- CImageList class [MFC], manipulating
ms.assetid: 043418f8-077e-4dce-b8bb-2b7b0d7b5156
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6c2670f3935e2f4c482728000a268cb46cc9dbdd
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="manipulating-image-lists"></a>Modifica degli elenchi immagini
Il [sostituire](../mfc/reference/cimagelist-class.md#replace) funzione membro sostituisce un'immagine in un elenco di immagini ([CImageList](../mfc/reference/cimagelist-class.md)) con una nuova immagine. Questa funzione è utile anche quando è necessario aumentare in modo dinamico il numero di immagini in un oggetto elenco immagini. Il [SetImageCount](../mfc/reference/cimagelist-class.md#setimagecount) funzione modificata in modo dinamico il numero di immagini archiviate nell'elenco delle immagini. Se si aumentano le dimensioni dell'elenco immagini, chiamare **sostituire** per aggiungere immagini al nuovo slot di immagine. Se si diminuisce la dimensione dell'elenco immagini, le immagini oltre la nuova dimensione vengono liberate.  
  
 Il [rimuovere](../mfc/reference/cimagelist-class.md#remove) funzione membro rimuove un'immagine da un elenco di immagini. Il [copia](../mfc/reference/cimagelist-class.md#copy) funzione membro è possibile copiare o scambiare immagini in un elenco di immagini. Questa funzione consente di indicare se l'immagine di origine deve essere copiata all'indice di destinazione o se le immagini di origine e di destinazione devono essere invertite.  
  
 Per creare un nuovo elenco immagini unendo due elenchi di immagini, utilizzare l'overload appropriato del [crea](../mfc/reference/cimagelist-class.md#create) funzione membro. Questo overload di **crea** unisce la prima immagine dell'immagine esistente elenchi, archiviando l'immagine risultante in un nuovo oggetto elenco immagini. La nuova immagine viene creata disegnando la seconda immagine in modo trasparente sulla prima. La maschera per la nuova immagine è il risultato dell'esecuzione di un'operazione logica OR sui bit delle maschere per le due immagini esistenti.  
  
 Ciò viene ripetuto finché tutte le immagini non vengono unite e aggiunte al nuovo oggetto elenco immagini.  
  
 È possibile scrivere le informazioni dell'immagine in un archivio chiamando la [scrivere](../mfc/reference/cimagelist-class.md#write) funzione membro e rileggerle chiamando la [lettura](../mfc/reference/cimagelist-class.md#read) funzione membro.  
  
 Il [GetSafeHandle](../mfc/reference/cimagelist-class.md#getsafehandle), [collegamento](../mfc/reference/cimagelist-class.md#attach), e [scollegamento](../mfc/reference/cimagelist-class.md#detach) funzioni membro consentono di modificare l'handle dell'elenco immagini collegato per il `CImageList` oggetto, mentre il [DeleteImageList](../mfc/reference/cimagelist-class.md#deleteimagelist) funzione membro Elimina l'elenco immagini senza eliminare il `CImageList` oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CImageList](../mfc/using-cimagelist.md)   
 [Controlli](../mfc/controls-mfc.md)


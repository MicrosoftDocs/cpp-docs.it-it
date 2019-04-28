---
title: Modifica degli elenchi immagini
ms.date: 11/04/2016
helpviewer_keywords:
- image lists [MFC], manipulating
- lists [MFC], image
- CImageList class [MFC], manipulating
ms.assetid: 043418f8-077e-4dce-b8bb-2b7b0d7b5156
ms.openlocfilehash: 1e86961980c91ade47a3d6510dec5c04ac36cffb
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62262788"
---
# <a name="manipulating-image-lists"></a>Modifica degli elenchi immagini

Il [sostituire](../mfc/reference/cimagelist-class.md#replace) funzione membro sostituisce un'immagine in un elenco di immagini ([CImageList](../mfc/reference/cimagelist-class.md)) con una nuova immagine. Questa funzione è utile anche quando è necessario aumentare in modo dinamico il numero di immagini in un oggetto elenco immagini. Il [SetImageCount](../mfc/reference/cimagelist-class.md#setimagecount) funzione modificata in modo dinamico il numero di immagini archiviate nell'elenco di immagini. Se si aumentano le dimensioni dell'elenco immagini, chiamare `Replace` aggiungere immagini a nuovi slot immagine. Se si diminuisce la dimensione dell'elenco immagini, le immagini oltre la nuova dimensione vengono liberate.

Il [rimuovere](../mfc/reference/cimagelist-class.md#remove) funzione membro rimuove un'immagine da un elenco di immagini. Il [copia](../mfc/reference/cimagelist-class.md#copy) funzione membro può copiare o scambiare immagini in un elenco di immagini. Questa funzione consente di indicare se l'immagine di origine deve essere copiata all'indice di destinazione o se le immagini di origine e di destinazione devono essere invertite.

Per creare un nuovo elenco immagini unendo due elenchi di immagini, usare l'overload appropriato del [Create](../mfc/reference/cimagelist-class.md#create) funzione membro. Questo overload del metodo `Create` unioni Elenca la prima immagine dell'immagine esistente, archiviando l'immagine risultante in un nuovo oggetto elenco immagini. La nuova immagine viene creata disegnando la seconda immagine in modo trasparente sulla prima. La maschera per la nuova immagine è il risultato dell'esecuzione di un'operazione logica OR sui bit delle maschere per le due immagini esistenti.

Ciò viene ripetuto finché tutte le immagini non vengono unite e aggiunte al nuovo oggetto elenco immagini.

È possibile scrivere le informazioni dell'immagine in un archivio chiamando il [scrivere](../mfc/reference/cimagelist-class.md#write) funzione di membro e rileggerle chiamando la [lettura](../mfc/reference/cimagelist-class.md#read) funzione membro.

Il [GetSafeHandle](../mfc/reference/cimagelist-class.md#getsafehandle), [Attach](../mfc/reference/cimagelist-class.md#attach), e [Detach](../mfc/reference/cimagelist-class.md#detach) funzioni membro che consentono di modificare l'handle dell'elenco immagini collegato al `CImageList` oggetto, mentre il [DeleteImageList](../mfc/reference/cimagelist-class.md#deleteimagelist) funzione membro Elimina l'elenco immagini senza eliminare il `CImageList` oggetto.

## <a name="see-also"></a>Vedere anche

[Uso di CImageList](../mfc/using-cimagelist.md)<br/>
[Controlli](../mfc/controls-mfc.md)

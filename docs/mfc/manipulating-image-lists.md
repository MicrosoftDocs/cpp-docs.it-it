---
description: 'Altre informazioni su: manipolazione degli elenchi di immagini'
title: Modifica degli elenchi immagini
ms.date: 11/04/2016
helpviewer_keywords:
- image lists [MFC], manipulating
- lists [MFC], image
- CImageList class [MFC], manipulating
ms.assetid: 043418f8-077e-4dce-b8bb-2b7b0d7b5156
ms.openlocfilehash: dc2b136e1aed5266ea7cc910cf10839f59dfcf00
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97281132"
---
# <a name="manipulating-image-lists"></a>Modifica degli elenchi immagini

La funzione membro [Replace](reference/cimagelist-class.md#replace) sostituisce un'immagine in un elenco di immagini ([CImageList](reference/cimagelist-class.md)) con una nuova immagine. Questa funzione è utile anche quando è necessario aumentare in modo dinamico il numero di immagini in un oggetto elenco immagini. La funzione [SetImageCount](reference/cimagelist-class.md#setimagecount) modifica dinamicamente il numero di immagini archiviate nell'elenco immagini. Se si aumentano le dimensioni dell'elenco di immagini, chiamare `Replace` per aggiungere immagini ai nuovi slot di immagine. Se si diminuisce la dimensione dell'elenco immagini, le immagini oltre la nuova dimensione vengono liberate.

La funzione membro [Remove](reference/cimagelist-class.md#remove) rimuove un'immagine da un elenco di immagini. La funzione membro [Copy](reference/cimagelist-class.md#copy) può copiare o scambiare immagini all'interno di un elenco di immagini. Questa funzione consente di indicare se l'immagine di origine deve essere copiata all'indice di destinazione o se le immagini di origine e di destinazione devono essere invertite.

Per creare un nuovo elenco di immagini unendo due elenchi di immagini, usare l'overload appropriato della funzione membro [create](reference/cimagelist-class.md#create) . Questo overload di `Create` unisce la prima immagine degli elenchi di immagini esistenti, archiviando l'immagine risultante in un nuovo oggetto elenco immagini. La nuova immagine viene creata disegnando la seconda immagine in modo trasparente sulla prima. La maschera per la nuova immagine è il risultato dell'esecuzione di un'operazione logica OR sui bit delle maschere per le due immagini esistenti.

Ciò viene ripetuto finché tutte le immagini non vengono unite e aggiunte al nuovo oggetto elenco immagini.

È possibile scrivere le informazioni sull'immagine in un archivio chiamando la funzione membro [Write](reference/cimagelist-class.md#write) e rileggerla chiamando la funzione membro [Read](reference/cimagelist-class.md#read) .

Le funzioni membro [GetSafeHandle](reference/cimagelist-class.md#getsafehandle), [Attach](reference/cimagelist-class.md#attach)e [Detach](reference/cimagelist-class.md#detach) consentono di modificare l'handle dell'elenco immagini collegato all' `CImageList` oggetto, mentre la funzione membro [DeleteImageList](reference/cimagelist-class.md#deleteimagelist) Elimina l'elenco immagini senza eliminare definitivamente l' `CImageList` oggetto.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CImageList](using-cimagelist.md)<br/>
[Controlli](controls-mfc.md)

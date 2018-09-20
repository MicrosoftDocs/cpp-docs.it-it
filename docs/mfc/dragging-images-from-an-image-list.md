---
title: Trascinamento di immagini da un elenco di immagini | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CImageList class [MFC], dragging images from
- dragging images from image lists [MFC]
- image lists [MFC], dragging images from
- images [MFC], dragging from image lists
ms.assetid: af691db8-e4f0-4046-b7b9-9acc68d3713d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fb872cba298d6d18ab5287a285b22d2f568fa04b
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46382375"
---
# <a name="dragging-images-from-an-image-list"></a>Trascinamento di immagini da un elenco di immagini

[CImageList](../mfc/reference/cimagelist-class.md) include funzioni per il trascinamento di un'immagine sullo schermo. Le funzioni di trascinamento spostare un'immagine in modo uniforme, colore e senza far lampeggiare il cursore. È possibile trascinare le immagini sia con mascherate e annullamento del mascheramento.

Il [BeginDrag](../mfc/reference/cimagelist-class.md#begindrag) membro funzione inizia un'operazione di trascinamento. I parametri includono l'indice dell'immagine da trascinare e il percorso dell'area sensibile all'interno dell'immagine. L'area sensibile è un singolo pixel che le funzioni di trascinamento riconoscono come posizione dello schermo esatte dell'immagine. In genere, un'applicazione imposta l'area sensibile, in modo che coincide con l'area sensibile del cursore del mouse. Il [DragMove](../mfc/reference/cimagelist-class.md#dragmove) funzione membro si sposta l'immagine in una nuova posizione.

Il [DragEnter](../mfc/reference/cimagelist-class.md#dragenter) funzione membro imposta la posizione iniziale dell'immagine di trascinamento in una finestra e l'immagine viene disegnata in corrispondenza della posizione. I parametri includono un puntatore alla finestra in cui disegnare l'immagine e un punto che specifica le coordinate della posizione iniziale all'interno della finestra. Le coordinate sono relative all'angolo superiore sinistro della finestra, non l'area client. Lo stesso vale per tutte le funzioni di trascinamento di immagini che accettano le coordinate come parametri. Ciò significa che è necessario tenere conto della larghezza degli elementi della finestra, ad esempio il bordo, sulla barra del titolo e la barra dei menu, quando si specificano le coordinate. Se si specifica un **NULL** handle della finestra durante la chiamata `DragEnter`, le funzioni di trascinamento disegno l'immagine nel contesto di dispositivo associato alla finestra desktop e le coordinate sono rispetto all'angolo superiore sinistro della schermata.

`DragEnter` Blocca tutti gli aggiornamenti per la finestra specificata durante l'operazione di trascinamento. Se è necessario eseguire operazioni di disegno durante un'operazione di trascinamento, ad esempio l'evidenziazione della destinazione di un'operazione di trascinamento e rilascio, è possibile nascondere temporaneamente l'immagine trascinato tramite il [DragLeave](../mfc/reference/cimagelist-class.md#dragleave) funzione membro. È anche possibile usare la [funzione membro DragShowNoLock](../mfc/reference/cimagelist-class.md#dragshownolock) funzione membro.

Chiamare [EndDrag](../mfc/reference/cimagelist-class.md#enddrag) dopo aver completato l'immagine di trascinamento.

Il [SetDragCursorImage](../mfc/reference/cimagelist-class.md#setdragcursorimage) funzione membro viene creata una nuova immagine di trascinamento combinando l'immagine specificata (in genere un'immagine del cursore del mouse) con l'immagine di trascinamento corrente. Poiché le funzioni di trascinamento usano la nuova immagine durante un'operazione di trascinamento, è consigliabile utilizzare il Windows [ShowCursor](/windows/desktop/api/winuser/nf-winuser-showcursor) funzione per nascondere il cursore del mouse effettivo dopo la chiamata `SetDragCursorImage`. In caso contrario, il sistema potrebbe risultare due puntatori del mouse per la durata dell'operazione di trascinamento.

Quando un'applicazione chiama `BeginDrag`, il sistema crea un elenco immagini interno temporaneo e copie specificate Trascina immagine all'elenco interno. È possibile recuperare un puntatore all'elenco di immagini temporanee trascinamento utilizzando il [funzione membro GetDragImage](../mfc/reference/cimagelist-class.md#getdragimage) funzione membro. La funzione recupera anche la posizione corrente di trascinamento e l'offset dell'immagine di trascinamento rispetto alla posizione di trascinamento.

## <a name="see-also"></a>Vedere anche

[Uso di CImageList](../mfc/using-cimagelist.md)<br/>
[Controlli](../mfc/controls-mfc.md)


---
title: Trascinamento di immagini da un elenco di immagini | Documenti Microsoft
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
ms.openlocfilehash: d54984cdc1dc7897fb4f5d1d9680c6a2b95a787d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="dragging-images-from-an-image-list"></a>Trascinamento di immagini da un elenco di immagini
[CImageList](../mfc/reference/cimagelist-class.md) include funzioni per il trascinamento di un'immagine sullo schermo. Le funzioni di trascinamento spostare un'immagine in modo uniforme, colore e senza far lampeggiare il cursore. È possibile trascinare le immagini mascherate sia stato annullato il mascheramento.  
  
 Il [BeginDrag](../mfc/reference/cimagelist-class.md#begindrag) funzione membro inizia un'operazione di trascinamento. I parametri includono l'indice di trascinare l'immagine e la posizione dell'area sensibile all'interno dell'immagine. L'area sensibile rappresenta un singolo pixel che le funzioni di trascinamento viene riconosciuto come la posizione esatta dello schermo dell'immagine. In genere, un'applicazione imposta l'area sensibile, in modo che coincide con l'area sensibile del cursore del mouse. Il [DragMove](../mfc/reference/cimagelist-class.md#dragmove) funzione membro Sposta l'immagine in un nuovo percorso.  
  
 Il [DragEnter](../mfc/reference/cimagelist-class.md#dragenter) funzione membro imposta la posizione iniziale dell'immagine di trascinamento all'interno di una finestra e disegna l'immagine in corrispondenza della posizione. I parametri includono un puntatore alla finestra in cui disegnare l'immagine e un punto che specifica le coordinate della posizione iniziale all'interno della finestra. Le coordinate sono rispetto all'angolo superiore sinistro della finestra, non l'area client. Lo stesso vale per tutte le funzioni di trascinamento di immagini che utilizzano le coordinate come parametri. Ciò significa che è necessario tenere conto della larghezza degli elementi della finestra, ad esempio il bordo, sulla barra del titolo e la barra dei menu, quando si specificano le coordinate. Se si specifica un **NULL** handle della finestra durante la chiamata `DragEnter`, le funzioni di trascinamento disegno l'immagine nel contesto di dispositivo associato alla finestra del desktop e le coordinate sono rispetto all'angolo superiore sinistro della schermata.  
  
 `DragEnter` Blocca tutti gli aggiornamenti per la finestra specificata durante l'operazione di trascinamento. Se è necessario eseguire operazioni di disegno durante un'operazione di trascinamento, ad esempio evidenziare la destinazione di un'operazione di trascinamento e rilascio, è possibile nascondere temporaneamente l'immagine trascinata utilizzando il [DragLeave](../mfc/reference/cimagelist-class.md#dragleave) funzione membro. È inoltre possibile utilizzare il [funzione membro DragShowNoLock](../mfc/reference/cimagelist-class.md#dragshownolock) funzione membro.  
  
 Chiamare [EndDrag](../mfc/reference/cimagelist-class.md#enddrag) al termine trascinando l'immagine.  
  
 Il [SetDragCursorImage](../mfc/reference/cimagelist-class.md#setdragcursorimage) funzione membro crea una nuova immagine di trascinamento combinando l'immagine specificata (in genere un'immagine del cursore del mouse) con l'immagine di trascinamento corrente. Poiché le funzioni di trascinamento utilizzano la nuova immagine durante un'operazione di trascinamento, è necessario utilizzare le finestre [ShowCursor](http://msdn.microsoft.com/library/windows/desktop/ms648396) funzione per nascondere il cursore del mouse effettivo dopo la chiamata `SetDragCursorImage`. In caso contrario, il sistema potrebbe apparire di disporre di due cursori del mouse per la durata dell'operazione di trascinamento.  
  
 Quando un'applicazione chiama `BeginDrag`, il sistema crea un elenco di immagini interno temporaneo e copie specificate trascinare l'immagine all'elenco interno. È possibile recuperare un puntatore all'elenco di immagini temporanee trascinamento utilizzando il [funzione membro GetDragImage](../mfc/reference/cimagelist-class.md#getdragimage) funzione membro. La funzione recupera anche la posizione corrente di trascinamento e l'offset dell'immagine di trascinamento rispetto alla posizione di trascinamento.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CImageList](../mfc/using-cimagelist.md)   
 [Controlli](../mfc/controls-mfc.md)


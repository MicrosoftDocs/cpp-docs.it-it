---
title: Trascinamento di immagini da un elenco di immagini
ms.date: 11/04/2016
helpviewer_keywords:
- CImageList class [MFC], dragging images from
- dragging images from image lists [MFC]
- image lists [MFC], dragging images from
- images [MFC], dragging from image lists
ms.assetid: af691db8-e4f0-4046-b7b9-9acc68d3713d
ms.openlocfilehash: 3035e6f21d38568b364fce02358c3baed4870bc3
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69508647"
---
# <a name="dragging-images-from-an-image-list"></a>Trascinamento di immagini da un elenco di immagini

[CImageList](../mfc/reference/cimagelist-class.md) include funzioni per il trascinamento di un'immagine sullo schermo. Le funzioni di trascinamento spostano un'immagine in modo uniforme, in colore e senza lampeggiare del cursore. È possibile trascinare le immagini mascherate e non mascherate.

La funzione membro [BeginDrag](../mfc/reference/cimagelist-class.md#begindrag) inizia un'operazione di trascinamento. I parametri includono l'indice dell'immagine da trascinare e la posizione dell'area sensibile all'interno dell'immagine. L'area sensibile è un singolo pixel che le funzioni di trascinamento riconoscono come posizione dello schermo esatta dell'immagine. In genere, un'applicazione imposta l'area sensibile in modo che corrisponda all'area sensibile del cursore del mouse. La funzione membro [DragMove](../mfc/reference/cimagelist-class.md#dragmove) sposta l'immagine in una nuova posizione.

La funzione membro [DragEnter](../mfc/reference/cimagelist-class.md#dragenter) imposta la posizione iniziale dell'immagine di trascinamento all'interno di una finestra e disegna l'immagine in corrispondenza della posizione. I parametri includono un puntatore alla finestra in cui si desidera creare l'immagine e un punto che specifica le coordinate della posizione iniziale all'interno della finestra. Le coordinate sono relative all'angolo superiore sinistro della finestra, non all'area client. Lo stesso vale per tutte le funzioni di trascinamento dell'immagine che accettano le coordinate come parametri. Ciò significa che è necessario compensare le larghezze degli elementi della finestra, ad esempio il bordo, la barra del titolo e la barra dei menu, quando si specificano le coordinate. Se si specifica un handle di finestra **null** quando `DragEnter`si chiama, le funzioni di trascinamento disegnano l'immagine nel contesto di dispositivo associato alla finestra desktop e le coordinate sono relative all'angolo superiore sinistro dello schermo.

`DragEnter`blocca tutti gli altri aggiornamenti della finestra specificata durante l'operazione di trascinamento. Se è necessario eseguire qualsiasi disegno durante un'operazione di trascinamento, ad esempio evidenziando la destinazione di un'operazione di trascinamento della selezione, è possibile nascondere temporaneamente l'immagine trascinata usando la funzione membro [DragLeave](../mfc/reference/cimagelist-class.md#dragleave) . È anche possibile usare la funzione membro [DragShowNoLock](../mfc/reference/cimagelist-class.md#dragshownolock) .

Chiamare [EndDrag](../mfc/reference/cimagelist-class.md#enddrag) al termine del trascinamento dell'immagine.

La funzione membro [SetDragCursorImage](../mfc/reference/cimagelist-class.md#setdragcursorimage) crea una nuova immagine di trascinamento combinando l'immagine specificata, in genere un'immagine del cursore del mouse, con l'immagine di trascinamento corrente. Poiché le funzioni di trascinamento utilizzano la nuova immagine durante un'operazione di trascinamento, è necessario utilizzare la funzione [ShowCursor](/windows/win32/api/winuser/nf-winuser-showcursor) di Windows per nascondere `SetDragCursorImage`il cursore del mouse effettivo dopo la chiamata a. In caso contrario, è possibile che nel sistema siano presenti due cursori del mouse per la durata dell'operazione di trascinamento.

Quando un'applicazione chiama `BeginDrag`, il sistema crea un elenco di immagini interne temporaneo e copia l'immagine di trascinamento specificata nell'elenco interno. È possibile recuperare un puntatore all'elenco di immagini di trascinamento temporaneo utilizzando la funzione membro [GetDragImage](../mfc/reference/cimagelist-class.md#getdragimage) . La funzione recupera inoltre la posizione di trascinamento corrente e l'offset dell'immagine di trascinamento rispetto alla posizione di trascinamento.

## <a name="see-also"></a>Vedere anche

[Uso di CImageList](../mfc/using-cimagelist.md)<br/>
[Controlli](../mfc/controls-mfc.md)

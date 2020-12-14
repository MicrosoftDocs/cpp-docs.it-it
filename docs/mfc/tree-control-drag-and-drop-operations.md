---
description: 'Altre informazioni su: operazioni di trascinamento e rilascio del controllo Tree'
title: Operazioni di trascinamento e rilascio del controllo Tree
ms.date: 11/04/2016
helpviewer_keywords:
- CTreeCtrl class [MFC], drag and drop operations
- drag and drop [MFC], CTreeCtrl
- tree controls [MFC], drag and drop operations
ms.assetid: 3cf78b4c-4579-4fe1-9bc9-c5ab876e4af1
ms.openlocfilehash: 000255ad4aa6801cbe27676603a3f42d0abbef30
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97264180"
---
# <a name="tree-control-drag-and-drop-operations"></a>Operazioni di trascinamento e rilascio del controllo Tree

Un controllo albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) Invia una notifica quando l'utente inizia a trascinare un elemento. Il controllo Invia un messaggio di notifica [TVN_BEGINDRAG](/windows/win32/Controls/tvn-begindrag) quando l'utente inizia a trascinare un elemento con il pulsante sinistro del mouse e un messaggio di notifica [TVN_BEGINRDRAG](/windows/win32/Controls/tvn-beginrdrag) quando l'utente inizia il trascinamento con il pulsante destro. È possibile impedire a un controllo albero di inviare queste notifiche assegnando all'albero il controllo dello stile TVS_DISABLEDRAGDROP.

È possibile ottenere un'immagine da visualizzare durante un'operazione di trascinamento chiamando la funzione membro [CreateDragImage](../mfc/reference/ctreectrl-class.md#createdragimage) . Il controllo struttura ad albero crea una bitmap di trascinamento in base all'etichetta dell'elemento trascinato. Il controllo albero crea quindi un elenco di immagini, vi aggiunge la bitmap e restituisce un puntatore all'oggetto [CImageList](../mfc/reference/cimagelist-class.md) .

È necessario fornire il codice che trascina effettivamente l'elemento. Ciò comporta in genere l'uso delle funzionalità di trascinamento delle funzioni dell'elenco immagini e l'elaborazione dei messaggi [WM_MOUSEMOVE](/windows/win32/inputdev/wm-mousemove) e [WM_LBUTTONUP](/windows/win32/inputdev/wm-lbuttonup) (o [WM_RBUTTONUP](/windows/win32/inputdev/wm-rbuttonup)) inviati dopo l'inizio dell'operazione di trascinamento. Per ulteriori informazioni sulle funzioni dell'elenco immagini, vedere [CImageList](../mfc/reference/cimagelist-class.md) negli elenchi di riferimento e [Immagini](/windows/win32/controls/image-lists) di *MFC* nel Windows SDK. Per ulteriori informazioni sul trascinamento di un elemento del controllo Tree, vedere [trascinamento dell'elemento della visualizzazione struttura ad albero](/windows/win32/Controls/tree-view-controls)anche nel Windows SDK.

Se gli elementi in un controllo struttura ad albero sono gli obiettivi di un'operazione di trascinamento della selezione, è necessario stabilire quando il cursore del mouse si trova su un elemento di destinazione. È possibile scoprire chiamando la funzione membro [HitTest](../mfc/reference/ctreectrl-class.md#hittest) . È possibile specificare un punto e un intero oppure l'indirizzo di una struttura [TVHITTESTINFO](/windows/win32/api/commctrl/ns-commctrl-tvhittestinfo) che contiene le coordinate correnti del cursore del mouse. Quando la funzione restituisce, l'intero o la struttura contiene un flag che indica la posizione del cursore del mouse rispetto al controllo albero. Se il cursore è posizionato su un elemento nel controllo struttura ad albero, la struttura contiene anche l'handle dell'elemento.

È possibile indicare che un elemento è la destinazione di un'operazione di trascinamento della selezione chiamando la funzione membro [SetItem](../mfc/reference/ctreectrl-class.md#setitem) per impostare lo stato sul `TVIS_DROPHILITED` valore. Un elemento con questo stato viene disegnato nello stile usato per indicare una destinazione di trascinamento della selezione.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

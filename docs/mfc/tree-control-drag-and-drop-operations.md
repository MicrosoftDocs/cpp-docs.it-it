---
title: Albero delle operazioni di trascinamento e rilascio di controllo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CTreeCtrl class [MFC], drag and drop operations
- drag and drop [MFC], CTreeCtrl
- tree controls [MFC], drag and drop operations
ms.assetid: 3cf78b4c-4579-4fe1-9bc9-c5ab876e4af1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9e1c642642f94c021001ae67d2dcc3fd87f4f287
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42589085"
---
# <a name="tree-control-drag-and-drop-operations"></a>Operazioni di trascinamento del controllo Tree
Un controllo albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) invia una notifica quando l'utente inizia a trascinare un elemento. Il controllo invia un [TVN_BEGINDRAG](http://msdn.microsoft.com/library/windows/desktop/bb773504) messaggio di notifica quando l'utente inizia a trascinare un elemento con il pulsante sinistro del mouse e una [TVN_BEGINRDRAG](http://msdn.microsoft.com/library/windows/desktop/bb773509) messaggio di notifica quando l'utente inizia a trascinare con pulsante a destra. È possibile impedire l'invio di tali notifiche, assegnando il controllo albero lo stile TVS_DISABLEDRAGDROP di un controllo albero.  
  
 Per ottenere un'immagine da visualizzare durante un'operazione di trascinamento chiamando il [funzione membro CreateDragImage](../mfc/reference/ctreectrl-class.md#createdragimage) funzione membro. Il controllo albero crea una bitmap di trascinamento in base all'etichetta dell'elemento da trascinare. Il controllo albero crea un elenco di immagini, bitmap a cui viene aggiunto e restituisce un puntatore ai [CImageList](../mfc/reference/cimagelist-class.md) oggetto.  
  
 È necessario fornire il codice che effettivamente si trascina l'elemento. Ciò comporta in genere usando le funzionalità di trascinamento di funzioni dell'elenco immagini e l'elaborazione di [WM_MOUSEMOVE](http://msdn.microsoft.com/library/windows/desktop/ms645616) e [WM_LBUTTONUP](http://msdn.microsoft.com/library/windows/desktop/ms645608) (o [WM_RBUTTONUP](http://msdn.microsoft.com/library/windows/desktop/ms646243)) messaggi inviati una volta iniziato l'operazione di trascinamento. Per altre informazioni sulle funzioni dell'elenco immagini, vedere [CImageList](../mfc/reference/cimagelist-class.md) nel *riferimento MFC* e [elenchi di immagini](http://msdn.microsoft.com/library/windows/desktop/bb761389) nel SDK di Windows. Per ulteriori informazioni sul trascinamento di un elemento del controllo albero, vedere [trascinando l'elemento della visualizzazione struttura ad albero](http://msdn.microsoft.com/library/windows/desktop/bb760017), anche in Windows SDK.  
  
 Se gli elementi in un controllo albero sono le destinazioni di un'operazione di trascinamento e rilascio, è necessario conoscere quando il cursore del mouse si trova in un elemento di destinazione. È possibile scoprire chiamando il [HitTest](../mfc/reference/ctreectrl-class.md#hittest) funzione membro. Specificare un punto e integer o l'indirizzo di un [TVHITTESTINFO](http://msdn.microsoft.com/library/windows/desktop/bb773448) struttura che contiene le coordinate corrente del cursore del mouse. Quando la funzione termina, il numero intero o la struttura contiene un flag che indica la posizione del cursore del mouse rispetto al controllo albero. Se il cursore si trova su un elemento nel controllo albero, la struttura contiene l'handle dell'elemento nonché.  
  
 È possibile indicare che un elemento è la destinazione di un'operazione di trascinamento e rilascio chiamando il [SetItem](../mfc/reference/ctreectrl-class.md#setitem) funzione di membro per impostare lo stato il `TVIS_DROPHILITED` valore. Un elemento con questo stato viene disegnato nello stile utilizzato per indicare una destinazione di trascinamento e rilascio.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)


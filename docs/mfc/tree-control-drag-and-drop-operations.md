---
title: Struttura ad albero di operazioni di trascinamento e rilascio di controllo | Documenti Microsoft
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
ms.openlocfilehash: 73aa47a2d888c88dd58d114dd4f5ca9a3f086cd3
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36956252"
---
# <a name="tree-control-drag-and-drop-operations"></a>Operazioni di trascinamento del controllo Tree
Un controllo albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) invia una notifica quando l'utente inizia a trascinare un elemento. Il controllo invia un [TVN_BEGINDRAG](http://msdn.microsoft.com/library/windows/desktop/bb773504) messaggio di notifica quando l'utente inizia a trascinare un elemento con il pulsante sinistro del mouse e una [TVN_BEGINRDRAG](http://msdn.microsoft.com/library/windows/desktop/bb773509) messaggio di notifica quando l'utente inizia a trascinare con il pulsante destro del mouse. È possibile impedire l'invio di tali notifiche assegnando il controllo albero lo stile TVS_DISABLEDRAGDROP di un controllo albero.  
  
 Per ottenere un'immagine da visualizzare durante un'operazione di trascinamento chiamando il [funzione membro CreateDragImage](../mfc/reference/ctreectrl-class.md#createdragimage) funzione membro. Il controllo albero crea una bitmap di trascinamento in base all'etichetta dell'elemento che viene trascinato. Quindi il controllo albero crea un elenco di immagini, bitmap a cui viene aggiunto e restituisce un puntatore ai [CImageList](../mfc/reference/cimagelist-class.md) oggetto.  
  
 È necessario fornire il codice che effettivamente si trascina l'elemento. Ciò comporta in genere utilizzando le funzionalità di trascinamento di funzioni dell'elenco immagini e l'elaborazione di [WM_MOUSEMOVE](http://msdn.microsoft.com/library/windows/desktop/ms645616) e [WM_LBUTTONUP](http://msdn.microsoft.com/library/windows/desktop/ms645608) (oppure [WM_RBUTTONUP](http://msdn.microsoft.com/library/windows/desktop/ms646243)) messaggi inviati una volta iniziato l'operazione di trascinamento. Per ulteriori informazioni sulle funzioni dell'elenco immagini, vedere [CImageList](../mfc/reference/cimagelist-class.md) nel *riferimenti alla libreria MFC* e [elenchi di immagini](http://msdn.microsoft.com/library/windows/desktop/bb761389) in Windows SDK. Per ulteriori informazioni sul trascinamento di un elemento del controllo struttura ad albero, vedere [trascinamento dell'elemento di visualizzazione della struttura](http://msdn.microsoft.com/library/windows/desktop/bb760017), anche nel [!INCLUDE[winsdkshort](../atl-mfc-shared/reference/includes/winsdkshort_md.md)].  
  
 Se gli elementi in un controllo albero sono le destinazioni di un'operazione di trascinamento e rilascio, è necessario sapere quando il cursore del mouse si trova su un elemento di destinazione. È possibile scoprire chiamando il [HitTest](../mfc/reference/ctreectrl-class.md#hittest) funzione membro. Si specifica un punto e integer o l'indirizzo di un [TVHITTESTINFO](http://msdn.microsoft.com/library/windows/desktop/bb773448) struttura che contiene le coordinate corrente del cursore del mouse. Quando la funzione restituisce, il numero intero o la struttura contiene un flag che indica la posizione del cursore del mouse relativa al controllo struttura ad albero. Se il cursore si trova su un elemento nel controllo struttura ad albero, la struttura contiene l'handle dell'elemento nonché.  
  
 È possibile indicare che un elemento è la destinazione di un'operazione di trascinamento e rilascio chiamando il [funzione membro SetItem](../mfc/reference/ctreectrl-class.md#setitem) funzione membro su cui impostare lo stato di `TVIS_DROPHILITED` valore. Un elemento con questo stato viene disegnato nello stile utilizzato per indicare una destinazione di trascinamento e rilascio.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)


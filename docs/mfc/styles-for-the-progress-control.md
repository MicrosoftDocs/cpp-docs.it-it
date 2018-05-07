---
title: Stili per il controllo Progress | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- PBS_SMOOTH style
- progress controls [MFC], styles
- PBS_VERTICAL style
- CProgressCtrl class [MFC], styles
ms.assetid: 39eb8081-bc20-4552-91b9-e7cdd1b7d8ae
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4c1044c82c2864d71047e4fe3c7461d03a17d9d3
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="styles-for-the-progress-control"></a>Stili per il controllo Progress
Quando si crea inizialmente il controllo dello stato ([CProgressCtrl:: Create](../mfc/reference/cprogressctrl-class.md#create)), utilizzare il `dwStyle` parametro per specificare gli stili desiderati della finestra per il controllo di stato. Nell'elenco seguente sono illustrati in maniera dettagliata gli stili applicabili alla finestra. Il controllo ignora qualsiasi stile della finestra diverso da quelli elencati di seguito. Si consiglia di creare sempre il controllo come finestra figlio, in genere di una finestra di dialogo padre.  
  
|Stile di finestra|Effetto|  
|------------------|------------|  
|`WS_BORDER`|Crea un bordo intorno alla finestra.|  
|**WS_CHILD**|Crea una finestra figlio (deve sempre essere utilizzato per `CProgressCtrl`).|  
|**WS_CLIPCHILDREN**|Esclude l'area occupata dalle finestre figlio quando si disegna nella finestra padre. Utilizzato per creare la finestra padre.|  
|**WS_CLIPSIBLINGS**|Taglia le finestre figlio le une rispetto alle altre.|  
|**WS_DISABLED**|Crea una finestra che inizialmente è disabilitata.|  
|**WS_VISIBLE**|Crea una finestra che inizialmente è visibile.|  
|**WS_TABSTOP**|Specifica che il controllo può ricevere lo stato attivo quando l'utente preme il tasto TAB per passare ad esso.|  
  
 Inoltre, è possibile specificare due stili che si applicano solo al controllo di stato, `PBS_VERTICAL` e `PBS_SMOOTH`.  
  
 Utilizzare `PBS_VERTICAL` per orientare il controllo verticalmente anziché in orizzontale. Utilizzare `PBS_SMOOTH` per riempire il controllo completamente anziché visualizzare quadratini separati che riempiono gradualmente il controllo.  
  
 Senza lo stile `PBS_SMOOTH`:  
  
 ![Stile della barra di stato standard](../mfc/media/vc4ruw1.gif "vc4ruw1")  
  
 Con gli stili `PBS_SMOOTH` e `PBS_VERTICAL`:  
  
 ![Stato di avanzamento stile, uniforme e verticale](../mfc/media/vc4ruw2.gif "vc4ruw2")  
  
 Per ulteriori informazioni, vedere [stili finestra](../mfc/reference/styles-used-by-mfc.md#frame-window-styles-mfc) nel *riferimenti alla libreria MFC*.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di CProgressCtrl](../mfc/using-cprogressctrl.md)


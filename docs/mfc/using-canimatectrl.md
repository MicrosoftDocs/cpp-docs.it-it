---
title: Utilizzo di CAnimateCtrl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- CAnimateCtrl
dev_langs:
- C++
helpviewer_keywords:
- animation controls [MFC], CAnimateCtrl class
- controls [MFC], animation
- CAnimateCtrl class [MFC], about CAnimateCtrl class [MFC]
ms.assetid: 696c0805-bef0-4e2e-a9e7-b37b9215b7f0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5685d6aed00cd57f4329b3865f96fa75226d7cf6
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33381618"
---
# <a name="using-canimatectrl"></a>Utilizzo di CAnimateCtrl
Un controllo animation, rappresentato dalla classe [CAnimateCtrl](../mfc/reference/canimatectrl-class.md), è una finestra che visualizza un clip in formato Audio con interfoliazione AVI (Video), ovvero il formato audio/video Windows standard. Un clip AVI è una serie di fotogrammi bitmap, ad esempio un filmato.  
  
 Poiché i thread continua l'esecuzione durante la visualizzazione del clip AVI, un utilizzo comune per un controllo animation è per indicare l'attività del sistema durante un'operazione di lunga durata. Ad esempio, la finestra di dialogo Trova di Windows visualizza una lente di ingrandimento mobile durante la ricerca di un file.  
  
 Controlli animazione possono riprodurre solo clip AVI semplici e non supportano l'audio. (Per un elenco completo delle limitazioni, vedere [CAnimateCtrl](../mfc/reference/canimatectrl-class.md).) Poiché le funzionalità del controllo animazione sono limitate gravi e soggetti a modifiche, è necessario utilizzare in alternativa, ad esempio il controllo MCIWnd se è necessario un controllo per fornire la riproduzione multimedia e/o funzionalità di registrazione. Per ulteriori informazioni sul controllo MCIWnd, vedere la documentazione dei dati multimediali.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Uso di un controllo Animation](../mfc/using-an-animation-control.md)  
  
-   [Notifiche inviate mediante controlli Animation](../mfc/notifications-sent-by-animation-controls.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli](../mfc/controls-mfc.md)


---
title: Classi frame-Window | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- frame window classes [MFC], about frame window classes
- frame window classes [MFC]
- windows [MFC], MDI
- document frame windows [MFC], classes
- single document interface (SDI), frame windows
- window classes [MFC], frame
- MFC, frame windows
- MDI [MFC], frame windows
- classes [MFC], window
ms.assetid: c27e43a7-8ad0-4759-b1b7-43f4725f4132
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9b9003ba503e0a78e5f223e766346d63679d9959
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33347886"
---
# <a name="frame-window-classes"></a>Classi Frame-Window
Ogni applicazione dispone di una "finestra cornice principale," una finestra del desktop che in genere è il nome dell'applicazione nella barra del titolo. Ogni documento è in genere una "finestra cornice di documento". Una finestra cornice del documento contiene almeno una vista, che presenta i dati del documento.  
  
## <a name="frame-windows-in-sdi-and-mdi-applications"></a>Finestre cornice SDI e MDI (applicazioni)  
 Per un'applicazione SDI, è disponibile una finestra cornice derivata dalla classe [CFrameWnd](../mfc/reference/cframewnd-class.md). Questa finestra è la finestra cornice principale e finestra cornice del documento. Per un'applicazione MDI, la finestra cornice principale è derivata dalla classe [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md), e le finestre cornice di documento, che sono finestre figlio MDI, derivate dalla classe [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md).  
  
## <a name="use-the-frame-window-class-or-derive-from-it"></a>Utilizzare la classe finestra cornice o derivare da esso  
 Queste classi forniscono la maggior parte delle funzionalità della finestra cornice che è necessario per le applicazioni. In circostanze normali, il comportamento predefinito e l'aspetto che forniscono adatta alle proprie esigenze. Se è necessaria maggiore funzionalità, derivano da queste classi.  
  
### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Classi frame-window create dalla creazione guidata applicazione](../mfc/frame-window-classes-created-by-the-application-wizard.md)  
  
-   [Stili frame-window](../mfc/frame-window-styles-cpp.md)  
  
-   [Modifica degli stili di una finestra creata da MFC](../mfc/changing-the-styles-of-a-window-created-by-mfc.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Finestre cornice](../mfc/frame-windows.md)


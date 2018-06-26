---
title: Gestione di finestre figlio MDI | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- MDICLIENT
dev_langs:
- C++
helpviewer_keywords:
- MDI [MFC], child windows
- child windows [MFC], and MDICLIENT window
- MDICLIENT window [MFC]
- windows [MFC], MDI
- frame windows [MFC], MDI child windows
- child windows [MFC]
- MDI [MFC], frame windows
ms.assetid: 1828d96e-a561-48ae-a661-ba9701de6bee
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 58ddef11e56da760bbecaa47f03dfa6c57dfa3ed
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36929481"
---
# <a name="managing-mdi-child-windows"></a>Gestione di finestre figlio MDI
Finestre principali MDI (una per ogni applicazione) contengono una finestra figlio speciale denominata finestra MDICLIENT. La finestra MDICLIENT gestisce l'area client della finestra cornice principale e dispone di finestre figlio: le finestre di documento, derivate da `CMDIChildWnd`. Poiché le finestre di documento sono esse stesse finestre cornice (finestre figlio MDI), possono avere a loro volta finestre figlio. In questi casi, la finestra padre gestisce le relative finestre figlio e inoltra alcuni comandi.  
  
 In una finestra cornice MDI, la finestra cornice gestisce la finestra MDICLIENT, riposizionandola insieme con le barre di controllo. La finestra MDICLIENT, a sua volta, gestisce tutte le finestre di cornice figlio MDI. Nella figura seguente viene illustrata la relazione tra una finestra cornice MDI, la finestra MDICLIENT e finestre cornice documento figlio.  
  
 ![Finestre figlio in una finestra cornice MDI](../mfc/media/vc37gb1.gif "vc37gb1")  
Finestre cornice MDI ed elementi figli  
  
 Una finestra cornice MDI agisce anche insieme alla finestra figlio MDI corrente, se presente. La finestra cornice MDI delega i messaggi di comando alla finestra figlio MDI prima di tentare di gestirli essa stessa.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Creazione di finestre cornice documento](../mfc/creating-document-frame-windows.md)  
  
-   [Stili frame-window](../mfc/frame-window-styles-cpp.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di finestre cornice](../mfc/using-frame-windows.md)


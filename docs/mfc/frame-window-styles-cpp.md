---
title: Stili Frame-Window (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- window styles [MFC]
- PreCreateWindow method, setting window styles
- windows [MFC], MFC
- frame windows [MFC], styles
- MFC, frame windows
- styles [MFC], windows
ms.assetid: fc5058c1-eec8-48d8-9f76-3fc01cfa53f7
ms.openlocfilehash: cade8e7e50779437feb73a94058dc62118c03c10
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57274648"
---
# <a name="frame-window-styles-c"></a>Stili Frame-Window (C++)

Finestre cornice si ottiene con il framework sono adatte per la maggior parte dei programmi, ma è possibile ottenere una maggiore flessibilità con le funzioni avanzate [PreCreateWindow](../mfc/reference/cwnd-class.md#precreatewindow) e la funzione globale MFC [AfxRegisterWndClass ](../mfc/reference/application-information-and-management.md#afxregisterwndclass). `PreCreateWindow` è una funzione membro di `CWnd`.

Se si applica il **WS_HSCROLL** e **WS_VSCROLL** stili alla finestra cornice principale, questi vengono applicati per il **MDICLIENT** finestra in modo che gli utenti possono scorrere le **MDICLIENT** area.

Se la finestra **FWS_ADDTOTITLE** bit di stile è impostato (ovvero l'impostazione predefinita), la visualizzazione indica la finestra cornice quali titolo da visualizzare nella barra del titolo della finestra basata sul nome della visualizzazione del documento.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Gestione di finestre figlio MDI (MDICLIENT)](../mfc/managing-mdi-child-windows.md), la finestra all'interno di una finestra cornice MDI che contiene le finestre figlio MDI

- [Modifica degli stili di una finestra creata da MFC](../mfc/changing-the-styles-of-a-window-created-by-mfc.md)

- [Stili finestra](../mfc/reference/styles-used-by-mfc.md#window-styles)

## <a name="see-also"></a>Vedere anche

[Finestre cornice](../mfc/frame-windows.md)

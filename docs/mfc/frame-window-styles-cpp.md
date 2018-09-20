---
title: Stili frame-Window (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- window styles [MFC]
- PreCreateWindow method, setting window styles
- windows [MFC], MFC
- frame windows [MFC], styles
- MFC, frame windows
- styles [MFC], windows
ms.assetid: fc5058c1-eec8-48d8-9f76-3fc01cfa53f7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7f0e4bde874fc563535b661108cb68edefd8d977
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46385014"
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


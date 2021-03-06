---
description: 'Altre informazioni su: stili di Frame-Window (C++)'
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
ms.openlocfilehash: 5d7b0effe4b7cea17eb0b5bd8208563ba552ba99
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97180343"
---
# <a name="frame-window-styles-c"></a>Stili Frame-Window (C++)

Le finestre cornice che si ottengono con il Framework sono adatte alla maggior parte dei programmi, ma è possibile ottenere maggiore flessibilità usando le funzioni avanzate [PreCreateWindow](reference/cwnd-class.md#precreatewindow) e la funzione globale MFC [AfxRegisterWndClass](reference/application-information-and-management.md#afxregisterwndclass). `PreCreateWindow` è una funzione membro di `CWnd` .

Se si applicano gli stili **WS_HSCROLL** e **WS_VSCROLL** alla finestra cornice principale, vengono applicati alla finestra **MdiClient** in modo che gli utenti possano scorrere l'area **MdiClient** .

Se è impostato il bit di stile **FWS_ADDTOTITLE** della finestra (per impostazione predefinita), la visualizzazione indicherà alla finestra cornice il titolo da visualizzare nella barra del titolo della finestra in base al nome del documento della visualizzazione.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Gestione delle finestre figlio MDI (MDICLIENT)](managing-mdi-child-windows.md), la finestra all'interno di un frame MDI che contiene le finestre figlio MDI

- [Modifica degli stili di una finestra creata da MFC](changing-the-styles-of-a-window-created-by-mfc.md)

- [Stili di finestra](reference/styles-used-by-mfc.md#window-styles)

## <a name="see-also"></a>Vedi anche

[Finestre cornice](frame-windows.md)

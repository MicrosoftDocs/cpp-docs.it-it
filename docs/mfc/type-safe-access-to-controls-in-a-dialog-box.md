---
title: Accesso indipendente dai tipi ai controlli in una finestra di dialogo
ms.date: 11/04/2016
helpviewer_keywords:
- common controls [MFC], in dialog boxes
- Windows common controls [MFC], in dialog boxes
- safe access to dialog box controls
- dialog boxes [MFC], type-safe access to controls
- controls [MFC], accessing in dialog boxes
- type-safe access to dialog box controls
- MFC dialog boxes [MFC], type-safe access to controls
ms.assetid: 67021025-dd93-4d6a-8bed-a1348fe50685
ms.openlocfilehash: 9b8e5aef61d1a7c7277f2a6bd37b81bd156bb837
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57264157"
---
# <a name="type-safe-access-to-controls-in-a-dialog-box"></a>Accesso indipendente dai tipi ai controlli in una finestra di dialogo

I controlli in una finestra di dialogo possono utilizzare le interfacce delle classi di controlli MFC, ad esempio `CListBox` e `CEdit`. Puoi creare un oggetto controllo e allegarlo a un controllo finestra di dialogo. Puoi quindi accedere al controllo attraverso la relativa interfaccia di classe, chiamando le funzioni membro per operare sul controllo. I metodi descritti qui sono progettati per fornire accesso indipendente dai tipi a un controllo. Ciò è particolarmente utile per controlli come caselle di modifica e di riepilogo.

Sono disponibili due approcci per stabilire una connessione tra un controllo in una finestra di dialogo e una variabile membro di controllo C++ in una classe derivata da `CDialog`:

- [Senza creazioni guidate codice](../mfc/type-safe-access-to-controls-without-code-wizards.md)

- [Con creazioni guidate codice](../mfc/type-safe-access-to-controls-with-code-wizards.md)

## <a name="see-also"></a>Vedere anche

[Finestre di dialogo](../mfc/dialog-boxes.md)

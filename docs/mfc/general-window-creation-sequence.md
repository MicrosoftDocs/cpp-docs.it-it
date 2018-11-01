---
title: Sequenza generale di creazione finestre
ms.date: 11/04/2016
helpviewer_keywords:
- sequence [MFC], window creation
- frame windows [MFC], creating
- windows [MFC], creating
- sequence [MFC]
ms.assetid: 9cd8c7ea-5e24-429e-b6d9-d7b6041d8ba6
ms.openlocfilehash: f69d32ea846e93974bc71340777b23750da73ba7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50446787"
---
# <a name="general-window-creation-sequence"></a>Sequenza generale di creazione finestre

Quando si crea una finestra della finestra di personalizzati, ad esempio un elemento figlio, il framework utilizza molto il processo stesso come quello descritto in [creazione documento/visualizzazione](../mfc/document-view-creation.md).

Tutte le classi di finestra fornite da utilizzano MFC [due fasi](../mfc/one-stage-and-two-stage-construction-of-objects.md). Vale a dire, durante una chiamata di C++ **nuovo** (operatore), il costruttore alloca e Inizializza un oggetto C++ ma non crea una finestra di Windows corrispondente. Che viene eseguito in un secondo momento chiamando il [Create](../mfc/reference/cwnd-class.md#create) funzione membro dell'oggetto finestra.

Il `Create` funzione membro rende la finestra di Windows e archivia relativi `HWND` nel membro dati pubblico dell'oggetto C++ [m_hWnd](../mfc/reference/cwnd-class.md#m_hwnd). `Create` Consente di completare una flessibilità sui parametri di creazione. Prima di chiamare `Create`, è possibile registrare una classe della finestra con la funzione globale [AfxRegisterWndClass](../mfc/reference/application-information-and-management.md#afxregisterwndclass) per impostare gli stili di icona e la classe per il frame.

Per le finestre cornice, è possibile usare la [LoadFrame](../mfc/reference/cframewnd-class.md#loadframe) la funzione membro anziché `Create`. `LoadFrame` rende la finestra di Windows con meno parametri. Ottiene molti valori predefiniti da risorse, tra cui didascalia del frame, icona, tabella di tasti di scelta rapida e menu.

> [!NOTE]
>  L'icona, tabelle di tasti di scelta rapida e le risorse di menu devono avere un ID di risorse comuni, ad esempio **IDR_MAINFRAME**, per poter essere caricata da LoadFrame.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Oggetti finestra](../mfc/window-objects.md)

- [Registrazione di "classi di finestra"](../mfc/registering-window-classes.md)

- [Eliminazione definitiva di oggetti finestra](../mfc/destroying-window-objects.md)

- [Creazione di finestre cornice documento](../mfc/creating-document-frame-windows.md)

## <a name="see-also"></a>Vedere anche

[Creazione di finestre](../mfc/creating-windows.md)


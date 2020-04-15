---
title: Sequenza generale di creazione finestre
ms.date: 11/04/2016
helpviewer_keywords:
- sequence [MFC], window creation
- frame windows [MFC], creating
- windows [MFC], creating
- sequence [MFC]
ms.assetid: 9cd8c7ea-5e24-429e-b6d9-d7b6041d8ba6
ms.openlocfilehash: fb10ced78e230316a6e2982f24c1fb6e2e52ed8d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364277"
---
# <a name="general-window-creation-sequence"></a>Sequenza generale di creazione finestre

Quando si crea una finestra personalizzata, ad esempio una finestra figlio, il framework utilizza molto lo stesso processo descritto in [Creazione documento/visualizzazione](../mfc/document-view-creation.md).

Tutte le classi di finestra fornite da MFC utilizzano la costruzione in [due fasi](../mfc/one-stage-and-two-stage-construction-of-objects.md). Ovvero, durante una chiamata dell'operatore **new** di C, il costruttore alloca e inizializza un oggetto di C, ma non crea una finestra di Windows corrispondente. Questa operazione viene eseguita in seguito chiamando il [Create](../mfc/reference/cwnd-class.md#create) funzione membro dell'oggetto finestra.

La `Create` funzione membro rende la `HWND` finestra di Windows e ne archivia la propria nel membro dati pubblico dell'oggetto [c'è m_hWnd](../mfc/reference/cwnd-class.md#m_hwnd). `Create`offre la massima flessibilità sui parametri di creazione. Prima `Create`di chiamare , è possibile registrare una classe finestra con la funzione globale [AfxRegisterWndClass](../mfc/reference/application-information-and-management.md#afxregisterwndclass) per impostare l'icona e gli stili di classe per il frame.

Per le finestre cornice, è possibile utilizzare `Create`la funzione membro [LoadFrame](../mfc/reference/cframewnd-class.md#loadframe) anziché . `LoadFrame`rende la finestra di Windows utilizzando meno parametri. Ottiene molti valori predefiniti dalle risorse, tra cui la didascalia, l'icona, la tabella dei tasti di scelta rapida e il menu della cornice.

> [!NOTE]
> Affinché il caricamento di LoadFrame venga caricato da LoadFrame, l'icona, la tabella dei tasti di scelta rapida e le risorse di menu devono avere un ID di risorsa comune, ad esempio **IDR_MAINFRAME**.

## <a name="what-do-you-want-to-know-more-about"></a>Cosa vuoi sapere di più su

- [Oggetti finestra](../mfc/window-objects.md)

- [Registrazione della finestra "classi"](../mfc/registering-window-classes.md)

- [Eliminazione di oggetti finestra](../mfc/destroying-window-objects.md)

- [Creazione di finestre cornice di documento](../mfc/creating-document-frame-windows.md)

## <a name="see-also"></a>Vedere anche

[Creazione di finestre](../mfc/creating-windows.md)

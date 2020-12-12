---
description: 'Altre informazioni su: sequenza generale di creazione della finestra'
title: Sequenza generale di creazione finestre
ms.date: 11/04/2016
helpviewer_keywords:
- sequence [MFC], window creation
- frame windows [MFC], creating
- windows [MFC], creating
- sequence [MFC]
ms.assetid: 9cd8c7ea-5e24-429e-b6d9-d7b6041d8ba6
ms.openlocfilehash: 78a27114ebe3ac309ea8afdc6e04df65f1df1df8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97189262"
---
# <a name="general-window-creation-sequence"></a>Sequenza generale di creazione finestre

Quando si crea una finestra personalizzata, ad esempio una finestra figlio, il Framework usa molto lo stesso processo descritto in [creazione documento/visualizzazione](document-view-creation.md).

Tutte le classi di finestra fornite da MFC utilizzano la [costruzione in due fasi](one-stage-and-two-stage-construction-of-objects.md). Ovvero, durante una chiamata dell' **`new`** operatore c++, il costruttore alloca e Inizializza un oggetto c++, ma non crea una finestra di Windows corrispondente. Questa operazione viene eseguita in seguito chiamando la funzione membro [create](reference/cwnd-class.md#create) dell'oggetto Window.

La `Create` funzione membro crea la finestra di Windows e la archivia `HWND` nel membro dati pubblico dell'oggetto C++ [m_hWnd](reference/cwnd-class.md#m_hwnd). `Create` offre la massima flessibilità rispetto ai parametri di creazione. Prima di chiamare `Create` , è possibile registrare una classe della finestra con la funzione globale [AfxRegisterWndClass](reference/application-information-and-management.md#afxregisterwndclass) per impostare gli stili dell'icona e della classe per il frame.

Per le finestre cornice, è possibile usare la funzione membro [LoadFrame](reference/cframewnd-class.md#loadframe) anziché `Create` . `LoadFrame` rende la finestra di Windows con un minor numero di parametri. Ottiene molti valori predefiniti dalle risorse, tra cui la didascalia, l'icona, la tabella di tasti di scelta rapida e il menu del frame.

> [!NOTE]
> L'icona, la tabella di tasti di scelta rapida e le risorse di menu devono avere un ID di risorsa comune, ad esempio **IDR_MAINFRAME**, in modo che vengano caricate da LoadFrame.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Oggetti finestra](window-objects.md)

- [Registrazione della finestra "classi"](registering-window-classes.md)

- [Eliminazione permanente di oggetti finestra](destroying-window-objects.md)

- [Creazione di finestre cornice di documenti](creating-document-frame-windows.md)

## <a name="see-also"></a>Vedi anche

[Creazione di finestre](creating-windows.md)

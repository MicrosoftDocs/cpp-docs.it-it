---
title: Creazione di finestre cornice del documento
ms.date: 11/04/2016
helpviewer_keywords:
- frame windows [MFC], creating
- document templates [MFC], and document frame windows
- windows [MFC], creating
- runtime, class information
- run-time class [MFC], and document frame window creation
- document frame windows [MFC], creating
- MFC, frame windows
ms.assetid: 8671e239-b76f-4dea-afa8-7024e6e58ff5
ms.openlocfilehash: 66a951994a75cbd99debeb2c6511739411cdd470
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57265998"
---
# <a name="creating-document-frame-windows"></a>Creazione di finestre cornice del documento

[Creazione di documenti/visualizzazioni](../mfc/document-view-creation.md) Mostra come il [CDocTemplate](../mfc/reference/cdoctemplate-class.md) oggetto esegue l'orchestrazione creando la finestra cornice documento e visualizzazione e che li connettono tutti gli elementi. Tre [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md) gli argomenti per il `CDocTemplate` costruttore specificare la finestra cornice, il documento e le classi di visualizzazione che il modello di documento creata dinamicamente in risposta ai comandi dell'utente, ad esempio il comando New sul File menu di scelta o il comando nuova finestra in un menu finestra MDI. Il modello di documento archivia queste informazioni per un utilizzo successivo durante la creazione di una finestra cornice per una visualizzazione e il documento.

Per il [RUNTIME_CLASS](../mfc/reference/run-time-object-model-services.md#runtime_class) meccanismo per il corretto funzionamento di derivato classi frame-window devono essere dichiarate con la [DECLARE_DYNCREATE](../mfc/reference/run-time-object-model-services.md#declare_dyncreate) macro. Infatti, il framework deve creare finestre cornice mediante il meccanismo di costruzione dinamica di classe documento `CObject`.

Quando l'utente sceglie un comando che crea un documento, il framework chiama il modello di documento per creare l'oggetto documento, la relativa visualizzazione e la finestra cornice che verrà visualizzata la visualizzazione. Quando crea la finestra cornice di documento, il modello di documento crea un oggetto della classe appropriata, ovvero una classe derivata da [CFrameWnd](../mfc/reference/cframewnd-class.md) per un'applicazione SDI o dalla [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md) per un form MDI applicazione. Il framework chiama quindi l'oggetto finestra cornice [LoadFrame](../mfc/reference/cframewnd-class.md#loadframe) funzione membro per ottenere informazioni sulla creazione delle risorse e creare la finestra di Windows. Il framework collega l'handle della finestra per l'oggetto finestra cornice. Quindi viene creata la visualizzazione come finestra figlio della finestra cornice del documento.

Prestare attenzione al momento di decidere [quando inizializzare](../mfc/when-to-initialize-cwnd-objects.md) il `CWnd`-oggetto derivato.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Derivazione di una classe da CObject (un meccanismo di creazione dinamica)](../mfc/deriving-a-class-from-cobject.md)

- [Creazione documento/visualizzazione (modelli e creazione di finestre cornice)](../mfc/document-view-creation.md)

- [Eliminazione definitiva di finestre cornice](../mfc/destroying-frame-windows.md)

## <a name="see-also"></a>Vedere anche

[Uso di finestre cornice](../mfc/using-frame-windows.md)

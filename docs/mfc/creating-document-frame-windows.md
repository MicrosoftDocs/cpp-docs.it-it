---
description: 'Altre informazioni su: creazione di finestre cornice del documento'
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
ms.openlocfilehash: e2c4f72ab56045df7bb121be3bb557314780fedb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97309810"
---
# <a name="creating-document-frame-windows"></a>Creazione di finestre cornice del documento

[Creazione documento/visualizzazione Mostra](document-view-creation.md) il modo in cui l'oggetto [CDocTemplate](reference/cdoctemplate-class.md) orchestra la creazione della finestra cornice, il documento e la visualizzazione e la connessione di tutti insieme. Tre argomenti [CRuntimeClass](reference/cruntimeclass-structure.md) per il `CDocTemplate` Costruttore specificano le classi finestra cornice, documento e visualizzazione che il modello di documento crea dinamicamente in risposta a comandi utente come il nuovo comando nel menu file o il comando nuova finestra in un menu finestra MDI. Il modello di documento archivia queste informazioni per un uso successivo quando crea una finestra cornice per una visualizzazione e un documento.

Per il corretto funzionamento del [RUNTIME_CLASS](reference/run-time-object-model-services.md#runtime_class) meccanismo, le classi della finestra cornice derivata devono essere dichiarate con la macro [DECLARE_DYNCREATE](reference/run-time-object-model-services.md#declare_dyncreate) . Questo perché il Framework deve creare finestre cornice di documento usando il meccanismo di costruzione dinamica della classe `CObject` .

Quando l'utente sceglie un comando per la creazione di un documento, il Framework chiama il modello di documento per creare l'oggetto documento, la relativa visualizzazione e la finestra cornice in cui verrà visualizzata la visualizzazione. Quando crea la finestra cornice del documento, il modello di documento crea un oggetto della classe appropriata, una classe derivata da [CFrameWnd](reference/cframewnd-class.md) per un'applicazione SDI o da [CMDIChildWnd](reference/cmdichildwnd-class.md) per un'applicazione MDI. Il Framework chiama quindi la funzione membro [LoadFrame](reference/cframewnd-class.md#loadframe) dell'oggetto finestra frame per ottenere le informazioni di creazione dalle risorse e per creare la finestra di Windows. Il Framework connette l'handle della finestra all'oggetto della finestra cornice. Quindi crea la visualizzazione come finestra figlio della finestra cornice del documento.

Prestare attenzione [quando si decide quando inizializzare](when-to-initialize-cwnd-objects.md) l' `CWnd` oggetto derivato da.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Derivazione di una classe da CObject (meccanismo di creazione dinamica)](deriving-a-class-from-cobject.md)

- [Creazione di documenti/visualizzazioni (modelli e creazione di finestre cornice)](document-view-creation.md)

- [Eliminazione di finestre cornice](destroying-frame-windows.md)

## <a name="see-also"></a>Vedi anche

[Uso di finestre cornice](using-frame-windows.md)

---
title: Creazione di finestre cornice documento | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- frame windows [MFC], creating
- document templates [MFC], and document frame windows
- windows [MFC], creating
- runtime, class information
- run-time class [MFC], and document frame window creation
- document frame windows [MFC], creating
- MFC, frame windows
ms.assetid: 8671e239-b76f-4dea-afa8-7024e6e58ff5
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 9098026c1a38f8e60093415ba1c5a2b3678b64d5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="creating-document-frame-windows"></a>Creazione di finestre cornice del documento
[Creazione documento/visualizzazione](../mfc/document-view-creation.md) viene illustrato come la [CDocTemplate](../mfc/reference/cdoctemplate-class.md) oggetto gestisce la creazione, la finestra cornice, un documento e una vista e che li connettono tutti insieme. Tre [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md) argomenti per il `CDocTemplate` costruttore specificare la finestra cornice, documento e le classi di visualizzazione che il modello di documento creata dinamicamente in risposta ai comandi dell'utente, ad esempio il comando Nuovo File menu o il comando nuova finestra in un menu finestra MDI. Il modello di documento memorizza queste informazioni per un uso successivo durante la creazione di una finestra cornice per una visualizzazione e il documento.  
  
 Per il [RUNTIME_CLASS](../mfc/reference/run-time-object-model-services.md#runtime_class) meccanismo per il corretto funzionamento di classe derivata classi frame-window devono essere dichiarate con la [DECLARE_DYNCREATE](../mfc/reference/run-time-object-model-services.md#declare_dyncreate) (macro). In questo modo il framework deve creare finestre cornice utilizzando il meccanismo di costruzione dinamica della classe di documento `CObject`.  
  
 Quando l'utente sceglie un comando che crea un documento, il framework chiama il modello di documento per creare l'oggetto documento, la relativa visualizzazione e la finestra cornice che verrà visualizzata la visualizzazione. Quando crea la finestra cornice di documento, il modello di documento crea un oggetto della classe appropriata, ovvero una classe derivata da [CFrameWnd](../mfc/reference/cframewnd-class.md) per un'applicazione SDI o da [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md) per un form MDI applicazione. Il framework chiama quindi l'oggetto finestra cornice [LoadFrame](../mfc/reference/cframewnd-class.md#loadframe) funzione membro per ottenere informazioni sulla creazione di risorse e per creare la finestra di Windows. Il framework collega l'handle di finestra per l'oggetto finestra cornice. Quindi, viene creata la visualizzazione come finestra figlio della finestra cornice del documento.  
  
 Prestare attenzione nella scelta [quando inizializzare](../mfc/when-to-initialize-cwnd-objects.md) il `CWnd`-oggetto derivato.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Derivazione di una classe da CObject (un meccanismo di creazione dinamica)](../mfc/deriving-a-class-from-cobject.md)  
  
-   [Creazione documento/visualizzazione (modelli e creazione di finestre cornice)](../mfc/document-view-creation.md)  
  
-   [Distruzione di finestre cornice](../mfc/destroying-frame-windows.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di finestre cornice](../mfc/using-frame-windows.md)


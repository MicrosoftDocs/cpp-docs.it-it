---
title: La creazione del modello di documento | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- document templates [MFC]
- constructors [MFC], document template
- document templates [MFC], creating
- MFC, document templates
- templates [MFC], document templates
ms.assetid: c87f1821-7cbf-442e-9690-f126ae7fb783
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1b1a9067929e96c6d3fd851168af079e7e825dcb
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46443633"
---
# <a name="document-template-creation"></a>Creazione di modelli di documento

Quando si crea un nuovo documento in risposta a un **New** o **Open** dal **File** dal menu modello di documento crea anche una nuova finestra del frame a cui si desidera visualizzare il documento.

Il costruttore di modello di documento specifica i tipi di documenti, windows e il modello sarà in grado di creare viste. Ciò è determinato dagli argomenti passati al costruttore di modello di documento. Il codice seguente illustra la creazione di un [CMultiDocTemplate](../mfc/reference/cmultidoctemplate-class.md) per un'applicazione di esempio:

[!code-cpp[NVC_MFCDocView#7](../mfc/codesnippet/cpp/document-template-creation_1.cpp)]

Il puntatore a una nuova `CMultiDocTemplate` oggetto viene usato come argomento al [AddDocTemplate](../mfc/reference/cwinapp-class.md#adddoctemplate). Gli argomenti per il `CMultiDocTemplate` costruttore includono l'ID di risorsa associato a menu e tasti di scelta rapida del tipo di documento e tre gli utilizzi del [RUNTIME_CLASS](../mfc/reference/run-time-object-model-services.md#runtime_class) macro. `RUNTIME_CLASS` Restituisce il [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md) oggetto per la classe C++ denominata come argomento. I tre `CRuntimeClass` gli oggetti passati al costruttore di modello di documento è fornire le informazioni necessarie per creare nuovi oggetti di classi specificate durante il processo di creazione del documento. L'esempio illustra la creazione di un modello di documento creati `CScribDoc` gli oggetti con `CScribView` oggetti connessi. Le viste sono racchiusi in finestre di cornice figlio MDI standard.

## <a name="see-also"></a>Vedere anche

[I modelli di documento e il processo di creazione documento/visualizzazione](../mfc/document-templates-and-the-document-view-creation-process.md)<br/>
[Creazione di documenti/visualizzazioni](../mfc/document-view-creation.md)<br/>
[Relazioni tra oggetti MFC](../mfc/relationships-among-mfc-objects.md)<br/>
[Creazione di nuovi documenti, finestre e visualizzazioni](../mfc/creating-new-documents-windows-and-views.md)


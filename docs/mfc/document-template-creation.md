---
title: Creazione di modelli di documento
ms.date: 11/04/2016
helpviewer_keywords:
- document templates [MFC]
- constructors [MFC], document template
- document templates [MFC], creating
- MFC, document templates
- templates [MFC], document templates
ms.assetid: c87f1821-7cbf-442e-9690-f126ae7fb783
ms.openlocfilehash: 85ff6ad47b37d85c812608dbee918f0543730eae
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57271678"
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

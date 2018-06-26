---
title: La creazione di modelli di documento | Documenti Microsoft
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
ms.openlocfilehash: 3695d2795fa324051b76cf012aae7e1b1f275fa1
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36928022"
---
# <a name="document-template-creation"></a>Creazione di modelli di documento
Quando si crea un nuovo documento in risposta a un **New** o **Apri** dal **File** menu, il modello di documento crea anche una nuova finestra del frame tramite cui si desidera visualizzare il documento.  
  
 Il costruttore di modello di documento specifica i tipi di documenti, finestre e il modello sarà in grado di creare viste. Ciò è determinato dagli argomenti passati al costruttore modello di documento. Il codice seguente illustra la creazione di un [CMultiDocTemplate](../mfc/reference/cmultidoctemplate-class.md) per un'applicazione di esempio:  
  
 [!code-cpp[NVC_MFCDocView#7](../mfc/codesnippet/cpp/document-template-creation_1.cpp)]  
  
 Il puntatore a una nuova `CMultiDocTemplate` oggetto viene utilizzato come argomento al [AddDocTemplate](../mfc/reference/cwinapp-class.md#adddoctemplate). Argomenti per il `CMultiDocTemplate` costruttore includono l'ID di risorsa associato il tipo di documento i menu e tasti di scelta rapida e tre utilizzi del [RUNTIME_CLASS](../mfc/reference/run-time-object-model-services.md#runtime_class) macro. `RUNTIME_CLASS` Restituisce il [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md) oggetto per la classe C++ denominata come relativo argomento. I tre `CRuntimeClass` oggetti passati al costruttore modello di documento è fornire le informazioni necessarie per creare nuovi oggetti di classi specificate durante il processo di creazione del documento. Nell'esempio viene illustrata la creazione di un modello di documento che crea `CScribDoc` gli oggetti con `CScribView` oggetti associati. Le viste sono racchiusi in finestre di cornice figlio MDI standard.  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli di documento e il processo di creazione documento/visualizzazione](../mfc/document-templates-and-the-document-view-creation-process.md)   
 [Creazione di documenti/visualizzazioni](../mfc/document-view-creation.md)   
 [Relazioni tra oggetti MFC](../mfc/relationships-among-mfc-objects.md)   
 [Creazione di nuovi documenti, finestre e visualizzazioni](../mfc/creating-new-documents-windows-and-views.md)


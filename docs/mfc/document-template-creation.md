---
title: La creazione di modelli di documenti | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- document templates [MFC]
- constructors [MFC], document template
- document templates [MFC], creating
- MFC, document templates
- templates [MFC], document templates
ms.assetid: c87f1821-7cbf-442e-9690-f126ae7fb783
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 04950601a74b1ed3e44b236e1d07dcdff997eca6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="document-template-creation"></a>Creazione di modelli di documento
Quando si crea un nuovo documento in risposta a un `New` o **aprire** comando il **File** menu, il modello di documento crea anche una nuova finestra del frame tramite cui si desidera visualizzare il documento.  
  
 Il costruttore del modello di documento specifica i tipi di documenti, finestre e il modello sarà in grado di creare viste. Ciò è determinato dagli argomenti passati al costruttore modello di documento. Il codice seguente illustra la creazione di un [CMultiDocTemplate](../mfc/reference/cmultidoctemplate-class.md) per un'applicazione di esempio:  
  
 [!code-cpp[NVC_MFCDocView#7](../mfc/codesnippet/cpp/document-template-creation_1.cpp)]  
  
 Il puntatore a un nuovo `CMultiDocTemplate` oggetto viene utilizzato come argomento di [AddDocTemplate](../mfc/reference/cwinapp-class.md#adddoctemplate). Argomenti per il `CMultiDocTemplate` costruttore includono l'ID di risorsa associata a menu e tasti di scelta rapida del tipo di documento e tre utilizzi del [RUNTIME_CLASS](../mfc/reference/run-time-object-model-services.md#runtime_class) (macro). `RUNTIME_CLASS`Restituisce il [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md) oggetto per la classe C++ denominata come relativo argomento. I tre `CRuntimeClass` oggetti passati al costruttore modello di documento è fornire le informazioni necessarie per creare nuovi oggetti di classi specificate durante il processo di creazione del documento. Nell'esempio viene illustrata la creazione di un modello di documento che crea `CScribDoc` gli oggetti con `CScribView` oggetti associati. Le viste sono racchiusi in finestre di cornice figlio MDI standard.  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli di documento e il processo di creazione documento/visualizzazione](../mfc/document-templates-and-the-document-view-creation-process.md)   
 [Creazione di documenti/visualizzazioni](../mfc/document-view-creation.md)   
 [Relazioni tra oggetti MFC](../mfc/relationships-among-mfc-objects.md)   
 [Creazione di nuovi documenti, finestre e visualizzazioni](../mfc/creating-new-documents-windows-and-views.md)


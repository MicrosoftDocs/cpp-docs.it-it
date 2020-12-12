---
description: 'Altre informazioni su: creazione di modelli di documento'
title: Creazione di modelli di documento
ms.date: 11/04/2016
helpviewer_keywords:
- document templates [MFC]
- constructors [MFC], document template
- document templates [MFC], creating
- MFC, document templates
- templates [MFC], document templates
ms.assetid: c87f1821-7cbf-442e-9690-f126ae7fb783
ms.openlocfilehash: 60f85cf0a1c16e1aaa6057160c5b986001e18d84
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97330262"
---
# <a name="document-template-creation"></a>Creazione di modelli di documento

Quando si crea un nuovo documento in risposta a un comando **nuovo** o **aperto** dal menu **file** , il modello di documento crea anche una nuova finestra cornice che consente di visualizzare il documento.

Il Costruttore Document-Template specifica i tipi di documenti, finestre e visualizzazioni che il modello sarà in grado di creare. Questa operazione è determinata dagli argomenti passati al Costruttore Document-Template. Il codice seguente illustra la creazione di un [CMultiDocTemplate](reference/cmultidoctemplate-class.md) per un'applicazione di esempio:

[!code-cpp[NVC_MFCDocView#7](codesnippet/cpp/document-template-creation_1.cpp)]

Il puntatore a un nuovo `CMultiDocTemplate` oggetto viene usato come argomento per [AddDocTemplate](reference/cwinapp-class.md#adddoctemplate). Gli argomenti del `CMultiDocTemplate` Costruttore includono l'ID di risorsa associato ai menu e agli acceleratori del tipo di documento e tre utilizzi della macro [RUNTIME_CLASS](reference/run-time-object-model-services.md#runtime_class) . `RUNTIME_CLASS` Restituisce l'oggetto [CRuntimeClass](reference/cruntimeclass-structure.md) per la classe C++ denominata come argomento. I tre `CRuntimeClass` oggetti passati al Costruttore Document-Template forniscono le informazioni necessarie per creare nuovi oggetti delle classi specificate durante il processo di creazione del documento. Nell'esempio viene illustrata la creazione di un modello di documento che consente `CScribDoc` di creare oggetti con `CScribView` gli oggetti collegati. Le visualizzazioni sono incorniciate da finestre cornice figlio MDI standard.

## <a name="see-also"></a>Vedi anche

[Modelli di documento e processo di creazione documento/visualizzazione](document-templates-and-the-document-view-creation-process.md)<br/>
[Creazione documento/visualizzazione](document-view-creation.md)<br/>
[Relazioni tra oggetti MFC](relationships-among-mfc-objects.md)<br/>
[Creazione di nuovi documenti, finestre e visualizzazioni](creating-new-documents-windows-and-views.md)

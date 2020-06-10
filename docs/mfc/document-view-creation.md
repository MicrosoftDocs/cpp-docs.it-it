---
title: Creazione della visualizzazione documento
ms.date: 11/04/2016
helpviewer_keywords:
- documents [MFC], creating
- views [MFC], and frame windows
- views [MFC], creating
- tables [MFC]
- MFC, views
- document/view architecture [MFC], creating document/view
- object creators
- MFC, documents
- tables [MFC], objects each MFC object creates
ms.assetid: bda14f41-ed50-439d-af9e-591174e7dd64
ms.openlocfilehash: 5441827188f5bff98638cc85cd29e2efd79f8ae8
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84620334"
---
# <a name="documentview-creation"></a>Creazione di documenti/visualizzazioni

Il Framework fornisce implementazioni dei comandi **nuovi** e **aperti** , tra gli altri, dal menu **file** . La creazione di un nuovo documento e della visualizzazione e della finestra cornice associate è un lavoro di collaborazione tra l'oggetto applicazione, un modello di documento, il documento appena creato e la finestra cornice appena creata. Nella tabella seguente vengono riepilogati gli oggetti che creano.

### <a name="object-creators"></a>Creatori di oggetti

|Autore|Crea|
|-------------|-------------|
|Oggetto applicazione|Modello di documento|
|Modello di documento|Document|
|Modello di documento|Finestra cornice|
|Finestra cornice|Visualizzazione|

## <a name="see-also"></a>Vedere anche

[Modelli di documenti e processo di creazione documento/visualizzazione](document-templates-and-the-document-view-creation-process.md)<br/>
[Creazione di modelli di documento](document-template-creation.md)<br/>
[Relazioni tra oggetti MFC](relationships-among-mfc-objects.md)<br/>
[Creazione di nuovi documenti, finestre e visualizzazioni](creating-new-documents-windows-and-views.md)

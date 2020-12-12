---
description: 'Altre informazioni su: creazione documento/visualizzazione'
title: Creazione Document-View
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
ms.openlocfilehash: 128b68eb53bd596ba2e4b4df4f2c5e865452fe2a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97326435"
---
# <a name="documentview-creation"></a>Creazione di documenti/visualizzazioni

Il Framework fornisce implementazioni dei comandi **nuovi** e **aperti** , tra gli altri, dal menu **file** . La creazione di un nuovo documento e della visualizzazione e della finestra cornice associate è un lavoro di collaborazione tra l'oggetto applicazione, un modello di documento, il documento appena creato e la finestra cornice appena creata. Nella tabella seguente vengono riepilogati gli oggetti che creano.

### <a name="object-creators"></a>Creatori di oggetti

|Autore|Crea|
|-------------|-------------|
|Oggetto applicazione|Modello di documento|
|Modello di documento|Documento|
|Modello di documento|Finestra cornice|
|Finestra cornice|Visualizzazione|

## <a name="see-also"></a>Vedi anche

[Modelli di documento e processo di creazione documento/visualizzazione](document-templates-and-the-document-view-creation-process.md)<br/>
[Creazione di modelli di documento](document-template-creation.md)<br/>
[Relazioni tra oggetti MFC](relationships-among-mfc-objects.md)<br/>
[Creazione di nuovi documenti, finestre e visualizzazioni](creating-new-documents-windows-and-views.md)

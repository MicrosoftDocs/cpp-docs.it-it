---
title: Creazione documento / visualizzazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: cb89180db8e1a6cce2c40bbb4bae0965b972afa2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="documentview-creation"></a>Creazione di documenti/visualizzazioni
Il framework fornisce le implementazioni del `New` e **aprire** comandi (ad) la **File** menu. Creazione di un nuovo documento e la relativa finestra cornice e visualizzazione associata è un lavoro cooperativo tra l'oggetto applicazione, un modello di documento, il documento appena creato e la finestra cornice appena creato. Nella tabella seguente sono riepilogati gli oggetti creano in ciascun oggetto.  
  
### <a name="object-creators"></a>Creatori di oggetti  
  
|Creator|Crea|  
|-------------|-------------|  
|Oggetto Application|Modello di documento|  
|Modello di documento|Document|  
|Modello di documento|Finestra cornice|  
|Finestra cornice|Visualizza|  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli di documento e il processo di creazione documento/visualizzazione](../mfc/document-templates-and-the-document-view-creation-process.md)   
 [Creazione del modello di documento](../mfc/document-template-creation.md)   
 [Relazioni tra oggetti MFC](../mfc/relationships-among-mfc-objects.md)   
 [Creazione di nuovi documenti, finestre e visualizzazioni](../mfc/creating-new-documents-windows-and-views.md)


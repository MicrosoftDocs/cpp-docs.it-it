---
title: Creazione documento / visualizzazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
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
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: c6997189f23ea7599dde0a1b19ba9f0ea350378d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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


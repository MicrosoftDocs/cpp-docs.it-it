---
title: Inizializzazione di documenti e visualizzazioni | Documenti Microsoft
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
- initializing documents [MFC]
- documents [MFC], initializing
- views [MFC], initializing
- initializing objects [MFC], document objects
- initializing views [MFC]
ms.assetid: 33cb8643-8a16-478c-bc26-eccc734e3661
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f80d870f9804454dc652fdda00f34fcdb7a52062
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="initializing-documents-and-views"></a>Inizializzazione di documenti e visualizzazioni
I documenti vengono creati in due modi diversi, pertanto la classe del documento deve supportare entrambi i metodi. Innanzitutto, l'utente può creare un nuovo documento vuoto utilizzando il comando Nuovo del menu File. In tal caso, inizializzare il documento nell'override del [OnNewDocument](../mfc/reference/cdocument-class.md#onnewdocument) funzione membro di classe [CDocument](../mfc/reference/cdocument-class.md). In secondo luogo, l'utente può utilizzare il comando Apri del menu File per creare un nuovo documento il cui contenuto viene letto da un file. In tal caso, inizializzare il documento nell'override del [OnOpenDocument](../mfc/reference/cdocument-class.md#onopendocument) funzione membro di classe **CDocument**. Se entrambe le inizializzazioni sono uguali, è possibile chiamare una funzione membro comune da entrambi gli override oppure `OnOpenDocument` può chiamare `OnNewDocument` per inizializzare un documento pulito e quindi completare l'operazione di apertura.  
  
 Le visualizzazioni vengono create dopo che sono stati creati i documenti. Il momento migliore per inizializzare una visualizzazione è dopo che il framework ha completato la creazione del documento, della finestra cornice e della visualizzazione. È possibile inizializzare la visualizzazione eseguendo l'override di [OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate) funzione membro di [CView](../mfc/reference/cview-class.md). Se è necessario inizializzare nuovamente o modificare qualsiasi elemento ogni volta che il documento viene modificato, è possibile eseguire l'override [OnUpdate](../mfc/reference/cview-class.md#onupdate).  
  
## <a name="see-also"></a>Vedere anche  
 [Inizializzazione e pulizia di documenti e visualizzazioni](../mfc/initializing-and-cleaning-up-documents-and-views.md)


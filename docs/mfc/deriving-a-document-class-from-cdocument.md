---
title: Derivazione di una classe documento da CDocument | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- CDocument class [MFC], deriving from
- classes [MFC], deriving from CDocument
- document objects [MFC], derived
- derived classes [MFC], functions often overridden
- document classes [MFC], functions often overridden
ms.assetid: e6a198e0-9799-43c0-83c5-04174d8b532c
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0e5c128a2a2e32b5e4854725354ed484a335ab0c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="deriving-a-document-class-from-cdocument"></a>Derivazione di una classe documento da CDocument
I documenti includono e gestire i dati dell'applicazione. Per utilizzare la classe di documento generata dalla creazione guidata applicazione MFC, è necessario eseguire le operazioni seguenti:  
  
-   Derivare una classe da **CDocument** per ogni tipo di documento.  
  
-   Aggiungere variabili membro per archiviare i dati di ogni documento.  
  
-   Eseguire l'override **CDocument**del `Serialize` funzione membro nella classe del documento. `Serialize`scrive e legge i dati del documento al e dal disco.  
  
## <a name="other-document-functions-often-overridden"></a>Altre funzioni del documento sottoposte spesso a override  
 È anche possibile eseguire l'override di altri **CDocument** funzioni membro. In particolare, è spesso necessario eseguire l'override [OnNewDocument](../mfc/reference/cdocument-class.md#onnewdocument) e [OnOpenDocument](../mfc/reference/cdocument-class.md#onopendocument) per inizializzare i membri di dati del documento e [DeleteContents](../mfc/reference/cdocument-class.md#deletecontents) da eliminare dati allocati dinamicamente. Per informazioni sui membri sottoponibile a override, vedere la classe [CDocument](../mfc/reference/cdocument-class.md) nel *riferimenti alla libreria MFC*.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di documenti](../mfc/using-documents.md)


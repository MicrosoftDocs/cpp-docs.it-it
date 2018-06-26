---
title: Derivazione di una classe documento da CDocument | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CDocument class [MFC], deriving from
- classes [MFC], deriving from CDocument
- document objects [MFC], derived
- derived classes [MFC], functions often overridden
- document classes [MFC], functions often overridden
ms.assetid: e6a198e0-9799-43c0-83c5-04174d8b532c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a81f3c3a36f049e3f47401efa31b36677b3b9ba6
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36931749"
---
# <a name="deriving-a-document-class-from-cdocument"></a>Derivazione di una classe documento da CDocument
I documenti includono e gestire i dati dell'applicazione. Per utilizzare la classe di documento generata dalla creazione guidata applicazione MFC, è necessario eseguire le operazioni seguenti:  
  
-   Derivare una classe da `CDocument` per ogni tipo di documento.  
  
-   Aggiungere variabili membro per archiviare i dati di ogni documento.  
  
-   Eseguire l'override `CDocument`del `Serialize` funzione membro nella classe del documento. `Serialize` scrive e legge i dati del documento al e dal disco.  
  
## <a name="other-document-functions-often-overridden"></a>Altre funzioni del documento sottoposte spesso a override  
 È possibile che si voglia eseguire l'override di altri `CDocument` funzioni membro. In particolare, è spesso necessario eseguire l'override [OnNewDocument](../mfc/reference/cdocument-class.md#onnewdocument) e [OnOpenDocument](../mfc/reference/cdocument-class.md#onopendocument) per inizializzare i membri di dati del documento e [DeleteContents](../mfc/reference/cdocument-class.md#deletecontents) da eliminare dati allocati in modo dinamico. Per informazioni sui membri sottoponibile a override, vedere la classe [CDocument](../mfc/reference/cdocument-class.md) nel *riferimenti alla libreria MFC*.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di documenti](../mfc/using-documents.md)


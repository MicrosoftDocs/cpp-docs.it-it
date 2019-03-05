---
title: Derivazione di una classe documento da CDocument
ms.date: 11/04/2016
helpviewer_keywords:
- CDocument class [MFC], deriving from
- classes [MFC], deriving from CDocument
- document objects [MFC], derived
- derived classes [MFC], functions often overridden
- document classes [MFC], functions often overridden
ms.assetid: e6a198e0-9799-43c0-83c5-04174d8b532c
ms.openlocfilehash: 5998d5707eb741be0e8ac270f6ac5ce77a9ff8d8
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57272061"
---
# <a name="deriving-a-document-class-from-cdocument"></a>Derivazione di una classe documento da CDocument

I documenti includono e gestiscono i dati dell'applicazione. Per usare la classe di documento generata dalla creazione guidata applicazione MFC, è necessario eseguire le operazioni seguenti:

- Derivare una classe da `CDocument` per ogni tipo di documento.

- Aggiungere variabili membro per archiviare i dati di ciascun documento.

- Eseguire l'override `CDocument`del `Serialize` funzione membro nella classe del documento. `Serialize` scrive e legge i dati del documento da e verso dischi.

## <a name="other-document-functions-often-overridden"></a>Altre funzioni di documento spesso sottoposto a override

È anche possibile eseguire l'override di altri `CDocument` funzioni membro. In particolare, è spesso necessario eseguire l'override [OnNewDocument](../mfc/reference/cdocument-class.md#onnewdocument) e [OnOpenDocument](../mfc/reference/cdocument-class.md#onopendocument) per inizializzare i membri dati del documento e [DeleteContents](../mfc/reference/cdocument-class.md#deletecontents) da eliminare definitivamente dati allocati dinamicamente. Per informazioni sui membri sottoponibili a override, vedere la classe [CDocument](../mfc/reference/cdocument-class.md) nel *riferimento MFC*.

## <a name="see-also"></a>Vedere anche

[Uso di documenti](../mfc/using-documents.md)

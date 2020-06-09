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
ms.openlocfilehash: 399230446977636cc8769efe32b8f86fad466b83
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84616108"
---
# <a name="deriving-a-document-class-from-cdocument"></a>Derivazione di una classe documento da CDocument

I documenti contengono e gestiscono i dati dell'applicazione. Per utilizzare la classe documento fornita dalla creazione guidata applicazione MFC, è necessario eseguire le operazioni seguenti:

- Derivare una classe da `CDocument` per ogni tipo di documento.

- Aggiungere variabili membro per archiviare i dati di ogni documento.

- Eseguire l'override `CDocument` della `Serialize` funzione membro nella classe del documento. `Serialize`scrive e legge i dati del documento da e verso il disco.

## <a name="other-document-functions-often-overridden"></a>Altre funzioni di documento spesso sostituite

Potrebbe anche essere necessario eseguire l'override di altre `CDocument` funzioni membro. In particolare, sarà spesso necessario eseguire l'override di [OnNewDocument](reference/cdocument-class.md#onnewdocument) e [OnOpenDocument](reference/cdocument-class.md#onopendocument) per inizializzare i membri dati del documento e [DeleteContents](reference/cdocument-class.md#deletecontents) per eliminare i dati allocati in modo dinamico. Per informazioni sui membri sottoponibili a override, vedere la classe [CDocument](reference/cdocument-class.md) nella Guida di *riferimento a MFC*.

## <a name="see-also"></a>Vedere anche

[Utilizzo di documenti](using-documents.md)

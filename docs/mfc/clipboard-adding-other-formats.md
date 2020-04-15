---
title: 'Appunti: aggiunta di altri formati'
ms.date: 11/04/2016
helpviewer_keywords:
- formats [MFC], Clipboard
- Clipboard, formats
- custom formats, placing on Clipboard
- custom formats
- registering custom Clipboard data formats
- custom Clipboard data formats
ms.assetid: aea58159-65ed-4385-aeaa-3d9d5281903b
ms.openlocfilehash: 6f4e159cc1b6918843d4a164dcca88500eb7b038
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374611"
---
# <a name="clipboard-adding-other-formats"></a>Appunti: aggiunta di altri formati

In questo argomento viene illustrato come espandere l'elenco dei formati supportati, in particolare per il supporto OLE. L'argomento [Appunti: Copia e incolla dei dati](../mfc/clipboard-copying-and-pasting-data.md) descrive l'implementazione minima necessaria per supportare le operazioni di copia e incolla dagli Appunti. Se questo è tutto ciò che si implementa, gli unici formati inseriti negli Appunti sono **CF_METAFILEPICT**, **CF_EMBEDSOURCE** **, CF_OBJECTDESCRIPTOR**ed eventualmente **CF_LINKSOURCE**. La maggior parte delle applicazioni avrà bisogno di più formati negli Appunti rispetto a questi tre.

## <a name="registering-custom-formats"></a><a name="_core_registering_custom_formats"></a>Registrazione di formati personalizzati

Per creare formati personalizzati, seguire la stessa procedura utilizzata per la registrazione di qualsiasi formato degli Appunti personalizzato: passare il nome del formato alla funzione **RegisterClipboardFormat** e utilizzare il relativo valore restituito come ID formato.

## <a name="placing-formats-on-the-clipboard"></a><a name="_core_placing_formats_on_the_clipboard"></a>Inserimento di formati negli Appunti

Per aggiungere altri formati agli Appunti, è `OnGetClipboardData` necessario eseguire l'override `COleClientItem` della `COleServerItem` funzione nella classe derivata da o (a seconda che i dati da copiare siano nativi). In questa funzione, è necessario utilizzare la procedura seguente.

#### <a name="to-place-formats-on-the-clipboard"></a>Per inserire i formati negli Appunti

1. Creare un oggetto `COleDataSource`.

1. Passare questa origine dati a una funzione che aggiunge i formati `COleDataSource::CacheGlobalData`dati nativi all'elenco dei formati supportati chiamando .

1. Aggiungi formati standard `COleDataSource::CacheGlobalData` chiamando per ogni formato standard che vuoi supportare.

Questa tecnica viene utilizzata nel programma di esempio OLE MFC [HIERSVR](../overview/visual-cpp-samples.md) (esaminare la `OnGetClipboardData` funzione membro della classe **CServerItem).** L'unica differenza in questo esempio è che il passaggio tre non viene implementato perché HIERSVR non supporta altri formati standard.

### <a name="what-do-you-want-to-know-more-about"></a>Cosa vuoi sapere di più su

- [Oggetti dati OLE, origini dati OLE e Uniform Data Transfer](../mfc/data-objects-and-data-sources-ole.md)

- [Trascinamento della selezione OLE](../mfc/drag-and-drop-ole.md)

- [OLE](../mfc/ole-background.md)

## <a name="see-also"></a>Vedere anche

[Appunti: uso del meccanismo degli Appunti OLE](../mfc/clipboard-using-the-ole-clipboard-mechanism.md)

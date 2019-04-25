---
title: 'Appunti: Aggiunta di altri formati'
ms.date: 11/04/2016
helpviewer_keywords:
- formats [MFC], Clipboard
- Clipboard, formats
- custom formats, placing on Clipboard
- custom formats
- registering custom Clipboard data formats
- custom Clipboard data formats
ms.assetid: aea58159-65ed-4385-aeaa-3d9d5281903b
ms.openlocfilehash: 182abe71ccc9552c113ebb114b4351178e48b096
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62151864"
---
# <a name="clipboard-adding-other-formats"></a>Appunti: Aggiunta di altri formati

Questo argomento illustra come espandere l'elenco dei formati supportati, in particolare per il supporto OLE. L'argomento [negli Appunti: Copiando e incollando dati](../mfc/clipboard-copying-and-pasting-data.md) viene descritta l'implementazione minima necessaria per supportare copiando e incollando dagli Appunti. Se questo è tutto implementare, sono gli unici formati inseriti negli Appunti **CF_EMBEDSOURCE**, **CF_OBJECTDESCRIPTOR**, **inseriti**ed eventualmente **CF_LINKSOURCE**. La maggior parte delle applicazioni saranno necessario più formati negli Appunti rispetto a questi tre.

##  <a name="_core_registering_custom_formats"></a> Registrazione di formati personalizzati

Per creare i propri formati personalizzati, seguire la stessa procedura userà quando si registra formati Appunti personalizzati: passare il nome del formato per il **RegisterClipboardFormat** funzione, usare il relativo valore restituito come ID di formato.

##  <a name="_core_placing_formats_on_the_clipboard"></a> Formati di inserimento negli Appunti

Per aggiungere altri formati negli Appunti, è necessario eseguire l'override di `OnGetClipboardData` funzione nella classe è derivata dalla `COleClientItem` o `COleServerItem` (a seconda se i dati da copiare sono nativi). In questa funzione, è consigliabile usare la procedura seguente.

#### <a name="to-place-formats-on-the-clipboard"></a>Per inserire i formati negli Appunti

1. Creare un oggetto `COleDataSource`.

1. Passare a questa origine dati a una funzione che aggiunge i formati nativi dei dati all'elenco dei formati supportati chiamando `COleDataSource::CacheGlobalData`.

1. Aggiungere i formati standard chiamando `COleDataSource::CacheGlobalData` per ogni formato standard che si desidera supportare.

Questa tecnica viene usata nel programma di esempio OLE MFC [HIERSVR](../overview/visual-cpp-samples.md) (esaminare le `OnGetClipboardData` funzione membro del **CServerItem** classe). L'unica differenza in questo esempio è che il terzo passaggio non è implementato poiché HIERSVR non supporta altri formati standard di nessuna.

### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Origini dati e oggetti dati OLE e uniform data transfer](../mfc/data-objects-and-data-sources-ole.md)

- [Trascinamento della selezione OLE](../mfc/drag-and-drop-ole.md)

- [OLE](../mfc/ole-background.md)

## <a name="see-also"></a>Vedere anche

[Appunti: Utilizzo del meccanismo degli Appunti OLE](../mfc/clipboard-using-the-ole-clipboard-mechanism.md)

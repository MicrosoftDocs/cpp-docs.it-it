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
ms.openlocfilehash: 52089364a6be423c69a7031cd0d99e1924de1444
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84626069"
---
# <a name="clipboard-adding-other-formats"></a>Appunti: aggiunta di altri formati

In questo argomento viene illustrato come espandere l'elenco dei formati supportati, in particolare per il supporto OLE. Negli Appunti dell'argomento [: copia e incolla di dati](clipboard-copying-and-pasting-data.md) viene descritta l'implementazione minima necessaria per supportare la copia e incolla dagli Appunti. Se si tratta di tutte le implementazioni, gli unici formati inseriti negli Appunti sono **CF_METAFILEPICT**, **CF_EMBEDSOURCE**, **CF_OBJECTDESCRIPTOR**e possibilmente **CF_LINKSOURCE**. Per la maggior parte delle applicazioni sono necessari più formati negli Appunti rispetto a questi tre.

## <a name="registering-custom-formats"></a><a name="_core_registering_custom_formats"></a>Registrazione di formati personalizzati

Per creare formati personalizzati, seguire la stessa procedura usata per la registrazione di un formato degli Appunti personalizzato: passare il nome del formato alla funzione **RegisterClipboardFormat** e usare il relativo valore restituito come ID formato.

## <a name="placing-formats-on-the-clipboard"></a><a name="_core_placing_formats_on_the_clipboard"></a>Inserimento di formati negli Appunti

Per aggiungere altri formati a quelli inseriti negli Appunti, è necessario eseguire l'override della `OnGetClipboardData` funzione nella classe derivata da `COleClientItem` o `COleServerItem` (a seconda che i dati da copiare siano nativi). In questa funzione è consigliabile utilizzare la procedura seguente.

#### <a name="to-place-formats-on-the-clipboard"></a>Per inserire formati negli Appunti

1. Creare un oggetto `COleDataSource`.

1. Passare questa origine dati a una funzione che aggiunge i formati di dati nativi all'elenco di formati supportati chiamando `COleDataSource::CacheGlobalData` .

1. Aggiungere i formati standard chiamando `COleDataSource::CacheGlobalData` per ogni formato standard che si vuole supportare.

Questa tecnica viene utilizzata nel programma OLE di esempio MFC [HIERSVR](../overview/visual-cpp-samples.md) (esaminare la `OnGetClipboardData` funzione membro della classe **CServerItem** ). L'unica differenza in questo esempio è che il terzo passaggio non è implementato perché HIERSVR non supporta altri formati standard.

### <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Oggetti dati OLE, origini dati OLE e Uniform Data Transfer](data-objects-and-data-sources-ole.md)

- [Trascinamento della selezione OLE](drag-and-drop-ole.md)

- [OLE](ole-background.md)

## <a name="see-also"></a>Vedere anche

[Appunti: uso del meccanismo degli Appunti OLE](clipboard-using-the-ole-clipboard-mechanism.md)

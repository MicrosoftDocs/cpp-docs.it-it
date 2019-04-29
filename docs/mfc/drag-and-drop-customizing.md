---
title: 'Trascinamento della selezione: Personalizzazione di'
ms.date: 11/04/2016
helpviewer_keywords:
- drag and drop [MFC], implementing in non-OLE applications
- drag and drop [MFC], customizing behavior
- drag and  [MFC], COleDataSource object
- drag and drop [MFC], calling DoDragDrop
- OLE drag and drop [MFC], customizing behavior
ms.assetid: 03369d3e-46bf-4140-b58c-d0c9657cf38a
ms.openlocfilehash: b4749f8d45c962f8b9217e4c6367538d3e6a3608
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62405950"
---
# <a name="drag-and-drop-customizing"></a>Trascinamento della selezione: Personalizzazione di

L'implementazione predefinita della funzionalità di trascinamento della selezione è sufficiente per la maggior parte delle applicazioni. Tuttavia, alcune applicazioni possono richiedere una modifica di questo comportamento standard. In questo articolo vengono spiegati i passaggi necessari per modificare queste impostazioni predefinite. Inoltre, è possibile utilizzare questa tecnica per stabilire le applicazioni che non supportano i documenti compositi come origini di rilascio.

Se si sta personalizzando il comportamento OLE standard del trascinamento della selezione o si dispone di un'applicazione non OLE, è necessario creare un oggetto `COleDataSource` per contenere i dati. Quando l'utente inizia un'operazione di trascinamento della selezione, il codice deve chiamare la funzione `DoDragDrop` da questo oggetto anziché da altre classi che supportano le operazioni di trascinamento della selezione.

Facoltativamente, è possibile creare un oggetto `COleDropSource` per controllare il rilascio e per eseguire l'override di alcune funzioni a seconda del tipo di comportamento che si desidera modificare. Questo oggetto origine rilascio viene quindi passato a `COleDataSource::DoDragDrop` per modificare il comportamento predefinito di queste funzioni. Queste differenti opzioni offrono una grande flessibilità su come supportare le operazioni di trascinamento nell'applicazione che si sta sviluppando. Per altre informazioni sulle origini dati, vedere l'articolo [oggetti dati e origini dati (OLE)](../mfc/data-objects-and-data-sources-ole.md).

È possibile eseguire l'override delle seguenti funzioni per personalizzare le operazioni di trascinamento e rilascio:

|Sostituisci|Per personalizzare|
|--------------|------------------|
|`OnBeginDrag`|Come il trascinamento viene avviato dopo avere chiamato `DoDragDrop`.|
|`GiveFeedback`|Feedback visivo, come appare il cursore, per risultati di rilascio diversi.|
|`QueryContinueDrag`|Chiusura dell'operazione di trascinamento della selezione. Questa funzione consente di controllare gli stati dei tasti di modifica durante l'operazione di trascinamento.|

## <a name="see-also"></a>Vedere anche

[Trascinamento della selezione (OLE)](../mfc/drag-and-drop-ole.md)<br/>
[Classe COleDropSource](../mfc/reference/coledropsource-class.md)<br/>
[Classe COleDataSource](../mfc/reference/coledatasource-class.md)

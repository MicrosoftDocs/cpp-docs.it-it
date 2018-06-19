---
title: 'Trascinamento della selezione: personalizzazione | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- drag and drop [MFC], implementing in non-OLE applications
- drag and drop [MFC], customizing behavior
- drag and  [MFC], COleDataSource object
- drag and drop [MFC], calling DoDragDrop
- OLE drag and drop [MFC], customizing behavior
ms.assetid: 03369d3e-46bf-4140-b58c-d0c9657cf38a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 59ec5a5a493106750fa7bb8c7ec31b8dbb011070
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33344243"
---
# <a name="drag-and-drop-customizing"></a>Trascinamento della selezione: personalizzazione
L'implementazione predefinita della funzionalità di trascinamento della selezione è sufficiente per la maggior parte delle applicazioni. Tuttavia, alcune applicazioni possono richiedere una modifica di questo comportamento standard. In questo articolo vengono spiegati i passaggi necessari per modificare queste impostazioni predefinite. Inoltre, è possibile utilizzare questa tecnica per stabilire le applicazioni che non supportano i documenti compositi come origini di rilascio.  
  
 Se si sta personalizzando il comportamento OLE standard del trascinamento della selezione o si dispone di un'applicazione non OLE, è necessario creare un oggetto `COleDataSource` per contenere i dati. Quando l'utente inizia un'operazione di trascinamento della selezione, il codice deve chiamare la funzione `DoDragDrop` da questo oggetto anziché da altre classi che supportano le operazioni di trascinamento della selezione.  
  
 Facoltativamente, è possibile creare un oggetto `COleDropSource` per controllare il rilascio e per eseguire l'override di alcune funzioni a seconda del tipo di comportamento che si desidera modificare. Questo oggetto origine rilascio viene quindi passato a `COleDataSource::DoDragDrop` per modificare il comportamento predefinito di queste funzioni. Queste differenti opzioni offrono una grande flessibilità su come supportare le operazioni di trascinamento e rilascio nell'applicazione che si sta sviluppando. Per ulteriori informazioni sulle origini dati, vedere l'articolo [oggetti dati e origini dati (OLE)](../mfc/data-objects-and-data-sources-ole.md).  
  
 È possibile eseguire l'override delle seguenti funzioni per personalizzare le operazioni di trascinamento e rilascio:  
  
|Sostituisci|Per personalizzare|  
|--------------|------------------|  
|`OnBeginDrag`|Come il trascinamento viene avviato dopo avere chiamato `DoDragDrop`.|  
|`GiveFeedback`|Feedback visivo, come appare il cursore, per risultati di rilascio diversi.|  
|`QueryContinueDrag`|Chiusura dell'operazione di trascinamento e rilascio. Questa funzione consente di controllare gli stati dei tasti di modifica durante l'operazione di trascinamento.|  
  
## <a name="see-also"></a>Vedere anche  
 [Trascinamento della selezione (OLE)](../mfc/drag-and-drop-ole.md)   
 [Classe COleDropSource](../mfc/reference/coledropsource-class.md)   
 [Classe COleDataSource](../mfc/reference/coledatasource-class.md)

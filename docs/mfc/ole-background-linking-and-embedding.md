---
title: 'Sfondo OLE: Collegamento e incorporamento | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- OLE embedded items [MFC]
- item types [MFC], defined
- item types [MFC]
- OLE [MFC], linked items
- linked items (OLE) [MFC]
- embedded objects [MFC]
- OLE items [MFC], types
ms.assetid: 11107711-eb96-4099-8f5c-7910bb3ecb75
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c5dc7a5770c98323187dbabcd8c2a7bb9eb652de
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33347279"
---
# <a name="ole-background-linking-and-embedding"></a>Sfondo OLE: collegamento e incorporamento
L'utilizzo del comando Incolla in un'applicazione contenitore può creare un componente incorporato o un elemento incorporato. I dati di origine per un elemento incorporato sono archiviati come parte del documento OLE che lo contiene. In questo modo, un file di un documento di elaboratore di testo può contenere testo e anche bitmap, grafici, formule o qualsiasi altro tipo di dati.  
  
 La tecnologia OLE fornisce un altro modo per includere i dati da un'altra applicazione: creando un componente collegato o un elemento collegato o un collegamento. I passaggi per creare un elemento collegato sono simili a quelli per creare un elemento incorporato, eccetto per il fatto che si utilizza il comando Incolla collegamento anziché il comando Incolla. A differenza di un componente incorporato, un componente collegato memorizza un percorso ai dati originali, i quali sono spesso in un file separato.  
  
 Ad esempio, se si utilizza un documento di testo e si crea un elemento collegato ad alcune celle di un foglio di lavoro, i dati per l'elemento collegato vengono archiviati nel documento originale del foglio di lavoro. Il documento di testo contiene solo le informazioni che specificano la posizione in cui l'elemento è disponibile, ovvero, contiene un collegamento al documento originale del foglio di lavoro. Quando si fa doppio clic sulle celle, l'applicazione del foglio di lavoro viene avviata e il documento originale del foglio di lavoro viene caricato dalla posizione in cui è archiviato.  
  
 Ogni elemento OLE, sia incorporato o collegato, è associato a un tipo che si basa sull'applicazione che lo ha creato. Ad esempio, un elemento di Microsoft Paintbrush è un tipo di elemento e un elemento di Microsoft Excel è un altro tipo. Alcune applicazioni, tuttavia, possono creare più di un tipo di elemento. Ad esempio, Microsoft Excel può creare elementi del foglio di lavoro, elementi del grafico e elementi del foglio macro. Ognuno di questi elementi può essere identificato in modo univoco dal sistema tramite un identificatore di classe o **CLSID**.  
  
## <a name="see-also"></a>Vedere anche  
 [Sfondo OLE](../mfc/ole-background.md)   
 [Sfondo OLE: Contenitori e server](../mfc/ole-background-containers-and-servers.md)   
 [Contenitori: Elementi Client](../mfc/containers-client-items.md)   
 [Server: elementi server](../mfc/servers-server-items.md)


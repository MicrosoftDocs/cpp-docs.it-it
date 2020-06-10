---
title: 'Sfondo OLE: collegamento e incorporamento'
ms.date: 11/04/2016
helpviewer_keywords:
- OLE embedded items [MFC]
- item types [MFC], defined
- item types [MFC]
- OLE [MFC], linked items
- linked items (OLE) [MFC]
- embedded objects [MFC]
- OLE items [MFC], types
ms.assetid: 11107711-eb96-4099-8f5c-7910bb3ecb75
ms.openlocfilehash: 6b6032d2e772728495d4ddb1dbfaa5daf7348b60
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84619879"
---
# <a name="ole-background-linking-and-embedding"></a>Sfondo OLE: collegamento e incorporamento

L'utilizzo del comando Incolla in un'applicazione contenitore può creare un componente incorporato o un elemento incorporato. I dati di origine per un elemento incorporato sono archiviati come parte del documento OLE che lo contiene. In questo modo, un file di un documento di elaboratore di testo può contenere testo e anche bitmap, grafici, formule o qualsiasi altro tipo di dati.

La tecnologia OLE fornisce un altro modo per includere i dati da un'altra applicazione: creando un componente collegato o un elemento collegato o un collegamento. I passaggi per creare un elemento collegato sono simili a quelli per creare un elemento incorporato, eccetto per il fatto che si utilizza il comando Incolla collegamento anziché il comando Incolla. A differenza di un componente incorporato, un componente collegato memorizza un percorso ai dati originali, i quali sono spesso in un file separato.

Ad esempio, se si utilizza un documento di testo e si crea un elemento collegato ad alcune celle di un foglio di lavoro, i dati per l'elemento collegato vengono archiviati nel documento originale del foglio di lavoro. Il documento di testo contiene solo le informazioni che specificano la posizione in cui l'elemento è disponibile, ovvero, contiene un collegamento al documento originale del foglio di lavoro. Quando si fa doppio clic sulle celle, l'applicazione del foglio di lavoro viene avviata e il documento originale del foglio di lavoro viene caricato dalla posizione in cui è archiviato.

Ogni elemento OLE, sia incorporato o collegato, è associato a un tipo che si basa sull'applicazione che lo ha creato. Ad esempio, un elemento di Microsoft Paintbrush è un tipo di elemento e un elemento di Microsoft Excel è un altro tipo. Alcune applicazioni, tuttavia, possono creare più di un tipo di elemento. Ad esempio, Microsoft Excel può creare elementi del foglio di lavoro, elementi del grafico e elementi del foglio macro. Ognuno di questi elementi può essere identificato in modo univoco dal sistema utilizzando un identificatore di classe o **CLSID**.

## <a name="see-also"></a>Vedere anche

[Sfondo OLE](ole-background.md)<br/>
[Sfondo OLE: contenitori e server](ole-background-containers-and-servers.md)<br/>
[Contenitori: elementi client](containers-client-items.md)<br/>
[Server: elementi server](servers-server-items.md)

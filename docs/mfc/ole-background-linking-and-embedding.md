---
title: "Sfondo OLE: collegamento e incorporamento | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "oggetti incorporati [C++]"
  - "tipi di elemento"
  - "tipi di elemento, definizione"
  - "elementi collegati (OLE) [C++]"
  - "elementi incorporati OLE"
  - "elementi OLE, tipi"
  - "OLE, elementi collegati"
ms.assetid: 11107711-eb96-4099-8f5c-7910bb3ecb75
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Sfondo OLE: collegamento e incorporamento
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzando il comando Incolla in un'applicazione contenitore può creare una componente incorporata, o un elemento incorporato.  I dati di origine per un elemento incorporato sono archiviati come parte del documento OLE che lo contiene.  In questo modo, un documento di testo può contenere testo e può inoltre contenere bitmap, grafici, formule, o qualsiasi altro tipo di dati.  
  
 OLE fornisce un altro modo per includere i dati da un'altra applicazione: creare una parte collegata, o un elemento collegato, o un collegamento.  I passaggi per creare un elemento collegato sono simili a quelli per creare un elemento incorporato, ad eccezione di utilizzare il comando Incolla link anziché il comando Incolla.  A differenza di una componente incorporata, una componente collegata memorizza un percorso ai dati originali, i quali sono spesso in un file separato.  
  
 Ad esempio, se si utilizza un documento di testo e si crea un elemento collegato ad alcune celle del foglio di lavoro, i dati relativi all'elemento collegato vengono archiviati nel documento originale del foglio di lavoro.  Il documento di testo contiene solo le informazioni che specificano la posizione in cui l'elemento è disponibile, ovvero, contiene un collegamento al documento originale del foglio di lavoro.  Quando si fa doppio clic sulle celle, l'applicazione del foglio di lavoro viene avviata e il documento originale del foglio di lavoro viene caricato da dove è stato archiviato.  
  
 Ogni elemento OLE, se incorporato o collegato, è associato a un tipo che si basa sull'applicazione che lo ha creato.  Ad esempio, un elemento di Microsoft Paintbrush è un tipo di elemento e un elemento di Microsoft Excel è un altro tipo.  Alcune applicazioni, tuttavia, possono creare più di un tipo di elemento.  Ad esempio, Microsoft Excel può creare elementi del foglio di lavoro, elementi del grafico e elementi di macrosheet.  Ognuno di questi elementi può essere identificato in modo univoco dal sistema con l'identificatore di classe o **CLSID**.  
  
## Vedere anche  
 [Sfondo OLE](../mfc/ole-background.md)   
 [Sfondo OLE: contenitori e server](../mfc/ole-background-containers-and-servers.md)   
 [Contenitori: elementi client](../mfc/containers-client-items.md)   
 [Server: elementi server](../mfc/servers-server-items.md)
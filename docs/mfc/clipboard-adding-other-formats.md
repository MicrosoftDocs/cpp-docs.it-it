---
title: "Appunti: aggiunta di altri formati | Microsoft Docs"
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
  - "Appunti, formati"
  - "formati di dati degli Appunti personalizzati"
  - "formati personalizzati"
  - "formati personalizzati, memorizzazione negli Appunti"
  - "formati [C++], Appunti"
  - "registrazione di formati di dati degli Appunti personalizzati"
ms.assetid: aea58159-65ed-4385-aeaa-3d9d5281903b
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Appunti: aggiunta di altri formati
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrato come espandere l'elenco dei formati supportati, in particolare per il supporto di OLE.  L'argomento [Appunti: Copiando e incollando dati](../mfc/clipboard-copying-and-pasting-data.md) descritta l'implementazione minima necessaria per supportare la copia e incolla dagli Appunti.  Se questo può essere implementata, i soli formati inseriti negli Appunti è `CF_METAFILEPICT`, **CF\_EMBEDSOURCE**, **CF\_OBJECTDESCRIPTOR** ed eventualmente `CF_LINKSOURCE`.  La maggior parte delle applicazioni richiedono più formati degli Appunti che questi tre.  
  
##  <a name="_core_registering_custom_formats"></a> Registrare i formati di personalizzato  
 Per creare i propri formati di personalizzato, utilizzare la stessa routine che a durante la registrazione qualsiasi formato degli Appunti personalizzato: passare il nome del formato alla funzione di **RegisterClipboardFormat** e utilizzare il valore restituito come l'identificazione di formato  
  
##  <a name="_core_placing_formats_on_the_clipboard"></a> Posizionare i formati negli Appunti  
 Per aggiungere più formati a quelli inseriti negli Appunti, è necessario eseguire l'override della funzione di `OnGetClipboardData` nella classe derivata da `COleClientItem` o da `COleServerItem` \(a seconda che i dati essere copiati vengono nativi\).  In questa funzione, è necessario seguire la procedura riportata di seguito.  
  
#### Per posizionare i formati negli Appunti  
  
1.  Creare un oggetto `COleDataSource`.  
  
2.  Passare questa origine dati a una funzione che aggiunge i formati dati nativi nell'elenco di formati supportati chiamando `COleDataSource::CacheGlobalData`.  
  
3.  Aggiungere i formati standard chiamando `COleDataSource::CacheGlobalData` per ogni formato standard che si desidera supportare.  
  
 Questa tecnica viene utilizzata nel programma di esempio [HIERSVR](../top/visual-cpp-samples.md) OLE MFC \(esaminare la funzione membro di `OnGetClipboardData` della classe di **CServerItem** \).  L'unica differenza in questo esempio è che il passaggio tre non è implementato in quanto HIERSVR non supporta altri formati standard.  
  
### Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Oggetti dati e origini dati OLE e trasferimento dei dati uniforme](../mfc/data-objects-and-data-sources-ole.md)  
  
-   [Funzionalità di trascinamento della selezione OLE](../mfc/drag-and-drop-ole.md)  
  
-   [OLE](../mfc/ole-background.md)  
  
## Vedere anche  
 [Appunti: utilizzo del meccanismo degli Appunti OLE](../mfc/clipboard-using-the-ole-clipboard-mechanism.md)
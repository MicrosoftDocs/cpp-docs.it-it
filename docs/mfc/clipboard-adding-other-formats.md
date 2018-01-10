---
title: 'Appunti: Aggiunta di altri formati | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- formats [MFC], Clipboard
- Clipboard, formats
- custom formats, placing on Clipboard
- custom formats
- registering custom Clipboard data formats
- custom Clipboard data formats
ms.assetid: aea58159-65ed-4385-aeaa-3d9d5281903b
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6e6f7f21a64c062e2f210be9f13ce04428c397f9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="clipboard-adding-other-formats"></a>Appunti: aggiunta di altri formati
In questo argomento viene illustrato come espandere l'elenco dei formati supportati, in particolare per il supporto OLE. L'argomento [negli Appunti: copiare e incollare dati](../mfc/clipboard-copying-and-pasting-data.md) viene descritta l'implementazione minimo necessario per supportare la copia e Incolla dagli Appunti. Se non si implementa, sono gli unici formati inseriti negli Appunti `CF_METAFILEPICT`, **CF_OBJECTDESCRIPTOR**, **inseriti**ed eventualmente `CF_LINKSOURCE`. La maggior parte delle applicazioni saranno necessario più formati negli Appunti di questi tre.  
  
##  <a name="_core_registering_custom_formats"></a>Registrazione di formati personalizzati  
 Per creare formati personalizzati, seguire la stessa procedura si utilizzerà per la registrazione di qualsiasi formato degli Appunti personalizzato: passare il nome del formato per il **RegisterClipboardFormat** funzione e utilizzare il relativo valore restituito come ID di formato.  
  
##  <a name="_core_placing_formats_on_the_clipboard"></a>Inserimento di formati negli Appunti  
 Per aggiungere ulteriori formati negli Appunti, è necessario eseguire l'override di `OnGetClipboardData` nella classe derivata da una funzione `COleClientItem` o `COleServerItem` (a seconda se i dati da copiare sono nativi). In questa funzione, è necessario utilizzare la procedura seguente.  
  
#### <a name="to-place-formats-on-the-clipboard"></a>Per inserire i formati negli Appunti  
  
1.  Creare un oggetto `COleDataSource`.  
  
2.  Passare a questa origine dati a una funzione che aggiunge all'elenco dei formati supportati i formati di dati nativi chiamando `COleDataSource::CacheGlobalData`.  
  
3.  Aggiungere i formati standard chiamando `COleDataSource::CacheGlobalData` per ogni formato standard che si desidera supportare.  
  
 Questa tecnica viene utilizzata nel programma di esempio OLE MFC [HIERSVR](../visual-cpp-samples.md) (esaminare il `OnGetClipboardData` funzione membro di **CServerItem** classe). L'unica differenza in questo esempio è che il terzo passaggio non è implementato perché HIERSVR non supporta nessun altro tipo di formato standard.  
  
### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Origini dati e oggetti di dati OLE e uniform data transfer](../mfc/data-objects-and-data-sources-ole.md)  
  
-   [Trascinamento della selezione OLE](../mfc/drag-and-drop-ole.md)  
  
-   [OLE](../mfc/ole-background.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Appunti: uso del meccanismo degli Appunti OLE](../mfc/clipboard-using-the-ole-clipboard-mechanism.md)


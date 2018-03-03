---
title: Oggetti dati e origini dati (OLE) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- data objects [MFC], definition
- data transfer [MFC]
- OLE [MFC], data transfer
- data sources [MFC], definition
- data transfer [MFC], definition
- OLE [MFC], data objects
- OLE [MFC], data sources
ms.assetid: 8f68eed8-0ce8-4489-a4cc-f95554f89090
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 04619ee7851d2e2d6ad569583dfbb2e619d37026
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="data-objects-and-data-sources-ole"></a>Oggetti dati e origini dati (OLE)
Quando si esegue un trasferimento di dati, tramite l'utilizzo di Appunti o trascinamento della selezione dei dati hanno un'origine e una destinazione. Un'applicazione fornisce i dati per la copia e la accetta un'altra applicazione per incollare. Ogni lato del trasferimento è necessario eseguire diverse operazioni sugli stessi dati per il trasferimento venga eseguita correttamente. La libreria Microsoft Foundation classe (MFC) fornisce due classi che rappresentano ogni lato di tale trasferimento:  
  
-   Origini dati (in base all'implementazione `COleDataSource` oggetti) rappresentano l'origine del trasferimento dati. Vengono creati dall'applicazione di origine dati viene copiato negli Appunti o quando vengono forniti dati per un'operazione di trascinamento e rilascio.  
  
-   Oggetti dati (in base all'implementazione `COleDataObject` oggetti) rappresentano la destinazione del trasferimento dati. Vengono creati quando l'applicazione di destinazione presenta dati eliminati al suo interno, o quando viene richiesto di eseguire un'operazione di Incolla dagli Appunti.  
  
 Gli articoli seguenti viene illustrato come utilizzare gli oggetti dati e origini dati nelle applicazioni. Queste informazioni si applicano alle applicazioni contenitore sia del server, perché entrambi possono essere utilizzate per copiare e incollare i dati.  
  
-   [Oggetti dati e origini dati: creazione e distruzione](../mfc/data-objects-and-data-sources-creation-and-destruction.md)  
  
-   [Oggetti dati e origini dati: modifica](../mfc/data-objects-and-data-sources-manipulation.md)  
  
## <a name="in-this-section"></a>In questa sezione  
 [Trascinamento della selezione](../mfc/drag-and-drop-ole.md)  
  
 [Appunti](../mfc/clipboard.md)  
  
## <a name="see-also"></a>Vedere anche  
 [OLE](../mfc/ole-in-mfc.md)   
 [Classe COleDataObject](../mfc/reference/coledataobject-class.md)   
 [Classe COleDataSource](../mfc/reference/coledatasource-class.md)

---
title: Oggetti dati e origini dati (OLE) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 766148494c6b8693f8d9e65f27e157b58d8e8689
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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

---
title: Classi correlate a OLE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.classes.ole
dev_langs:
- C++
helpviewer_keywords:
- ActiveX classes [MFC]
- OLE classes [MFC]
- OLE [MFC], classes
ms.assetid: 2135cf54-1d9d-4e0e-91b4-943b3440effa
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: baa4ec3de21ce91e0d8723ad0e4debb39a26b3cf
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33348515"
---
# <a name="ole-related-classes"></a>Classi correlate a OLE
Queste classi forniscono numerosi servizi, che spaziano dalle eccezioni all'input e all'output di file.  
  
 [COleObjectFactory](../mfc/reference/coleobjectfactory-class.md)  
 Utilizzata per creare elementi quando richiesti da altri contenitori. Questa classe funge da classe base per i tipi più specifici di factory, inclusi `COleTemplateServer`.  
  
 [COleMessageFilter](../mfc/reference/colemessagefilter-class.md)  
 Utilizzata per gestire la concorrenza con chiamate LRPC (Lightweight Remote Procedure Call).  
  
 [COleStreamFile](../mfc/reference/colestreamfile-class.md)  
 Utilizza l'interfaccia COM `IStream` per fornire un accesso `CFile` ai file compositi. Questa classe (derivata da `CFile`) consente la serializzazione di MFC per utilizzare una struttura di archiviazione OLE.  
  
 [CRectTracker](../mfc/reference/crecttracker-class.md)  
 Utilizzata per consentire lo spostamento, il ridimensionamento e il riorientamento degli elementi sul posto.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../mfc/class-library-overview.md)


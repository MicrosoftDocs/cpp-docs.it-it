---
title: "Classi correlate a OLE | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.classes.ole"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi ActiveX [C++]"
  - "OLE [C++], classi"
  - "classi OLE [C++]"
ms.assetid: 2135cf54-1d9d-4e0e-91b4-943b3440effa
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classi correlate a OLE
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Queste classi forniscono numerosi servizi, varianti diverse dalle eccezioni di input e di output del file.  
  
 [COleObjectFactory](../mfc/reference/coleobjectfactory-class.md)  
 Utilizzato per creare elementi quando richiesto da altri contenitori.  Questa classe funge da classe base per i tipi più specifici di factory, inclusi `COleTemplateServer`.  
  
 [COleMessageFilter](../mfc/reference/colemessagefilter-class.md)  
 Utilizzato per gestire la concorrenza con Chiamate a procedura remote leggere OLE \(LRPC\).  
  
 [COleStreamFile](../mfc/reference/colestreamfile-class.md)  
 Utilizza l'interfaccia COM `IStream` per fornire un accesso `CFile` ai file compositi.  Questa classe \(derivata da `CFile`\) consente la serializzazione di MFC per utilizzare una struttura di archiviazione OLE.  
  
 [CRectTracker](../mfc/reference/crecttracker-class.md)  
 Utilizzato per consentire lo spostamento, il ridimensionamento e il riorientamento degli elementi sul posto.  
  
## Vedere anche  
 [Cenni preliminari sulle classi](../mfc/class-library-overview.md)
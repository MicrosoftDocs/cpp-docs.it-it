---
title: "Serializzazione: serializzazione di un oggetto | Microsoft Docs"
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
  - "oggetti [C++], serializzazione"
  - "serializzazione [C++], oggetti"
  - "serializzazione di oggetti [C++]"
ms.assetid: 1db772b1-ad55-4fcf-b133-126cca082510
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Serializzazione: serializzazione di un oggetto
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'articolo [Serializzazione: Creazione di una classe serializzabile](../mfc/serialization-making-a-serializable-class.md) mostra come rendere una classe serializzabile.  Dopo avere creato una classe serializzabile, è possibile serializzare gli oggetti della classe da e per un file mediante un oggetto [CArchive](../mfc/reference/carchive-class.md).  Questo articolo descrive:  
  
-   [Definizione di oggetto CArchive](../mfc/what-is-a-carchive-object.md).  
  
-   [Due modi per creare un oggetto CArchive](../mfc/two-ways-to-create-a-carchive-object.md).  
  
-   [Come utilizzare il CArchive \<\< e gli \>\> operatori](../mfc/using-the-carchive-output-and-input-operators.md).  
  
-   [Memorizzazione e caricamento di CObjects tramite un archivio](../mfc/storing-and-loading-cobjects-via-an-archive.md).  
  
 È possibile tralasciare il framework di creazione dell'archivio del documento serializzabile oppure creare esplicitamente e manualmente l'oggetto `CArchive`.  È possibile trasferire i dati tra un file e l'oggetto serializzabile mediante gli operatori \<\< e \>\> per `CArchive` oppure, in alcuni casi, chiamando la funzione `Serialize` di una classe derivata da `CObject`.  
  
## Vedere anche  
 [Serializzazione](../mfc/serialization-in-mfc.md)
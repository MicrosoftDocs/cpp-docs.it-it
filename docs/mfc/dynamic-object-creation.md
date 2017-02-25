---
title: "Creazione di oggetti dinamici | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CObject (classe), creazione di oggetti dinamica"
  - "creazione di oggetti dinamica"
  - "creazione di oggetti, dinamica in fase di esecuzione"
  - "oggetti [C++], creazione dinamica in fase di esecuzione"
ms.assetid: 3e0f51cb-3e24-4231-817f-1c0ce9f2d5df
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Creazione di oggetti dinamici
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrato come creare un oggetto dinamico in fase di esecuzione.  La routine utilizza le informazioni della classe di runtime, come illustrato nell'articolo [Accedere a informazioni sulla classe di runtime](../mfc/accessing-run-time-class-information.md).  
  
#### Per creare dinamicamente un oggetto fornito la classe di runtime  
  
1.  Utilizzare il codice seguente per creare dinamicamente un oggetto utilizzando la funzione di `CreateObject` di `CRuntimeClass`.  Si noti che in caso di errore, il **NULL** di `CreateObject` anziché generare un'eccezione:  
  
     [!code-cpp[NVC_MFCCObjectSample#6](../mfc/codesnippet/CPP/dynamic-object-creation_1.cpp)]  
  
## Vedere anche  
 [Utilizzo di CObject](../mfc/using-cobject.md)
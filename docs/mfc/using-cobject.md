---
title: "Utilizzo di CObject | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CObject (classe)"
  - "classi derivate, da CObject"
  - "esempi [MFC], CObject"
  - "MFC, classi base"
  - "classe base radice per MFC"
ms.assetid: d0cd19bb-2856-4b41-abbc-620fd64cb223
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Utilizzo di CObject
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

[CObject](../mfc/reference/cobject-class.md) è la classe base radice per la maggior parte di libreria Microsoft Foundation Class \(MFC\).  La classe di `CObject` contiene varie funzionalità utili che è necessario incorporare nei propri oggetti di programma, inclusi il supporto della serializzazione, le informazioni sulla classe di runtime e l'output di diagnostica dell'oggetto.  Se derivare la classe da `CObject`, la classe può sfruttare queste funzionalità di `CObject`.  
  
## Scegliere l'argomento con cui si desidera procedere  
  
-   [Derivare la classe da CObject](../mfc/deriving-a-class-from-cobject.md)  
  
-   [Aggiungere il supporto per informazioni sulla classe di runtime, alla creazione dinamica e la serializzazione alla classe derivata](../mfc/specifying-levels-of-functionality.md)  
  
-   [Accedere alle informazioni sulla classe di runtime](../mfc/accessing-run-time-class-information.md)  
  
-   [Creare dinamicamente gli oggetti](../mfc/dynamic-object-creation.md)  
  
-   [Eseguire il dump i dati per scopi diagnostici](http://msdn.microsoft.com/it-it/727855b1-5a83-44bd-9fe3-f1d535584b59)  
  
-   Convalidare lo stato interno dell'oggetto \(vedere [MFC ASSERT\_VALID e CObject::AssertValid](http://msdn.microsoft.com/it-it/7654fb75-9e9a-499a-8165-0a96faf2d5e6)\)  
  
-   [Fare serializzarsi la classe in un archivio permanente](../mfc/serialization-in-mfc.md)  
  
-   Visualizzare un elenco di [Domande frequenti su CObject](../mfc/cobject-class-frequently-asked-questions.md)  
  
## Vedere anche  
 [Concetti](../mfc/mfc-concepts.md)   
 [Argomenti MFC generali](../mfc/general-mfc-topics.md)   
 [CRuntimeClass Structure](../mfc/reference/cruntimeclass-structure.md)   
 [File](../mfc/files-in-mfc.md)   
 [Serializzazione](../mfc/serialization-in-mfc.md)
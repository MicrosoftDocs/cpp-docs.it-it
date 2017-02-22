---
title: "Specifica dei livelli di funzionalit&#224; | Microsoft Docs"
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
  - "CObject (classe), aggiunta di funzionalità a classi derivate"
  - "supporto della creazione dinamica"
  - "livelli [C++]"
  - "livelli [C++], funzionalità in CObject"
  - "runtime [C++], informazioni sulle classi"
  - "classe in fase di esecuzione, supporto delle informazioni"
  - "serializzazione [C++], Cobject"
ms.assetid: 562669ba-c858-4f66-b5f1-b3beeea4f486
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Specifica dei livelli di funzionalit&#224;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene descritto come aggiungere i seguenti livelli di funzionalità al [CObject](../mfc/reference/cobject-class.md)\- classe derivata:  
  
-   [Informazioni sulla classe di runtime](#_core_to_add_run.2d.time_class_information)  
  
-   [Supporto dinamico di progettazione](#_core_to_add_dynamic_creation_support)  
  
-   [Supporto della serializzazione](#_core_to_add_serialization_support)  
  
 Per una descrizione generale di funzionalità di `CObject`, vedere l'articolo [Derivando una classe da CObject](../mfc/deriving-a-class-from-cobject.md).  
  
#### Per aggiungere informazioni sulla classe di runtime  
  
1.  Derivare la classe da `CObject`, come descritto nell'articolo di [Derivando una classe da CObject](../mfc/deriving-a-class-from-cobject.md).  
  
2.  Utilizzare la macro di `DECLARE_DYNAMIC` nella dichiarazione di classe, come illustrato di seguito:  
  
     [!code-cpp[NVC_MFCCObjectSample#2](../mfc/codesnippet/CPP/specifying-levels-of-functionality_1.h)]  
  
3.  Utilizzare la macro di `IMPLEMENT_DYNAMIC` nel file di implementazione \(.CPP\) della classe.  Questa macro accetta come argomenti il nome della classe e della relativa classe base, come segue:  
  
     [!code-cpp[NVC_MFCCObjectSample#3](../mfc/codesnippet/CPP/specifying-levels-of-functionality_2.cpp)]  
  
> [!NOTE]
>  `IMPLEMENT_DYNAMIC` sempre inserito nel file di implementazione \(.CPP\) della classe.  La macro di `IMPLEMENT_DYNAMIC` deve essere valutata soltanto una volta durante la compilazione e non deve essere utilizzata in un file di interfaccia \(. H\) che potrebbe potenzialmente essere incluso in più file.  
  
#### Per aggiungere il supporto dinamico di progettazione  
  
1.  Derivare la classe da `CObject`.  
  
2.  Utilizzare la macro di `DECLARE_DYNCREATE` nella dichiarazione di classe.  
  
3.  Definire un costruttore senza argomenti \(un costruttore predefinito\).  
  
4.  Utilizzare la macro di `IMPLEMENT_DYNCREATE` nel file di implementazione della classe.  
  
#### Per aggiungere il supporto della serializzazione  
  
1.  Derivare la classe da `CObject`.  
  
2.  Eseguire l'override della funzione membro di `Serialize`.  
  
    > [!NOTE]
    >  Se si chiama direttamente `Serialize`, ovvero, non si desidera serializzare l'oggetto tramite un puntatore polimorfico, omettere i passaggi da 3 a 5.  
  
3.  Utilizzare la macro di `DECLARE_SERIAL` nella dichiarazione di classe.  
  
4.  Definire un costruttore senza argomenti \(un costruttore predefinito\).  
  
5.  Utilizzare la macro di `IMPLEMENT_SERIAL` nel file di implementazione della classe.  
  
> [!NOTE]
>  Punti "di un puntatore polimorfico" a un oggetto di una classe \(chiamata A\) o a un oggetto di qualsiasi classe derivata da ricordare \(A, B\).  Per serializzare tramite un puntatore polimorfico, il framework deve determinare la classe di runtime dell'oggetto che si sta la serializzazione \(B\), poiché potrebbe essere un oggetto di qualsiasi classe derivata da una classe di base \(A\).  
  
 Per ulteriori informazioni su come attivare la serializzazione quando si deriva la classe da `CObject`, vedere gli articoli [File in MFC](../mfc/files-in-mfc.md) e [Serializzazione](../mfc/serialization-in-mfc.md).  
  
## Vedere anche  
 [Derivazione da una classe da CObject](../mfc/deriving-a-class-from-cobject.md)
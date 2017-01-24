---
title: "Raccolte | Microsoft Docs"
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
  - "modelli di matrice"
  - "matrici [C++], classi"
  - "classi di raccolte, informazioni"
  - "classi di raccolte, matrici"
  - "classi di raccolte, elenchi"
  - "classi di raccolte, mappe"
  - "classi di raccolte, MFC"
  - "classi di raccolte, forme"
  - "classi di raccolte, basate su modello"
  - "raccolte, informazioni"
  - "MFC (classi di raccolte)"
  - "MFC, raccolte"
  - "forme"
  - "forme, raccolta"
ms.assetid: 02586e4c-851d-41d0-a722-feb11c17c74c
caps.latest.revision: 18
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Raccolte
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La libreria MFC fornisce classi di raccolte per gestire gruppi di oggetti.  Queste classi sono di due tipi:  
  
-   [Classi di raccolte create dai modelli C\+\+](#_core_the_template.2d.based_collection_classes)  
  
-   [Classi di raccolte non create dai modelli C\+\+](#_core_the_collection_classes_not_based_on_templates)  
  
> [!NOTE]
>  Se il codice utilizza già le classi di raccolte non create da modelli, è possibile continuare a utilizzarle.  Se si scrivono nuove classi di raccolte indipendenti dai tipi per i tipi di dati personalizzati, è consigliabile utilizzare le più recenti classi basate su modelli.  
  
##  <a name="_core_collection_shapes"></a> Forme delle Raccolte  
 Una classe di raccolta è caratterizzata dalla "forma" e dai tipi dei relativi elementi.  La forma fa riferimento al modo in cui gli oggetti sono organizzati e archiviati dalla raccolta.  MFC fornisce tre forme base di raccolta: elenchi, matrici e mappe \(denominate anche dizionari\).  È possibile selezionare la forma di raccolta più appropriata al problema specifico di programmazione.  
  
 Ciascuna delle forme di raccolta fornite è descritta brevemente più avanti in questo argomento.  Per confrontare le funzionalità delle forme utili per decidere quale è ottimale per il programma, vedere [Suggerimenti per la scelta di una classe di raccolte](../mfc/recommendations-for-choosing-a-collection-class.md).  
  
-   Elenco  
  
     La classe di elenco fornisce un elenco di elementi ordinato e non indicizzato, implementato come elenchi collegati doppiamente.  Un elenco ha "una testa" e "un elemento di coda," e l'aggiunta o la rimozione di elementi dalla testa o viceversa, o inserire o eliminare elementi al centro, è molto veloce.  
  
-   Matrice  
  
     La classe array fornisce un array di oggetti ridimensionato dinamicamente, ordinata e indicizzata per interi.  
  
-   Mappa \(denominata anche dizionario\)  
  
     Una mappa è una raccolta che associa un oggetto chiave con un oggetto valore.  
  
##  <a name="_core_the_template.2d.based_collection_classes"></a> Classi di Raccolte basate su modello  
 Il modo più semplice per implementare una raccolta indipendente dai tipi che contiene oggetti di qualsiasi tipo è utilizzare una delle classi MFC basate su modelli.  Per esempi di queste classi, vedere l'esempio [COLLECT](../top/visual-cpp-samples.md) MFC.  
  
 Nella tabella seguente vengono elencate le classi di raccolta MFC basate su modelli.  
  
### Classi Modello di Raccolta  
  
|Contenuto della Raccolta|Matrici|Elenchi|Mappe|  
|------------------------------|-------------|-------------|-----------|  
|Insiemi di oggetti di qualsiasi tipo.|`CArray`|`CList`|`CMap`|  
|Raccolte di puntatori a oggetti di qualsiasi tipo|`CTypedPtrArray`|`CTypedPtrList`|`CTypedPtrMap`|  
  
##  <a name="_core_the_collection_classes_not_based_on_templates"></a> Le Classi di Raccolta non basate su modelli  
 Se l'applicazione utilizza già le classi di raccolta MFC non create da modelli, è possibile continuare a utilizzarle.  Tuttavia, per le nuove raccolte, è consigliabile utilizzare le classi basate su modelli.  Nella tabella seguente sono elencate le classi di raccolta MFC che non sono basate su modelli.  
  
### Classi di Raccolta non basate su modelli  
  
|Matrici|Elenchi|Mappe|  
|-------------|-------------|-----------|  
|`CObArray`|`CObList`|`CMapPtrToWord`|  
|`CByteArray`|`CPtrList`|`CMapPtrToPtr`|  
|`CDWordArray`|`CStringList`|`CMapStringToOb`|  
|`CPtrArray`||`CMapStringToPtr`|  
|`CStringArray`||`CMapStringToString`|  
|`CWordArray`||`CMapWordToOb`|  
|`CUIntArray`||`CMapWordToPtr`|  
  
 Le caratteristiche della tabella delle classi di raccolta MFC in [Suggerimenti per la scelta di una classe di raccolte](../mfc/recommendations-for-choosing-a-collection-class.md) descrive le classi di raccolta MFC in termini di queste caratteristiche \(diverse dalla forma\):  
  
-   Se la classe utilizza modelli C\+\+  
  
-   Se gli elementi memorizzati nella raccolta possono essere serializzati  
  
-   Se agli elementi memorizzati nella raccolta è possibile eseguire il dump per la diagnostica  
  
-   Se la raccolta è indipendente dai tipi  
  
### Scegliere l'argomento con cui si desidera procedere  
  
#### Attività generali della classe di raccolta  
  
-   [Suggerimenti per la scelta di una classe di raccolte](../mfc/recommendations-for-choosing-a-collection-class.md)  
  
-   [Procedura: creazione di una raccolta indipendente dai tipi](../mfc/how-to-make-a-type-safe-collection.md)  
  
-   [Creazione di raccolte di stack e code](../mfc/creating-stack-and-queue-collections.md)  
  
-   [CArray::Add](../Topic/CArray::Add.md)  
  
#### Attività delle classi di raccolta basate su modello  
  
-   [Classi basate su modello](../mfc/template-based-classes.md)  
  
#### Accesso ai membri di una raccolta \(basata su modello o meno\)  
  
-   [Accesso a tutti i membri di una raccolta](../mfc/accessing-all-members-of-a-collection.md)  
  
-   [Eliminazione di tutti gli oggetti in una raccolta CObject](../mfc/deleting-all-objects-in-a-cobject-collection.md)  
  
## Vedere anche  
 [Concetti](../mfc/mfc-concepts.md)   
 [Argomenti MFC generali](../mfc/general-mfc-topics.md)
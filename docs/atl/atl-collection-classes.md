---
title: "Classi di raccolta ATL | Microsoft Docs"
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
  - "classi di raccolte"
  - "classi di raccolte, informazioni"
  - "classi di raccolte, scelta"
  - "ConstructElements (funzione)"
  - "CTraits (classi)"
  - "DestructElements (funzione)"
  - "SerializeElements (funzione)"
  - "traits (classi)"
ms.assetid: 4d619d46-5b4e-41dd-b9fd-e86b1fbc00b5
caps.latest.revision: 14
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classi di raccolta ATL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

ATL fornisce molte classi per archiviare e accedere ai dati.  La classe si decide di utilizzare dipende da numerosi fattori, tra cui:  
  
-   La quantità di dati da memorizzare  
  
-   Efficienza rispetto alle prestazioni quando si accede ai dati  
  
-   La possibilità di accedere ai dati dall'indice o dalla chiave  
  
-   Come i dati vengono ordinati  
  
-   Le preferenze personali  
  
## Le classi di raccolte  
 ATL fornisce le classi di matrice per gestire un numero limitato di oggetti.  Tuttavia, queste classi sono limitate e progettate per l'utilizzo internamente da ATL.  Si consiglia di utilizzare nei programmi.  
  
|Classe|Tipo di archiviazione dei dati|  
|------------|------------------------------------|  
|[CSimpleArray](../atl/reference/csimplearray-class.md)|Implementa una classe di matrice per gestire un numero limitato di oggetti.|  
|[CSimpleMap](../atl/reference/csimplemap-class.md)|Implementa una classe di mapping per gestire un numero limitato di oggetti.|  
  
## Classi di raccolte di utilizzo generale  
 Le classi di seguire implementano le matrici, elenchi e i mapping e vengono fornite come classi di raccolte di utilizzo generale:  
  
|Classe|Tipo di archiviazione dei dati|  
|------------|------------------------------------|  
|[CAtlArray](../atl/reference/catlarray-class.md)|Implementa una matrice.|  
|[CAtlList](../atl/reference/catllist-class.md)|Implementa un elenco.|  
|[CAtlMap](../atl/reference/catlmap-class.md)|Implementa una struttura di mapping, con cui i dati possono farvi riferimento da una chiave o un valore.|  
|[CRBMap](../atl/reference/crbmap-class.md)|Implementa una struttura di mapping tramite l'algoritmo Rosso\- Nero.|  
|[CRBMultiMap](../atl/reference/crbmultimap-class.md)|Implementa una struttura multimapping Rosso\-Nera.|  
  
 Queste classi bloccheranno molti errori di programmazione se utilizzate nelle build di debug, ma a scopo delle prestazioni, questi controlli non vengono eseguiti nelle build per la vendita.  
  
## Classi di raccolte specializzate  
 Le classi di raccolte specializzate vengono fornite per gestire i puntatori alla memoria e i puntatori a interfaccia:  
  
|Classe|Scopo|  
|------------|-----------|  
|[CAutoPtrArray](../atl/reference/cautoptrarray-class.md)|Fornisce metodi utili quando creano una matrice di puntatori intelligenti.|  
|[CAutoPtrList](../atl/reference/cautoptrlist-class.md)|Fornisce metodi utili quando creano un elenco con puntatori intelligenti.|  
|[CComUnkArray](../atl/reference/ccomunkarray-class.md)|Archivia i puntatori `IUnknown` ed è progettato per essere utilizzato come parametro alla classe modello [IConnectionPointImpl](../atl/reference/iconnectionpointimpl-class.md).|  
|[CHeapPtrList](../atl/reference/cheapptrlist-class.md)|Fornisce metodi utili quando creano un elenco con puntatori heap.|  
|[CInterfaceArray](../atl/reference/cinterfacearray-class.md)|Fornisce metodi utili quando creano una matrice di puntatori all'interfaccia COM.|  
|[CInterfaceList](../atl/reference/cinterfacelist-class.md)|Fornisce metodi utili quando creano un elenco tramite puntatori all'interfaccia COM.|  
  
## Scegliere una classe di raccolte  
 Ognuna delle classi di raccolte disponibili sono disponibili le caratteristiche di prestazione diversi, come illustrato nella tabella riportata di seguito.  
  
-   Le colonne 2 e 3 descrivono le caratteristiche dell'ordine e l'accesso a ogni classe.  Nella tabella, il termine "ordinato" significa che l'ordine in cui gli elementi vengono inseriti ed eliminate determinare il relativo ordine nella raccolta; non significa che gli elementi vengono ordinati i relativi contenuti.  Il termine "indicizzato" significa che gli elementi della raccolta possono essere recuperati da un intero, come gli elementi in una matrice tipica.  
  
-   Le colonne 4 e 5 descrivono le prestazioni di ciascuna classe.  Nelle applicazioni che richiedono molti inserimenti nella raccolta, la velocità di inserimento può essere particolarmente importante, per altre applicazioni, la velocità di ricerca può essere più importante.  
  
-   La colonna 6 indica se ogni forma consente elementi duplicati.  
  
-   Le prestazioni di un'operazione specifica la classe di raccolte sono espresse in termini di relazione tra il tempo necessario per completare l'esecuzione e il numero di elementi della raccolta.  Un'operazione che richiede una quantità di tempo che aumenta linearmente quando il numero di aumenta di elementi viene descritto come O \(n\) algoritmo.  Al contrario, un'operazione che richiede un punto che aumenta sempre meno quando il numero di aumenta di elementi viene descritto come O \(algoritmo di log n\).  Pertanto, in termini di prestazioni, O \(algoritmi del log n\) supera la O \(n\) algoritmi sempre maggiore del numero di elementi.  
  
### Funzionalità di libreria di forme  
  
|Forma|Ordinato?|Indicizzato?|Inserire<br /><br /> element|Cercare<br /><br /> elemento specificato|Duplicato<br /><br /> elementi?|  
|-----------|---------------|------------------|--------------------------|--------------------------------------|-----------------------------|  
|Elenco|Sì|No|Veloce \(tempo costante\)|Lenta o \(n\)|Sì|  
|Matrice|Sì|Da int \(tempo costante\)|Rallenti la O \(n\) tranne se inserimento alla fine, nel qual caso il tempo costante|Lenta o \(n\)|Sì|  
|Mappa|No|La chiave \(tempo costante\)|Veloce \(tempo costante\)|Veloce \(tempo costante\)|Nessun \(tasti\) sì \(valori\)|  
|Mapping Rosso\-Nero|Sì \(la chiave\)|La chiave O \(log n\)|O veloce \(log n\)|O veloce \(log n\)|No|  
|Multimap Rosso\-Nero|Sì \(la chiave\)|La chiave O \(log n\) \(più valori per chiave\)|O veloce \(log n\)|O veloce \(log n\)|Sì \(più valori per chiave\)|  
  
## Utilizzo di oggetti di CTraits  
 Mentre le classi di raccolte ATL possono essere utilizzate per archiviare una vasta gamma di tipi di dati definiti dall'utente, può essere utile poter eseguire l'override delle funzioni principali come confrontare.  Questo risultato si ottiene utilizzando le classi di CTraits.  
  
 Le classi di CTraits sono simili a, ma più flessibili di, le funzioni di supporto di classi collection MFC; vedere [Supporti delle classi di raccolte](../mfc/reference/collection-class-helpers.md) per ulteriori informazioni.  
  
 Nel creare la classe di raccolte, è possibile specificare una classe di CTraits.  Questa classe contiene codice che esegue le operazioni come confrontare una volta chiamato con gli altri metodi che costituiscono la classe di raccolte.  Ad esempio, se l'oggetto elenco contiene le proprie strutture definite dall'utente, è possibile ridefinire il test di uguaglianza per confrontare solo le variabili membro sicuri.  In questo modo, il metodo di ricerca dell'oggetto elenco verrà eseguito in modo molto utile.  
  
## Esempio  
  
### Codice  
 [!code-cpp[NVC_ATL_Utilities#112](../atl/codesnippet/CPP/atl-collection-classes_1.cpp)]  
  
## Commenti  
 Per un elenco delle classi di CTraits, vedere [classi di raccolte](../atl/collection-classes.md).  
  
 Nel diagramma seguente viene illustrata la gerarchia di classi per le classi di CTraits.  
  
 ![Gerarchia dei tratti per le classi di raccolte](../atl/media/vctraitscollectionclasseshierarchy.png "vcTraitsCollectionClassesHierarchy")  
  
## Esempi di classi collection  
 I seguenti esempi vengono illustrate le classi di raccolte:  
  
-   [Esempio MMXSwarm](../top/visual-cpp-samples.md)  
  
-   [Esempio di DynamicConsumer](../top/visual-cpp-samples.md)  
  
-   [L'esempio UpdatePV](../top/visual-cpp-samples.md)  
  
-   [Esempio di marquee](../top/visual-cpp-samples.md)  
  
## Vedere anche  
 [Concetti](../atl/active-template-library-atl-concepts.md)   
 [Classi di raccolte](../atl/collection-classes.md)
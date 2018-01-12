---
title: Classi Collection ATL | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- DestructElements function
- collection classes, choosing
- ConstructElements function
- SerializeElements function
- traits classes
- collection classes, about collection classes
- CTraits classes
- collection classes
ms.assetid: 4d619d46-5b4e-41dd-b9fd-e86b1fbc00b5
caps.latest.revision: "14"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 24b0fbdc5ab68319704fb59746862384198f232b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="atl-collection-classes"></a>Classi Collection ATL
ATL fornisce molte classi per l'archiviazione e l'accesso ai dati. La classe a cui si decide di utilizzare dipende da diversi fattori, tra cui:  
  
-   La quantità di dati da archiviare  
  
-   Efficienza e prestazioni nell'accesso ai dati  
  
-   La possibilità di accedere ai dati in base all'indice o chiave  
  
-   Ordinamento dei dati  
  
-   Preferenze personali  
  
## <a name="small-collection-classes"></a>Classi Collection di piccole dimensioni  
 ATL fornisce le seguenti classi di matrice per la gestione di un numero limitato di oggetti. Tuttavia, queste classi sono limitate e progettato per essere utilizzato internamente da ATL. È consigliabile non utilizzarle nei programmi.  
  
|Classe|Tipo di archiviazione di dati|  
|-----------|--------------------------|  
|[CSimpleArray](../atl/reference/csimplearray-class.md)|Implementa una classe di matrice per la gestione di un numero limitato di oggetti.|  
|[CSimpleMap](../atl/reference/csimplemap-class.md)|Implementa una classe di mapping per la gestione di un numero limitato di oggetti.|  
  
## <a name="general-purpose-collection-classes"></a>Classi di raccolte generiche  
 Le classi seguenti implementano matrici, elenchi e mappe e vengono fornite come classi di raccolta generici:  
  
|Classe|Tipo di archiviazione di dati|  
|-----------|--------------------------|  
|[CAtlArray](../atl/reference/catlarray-class.md)|Implementa una matrice.|  
|[CAtlList](../atl/reference/catllist-class.md)|Implementa un elenco.|  
|[CAtlMap](../atl/reference/catlmap-class.md)|Implementa una struttura di mapping, in base al quale possono essere fa riferimento a dati chiave o un valore.|  
|[CRBMap](../atl/reference/crbmap-class.md)|Implementa una struttura di mapping utilizzando l'algoritmo rosso a nero.|  
|[CRBMultiMap](../atl/reference/crbmultimap-class.md)|Implementa una struttura di mapping multipla basata su rosso a nero.|  
  
 Queste classi intercetterà molti errori di programmazione utilizzato nelle build di debug, ma ai fini del, prestazioni, questi controlli non verranno eseguiti nella build in versione finale.  
  
## <a name="specialized-collection-classes"></a>Classi di raccolte specializzate  
 Altre classi collection sono inoltre disponibili per la gestione di puntatori alla memoria e i puntatori di interfaccia:  
  
|Classe|Scopo|  
|-----------|-------------|  
|[CAutoPtrArray](../atl/reference/cautoptrarray-class.md)|Fornisce metodi utili quando si crea una matrice di puntatori intelligenti.|  
|[CAutoPtrList](../atl/reference/cautoptrlist-class.md)|Fornisce metodi utili durante la costruzione di un elenco di puntatori intelligenti.|  
|[CComUnkArray](../atl/reference/ccomunkarray-class.md)|Archivi `IUnknown` puntatori ed è progettato per essere utilizzato come parametro per il [IConnectionPointImpl](../atl/reference/iconnectionpointimpl-class.md) classe modello.|  
|[CHeapPtrList](../atl/reference/cheapptrlist-class.md)|Fornisce metodi utili durante la costruzione di un elenco dei puntatori di heap.|  
|[CInterfaceArray](../atl/reference/cinterfacearray-class.md)|Fornisce metodi utili quando si crea una matrice di puntatori a interfaccia COM.|  
|[CInterfaceList](../atl/reference/cinterfacelist-class.md)|Fornisce metodi utili durante la costruzione di un elenco di puntatori a interfaccia COM.|  
  
## <a name="choosing-a-collection-class"></a>Scelta di una classe di raccolta  
 Ognuna delle classi di raccolta disponibili offre caratteristiche di prestazioni diverse, come illustrato nella tabella seguente.  
  
-   Le colonne 2 e 3 descrivono ogni classe di ordinamento e accedere alle caratteristiche. Nella tabella il termine "ordine" significa che l'ordine di inserimento ed eliminazione degli elementi determina il relativo ordine nella raccolta. Non significa che gli elementi sono ordinati in base al rispettivo contenuto. Il termine "indicizzazione" significa che è possibile recuperare gli elementi nella raccolta da un indice Integer, analogamente agli elementi in una matrice standard.  
  
-   Le colonne 4 e 5 descrivono le prestazioni di ciascuna classe. In applicazioni che richiedono molte operazioni di inserimento nella raccolta, la velocità di inserimento potrebbe essere particolarmente importante. In altre applicazioni potrebbe essere più importante la velocità di ricerca.  
  
-   La colonna 6 indica se ogni forma consente elementi duplicati.  
  
-   Le prestazioni di un'operazione di classe di raccolta specificato sono espressi in termini la relazione tra il tempo necessario per completare l'operazione e il numero di elementi nella raccolta. Un'operazione che richiede una quantità di tempo che aumenta in modo lineare del numero di elementi viene descritto come un algoritmo o (n). Al contrario, un'operazione che richiede un periodo di tempo che aumenta meno il numero di elementi viene descritto come un algoritmo O (log n). Pertanto, in termini di prestazioni, gli algoritmi O (log n) che agli algoritmi più come il numero di elementi.  
  
### <a name="collection-shape-features"></a>Funzionalità delle forme di raccolta  
  
|Forma|Ordered|Indicizzazione|Inserire un<br /><br /> elemento|Ricerca<br /><br /> elemento specificato|Duplica<br /><br /> elementi|  
|-----------|--------------|--------------|---------------------------|--------------------------------------|-----------------------------|  
|List|Yes|No|Fast (tempo costante)|Rallentamento o (n)|Yes|  
|Matrice|Yes|Da int (tempo costante)|Rallentamento o (n), ad eccezione dell'inserimento alla fine, in cui il tempo costante di case|Rallentamento o (n)|Yes|  
|Mappa|No|Chiave (tempo costante)|Fast (tempo costante)|Fast (tempo costante)|No (chiavi) Sì (valori)|  
|Mappa rosso a nero|Sì (per chiave)|Chiave O (log n)|Veloce O (log n)|Veloce O (log n)|No|  
|Multimap rosso a nero|Sì (per chiave)|Chiave O(log n) (più valori per ogni chiave)|Veloce O (log n)|Veloce O (log n)|Sì (più valori per ogni chiave)|  
  
## <a name="using-ctraits-objects"></a>Utilizzo di oggetti CTraits  
 Le classi collection ATL possono essere utilizzati per archiviare una vasta gamma di tipi di dati definito dall'utente, può essere utile essere in grado di eseguire l'override di funzioni importanti, ad esempio i confronti. A questo scopo utilizzare le classi CTraits.  
  
 CTraits (classi) sono simili, ma più flessibile, le funzioni di supporto MFC insieme classe; vedere [classi Collection](../mfc/reference/collection-class-helpers.md) per ulteriori informazioni.  
  
 Quando si crea la classe di raccolta, è possibile specificare una classe CTraits. Questa classe conterrà il codice che eseguirà le operazioni, ad esempio i confronti quando viene chiamato da altri metodi che costituiscono la classe di raccolta. Ad esempio, se l'oggetto elenco contiene strutture personalizzate definite dall'utente, si potrebbe desidera ridefinire il test di uguaglianza per confrontare solo determinate variabili membro. In questo modo, il metodo di ricerca dell'oggetto elenco funzionerà in modo più efficiente.  
  
## <a name="example"></a>Esempio  
  
### <a name="code"></a>Codice  
 [!code-cpp[NVC_ATL_Utilities#112](../atl/codesnippet/cpp/atl-collection-classes_1.cpp)]  
  
## <a name="comments"></a>Commenti  
 Per un elenco delle classi CTraits, vedere [classi Collection](../atl/collection-classes.md).  
  
 Il diagramma seguente mostra la gerarchia di classi per le classi CTraits.  
  
 ![Gerarchia dei tratti per le classi collection](../atl/media/vctraitscollectionclasseshierarchy.gif "vctraitscollectionclasseshierarchy")  
  
## <a name="collection-classes-samples"></a>Esempi di classi Collection  
 Negli esempi seguenti illustrano le classi di raccolta:  
  
-   [Esempio MMXSwarm](../visual-cpp-samples.md)  
  
-   [Esempio DynamicConsumer](../visual-cpp-samples.md)  
  
-   [Esempio UpdatePV](../visual-cpp-samples.md)  
  
-   [Esempio di testo scorrevole](../visual-cpp-samples.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../atl/active-template-library-atl-concepts.md)   
 [Classi di raccolta](../atl/collection-classes.md)


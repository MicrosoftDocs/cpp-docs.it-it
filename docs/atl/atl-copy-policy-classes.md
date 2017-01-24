---
title: "ATL Copy Policy Classes | Microsoft Docs"
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
  - "_Copy class"
  - "_CopyInterface class"
  - "classi [C++], copy policy"
  - "copy policy classes [C++]"
  - "dati [C++], ATL"
ms.assetid: 06704b68-d318-4c5d-a65b-71457fe9d00d
caps.latest.revision: 13
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ATL Copy Policy Classes
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le classi criteri di copia sono [classi di utilità](../atl/utility-classes.md) utilizzato per inizializzare, copia ed eliminazione dei dati.  Le classi criteri di copia consentono di definire la semantica di copia per qualsiasi tipo di dati e definire le conversioni tra tipi di dati diversi.  
  
 ATL utilizza le classi criteri di copia nelle implementazioni dei seguenti modelli:  
  
-   [CComEnumImpl](../atl/reference/ccomenumimpl-class.md)  
  
-   [IEnumOnSTLImpl](../atl/reference/ienumonstlimpl-class.md)  
  
-   [ICollectionOnSTLImpl](../atl/reference/icollectiononstlimpl-class.md)  
  
 Incapsulamento delle informazioni necessarie per copiare o convertire i dati in una classe criteri di copia che può essere passata come argomento di modello, gli sviluppatori ATL forniti all'estremità riutilizzo delle classi.  Ad esempio, se è necessario implementare una raccolta utilizzando qualsiasi tipo di dati arbitrario, è sufficiente fornire ai criteri di copia appropriati; è necessario non alterare mai il codice per implementare la raccolta.  
  
## Definizione  
 Per definizione, la classe che fornisce le seguenti funzioni statiche è una classe di criteri di copia:  
  
 `static void init(` `DestinationType` `* p);`  
  
 `static HRESULT copy(` `DestinationType` `* pTo, const`  `SourceType` `* pFrom);`  
  
 `static void destroy(` `DestinationType` `* p);`  
  
 È possibile sostituire i tipi `DestinationType` e *SourceType* con tipi di dati arbitrari per ogni criteri di copia.  
  
> [!NOTE]
>  Sebbene sia possibile definire classi criteri di copia per qualsiasi tipo di dati arbitrari, l'utilizzo delle classi nel codice ATL deve limitare i tipi che hanno significato.  Ad esempio quando si utilizza la classe criteri di copia con le implementazioni della raccolta o enumeratore ATL, `DestinationType` deve essere un tipo che può essere utilizzato come parametro in un metodo di un'interfaccia COM.  
  
 Utilizzare **init** per inizializzare i dati, **copy** per copiare i dati e **destroy** per liberare i dati.  Il significato esatto di inizializzazione, copiare e la distruzione del dominio della classe criteri di copia e variano a seconda dei tipi di dati utilizzati.  
  
 Esistono due requisiti sull'utilizzo e sull'implementazione di una classe di criteri di copia:  
  
-   Il primo parametro a **copy** deve ricevere solo un puntatore ai dati precedentemente inizializzato utilizzando **init**.  
  
-   **destroy** deve ricevere solo mai un puntatore ai dati precedentemente inizializzato utilizzando **init** o copiato tramite **copy**.  
  
## Implementazioni standard  
 ATL fornisce due classi criteri di copia sotto forma di classi modello **\_CopyInterface** e **\_Copy** :  
  
-   La classe **\_Copy** consente di copiare solo omogenea \(non conversione tra tipi di dati\) poiché offre un solo parametro di modello per specificare sia `DestinationType` che *SourceType*.  L'implementazione generica di questo modello non contiene inizializzazione o codice di distruzione e utilizza `memcpy` per copiare i dati.  ATL fornisce inoltre le specializzazioni **\_Copy** per **VARIANT**, `LPOLESTR`, **CONNECTDATA** e **OLEVERB**.  
  
-   La classe **\_CopyInterface** fornisce un'implementazione per i puntatori a interfaccia di copia che seguono le regole COM standard.  Nuovamente questa classe consente solo la copia omogenea, pertanto utilizza una semplice assegnazione e una chiamata a `AddRef` per eseguire la copia.  
  
## Implementazioni personalizzate  
 In genere, è necessario definire classi criteri di copia per copiare eterogenea ovvero conversione tra tipi di dati\).  Per alcuni esempi di classi criteri di copia personalizzate, l'aspetto dei file VCUE\_Copy.h e VCUE\_CopyString.h nell'esempio [ATLCollections](../top/visual-cpp-samples.md).  Questi file sono contenute due classi criteri di copia del modello, `GenericCopy` e `MapCopy`, nonché una serie di specializzazioni `GenericCopy` per i tipi di dati diversi.  
  
### GenericCopy  
 `GenericCopy` consente di specificare *il SourceType* e `DestinationType` come argomenti.  Di seguito viene riportata la forma più generale della classe `GenericCopy` in VCUE\_Copy.h:  
  
 [!code-cpp[NVC_ATL_COM#30](../atl/codesnippet/CPP/atl-copy-policy-classes_1.h)]  
  
 VCUE\_Copy.h contiene anche le specializzazioni di questa classe: `GenericCopy<BSTR>`, `GenericCopy<VARIANT, BSTR>`, `GenericCopy<BSTR, VARIANT>`.  VCUE\_CopyString.h contiene le specializzazioni per la copia da **std::string**oggetti: `GenericCopy<std::string>`, `GenericCopy<VARIANT, std::string>`e `GenericCopy<BSTR, std::string>`.  È possibile migliorare `GenericCopy` fornendo ulteriori specializzazioni personalizzati.  
  
### MapCopy  
 `MapCopy` presuppone che i dati che vengono copiati siano archiviati in un mapping stile STL, che consentono di specificare il tipo di mapping in cui vengono archiviati i dati e il tipo di destinazione.  L'implementazione della classe utilizza solo i typedef forniti dalla classe *di MapType* per determinare il tipo di dati di origine e chiamare la classe appropriata `GenericCopy`.  Nessuna di specializzazione di questa classe è necessario.  
  
 [!code-cpp[NVC_ATL_COM#31](../atl/codesnippet/CPP/atl-copy-policy-classes_2.h)]  
  
## Vedere anche  
 [Implementing an STL\-Based Collection](../atl/implementing-an-stl-based-collection.md)   
 [Esempio ATLCollections](../top/visual-cpp-samples.md)
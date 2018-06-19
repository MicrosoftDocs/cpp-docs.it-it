---
title: Classi di criteri di copia ATL | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- data [C++], ATL
- classes [C++], copy policy
- copy policy classes [C++]
- _Copy class
- _CopyInterface class
ms.assetid: 06704b68-d318-4c5d-a65b-71457fe9d00d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 34b9ed5dca45633a5ab980d38b8a7cda151f5dc7
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32358527"
---
# <a name="atl-copy-policy-classes"></a>Classi di criteri di copia ATL
Classi di criteri di copia sono [classi di utilità](../atl/utility-classes.md) utilizzato per inizializzare, copiare ed eliminare dati. Classi di criteri di copia consentono di definire semantica di copia per qualsiasi tipo di dati e per definire le conversioni tra tipi di dati diversi.  
  
 Usa classi copia ATL criteri nelle implementazioni dei modelli seguenti:  
  
-   [CComEnumImpl](../atl/reference/ccomenumimpl-class.md)  
  
-   [IEnumOnSTLImpl](../atl/reference/ienumonstlimpl-class.md)  
  
-   [ICollectionOnSTLImpl](../atl/reference/icollectiononstlimpl-class.md)  
  
 Quanto incapsula le informazioni necessarie per copiare o convertire i dati in una classe di criteri di copia che può essere passato come argomento di modello, gli sviluppatori di ATL sono forniti i riusabilità estremi di queste classi. Ad esempio, se è necessario implementare una raccolta di qualsiasi tipo di dati arbitrari, è necessario fornire è i criteri di copia appropriata. non hai mai tocco il codice che implementa la raccolta.  
  
## <a name="definition"></a>Definizione  
 Per definizione, una classe che fornisce le seguenti funzioni statiche è una classe di criteri di copia:  
  
 `static void init(` `DestinationType` `* p);`  
  
 `static HRESULT copy(` `DestinationType` `* pTo, const`  `SourceType` `* pFrom);`  
  
 `static void destroy(` `DestinationType` `* p);`  
  
 È possibile sostituire i tipi di `DestinationType` e *SourceType* con tipi di dati arbitrari per tutti i criteri di copia.  
  
> [!NOTE]
>  Sebbene sia possibile definire classi di criteri di copia per i tipi di dati arbitrari, uso delle classi nel codice ATL consigliabile limitare i tipi appropriati. Ad esempio, quando tramite un criterio di copia di classe con l'insieme ATL o implementazioni di enumeratore `DestinationType` deve essere un tipo che può essere utilizzato come parametro in un metodo di interfaccia COM.  
  
 Utilizzare **init** per inizializzare i dati, **copia** per copiare i dati, e **destroy** per liberare i dati. Il significato esatto di inizializzazione, la copia e la distruzione sono il dominio della classe di criteri di copia e varia a seconda dei tipi di dati coinvolti.  
  
 Esistono due requisiti per l'uso e l'implementazione di una classe di criteri di copia:  
  
-   Il primo parametro **copia** deve ricevere solo un puntatore ai dati che sono inizializzati in precedenza utilizzando **init**.  
  
-   **Eliminare definitivamente** deve ricevere solo un puntatore ai dati che in precedenza sono inizializzate utilizzando **init** o copiati tramite **copia**.  
  
## <a name="standard-implementations"></a>Implementazioni standard  
 ATL fornisce due classi di criteri di copia nel formato di **Copy** e **CopyInterface** classi modello:  
  
-   Il **Copy** classe consente solo la copia omogenea (non la conversione tra tipi di dati) in quanto offre solo un parametro singolo modello per specificare entrambi `DestinationType` e *SourceType*. L'implementazione generica di questo modello non contiene alcun codice di inizializzazione o la distruzione e Usa `memcpy` per copiare i dati. ATL fornisce anche le specializzazioni di **Copy** per **VARIANT**, `LPOLESTR`, **OLEVERB**, e **CONNECTDATA** tipi di dati.  
  
-   Il **CopyInterface** classe fornisce un'implementazione per la copia di puntatori a interfaccia regole COM standard. Ancora una volta questa classe consente solo la copia omogenea e pertanto Usa assegnazione semplice e una chiamata a `AddRef` per eseguire la copia.  
  
## <a name="custom-implementations"></a>Implementazioni personalizzate  
 In genere, è necessario definire le classi di criteri di copia per la copia eterogenea (conversione tra tipi di dati). Per alcuni esempi di classi di criteri di copia personalizzata, esaminare i file VCUE_Copy. h e VCUE_CopyString. h nel [ATLCollections](../visual-cpp-samples.md) esempio. Questi file contengono le classi dei criteri di copia, due modello `GenericCopy` e `MapCopy`, oltre a una serie di specializzazioni di `GenericCopy` per diversi tipi di dati.  
  
### <a name="genericcopy"></a>GenericCopy  
 `GenericCopy` Consente di specificare il *SourceType* e `DestinationType` come argomenti di modello. Ecco la forma più generale del `GenericCopy` classe da VCUE_Copy:  
  
 [!code-cpp[NVC_ATL_COM#30](../atl/codesnippet/cpp/atl-copy-policy-classes_1.h)]  
  
 VCUE_Copy contiene anche le seguenti specializzazioni di questa classe: `GenericCopy<BSTR>`, `GenericCopy<VARIANT, BSTR>`, `GenericCopy<BSTR, VARIANT>`. VCUE_CopyString. h contiene specializzazioni per la copia da **std:: String**s: `GenericCopy<std::string>`, `GenericCopy<VARIANT, std::string>`, e `GenericCopy<BSTR, std::string>`. È possibile migliorare `GenericCopy` fornendo ulteriori specializzazioni personalizzate.  
  
### <a name="mapcopy"></a>MapCopy  
 `MapCopy` si presuppone che i dati copiati vengono archiviati in una mappa di tipo libreria Standard C++, pertanto consente di specificare il tipo di mappa in cui sono archiviati i dati e il tipo di destinazione. L'implementazione della classe vengono utilizzati solo i typedef forniti dal *MapType (TipoMappa)* classe per determinare il tipo di dati di origine e di chiamare appropriata `GenericCopy` classe. Non sono necessari specializzazioni di questa classe.  
  
 [!code-cpp[NVC_ATL_COM#31](../atl/codesnippet/cpp/atl-copy-policy-classes_2.h)]  
  
## <a name="see-also"></a>Vedere anche  
 [Implementazione di una raccolta basata sulla libreria Standard C++](../atl/implementing-an-stl-based-collection.md)   
 [Nell'esempio ATLCollections](../visual-cpp-samples.md)


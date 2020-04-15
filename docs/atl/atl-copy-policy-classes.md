---
title: Classi criteri di copia ATL
ms.date: 11/04/2016
helpviewer_keywords:
- data [C++], ATL
- classes [C++], copy policy
- copy policy classes [C++]
- _Copy class
- _CopyInterface class
ms.assetid: 06704b68-d318-4c5d-a65b-71457fe9d00d
ms.openlocfilehash: f40f31124d4547076249a7459ac4b63cc25305d1
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81317386"
---
# <a name="atl-copy-policy-classes"></a>Classi criteri di copia ATL

Le classi criteri di copia sono classi di [utilità](../atl/utility-classes.md) utilizzate per inizializzare, copiare ed eliminare dati. Le classi di criteri di copia consentono di definire la semantica di copia per qualsiasi tipo di dati e di definire le conversioni tra tipi di dati diversi.

ATL utilizza le classi criteri di copia nelle implementazioni dei modelli seguenti:

- [CComEnumImpl](../atl/reference/ccomenumimpl-class.md)

- [IEnumOnSTLImpl](../atl/reference/ienumonstlimpl-class.md)

- [ICollectionOnSTLImpl](../atl/reference/icollectiononstlimpl-class.md)

Incapsulando le informazioni necessarie per copiare o convertire i dati in una classe di criteri di copia che può essere passata come argomento di modello, gli sviluppatori ATL hanno fornito per estrema riutilizzabilità di queste classi. Ad esempio, se è necessario implementare una raccolta utilizzando qualsiasi tipo di dati arbitrario, è sufficiente fornire il criterio di copia appropriato. non è mai necessario toccare il codice che implementa la raccolta.

## <a name="definition"></a>Definizione

Per definizione, una classe che fornisce le seguenti funzioni statiche è una classe criteri di copia:By definition, a class that provides the following static functions is a copy policy class:

`static void init(` `DestinationType` `* p);`

`static HRESULT copy(` `DestinationType` `* pTo, const`  `SourceType` `* pFrom);`

`static void destroy(` `DestinationType` `* p);`

È possibile sostituire `DestinationType` i tipi e *SourceType* con tipi di dati arbitrari per ogni criterio di copia.

> [!NOTE]
> Sebbene sia possibile definire classi di criteri di copia per qualsiasi tipo di dati arbitrario, l'utilizzo delle classi nel codice ATL deve limitare i tipi che hanno senso. Ad esempio, quando si utilizza una classe criteri di copia `DestinationType` con le implementazioni dell'enumeratore o dell'insieme di ATL, deve essere un tipo che può essere utilizzato come parametro in un metodo di interfaccia COM.

Usare **init** per inizializzare i dati, **copiare** per copiare i dati ed **eliminare** per liberare i dati. Il significato preciso di inizializzazione, copia e distruzione è il dominio della classe criteri di copia e varia a seconda dei tipi di dati coinvolti.

Esistono due requisiti per l'utilizzo e l'implementazione di una classe criteri di copia:There are two requirements on use and implementation of a copy policy class:

- Il primo parametro da **copiare** deve ricevere solo un puntatore ai dati inizializzati in precedenza **utilizzando init**.

- **destroy** deve ricevere solo un puntatore ai dati inizializzati in precedenza tramite **init** o copiati tramite **copy**.

## <a name="standard-implementations"></a>Implementazioni standard

ATL fornisce due classi criteri di `_Copy` `_CopyInterface` copia sotto forma di classi modello e :

- La `_Copy` classe consente solo la copia omogenea (non la conversione tra tipi `DestinationType` di dati) poiché offre un solo parametro di modello per specificare sia *SourceType che SourceType*. L'implementazione generica di questo modello `memcpy` non contiene codice di inizializzazione o distruzione e utilizza per copiare i dati. ATL fornisce inoltre specializzazioni per `_Copy` i tipi di dati VARIANT, LPOLESTR, OLEVERB e CONNECTDATA.

- La `_CopyInterface` classe fornisce un'implementazione per la copia dei puntatori a interfaccia in base alle regole COM standard. Ancora una volta questa classe consente solo la copia omogenea, `AddRef` quindi utilizza un'assegnazione semplice e una chiamata per eseguire la copia.

## <a name="custom-implementations"></a>Implementazioni personalizzate

In genere, è necessario definire classi di criteri di copia personalizzate per la copia eterogenea, ovvero la conversione tra tipi di dati. Per alcuni esempi di classi criteri di copia personalizzate, esaminare i file VCUE_Copy.h e VCUE_CopyString.h nell'esempio [ATLCollections.](../overview/visual-cpp-samples.md) Questi file contengono due `GenericCopy` classi `MapCopy`criteri di copia dei `GenericCopy` modelli e , oltre a una serie di specializzazioni per tipi di dati diversi.

### <a name="genericcopy"></a>CopiaGenericCopy (informazioni in base alla

`GenericCopy`consente di specificare il `DestinationType` *SourceType* e come argomenti di modello. Ecco la forma più generale `GenericCopy` della classe da VCUE_Copy.h:

[!code-cpp[NVC_ATL_COM#30](../atl/codesnippet/cpp/atl-copy-policy-classes_1.h)]

VCUE_Copy.h contiene inoltre le seguenti specializzazioni `GenericCopy<BSTR>` `GenericCopy<VARIANT, BSTR>`di `GenericCopy<BSTR, VARIANT>`questa classe: , , . VCUE_CopyString.h contiene specializzazioni per la copia da `GenericCopy<std::string>` **std::string**s: , `GenericCopy<VARIANT, std::string>`e `GenericCopy<BSTR, std::string>`. Si potrebbe `GenericCopy` migliorare fornendo ulteriori specializzazioni di tuo.

### <a name="mapcopy"></a>Copia mappa

`MapCopy`Presuppone che i dati da copiare siano memorizzati in una mappa di tipo Libreria Standard di C, in modo da consentire di specificare il tipo di mappa in cui sono archiviati i dati e il tipo di destinazione. L'implementazione della classe utilizza solo i typedef forniti dalla classe *MapType* per determinare `GenericCopy` il tipo dei dati di origine e chiamare la classe appropriata. Non sono necessarie specializzazioni di questa classe.

[!code-cpp[NVC_ATL_COM#31](../atl/codesnippet/cpp/atl-copy-policy-classes_2.h)]

## <a name="see-also"></a>Vedere anche

[Implementazione di una raccolta standard basata su libreria C](../atl/implementing-an-stl-based-collection.md)<br/>
[Esempio ATLCollections](../overview/visual-cpp-samples.md)

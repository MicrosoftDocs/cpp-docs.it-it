---
title: Classi di criteri di copia ATL
ms.date: 11/04/2016
helpviewer_keywords:
- data [C++], ATL
- classes [C++], copy policy
- copy policy classes [C++]
- _Copy class
- _CopyInterface class
ms.assetid: 06704b68-d318-4c5d-a65b-71457fe9d00d
ms.openlocfilehash: 24d81506f1518f980576899a4a104bbfdc0a1438
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57296345"
---
# <a name="atl-copy-policy-classes"></a>Classi di criteri di copia ATL

Classi di criteri di copia vengono [classi di utilità](../atl/utility-classes.md) utilizzato per inizializzare, copiare ed eliminare dati. Copia criteri classi consentono di definire la semantica di copia per qualsiasi tipo di dati e definire le conversioni tra tipi di dati diversi.

Usa classi copia ATL criteri nelle implementazioni dei modelli seguenti:

- [CComEnumImpl](../atl/reference/ccomenumimpl-class.md)

- [IEnumOnSTLImpl](../atl/reference/ienumonstlimpl-class.md)

- [ICollectionOnSTLImpl](../atl/reference/icollectiononstlimpl-class.md)

Incapsulando le informazioni necessarie per copiare o convertire i dati in una classe di criteri di copia che può essere passato come argomento di modello, gli sviluppatori ATL hanno fornito per la riusabilità estremi di queste classi. Ad esempio, se è necessario implementare una raccolta di tipi di dati arbitrari, tutto è necessario specificare sia i criteri di copia appropriata. non hai mai riguardano il codice che implementa la raccolta.

## <a name="definition"></a>Definizione

Per definizione, una classe che fornisce le seguenti funzioni statiche è una classe di criteri di copia:

`static void init(` `DestinationType` `* p);`

`static HRESULT copy(` `DestinationType` `* pTo, const`  `SourceType` `* pFrom);`

`static void destroy(` `DestinationType` `* p);`

È possibile sostituire i tipi `DestinationType` e *SourceType* con tipi di dati arbitrari per tutti i criteri di copia.

> [!NOTE]
>  Sebbene sia possibile definire classi di criteri di copia per qualsiasi tipo di dati arbitrari, uso delle classi nel codice ATL consigliabile limitare i tipi appropriati. Ad esempio, quando tramite un criterio di copia la classe con insieme ATL o implementazioni di enumeratore `DestinationType` deve essere un tipo che può essere utilizzato come parametro in un metodo di interfaccia COM.

Uso **init** inizializzare i dati, **copia** per copiare i dati, e **destroy** per liberare i dati. Il significato esatto di inizializzazione, la copia e la distruzione sono il dominio della classe di criteri di copia e variano a seconda dei tipi di dati coinvolti.

Esistono due requisiti sull'utilizzo e implementazione di una classe di criteri di copia:

- Il primo parametro per **copia** deve ricevere solo un puntatore ai dati che sono inizializzate in precedenza usando **init**.

- **Eliminare definitivamente** deve sempre ricevere un puntatore ai dati che sono inizializzate in precedenza tramite **init** o copiati tramite **copia**.

## <a name="standard-implementations"></a>Implementazioni standard

ATL fornisce due classi di criteri di copia in forma del `_Copy` e `_CopyInterface` classi modello:

- Il `_Copy` classe consente la copia solo omogenea (non la conversione tra tipi di dati) in quanto offre solo un singolo parametro del modello per specificare entrambe `DestinationType` e *SourceType*. L'implementazione generica di questo modello non contiene codice di inizializzazione o la distruzione e Usa `memcpy` per copiare i dati. ATL fornisce anche le specializzazioni di `_Copy` per tipi di dati VARIANT, LPOLESTR, OLEVERB e CONNECTDATA.

- Il `_CopyInterface` classe fornisce un'implementazione per la copia di puntatori a interfaccia regole COM standard. Ancora una volta questa classe consente solo la copia omogenea e quindi Usa assegnazione semplice e una chiamata a `AddRef` per eseguire la copia.

## <a name="custom-implementations"></a>Implementazioni personalizzate

In genere, è necessario definire le proprie classi di criteri di copia per copiare eterogenei (vale a dire, la conversione tra tipi di dati). Per alcuni esempi di classi di criteri di copia personalizzato, esaminare i file VCUE_Copy e VCUE_CopyString. h nel [ATLCollections](../visual-cpp-samples.md) esempio. Questi file contengono le classi dei criteri di copia, due modelli `GenericCopy` e `MapCopy`, oltre a una serie di specializzazioni di `GenericCopy` per diversi tipi di dati.

### <a name="genericcopy"></a>GenericCopy

`GenericCopy` Consente di specificare il *SourceType* e `DestinationType` come argomenti di modello. Ecco la forma più generale del `GenericCopy` classe da VCUE_Copy:

[!code-cpp[NVC_ATL_COM#30](../atl/codesnippet/cpp/atl-copy-policy-classes_1.h)]

VCUE_Copy contiene anche le specializzazioni di questa classe seguente: `GenericCopy<BSTR>`, `GenericCopy<VARIANT, BSTR>`, `GenericCopy<BSTR, VARIANT>`. VCUE_CopyString. h contiene le specializzazioni per la copia da **std:: String**s `GenericCopy<std::string>`, `GenericCopy<VARIANT, std::string>`, e `GenericCopy<BSTR, std::string>`. È possibile migliorare `GenericCopy` fornendo ulteriori specializzazioni di personalizzati.

### <a name="mapcopy"></a>MapCopy

`MapCopy` si presuppone che i dati da copiare sono archiviati in una mappa di tipo libreria Standard C++, in modo che consente di specificare il tipo di mappa in cui sono archiviati i dati e il tipo di destinazione. L'implementazione della classe Usa solo il typedef fornito dal *MapType* (classe) per determinare il tipo di dati di origine e di chiamare appropriato `GenericCopy` classe. Nessun specializzazioni di questa classe sono necessari.

[!code-cpp[NVC_ATL_COM#31](../atl/codesnippet/cpp/atl-copy-policy-classes_2.h)]

## <a name="see-also"></a>Vedere anche

[Implementazione di una raccolta basata su libreria standard C++](../atl/implementing-an-stl-based-collection.md)<br/>
[Nell'esempio ATLCollections](../visual-cpp-samples.md)

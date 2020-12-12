---
description: 'Altre informazioni su: classi di criteri di copia ATL'
title: Classi di criteri di copia ATL
ms.date: 11/04/2016
helpviewer_keywords:
- data [C++], ATL
- classes [C++], copy policy
- copy policy classes [C++]
- _Copy class
- _CopyInterface class
ms.assetid: 06704b68-d318-4c5d-a65b-71457fe9d00d
ms.openlocfilehash: 502befadbd9317602c49d9a5815dee6ebc239d78
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97165758"
---
# <a name="atl-copy-policy-classes"></a>Classi di criteri di copia ATL

Le classi di criteri di copia sono [classi di utilità](../atl/utility-classes.md) utilizzate per inizializzare, copiare ed eliminare i dati. Le classi di criteri di copia consentono di definire la semantica di copia per qualsiasi tipo di dati e di definire le conversioni tra tipi di dati diversi.

ATL utilizza le classi di criteri di copia nelle relative implementazioni dei modelli seguenti:

- [CComEnumImpl](../atl/reference/ccomenumimpl-class.md)

- [IEnumOnSTLImpl](../atl/reference/ienumonstlimpl-class.md)

- [ICollectionOnSTLImpl](../atl/reference/icollectiononstlimpl-class.md)

Incapsulando le informazioni necessarie per copiare o convertire i dati in una classe di criteri di copia che può essere passata come argomento di modello, gli sviluppatori ATL hanno fornito una riutilizzabilità eccessiva di queste classi. Se, ad esempio, è necessario implementare una raccolta usando qualsiasi tipo di dati arbitrario, è sufficiente fornire i criteri di copia appropriati. non è mai necessario toccare il codice che implementa la raccolta.

## <a name="definition"></a>Definizione

Per definizione, una classe che fornisce le funzioni statiche seguenti è una classe di criteri di copia:

`static void init(` `DestinationType` `* p);`

`static HRESULT copy(` `DestinationType` `* pTo, const`  `SourceType` `* pFrom);`

`static void destroy(` `DestinationType` `* p);`

È possibile sostituire i tipi `DestinationType` e *sourceType* con tipi di dati arbitrari per ogni criterio di copia.

> [!NOTE]
> Sebbene sia possibile definire classi di criteri di copia per qualsiasi tipo di dati arbitrario, l'utilizzo delle classi nel codice ATL deve limitare i tipi che hanno senso. Ad esempio, quando si usa una classe di criteri di copia con le implementazioni di insiemi o enumeratori ATL, `DestinationType` deve essere un tipo che può essere usato come parametro in un metodo di interfaccia com.

Usare **init** per inizializzare i dati, **copiarli** per copiare i dati ed **eliminarli** per liberare i dati. Il significato preciso di inizializzazione, copia e distruzione è il dominio della classe di criteri di copia e varia a seconda dei tipi di dati interessati.

Esistono due requisiti per l'uso e l'implementazione di una classe di criteri di copia:

- Il primo parametro da **copiare** deve ricevere un puntatore solo ai dati inizializzati in precedenza tramite **init**.

- **Elimina** deve ricevere un puntatore solo ai dati inizializzati in precedenza tramite **init** o copiati tramite **copia**.

## <a name="standard-implementations"></a>Implementazioni standard

ATL fornisce due classi di criteri di copia sotto forma di `_Copy` `_CopyInterface` classi di modello e:

- La `_Copy` classe consente solo la copia omogenea (non la conversione tra tipi di dati) perché offre un solo parametro di modello per specificare sia `DestinationType` che *sourceType*. L'implementazione generica di questo modello non contiene codice di inizializzazione o di distruzione e USA `memcpy` per copiare i dati. ATL fornisce inoltre le specializzazioni di `_Copy` per i tipi di dati Variant, LPOLESTR, OLEVERB e CONNECTDATA.

- La `_CopyInterface` classe fornisce un'implementazione per la copia dei puntatori di interfaccia che seguono le regole COM standard. Ancora una volta questa classe consente solo la copia omogenea, quindi usa un'assegnazione semplice e una chiamata a `AddRef` per eseguire la copia.

## <a name="custom-implementations"></a>Implementazioni personalizzate

In genere, è necessario definire classi di criteri di copia personalizzate per la copia eterogenea, ovvero la conversione tra tipi di dati. Per alcuni esempi di classi di criteri di copia personalizzate, vedere i file VCUE_Copy. h e VCUE_CopyString. h nell'esempio [ATLCollections](../overview/visual-cpp-samples.md) . Questi file contengono due classi di criteri di copia modello, `GenericCopy` e `MapCopy` , più alcune specializzazioni di `GenericCopy` per tipi di dati diversi.

### <a name="genericcopy"></a>GenericCopy

`GenericCopy` consente di specificare i *sourceType* e `DestinationType` come argomenti di modello. Ecco il formato più generale della `GenericCopy` classe da VCUE_Copy. h:

[!code-cpp[NVC_ATL_COM#30](../atl/codesnippet/cpp/atl-copy-policy-classes_1.h)]

VCUE_Copy. h contiene inoltre le seguenti specializzazioni di questa classe: `GenericCopy<BSTR>` , `GenericCopy<VARIANT, BSTR>` , `GenericCopy<BSTR, VARIANT>` . VCUE_CopyString. h contiene specializzazioni per la copia da **std:: String** s: `GenericCopy<std::string>` , `GenericCopy<VARIANT, std::string>` e `GenericCopy<BSTR, std::string>` . È possibile migliorare offrendo `GenericCopy` altre specializzazioni.

### <a name="mapcopy"></a>MapCopy

`MapCopy` presuppone che i dati copiati siano archiviati in una mappa in stile libreria standard C++, in modo che sia possibile specificare il tipo di mappa in cui sono archiviati i dati e il tipo di destinazione. L'implementazione della classe usa semplicemente i typedef forniti dalla classe *MapType* per determinare il tipo dei dati di origine e per chiamare la `GenericCopy` classe appropriata. Non sono necessarie specializzazioni di questa classe.

[!code-cpp[NVC_ATL_COM#31](../atl/codesnippet/cpp/atl-copy-policy-classes_2.h)]

## <a name="see-also"></a>Vedi anche

[Implementazione di una raccolta di Library-Based C++ standard](../atl/implementing-an-stl-based-collection.md)<br/>
[Esempio ATLCollections](../overview/visual-cpp-samples.md)

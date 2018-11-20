---
title: Nozioni fondamentali su oggetti COM ATL
ms.date: 11/19/2018
helpviewer_keywords:
- COM, and ATL
- ATL, COM
- ATL COM objects
- COM objects, ATL
ms.assetid: 0f9c9d98-cc28-45da-89ac-dc94cee422fe
ms.openlocfilehash: 6af732b381ab0c6c507d1d651b096e3976ab2d4b
ms.sourcegitcommit: 9e891eb17b73d98f9086d9d4bfe9ca50415d9a37
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2018
ms.locfileid: "52176497"
---
# <a name="fundamentals-of-atl-com-objects"></a>Nozioni fondamentali su oggetti COM ATL

Nella figura seguente viene illustrata la relazione tra le classi e interfacce che vengono usate per definire un oggetto ATL COM.

![Struttura ATL](../atl/media/vc307y1.gif "struttura ATL")

> [!NOTE]
>  Questo diagramma mostra che `CComObject` deriva dal `CYourClass` mentre `CComAggObject` e `CComPolyObject` includono `CYourClass` come una variabile membro.

Esistono tre modi per definire un oggetto ATL COM. L'opzione standard consiste nell'usare la `CComObject` classe derivata da `CYourClass`. La seconda opzione consiste nel creare un oggetto aggregato utilizzando la `CComAggObject` classe. La terza opzione consiste nell'usare il `CComPolyObject` classe. `CComPolyObject` agisce come un ibrido: funzionare come un `CComObject` classe o come un `CComAggObject` (classe), a seconda del modo in cui viene creato inizialmente. Per altre informazioni su come usare il `CComPolyObject` classe, vedere [classe CComPolyObject](../atl/reference/ccompolyobject-class.md).

Quando si usa ATL COM standard, si utilizzano due oggetti: un oggetto esterno e un oggetto interno. Client esterni di accedere alla funzionalità dell'oggetto interno tramite le funzioni wrapper vengono definiti nell'oggetto esterno. L'oggetto esterno è di tipo `CComObject`.

Quando si usa un oggetto aggregato, l'oggetto esterno non fornisce wrapper per le funzionalità dell'oggetto interno. Al contrario, l'oggetto esterno fornisce un puntatore a cui si accede direttamente dai client esterni. In questo scenario, l'oggetto esterno è di tipo `CComAggObject`. L'oggetto interno è una variabile membro dell'oggetto esterno ed è di tipo `CYourClass`.

Poiché il client non è necessario passare attraverso l'oggetto esterno per interagire con l'oggetto interno, gli oggetti aggregati sono in genere più efficienti. Inoltre, l'oggetto esterno non necessario conoscere le funzionalità dell'oggetto aggregato, dato che l'interfaccia dell'oggetto aggregato è direttamente disponibile al client. Tuttavia, non tutti gli oggetti possono essere aggregati. Per un oggetto da aggregare, deve essere progettata con l'aggregazione presente.

Implementa ATL [IUnknown](/windows/desktop/api/unknwn/nn-unknwn-iunknown) in due fasi:

- [CComObject](../atl/reference/ccomobject-class.md), [CComAggObject](../atl/reference/ccomaggobject-class.md), o [CComPolyObject](../atl/reference/ccompolyobject-class.md) implementa il `IUnknown` metodi.

- [CComObjectRoot](../atl/reference/ccomobjectroot-class.md) oppure [CComObjectRootEx](../atl/reference/ccomobjectrootex-class.md) gestisce il conteggio dei riferimenti e i puntatori esterni di `IUnknown`.

Altri aspetti dell'oggetto COM ATL vengono gestiti da altre classi:

- [CComCoClass](../atl/reference/ccomcoclass-class.md) definisce il modello dell'oggetto predefinito classe factory e l'aggregazione.

- [IDispatchImpl](../atl/reference/idispatchimpl-class.md) fornisce un'implementazione predefinita del `IDispatch Interface` parte di tutte le interfacce duali sull'oggetto.

- [ISupportErrorInfoImpl](../atl/reference/isupporterrorinfoimpl-class.md) implementa il `ISupportErrorInfo` interfaccia che garantisce le informazioni sugli errori che può essere propagato lungo la catena di chiamate in modo corretto.

## <a name="in-this-section"></a>In questa sezione

[Implementazione di CComObjectRootEx](../atl/implementing-ccomobjectrootex.md)<br/>
Mostra le voci della mappa COM per l'implementazione di esempio `CComObjectRootEx`.

[Implementazione di CComObject, CComAggObjec e CComPolyObject](../atl/implementing-ccomobject-ccomaggobject-and-ccompolyobject.md)<br/>
Viene illustrato come la **viene\*Aggregatable** macro influiscono sull'uso di `CComObject`, `CComAggObject`, e `CComPolyObject`.

[Supporto di IDispatch e IErrorInfo](../atl/supporting-idispatch-and-ierrorinfo.md)<br/>
Elenca le classi di implementazione ATL da utilizzare per supportare le `IDispatch` e `IErrorInfo` interfacce.

[Supporto di IDispEventImpl](../atl/supporting-idispeventimpl.md)<br/>
Vengono illustrati i passaggi per implementare un punto di connessione per la classe.

[Modifica della class factory e del modello di aggregazione predefiniti](../atl/changing-the-default-class-factory-and-aggregation-model.md)<br/>
Visualizzare le macro da usare per modificare il modello factory e l'aggregazione predefinita di classe.

[Creazione di un oggetto aggregato](../atl/creating-an-aggregated-object.md)<br/>
Elenca i passaggi per la creazione di un oggetto aggregato.

## <a name="related-sections"></a>Sezioni correlate

[Creazione di un progetto ATL](../atl/reference/creating-an-atl-project.md)<br/>
Vengono fornite informazioni sulla creazione di un oggetto ATL COM.

[ATL](../atl/active-template-library-atl-concepts.md)<br/>
Fornisce collegamenti ad argomenti concettuali sulla programmazione con Active Template Library.

## <a name="see-also"></a>Vedere anche

[Concetti](../atl/active-template-library-atl-concepts.md)


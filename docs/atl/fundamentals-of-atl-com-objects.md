---
title: Nozioni fondamentali sugli oggetti COM ATL
ms.date: 11/19/2018
helpviewer_keywords:
- COM, and ATL
- ATL, COM
- ATL COM objects
- COM objects, ATL
ms.assetid: 0f9c9d98-cc28-45da-89ac-dc94cee422fe
ms.openlocfilehash: 651413534ed44143e2a0fdaf00bdabd6e5d57010
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81319552"
---
# <a name="fundamentals-of-atl-com-objects"></a>Nozioni fondamentali sugli oggetti COM ATL

Nella figura seguente viene illustrata la relazione tra le classi e le interfacce utilizzate per definire un oggetto COM ATL.

![Struttura ATL](../atl/media/vc307y1.gif "Struttura ATL")

> [!NOTE]
> Questo diagramma `CComObject` mostra che `CYourClass` `CComAggObject` è `CComPolyObject` `CYourClass` derivato da whereas e includere come variabile membro.

Esistono tre modi per definire un oggetto COM ATL. L'opzione standard consiste `CComObject` nell'utilizzare `CYourClass`la classe derivata da . La seconda opzione consiste nel creare un `CComAggObject` oggetto aggregato utilizzando la classe . La terza opzione consiste `CComPolyObject` nell'utilizzare la classe. `CComPolyObject`funge da ibrido: può funzionare `CComObject` come una `CComAggObject` classe o come una classe, a seconda di come viene creato per la prima volta. Per ulteriori informazioni sull'utilizzo della `CComPolyObject` classe , vedere Classe [CComPolyObject](../atl/reference/ccompolyobject-class.md).

Quando si utilizza COM ATL standard, si utilizzano due oggetti: un oggetto esterno e un oggetto interno. I client esterni accedono alla funzionalità dell'oggetto interno tramite le funzioni wrapper definite nell'oggetto esterno. L'oggetto esterno `CComObject`è di tipo .

Quando si utilizza un oggetto aggregato, l'oggetto esterno non fornisce wrapper per la funzionalità dell'oggetto interno. Al contrario, l'oggetto esterno fornisce un puntatore a cui accedono direttamente i client esterni. In questo scenario, l'oggetto `CComAggObject`esterno è di tipo . L'oggetto interno è una variabile membro dell'oggetto `CYourClass`esterno ed è di tipo .

Poiché il client non deve passare attraverso l'oggetto esterno per interagire con l'oggetto interno, gli oggetti aggregati sono in genere più efficienti. Inoltre, l'oggetto esterno non deve conoscere la funzionalità dell'oggetto aggregato, dato che l'interfaccia dell'oggetto aggregato è direttamente disponibile per il client. Tuttavia, non tutti gli oggetti possono essere aggregati. Affinché un oggetto venga aggregato, deve essere progettato tenendo presente l'aggregazione.

ATL implementa IUnknown in due fasi:ATL implements [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) in two phases:

- [CComObject](../atl/reference/ccomobject-class.md), [CComAggObject](../atl/reference/ccomaggobject-class.md)o [CComPolyObject](../atl/reference/ccompolyobject-class.md) implementa i `IUnknown` metodi .

- [CComObjectRoot](../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../atl/reference/ccomobjectrootex-class.md) gestisce il conteggio `IUnknown`dei riferimenti e i puntatori esterni di .

Altri aspetti dell'oggetto COM ATL vengono gestiti da altre classi:

- [CComCoClass](../atl/reference/ccomcoclass-class.md) definisce la class factory e il modello di aggregazione predefiniti dell'oggetto.

- [IDispatchImpl](../atl/reference/idispatchimpl-class.md) fornisce un'implementazione predefinita della `IDispatch Interface` parte di tutte le interfacce duali sull'oggetto.

- [ISupportErrorInfoImpl](../atl/reference/isupporterrorinfoimpl-class.md) implementa `ISupportErrorInfo` l'interfaccia che garantisce che le informazioni sugli errori possano essere propagate correttamente nella catena di chiamate.

## <a name="in-this-section"></a>Contenuto della sezione

[Implementazione di CComObjectRootEx](../atl/implementing-ccomobjectrootex.md)<br/>
Mostrare le voci di `CComObjectRootEx`mappa COM di esempio per l'implementazione di .

[Implementazione di CComObject, CComAggObject e CComPolyObject](../atl/implementing-ccomobject-ccomaggobject-and-ccompolyobject.md)<br/>
Viene illustrato come le **DECLARE_\*_AGGREGATABLE** `CComAggObject`macro `CComPolyObject`influiscono sull'utilizzo di `CComObject`, e .

[Supporto di IDispatch e IErrorInfo](../atl/supporting-idispatch-and-ierrorinfo.md)<br/>
Vengono elencate le classi di implementazione ATL da utilizzare per il supporto delle `IDispatch` interfacce e `IErrorInfo` .

[Supporto di IDispEventImpl](../atl/supporting-idispeventimpl.md)<br/>
Vengono illustrati i passaggi per implementare un punto di connessione per la classe.

[Modifica della class factory e del modello di aggregazione predefiniti](../atl/changing-the-default-class-factory-and-aggregation-model.md)<br/>
Mostrare le macro da utilizzare per modificare la class factory predefinita e il modello di aggregazione.

[Creazione di un oggetto aggregatoCreating an Aggregated Object](../atl/creating-an-aggregated-object.md)<br/>
Vengono elencati i passaggi per la creazione di un oggetto aggregato.

## <a name="related-sections"></a>Sezioni correlate

[Creazione di un progetto ATL](../atl/reference/creating-an-atl-project.md)<br/>
Vengono fornite informazioni sulla creazione di un oggetto COM ATL.

[ATL](../atl/active-template-library-atl-concepts.md)<br/>
Fornisce collegamenti ad argomenti concettuali sulla programmazione con Active Template Library.

## <a name="see-also"></a>Vedere anche

[Concetti](../atl/active-template-library-atl-concepts.md)

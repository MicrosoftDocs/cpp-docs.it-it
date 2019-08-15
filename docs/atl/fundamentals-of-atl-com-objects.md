---
title: Nozioni fondamentali sugli oggetti COM ATL
ms.date: 11/19/2018
helpviewer_keywords:
- COM, and ATL
- ATL, COM
- ATL COM objects
- COM objects, ATL
ms.assetid: 0f9c9d98-cc28-45da-89ac-dc94cee422fe
ms.openlocfilehash: ec83539b2d7101c534bbc1df33577df422e76152
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69492373"
---
# <a name="fundamentals-of-atl-com-objects"></a>Nozioni fondamentali sugli oggetti COM ATL

Nella figura seguente viene illustrata la relazione tra le classi e le interfacce utilizzate per definire un oggetto COM ATL.

![Struttura ATL](../atl/media/vc307y1.gif "Struttura ATL")

> [!NOTE]
>  Questo diagramma mostra che `CComObject` deriva da `CYourClass` mentre `CComAggObject` e `CComPolyObject` include `CYourClass` come variabile membro.

Esistono tre modi per definire un oggetto COM ATL. L'opzione standard prevede l'uso della `CComObject` classe derivata da. `CYourClass` La seconda opzione consiste nel creare un oggetto aggregato usando la `CComAggObject` classe. La terza opzione consiste nell'usare la `CComPolyObject` classe. `CComPolyObject`funge da ibrido: può fungere da `CComObject` classe o `CComAggObject` da classe, a seconda di come viene creata per la prima volta. Per ulteriori informazioni sull'utilizzo della `CComPolyObject` classe, vedere [classe CComPolyObject](../atl/reference/ccompolyobject-class.md).

Quando si usa la versione standard di ATL COM, si usano due oggetti: un oggetto esterno e un oggetto interno. I client esterni accedono alla funzionalità dell'oggetto interno tramite le funzioni wrapper definite nell'oggetto esterno. L'oggetto esterno è di tipo `CComObject`.

Quando si usa un oggetto aggregato, l'oggetto esterno non fornisce wrapper per la funzionalità dell'oggetto interno. L'oggetto esterno fornisce invece un puntatore accessibile direttamente da client esterni. In questo scenario, l'oggetto esterno è di tipo `CComAggObject`. L'oggetto interno è una variabile membro dell'oggetto esterno ed è di tipo `CYourClass`.

Poiché il client non deve passare attraverso l'oggetto esterno per interagire con l'oggetto interno, gli oggetti aggregati sono in genere più efficienti. Non è inoltre necessario che l'oggetto esterno conosca la funzionalità dell'oggetto aggregato, dato che l'interfaccia dell'oggetto aggregato è direttamente disponibile per il client. Tuttavia, non tutti gli oggetti possono essere aggregati. Affinché un oggetto venga aggregato, è necessario che venga progettato tenendo presente un'aggregazione.

ATL implementa [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) in due fasi:

- [CComObject](../atl/reference/ccomobject-class.md), [ccomaggobjec](../atl/reference/ccomaggobject-class.md)o [CComPolyObject](../atl/reference/ccompolyobject-class.md) implementa i `IUnknown` metodi.

- [CComObjectRoot](../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../atl/reference/ccomobjectrootex-class.md) gestisce il conteggio dei riferimenti e i puntatori `IUnknown`esterni di.

Altri aspetti dell'oggetto COM ATL sono gestiti da altre classi:

- [CComCoClass](../atl/reference/ccomcoclass-class.md) definisce il class factory e il modello di aggregazione predefiniti dell'oggetto.

- [IDispatchImpl](../atl/reference/idispatchimpl-class.md) fornisce un'implementazione predefinita della `IDispatch Interface` parte di qualsiasi interfaccia duale sull'oggetto.

- [ISupportErrorInfoImpl](../atl/reference/isupporterrorinfoimpl-class.md) implementa l' `ISupportErrorInfo` interfaccia che garantisce che le informazioni sugli errori possano essere propagate correttamente nella catena di chiamate.

## <a name="in-this-section"></a>In questa sezione

[Implementazione di CComObjectRootEx](../atl/implementing-ccomobjectrootex.md)<br/>
Mostra le voci della mappa COM di `CComObjectRootEx`esempio per l'implementazione di.

[Implementazione di CComObject, CComAggObjec e CComPolyObject](../atl/implementing-ccomobject-ccomaggobject-and-ccompolyobject.md)<br/>
Viene illustrato come le macro **_AGGREGATABLE di DECLARE_\*** influiscono sull' `CComAggObject`utilizzo di `CComPolyObject` `CComObject`, e.

[Supporto di IDispatch e IErrorInfo](../atl/supporting-idispatch-and-ierrorinfo.md)<br/>
Elenca le classi di implementazione ATL da utilizzare per il `IDispatch` supporto `IErrorInfo` delle interfacce e.

[Supporto di IDispEventImpl](../atl/supporting-idispeventimpl.md)<br/>
Vengono illustrati i passaggi per implementare un punto di connessione per la classe.

[Modifica della class factory e del modello di aggregazione predefiniti](../atl/changing-the-default-class-factory-and-aggregation-model.md)<br/>
Mostra le macro da usare per modificare il modello di class factory e di aggregazione predefinito.

[Creazione di un oggetto aggregato](../atl/creating-an-aggregated-object.md)<br/>
Elenca i passaggi per la creazione di un oggetto aggregato.

## <a name="related-sections"></a>Sezioni correlate

[Creazione di un progetto ATL](../atl/reference/creating-an-atl-project.md)<br/>
Fornisce informazioni sulla creazione di un oggetto COM ATL.

[ATL](../atl/active-template-library-atl-concepts.md)<br/>
Fornisce collegamenti ad argomenti concettuali sulla programmazione con Active Template Library.

## <a name="see-also"></a>Vedere anche

[Concetti](../atl/active-template-library-atl-concepts.md)

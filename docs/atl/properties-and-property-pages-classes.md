---
title: Le proprietà e classi delle pagine delle proprietà (ATL)
ms.date: 11/04/2016
ms.topic: reference
helpviewer_keywords:
- property pages, classes
- properties [ATL], classes
- properties [ATL]
ms.assetid: 31616f98-69f8-48b2-8d58-b8e7d1c2b2d8
ms.openlocfilehash: 05c3a67e278389bb2ab1b07e9d6cf63cbe347c63
ms.sourcegitcommit: faa42c8a051e746d99dcebe70fd4bbaf3b023ace
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/15/2019
ms.locfileid: "57807528"
---
# <a name="properties-and-property-pages-classes"></a>Le proprietà e classi delle pagine delle proprietà

Le classi seguenti supportano le proprietà e pagine delle proprietà:

- [CComDispatchDriver](../atl/reference/atl-typedefs.md#ccomdispatchdriver) Recupera o imposta le proprietà di un oggetto tramite un `IDispatch` puntatore.

- [CStockPropImpl](../atl/reference/cstockpropimpl-class.md) implementa le proprietà predefinite supportate da ATL.

- [IPerPropertyBrowsingImpl](../atl/reference/iperpropertybrowsingimpl-class.md) accede alle informazioni nelle pagine delle proprietà di un oggetto.

- [IPersistPropertyBagImpl](../atl/reference/ipersistpropertybagimpl-class.md) archivia le proprietà di un oggetto in un contenitore di proprietà specificato dal client.

- [IPropertyPageImpl](../atl/reference/ipropertypageimpl-class.md) gestisce una pagina particolare proprietà all'interno di una finestra delle proprietà.

- [IPropertyPage2Impl](../atl/reference/ipropertypage2impl-class.md) Analogamente a `IPropertyPageImpl`, ma anche di un client di selezionare una proprietà specifica in una pagina delle proprietà.

- [ISpecifyPropertyPagesImpl](../atl/reference/ispecifypropertypagesimpl-class.md) Ottiene i CLSID per le pagine delle proprietà supportate da un oggetto.

## <a name="related-articles"></a>Articoli correlati

[Esercitazione ATL](../atl/active-template-library-atl-tutorial.md)

[Pagine delle proprietà COM ATL](../atl/atl-com-property-pages.md)

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../atl/atl-class-overview.md)<br/>
[Macro della mappa proprietà](../atl/reference/property-map-macros.md)

---
description: 'Altre informazioni su: proprietà e classi di pagine delle proprietà'
title: Classi Properties e Property Pages (ATL)
ms.date: 11/04/2016
ms.topic: reference
helpviewer_keywords:
- property pages, classes
- properties [ATL], classes
- properties [ATL]
ms.assetid: 31616f98-69f8-48b2-8d58-b8e7d1c2b2d8
ms.openlocfilehash: 1fddb9626afcab908ae6f7ffb085c263b7a84af7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97159193"
---
# <a name="properties-and-property-pages-classes"></a>Classi di proprietà e pagine delle proprietà

Le classi seguenti supportano le proprietà e le pagine delle proprietà:

- [CComDispatchDriver](../atl/reference/atl-typedefs.md#ccomdispatchdriver) Recupera o imposta le proprietà di un oggetto tramite un `IDispatch` puntatore.

- [CStockPropImpl](../atl/reference/cstockpropimpl-class.md) Implementa le proprietà predefinite supportate da ATL.

- [IPerPropertyBrowsingImpl](../atl/reference/iperpropertybrowsingimpl-class.md) Accede alle informazioni nelle pagine delle proprietà di un oggetto.

- [IPersistPropertyBagImpl](../atl/reference/ipersistpropertybagimpl-class.md) Archivia le proprietà di un oggetto in un contenitore di proprietà fornito dal client.

- [IPropertyPageImpl](../atl/reference/ipropertypageimpl-class.md) Gestisce una particolare pagina delle proprietà all'interno di una finestra delle proprietà.

- [IPropertyPage2Impl](../atl/reference/ipropertypage2impl-class.md) Simile a `IPropertyPageImpl` , ma consente anche a un client di selezionare una proprietà specifica in una pagina delle proprietà.

- [ISpecifyPropertyPagesImpl](../atl/reference/ispecifypropertypagesimpl-class.md) Ottiene i CLSID per le pagine delle proprietà supportate da un oggetto.

## <a name="related-articles"></a>Articoli correlati

[Esercitazione ATL](../atl/active-template-library-atl-tutorial.md)

[Pagine delle proprietà COM ATL](../atl/atl-com-property-pages.md)

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../atl/atl-class-overview.md)<br/>
[Macro della mappa delle proprietà](../atl/reference/property-map-macros.md)

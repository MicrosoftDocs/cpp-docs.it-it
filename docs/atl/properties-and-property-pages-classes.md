---
title: E la proprietà pagine classi (ATL) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- vc.atl.properties
dev_langs:
- C++
helpviewer_keywords:
- property pages, classes
- properties [ATL], classes
- properties [ATL]
ms.assetid: 31616f98-69f8-48b2-8d58-b8e7d1c2b2d8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c71ca9412c9db86421c586c0602eb8e6548df622
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43766753"
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

[Panoramica della classe](../atl/atl-class-overview.md)   
[Macro della mappa proprietà](../atl/reference/property-map-macros.md)


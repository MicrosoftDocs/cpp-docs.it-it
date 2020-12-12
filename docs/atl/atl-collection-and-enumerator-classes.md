---
description: 'Ulteriori informazioni su: classi di enumeratore e raccolta ATL'
title: Classi di enumeratore e raccolta ATL
ms.date: 11/04/2016
helpviewer_keywords:
- enumerators, ATL classes
- collection classes, ATL
ms.assetid: 6818db73-7094-48d8-a0ca-18147beec362
ms.openlocfilehash: b1f30aabb4908b0299a927f92a6d5ee4e9370a09
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97166044"
---
# <a name="atl-collection-and-enumerator-classes"></a>Classi di enumeratore e raccolta ATL

ATL fornisce le classi seguenti che consentono di implementare raccolte ed enumeratori.

|Classe|Descrizione|
|-----------|-----------------|
|[ICollectionOnSTLImpl](../atl/reference/icollectiononstlimpl-class.md)|Implementazione dell'interfaccia di raccolta|
|[IEnumOnSTLImpl](../atl/reference/ienumonstlimpl-class.md)|Implementazione dell'interfaccia Enumerator (presuppone i dati archiviati in un contenitore compatibile con la libreria standard C++)|
|[CComEnumImpl](../atl/reference/ccomenumimpl-class.md)|Implementazione dell'interfaccia Enumerator (presuppone i dati archiviati in una matrice)|
|[CComEnumOnSTL](../atl/reference/ccomenumonstl-class.md)|Implementazione dell'oggetto Enumerator (USA `IEnumOnSTLImpl` )|
|[CComEnum](../atl/reference/ccomenum-class.md)|Implementazione dell'oggetto Enumerator (USA `CComEnumImpl` )|
|[_Copy](../atl/atl-copy-policy-classes.md)|Classe dei criteri di copia|
|[_CopyInterface](../atl/atl-copy-policy-classes.md)|Classe dei criteri di copia|
|[CAdapt](../atl/reference/cadapt-class.md)|Classe Adapter (nasconde l' **operatore &** consentendo l' `CComPtr` `CComQIPtr` `CComBSTR` archiviazione di, e nei contenitori della libreria standard C++)|

## <a name="see-also"></a>Vedi anche

[Raccolte ed enumeratori](../atl/atl-collections-and-enumerators.md)

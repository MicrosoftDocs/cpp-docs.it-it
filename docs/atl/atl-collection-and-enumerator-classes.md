---
title: Classi di enumeratore e raccolta ATL
ms.date: 11/04/2016
helpviewer_keywords:
- enumerators, ATL classes
- collection classes, ATL
ms.assetid: 6818db73-7094-48d8-a0ca-18147beec362
ms.openlocfilehash: b1ab9a160b01ea278d162a515e5121054bf398f7
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57265405"
---
# <a name="atl-collection-and-enumerator-classes"></a>Classi di enumeratore e raccolta ATL

ATL fornisce le classi seguenti che consentono di implementare le raccolte ed enumeratori.

|Classe|Descrizione|
|-----------|-----------------|
|[ICollectionOnSTLImpl](../atl/reference/icollectiononstlimpl-class.md)|Implementazione dell'interfaccia di raccolta|
|[IEnumOnSTLImpl](../atl/reference/ienumonstlimpl-class.md)|Implementazione dell'interfaccia enumeratore (si presuppone che i dati archiviati in un contenitore compatibile della libreria Standard C++)|
|[CComEnumImpl](../atl/reference/ccomenumimpl-class.md)|Implementazione dell'interfaccia enumeratore (si presuppone che i dati archiviati in una matrice)|
|[CComEnumOnSTL](../atl/reference/ccomenumonstl-class.md)|Implementazione dell'oggetto enumeratore (Usa `IEnumOnSTLImpl`)|
|[CComEnum](../atl/reference/ccomenum-class.md)|Implementazione dell'oggetto enumeratore (Usa `CComEnumImpl`)|
|[_Copy](../atl/atl-copy-policy-classes.md)|Classe di criteri di copia|
|[_CopyInterface](../atl/atl-copy-policy-classes.md)|Classe di criteri di copia|
|[CAdapt](../atl/reference/cadapt-class.md)|Classe di adattatori (nasconde **operatore &** consentendo `CComPtr`, `CComQIPtr`, e `CComBSTR` da archiviare nei contenitori della libreria Standard C++)|

## <a name="see-also"></a>Vedere anche

[Raccolte ed enumeratori](../atl/atl-collections-and-enumerators.md)

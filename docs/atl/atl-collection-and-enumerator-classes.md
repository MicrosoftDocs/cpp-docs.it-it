---
title: Classi di enumeratore e raccolta ATL
ms.date: 11/04/2016
helpviewer_keywords:
- enumerators, ATL classes
- collection classes, ATL
ms.assetid: 6818db73-7094-48d8-a0ca-18147beec362
ms.openlocfilehash: a0d7483cc142377ec4de903e27f23056a9e8dd8c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50495304"
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
|[Copia](../atl/atl-copy-policy-classes.md)|Classe di criteri di copia|
|[CopyInterface](../atl/atl-copy-policy-classes.md)|Classe di criteri di copia|
|[CAdapt](../atl/reference/cadapt-class.md)|Classe di adattatori (nasconde **operatore &** consentendo `CComPtr`, `CComQIPtr`, e `CComBSTR` da archiviare nei contenitori della libreria Standard C++)|

## <a name="see-also"></a>Vedere anche

[Raccolte ed enumeratori](../atl/atl-collections-and-enumerators.md)


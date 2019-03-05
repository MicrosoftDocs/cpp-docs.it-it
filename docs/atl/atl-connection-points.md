---
title: Punti di connessione ATL
ms.date: 11/04/2016
helpviewer_keywords:
- connections, connection points
- ATL, connection points
- connection points [C++], about connection points
ms.assetid: 17d76165-5f83-4f95-b36d-483821c247a1
ms.openlocfilehash: 4d94396ef8839516d9bfee15a2611cce66baa6bd
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57297827"
---
# <a name="atl-connection-points"></a>Punti di connessione ATL

Un oggetto collegabile è un oggetto che supporta interfacce in uscita. Un'interfaccia in uscita consente all'oggetto di comunicare con un client. Per ogni interfaccia in uscita, l'oggetto collegabile espone un punto di connessione. Ogni interfaccia viene implementata da un client in un oggetto denominato sink.

![Punti di connessione](../atl/media/vc2zw31.gif "punti di connessione")

Ogni punto di connessione supporta le [IConnectionPoint](/windows/desktop/api/ocidl/nn-ocidl-iconnectionpoint) interfaccia. L'oggetto collegabile espone i relativi punti di connessione al client tramite il [IConnectionPointContainer](/windows/desktop/api/ocidl/nn-ocidl-iconnectionpointcontainer) interfaccia.

## <a name="in-this-section"></a>In questa sezione

[Classi dei punti di connessione ATL](../atl/atl-connection-point-classes.md)<br/>
Descrive in breve le classi ATL che supportano i punti di connessione.

[Aggiunta di punti di connessione a un oggetto](../atl/adding-connection-points-to-an-object.md)<br/>
Delinea i passaggi necessari per aggiungere punti di connessione a un oggetto.

[Esempio di punto di connessione ATL](../atl/atl-connection-point-example.md)<br/>
Fornisce un esempio di dichiarazione di un punto di connessione.

## <a name="related-sections"></a>Sezioni correlate

[ATL](../atl/active-template-library-atl-concepts.md)<br/>
Fornisce collegamenti ad argomenti concettuali sulla programmazione con Active Template Library.

## <a name="see-also"></a>Vedere anche

[Concetti](../atl/active-template-library-atl-concepts.md)

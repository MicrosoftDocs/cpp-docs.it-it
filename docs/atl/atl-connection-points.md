---
description: 'Altre informazioni su: punti di connessione ATL'
title: Punti di connessione ATL
ms.date: 11/04/2016
helpviewer_keywords:
- connections, connection points
- ATL, connection points
- connection points [C++], about connection points
ms.assetid: 17d76165-5f83-4f95-b36d-483821c247a1
ms.openlocfilehash: 60b9018185bea2af26407ee9d7a203148c8dc477
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97165823"
---
# <a name="atl-connection-points"></a>Punti di connessione ATL

Un oggetto collegabile è un oggetto che supporta interfacce in uscita. Un'interfaccia in uscita consente all'oggetto di comunicare con un client. Per ogni interfaccia in uscita, l'oggetto collegabile espone un punto di connessione. Ogni interfaccia viene implementata da un client in un oggetto denominato sink.

![Punti di connessione](../atl/media/vc2zw31.gif "Punti di connessione")

Ogni punto di connessione supporta l'interfaccia [IConnectionPoint](/windows/win32/api/ocidl/nn-ocidl-iconnectionpoint) . L'oggetto collegabile espone i punti di connessione al client tramite l'interfaccia [IConnectionPointContainer](/windows/win32/api/ocidl/nn-ocidl-iconnectionpointcontainer) .

## <a name="in-this-section"></a>Contenuto della sezione

[Classi del punto di connessione ATL](../atl/atl-connection-point-classes.md)<br/>
Descrive in breve le classi ATL che supportano i punti di connessione.

[Aggiunta di punti di connessione a un oggetto](../atl/adding-connection-points-to-an-object.md)<br/>
Delinea i passaggi necessari per aggiungere punti di connessione a un oggetto.

[Esempio di punto di connessione ATL](../atl/atl-connection-point-example.md)<br/>
Fornisce un esempio di dichiarazione di un punto di connessione.

## <a name="related-sections"></a>Sezioni correlate

[ATL](../atl/active-template-library-atl-concepts.md)<br/>
Fornisce collegamenti ad argomenti concettuali sulla programmazione con Active Template Library.

## <a name="see-also"></a>Vedi anche

[Concetti](../atl/active-template-library-atl-concepts.md)

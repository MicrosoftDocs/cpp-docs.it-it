---
title: Punti di connessione ATL | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- connections, connection points
- ATL, connection points
- connection points [C++], about connection points
ms.assetid: 17d76165-5f83-4f95-b36d-483821c247a1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ec0e902f2b01e33ac460c6210d51c5e0637c3282
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43202920"
---
# <a name="atl-connection-points"></a>Punti di connessione ATL
Un oggetto collegabile è un oggetto che supporta interfacce in uscita. Un'interfaccia in uscita consente all'oggetto di comunicare con un client. Per ogni interfaccia in uscita, l'oggetto collegabile espone un punto di connessione. Ogni interfaccia viene implementata da un client in un oggetto denominato sink.  
  
 ![Punti di connessione](../atl/media/vc2zw31.gif "vc2zw31")  
  
 Ogni punto di connessione supporta le [IConnectionPoint](/windows/desktop/api/ocidl/nn-ocidl-iconnectionpoint) interfaccia. L'oggetto collegabile espone i relativi punti di connessione al client tramite il [IConnectionPointContainer](/windows/desktop/api/ocidl/nn-ocidl-iconnectionpointcontainer) interfaccia.  
  
## <a name="in-this-section"></a>In questa sezione  
 [Classi dei punti di connessione ATL](../atl/atl-connection-point-classes.md)  
 Descrive in breve le classi ATL che supportano i punti di connessione.  
  
 [Aggiunta di punti di connessione a un oggetto](../atl/adding-connection-points-to-an-object.md)  
 Delinea i passaggi necessari per aggiungere punti di connessione a un oggetto.  
  
 [Esempio di punto di connessione ATL](../atl/atl-connection-point-example.md)  
 Fornisce un esempio di dichiarazione di un punto di connessione.  
  
## <a name="related-sections"></a>Sezioni correlate  
 [ATL](../atl/active-template-library-atl-concepts.md)  
 Fornisce collegamenti ad argomenti concettuali sulla programmazione con Active Template Library.  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../atl/active-template-library-atl-concepts.md)


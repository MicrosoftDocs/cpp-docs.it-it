---
title: Punti di connessione ATL | Documenti Microsoft
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
ms.openlocfilehash: 179f4329d55261d71d3d122e6a2601ce7e805c0f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="atl-connection-points"></a>Punti di connessione ATL
Un oggetto collegabile è un oggetto che supporta interfacce in uscita. Un'interfaccia in uscita consente all'oggetto di comunicare con un client. Per ogni interfaccia in uscita, l'oggetto collegabile espone un punto di connessione. Ogni interfaccia viene implementata da un client in un oggetto denominato sink.  
  
 ![Punti di connessione](../atl/media/vc2zw31.gif "vc2zw31")  
  
 Ogni punto di connessione supporta il [IConnectionPoint](http://msdn.microsoft.com/library/windows/desktop/ms694318) interfaccia. L'oggetto collegabile espone i relativi punti di connessione al client tramite il [IConnectionPointContainer](http://msdn.microsoft.com/library/windows/desktop/ms683857) interfaccia.  
  
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


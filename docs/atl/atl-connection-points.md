---
title: Punti di connessione ATL | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- connections, connection points
- ATL, connection points
- connection points [C++], about connection points
ms.assetid: 17d76165-5f83-4f95-b36d-483821c247a1
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: e0ef927ad6e2a0e9b0c71e211fa525ba7fc8ea0d
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="atl-connection-points"></a>Punti di connessione ATL
Un oggetto collegabile è un oggetto che supporta interfacce in uscita. Un'interfaccia in uscita consente all'oggetto di comunicare con un client. Per ogni interfaccia in uscita, l'oggetto collegabile espone un punto di connessione. Ogni interfaccia viene implementata da un client in un oggetto denominato sink.  
  
 ![Punti di connessione](../atl/media/vc2zw31.gif "vc2zw31")  
  
 Ogni punto di connessione supporta il [IConnectionPoint](http://msdn.microsoft.com/library/windows/desktop/ms694318) interfaccia. L'oggetto collegabile espone i relativi punti di connessione al client tramite il [IConnectionPointContainer](http://msdn.microsoft.com/library/windows/desktop/ms683857) interfaccia.  
  
## <a name="in-this-section"></a>Contenuto della sezione  
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


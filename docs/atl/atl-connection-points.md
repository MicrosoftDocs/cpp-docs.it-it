---
title: "Punti di connessione ATL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL, punti di connessione"
  - "punti di connessione [C++], informazioni sui punti di connessione"
  - "connessioni, punti di connessione"
ms.assetid: 17d76165-5f83-4f95-b36d-483821c247a1
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Punti di connessione ATL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un oggetto collegabile è un oggetto che supporta interfacce in uscita.  Un'interfaccia in uscita consente all'oggetto di comunicare con un client.  Per ogni interfaccia in uscita, l'oggetto collegabile espone un punto di connessione.  Ogni interfaccia viene implementata da un client in un oggetto denominato sink.  
  
 ![Punti di connessione](../atl/media/vc2zw31.png "vc2ZW31")  
  
 Ogni punto di connessione supporta l'interfaccia [IConnectionPoint](http://msdn.microsoft.com/library/windows/desktop/ms694318).  L'oggetto collegabile espone i relativi punti di connessione al client tramite il l'interfaccia [IConnectionPointContainer](http://msdn.microsoft.com/library/windows/desktop/ms683857).  
  
## Contenuto della sezione  
 [Classi dei punti di connessione ATL](../atl/atl-connection-point-classes.md)  
 Descrive in breve le classi ATL che supportano i punti di connessione.  
  
 [Aggiunta di punti di connessione a un oggetto](../atl/adding-connection-points-to-an-object.md)  
 Delinea i passaggi necessari per aggiungere punti di connessione a un oggetto.  
  
 [Esempio di punto di connessione ATL](../atl/atl-connection-point-example.md)  
 Fornisce un esempio di dichiarazione di un punto di connessione.  
  
## Sezioni correlate  
 [ATL](../atl/active-template-library-atl-concepts.md)  
 Fornisce collegamenti ad argomenti concettuali sulla programmazione con Active Template Library.  
  
## Vedere anche  
 [Concetti](../atl/active-template-library-atl-concepts.md)
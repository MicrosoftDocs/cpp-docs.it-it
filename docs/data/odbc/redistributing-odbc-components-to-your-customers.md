---
title: Ridistribuzione dei componenti ODBC ai clienti | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- ODBC components, redistributing
- ODBC, distributing components
- components [C++], distributing
- ODBC Administrator
- components [C++]
- components [C++], redistributing
ms.assetid: 17b065b4-a307-4b89-99ac-d05831cfab87
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: aad9f1dbd4542ad763e7303d9a750f1856208025
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="redistributing-odbc-components-to-your-customers"></a>Ridistribuzione dei componenti ODBC ai clienti
Se si incorporano le funzionalità dei programmi Amministratore ODBC in un'applicazione, è necessario anche distribuire agli utenti i file di cui eseguono tali programmi. Questi file ODBC si trovano nella directory \OS\System del CD di Visual C++. Il file REDISTRB e il contratto di licenza nella stessa directory contiene un elenco dei file ODBC che è possibile ridistribuire.  
  
 Consultare la documentazione relativa ai driver ODBC che si intende fornire. È necessario determinare quali DLL e altri file da spedire. È consigliabile leggere anche [ridistribuzione dei componenti ODBC ai clienti](../../data/odbc/redistributing-odbc-components-to-your-customers.md), cui viene illustrato come ridistribuire i componenti ODBC.  
  
 Inoltre, è necessario includere un altro file nella maggior parte dei casi. L'Odbccr32 è la libreria di cursori ODBC. Questa libreria fornisce driver di livello 1 la funzionalità di scorrimento in avanti e indietro. Fornisce inoltre la funzionalità di supporto degli snapshot. Per ulteriori informazioni sulla libreria di cursori ODBC, vedere [ODBC: libreria di cursori ODBC](../../data/odbc/odbc-the-odbc-cursor-library.md).  
  
 Gli argomenti seguenti forniscono ulteriori informazioni sull'utilizzo di ODBC con le classi di database:  
  
-   [ODBC: libreria di cursori ODBC](../../data/odbc/odbc-the-odbc-cursor-library.md)  
  
-   [ODBC: configurazione di un'origine dati ODBC](../../data/odbc/odbc-configuring-an-odbc-data-source.md)  
  
-   [ODBC: chiamata diretta delle funzioni dell'API ODBC](../../data/odbc/odbc-calling-odbc-api-functions-directly.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Nozioni fondamentali su ODBC](../../data/odbc/odbc-basics.md)   
 [Amministratore ODBC](../../data/odbc/odbc-administrator.md)
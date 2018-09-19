---
title: Ridistribuzione dei componenti ODBC ai clienti | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 737343a57a852e8bd6a11116fa0d123502208b88
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46079830"
---
# <a name="redistributing-odbc-components-to-your-customers"></a>Ridistribuzione dei componenti ODBC ai clienti

Se si incorporano le funzionalità dei programmi Amministratore ODBC in un'applicazione, è necessario inoltre distribuire agli utenti i file che eseguono questi programmi. Questi file ODBC si trovano in directory \OS\System del CD di Visual C++. Il file REDISTRB e il contratto di licenza nella stessa directory contiene un elenco di file ODBC che è possibile ridistribuire.  
  
Consultare la documentazione per tutti i driver ODBC che si intende spedire. È necessario determinare quali DLL e altri file per la spedizione. È consigliabile anche leggere [ridistribuzione dei componenti ODBC ai clienti](../../data/odbc/redistributing-odbc-components-to-your-customers.md), che illustra come ridistribuire i componenti ODBC.  
  
Inoltre, è necessario includere un altro file nella maggior parte dei casi. L'Odbccr32 è la libreria di cursori ODBC. Questa libreria fornisce driver di livello 1 la funzionalità di scorrimento in avanti e indietro. Fornisce inoltre la funzionalità di supporto degli snapshot. Per altre informazioni sulla libreria di cursori ODBC, vedere [ODBC: libreria di cursori ODBC](../../data/odbc/odbc-the-odbc-cursor-library.md).  
  
Gli argomenti seguenti forniscono altre informazioni sull'utilizzo di ODBC con le classi di database:  
  
- [ODBC: libreria di cursori ODBC](../../data/odbc/odbc-the-odbc-cursor-library.md)  
  
- [ODBC: configurazione di un'origine dati ODBC](../../data/odbc/odbc-configuring-an-odbc-data-source.md)  
  
- [ODBC: chiamata diretta delle funzioni dell'API ODBC](../../data/odbc/odbc-calling-odbc-api-functions-directly.md)  
  
## <a name="see-also"></a>Vedere anche  

[Nozioni fondamentali su ODBC](../../data/odbc/odbc-basics.md)<br/>
[Amministratore ODBC](../../data/odbc/odbc-administrator.md)
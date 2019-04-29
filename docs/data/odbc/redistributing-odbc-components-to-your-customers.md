---
title: Ridistribuzione dei componenti ODBC ai clienti
ms.date: 11/04/2016
helpviewer_keywords:
- ODBC components, redistributing
- ODBC, distributing components
- components [C++], distributing
- ODBC Administrator
- components [C++]
- components [C++], redistributing
ms.assetid: 17b065b4-a307-4b89-99ac-d05831cfab87
ms.openlocfilehash: 1a6ec6f5fdd3c32080d357ca58d31ccea271b7a4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62330076"
---
# <a name="redistributing-odbc-components-to-your-customers"></a>Ridistribuzione dei componenti ODBC ai clienti

Se si incorporano le funzionalità dei programmi Amministratore ODBC in un'applicazione, è necessario inoltre distribuire agli utenti i file che eseguono questi programmi. Questi file ODBC si trovano in directory \OS\System del CD di Visual C++. Il file REDISTRB e il contratto di licenza nella stessa directory contiene un elenco di file ODBC che è possibile ridistribuire.

Consultare la documentazione per tutti i driver ODBC che si intende spedire. È necessario determinare quali DLL e altri file per la spedizione. È consigliabile anche leggere [ridistribuzione dei componenti ODBC ai clienti](../../data/odbc/redistributing-odbc-components-to-your-customers.md), che illustra come ridistribuire i componenti ODBC.

Inoltre, è necessario includere un altro file nella maggior parte dei casi. L'Odbccr32 è la libreria di cursori ODBC. Questa libreria fornisce driver di livello 1 la funzionalità di scorrimento in avanti e indietro. Fornisce inoltre la funzionalità di supporto degli snapshot. Per altre informazioni sulla libreria di cursori ODBC, vedere [ODBC: La libreria di cursori ODBC](../../data/odbc/odbc-the-odbc-cursor-library.md).

Gli argomenti seguenti forniscono altre informazioni sull'utilizzo di ODBC con le classi di database:

- [ODBC: libreria di cursori ODBC](../../data/odbc/odbc-the-odbc-cursor-library.md)

- [ODBC: configurazione di un'origine dati ODBC](../../data/odbc/odbc-configuring-an-odbc-data-source.md)

- [ODBC: chiamata diretta delle funzioni dell'API ODBC](../../data/odbc/odbc-calling-odbc-api-functions-directly.md)

## <a name="see-also"></a>Vedere anche

[Nozioni fondamentali su ODBC](../../data/odbc/odbc-basics.md)<br/>
[Amministratore ODBC](../../data/odbc/odbc-administrator.md)
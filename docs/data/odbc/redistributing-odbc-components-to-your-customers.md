---
description: 'Ulteriori informazioni su: ridistribuzione dei componenti ODBC ai clienti'
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
ms.openlocfilehash: 02840156d648507065e0cadb1b8fa2b9c8146a7a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97204316"
---
# <a name="redistributing-odbc-components-to-your-customers"></a>Ridistribuzione dei componenti ODBC ai clienti

Se si incorpora la funzionalità dei programmi amministratore ODBC nell'applicazione, è necessario distribuire agli utenti anche i file che eseguono questi programmi. Questi file ODBC si trovano nella directory \OS\System del CD-ROM Visual C++. Il file REDISTRB. wri e il contratto di licenza nella stessa directory contengono un elenco di file ODBC che è possibile ridistribuire.

Consultare la documentazione relativa ai driver ODBC che si prevede di distribuire. È necessario determinare quali dll e altri file spedire. È inoltre consigliabile leggere [la ridistribuzione dei componenti ODBC ai clienti](../../data/odbc/redistributing-odbc-components-to-your-customers.md), che spiega come ridistribuire i componenti ODBC.

Inoltre, nella maggior parte dei casi è necessario includere un altro file. Il Odbccr32.dll è la libreria di cursori ODBC. Questa libreria fornisce ai driver di livello 1 la funzionalità di scorrimento in avanti e indietro. Offre inoltre la possibilità di supportare gli snapshot. Per ulteriori informazioni sulla libreria di cursori ODBC, vedere [ODBC: la libreria di cursori ODBC](../../data/odbc/odbc-the-odbc-cursor-library.md).

Negli argomenti seguenti vengono fornite ulteriori informazioni sull'utilizzo di ODBC con le classi di database:

- [ODBC: libreria di cursori ODBC](../../data/odbc/odbc-the-odbc-cursor-library.md)

- [ODBC: configurazione di un'origine dati ODBC](../../data/odbc/odbc-configuring-an-odbc-data-source.md)

- [ODBC: chiamata diretta delle funzioni API ODBC](../../data/odbc/odbc-calling-odbc-api-functions-directly.md)

## <a name="see-also"></a>Vedi anche

[Nozioni fondamentali su ODBC](../../data/odbc/odbc-basics.md)<br/>
[Amministratore ODBC](../../data/odbc/odbc-administrator.md)

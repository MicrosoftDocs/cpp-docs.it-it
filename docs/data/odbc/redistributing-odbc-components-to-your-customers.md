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
ms.openlocfilehash: 0d4d3948add665c54be3d3b0596a7a6fc0e414f5
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80212732"
---
# <a name="redistributing-odbc-components-to-your-customers"></a>Ridistribuzione dei componenti ODBC ai clienti

Se si incorpora la funzionalità dei programmi amministratore ODBC nell'applicazione, è necessario distribuire agli utenti anche i file che eseguono questi programmi. Questi file ODBC si trovano nella directory \OS\System del CD-ROM C++ Visual. Il file REDISTRB. wri e il contratto di licenza nella stessa directory contengono un elenco di file ODBC che è possibile ridistribuire.

Consultare la documentazione relativa ai driver ODBC che si prevede di distribuire. È necessario determinare quali dll e altri file spedire. È inoltre consigliabile leggere [la ridistribuzione dei componenti ODBC ai clienti](../../data/odbc/redistributing-odbc-components-to-your-customers.md), che spiega come ridistribuire i componenti ODBC.

Inoltre, nella maggior parte dei casi è necessario includere un altro file. Odbccr32. dll è la libreria di cursori ODBC. Questa libreria fornisce ai driver di livello 1 la funzionalità di scorrimento in avanti e indietro. Offre inoltre la possibilità di supportare gli snapshot. Per ulteriori informazioni sulla libreria di cursori ODBC, vedere [ODBC: la libreria di cursori ODBC](../../data/odbc/odbc-the-odbc-cursor-library.md).

Negli argomenti seguenti vengono fornite ulteriori informazioni sull'utilizzo di ODBC con le classi di database:

- [ODBC: libreria di cursori ODBC](../../data/odbc/odbc-the-odbc-cursor-library.md)

- [ODBC: configurazione di un'origine dati ODBC](../../data/odbc/odbc-configuring-an-odbc-data-source.md)

- [ODBC: chiamata diretta delle funzioni dell'API ODBC](../../data/odbc/odbc-calling-odbc-api-functions-directly.md)

## <a name="see-also"></a>Vedere anche

[Nozioni fondamentali su ODBC](../../data/odbc/odbc-basics.md)<br/>
[Amministratore ODBC](../../data/odbc/odbc-administrator.md)

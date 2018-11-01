---
title: Requisiti dei driver ODBC per dynaset
ms.date: 11/04/2016
helpviewer_keywords:
- ODBC recordsets, dynasets
- drivers, for dynasets
- drivers, ODBC
- recordsets, dynasets
- dynasets
- ODBC drivers, dynasets
ms.assetid: 585cc67b-4d92-404b-9903-d769cd17badc
ms.openlocfilehash: 3ba333b8c5c90a4b9bb1aca94f57e5fc92aa2b47
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50647057"
---
# <a name="odbc-driver-requirements-for-dynasets"></a>Requisiti dei driver ODBC per dynaset

Nelle classi di database ODBC MFC, dynaset sono Recordset le proprietà dinamiche. rimangano sincronizzati con l'origine dati in determinati modi. MFC dynaset (ma Recordset non forward-only) richiedono un driver ODBC con conformità API di livello 2. Se il driver per il [zdroj dat](../../data/odbc/data-source-odbc.md) è conforme all'API di livello 1 impostato, è comunque possibile utilizzare gli snapshot sia aggiornabili e read-only e Recordset forward-only, ma non dynaset. Tuttavia, un driver di livello 1 può supportare dynaset se supporta il recupero esteso e gestito da keyset dei cursori.

Nella terminologia di ODBC, dynaset e gli snapshot vengono definiti come cursori. Un cursore è un meccanismo utilizzato per tenere traccia della posizione in un recordset. Per altre informazioni sui requisiti dei driver per dynaset, vedere [Dynaset](../../data/odbc/dynaset.md). Per altre informazioni sui cursori, vedere la [Open Database Connectivity (ODBC)](/previous-versions/windows/desktop/ms710252) SDK nella documentazione MSDN.

> [!NOTE]
>  Per i recordset aggiornabile, il driver ODBC deve supportare entrambe le istruzioni per gli aggiornamenti posizionati o `::SQLSetPos` funzione API ODBC. Se entrambi sono supportati, MFC utilizza `::SQLSetPos` per migliorare l'efficienza. In alternativa, per gli snapshot, è possibile usare la libreria di cursori, che fornisce il supporto necessario per gli snapshot aggiornabili (i cursori statici e le istruzioni update posizionate).

## <a name="see-also"></a>Vedere anche

[Nozioni fondamentali su ODBC](../../data/odbc/odbc-basics.md)
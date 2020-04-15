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
ms.openlocfilehash: c612e8ea91882a6e744a8f47afe0decbeba85358
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367208"
---
# <a name="odbc-driver-requirements-for-dynasets"></a>Requisiti dei driver ODBC per dynaset

Nelle classi di database ODBC MFC, i dynaset sono recordset con proprietà dinamiche; rimangono sincronizzati con l'origine dati in determinati modi. I dynaset MFC (ma non solo i recordset forward-only) richiedono un driver ODBC con conformità API di livello 2. Se il driver per [l'origine dati](../../data/odbc/data-source-odbc.md) è conforme al set di API di livello 1, è comunque possibile utilizzare snapshot aggiornabili e di sola lettura e recordset forward-only, ma non dynaset. Tuttavia, un driver di livello 1 può supportare i dynaset se supporta il recupero esteso e i cursori basati su keyset.

Nella terminologia ODBC, i dynaset e gli snapshot vengono definiti cursori. Un cursore è un meccanismo utilizzato per tenere traccia della relativa posizione in un recordset. Per ulteriori informazioni sui requisiti dei driver per i dynaset, vedere [Dynaset](../../data/odbc/dynaset.md). Per ulteriori informazioni sui cursori, vedere l'SDK [Open Database Connectivity (ODBC)](/sql/odbc/microsoft-open-database-connectivity-odbc) nella documentazione MSDN.

> [!NOTE]
> Per i recordset aggiornabili, il driver ODBC deve supportare istruzioni di aggiornamento posizionate o la `::SQLSetPos` funzione API ODBC. Se entrambi sono supportati, MFC utilizza `::SQLSetPos` per l'efficienza. In alternativa, per gli snapshot, è possibile utilizzare la libreria di cursori, che fornisce il supporto necessario per gli snapshot aggiornabili (cursori statici e istruzioni di aggiornamento posizionate).

## <a name="see-also"></a>Vedere anche

[Nozioni di base su ODBCODBC Basics](../../data/odbc/odbc-basics.md)

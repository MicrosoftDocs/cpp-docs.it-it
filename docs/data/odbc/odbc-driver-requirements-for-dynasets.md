---
description: 'Ulteriori informazioni su: requisiti dei driver ODBC per dynaset'
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
ms.openlocfilehash: 9e72499eb500ae79248673e73b666bf535fcdcc0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97161013"
---
# <a name="odbc-driver-requirements-for-dynasets"></a>Requisiti dei driver ODBC per dynaset

Nelle classi di database ODBC MFC, i dynaset sono recordset con proprietà dinamiche; rimangono sincronizzati con l'origine dati in determinati modi. I dynaset MFC (ma non i recordset di tipo "inoltr") richiedono un driver ODBC con conformità API di livello 2. Se il driver per l' [origine dati](../../data/odbc/data-source-odbc.md) è conforme al set di API di livello 1, è comunque possibile usare sia gli snapshot aggiornabili che quelli di sola lettura, ma non i dynaset. Un driver di livello 1 può tuttavia supportare i dynaset se supporta il recupero esteso e i cursori gestiti da keyset.

Nella terminologia ODBC, i dynaset e gli snapshot vengono definiti cursori. Un cursore è un meccanismo utilizzato per tenere traccia della posizione in un recordset. Per ulteriori informazioni sui requisiti dei driver per i dynaset, vedere [Dynaset](../../data/odbc/dynaset.md). Per ulteriori informazioni sui cursori, vedere la documentazione relativa a [Open Database Connectivity (ODBC)](/sql/odbc/microsoft-open-database-connectivity-odbc) .

> [!NOTE]
> Per i recordset aggiornabili, il driver ODBC deve supportare le istruzioni UPDATE posizionate o la `::SQLSetPos` funzione API ODBC. Se entrambi sono supportati, MFC utilizza `::SQLSetPos` per migliorare l'efficienza. In alternativa, per gli snapshot, è possibile utilizzare la libreria di cursori, che fornisce il supporto necessario per gli snapshot aggiornabili (cursori statici e istruzioni di aggiornamento posizionate).

## <a name="see-also"></a>Vedi anche

[Nozioni fondamentali su ODBC](../../data/odbc/odbc-basics.md)

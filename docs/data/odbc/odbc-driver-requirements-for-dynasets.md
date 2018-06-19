---
title: Requisiti dei Driver ODBC per dynaset | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- ODBC recordsets, dynasets
- drivers, for dynasets
- drivers, ODBC
- recordsets, dynasets
- dynasets
- ODBC drivers, dynasets
ms.assetid: 585cc67b-4d92-404b-9903-d769cd17badc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: d9fad26440cea2c8ec2efd7d07dacb83547252e3
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33089233"
---
# <a name="odbc-driver-requirements-for-dynasets"></a>Requisiti dei driver ODBC per dynaset
Nelle classi di database ODBC MFC, i dynaset sono Recordset le proprietà dinamiche. rimangano sincronizzati con l'origine dati in determinati modi. I dynaset MFC (ma Recordset non forward-only) richiedono un driver ODBC con conformità API di livello 2. Se il driver per il [origine dati](../../data/odbc/data-source-odbc.md) è conforme all'API di 1 livello impostato, è possibile comunque utilizzare gli snapshot aggiornabili e sola lettura e Recordset forward-only, ma non i dynaset. Tuttavia, un driver di livello 1 possa supporta i dynaset se supporta il recupero esteso e basati su keyset.  
  
 Nella terminologia ODBC, dynaset e gli snapshot sono definiti per i cursori. Un cursore è un meccanismo utilizzato per tenere traccia della posizione in un recordset. Per ulteriori informazioni sui requisiti dei driver per dynaset, vedere [Dynaset](../../data/odbc/dynaset.md). Per ulteriori informazioni sui cursori, vedere il [Open Database Connectivity (ODBC)](https://msdn.microsoft.com/en-us/library/ms710252.aspx) SDK nella documentazione di MSDN.  
  
> [!NOTE]
>  Per i recordset aggiornabile, il driver ODBC deve supportare entrambe le istruzioni per gli aggiornamenti posizionati o **:: SQLSetPos** funzione API ODBC. Se entrambi sono supportati, MFC utilizza **:: SQLSetPos** per migliorare l'efficienza. In alternativa, per gli snapshot, è possibile utilizzare la libreria di cursori, che fornisce il supporto necessario per gli snapshot aggiornabili (cursori statici e istruzioni di aggiornamento posizionato).  
  
## <a name="see-also"></a>Vedere anche  
 [Nozioni fondamentali su ODBC](../../data/odbc/odbc-basics.md)
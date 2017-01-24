---
title: "Requisiti dei driver ODBC per dynaset | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "driver, per dynaset"
  - "driver, ODBC"
  - "dynaset"
  - "ODBC (driver), dynaset"
  - "recordset ODBC, dynaset"
  - "recordset, dynaset"
ms.assetid: 585cc67b-4d92-404b-9903-d769cd17badc
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Requisiti dei driver ODBC per dynaset
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Nelle classi di database ODBC MFC i dynaset rappresentano recordset con proprietà dinamiche che restano sincronizzati in qualche modo con l'origine dati.  I dynaset MFC, ma non i recordset forward\-only, richiedono un driver ODBC conforme all'API di livello 2.  Se il driver per l'[origine dati](../../data/odbc/data-source-odbc.md) è conforme all'API di livello 1, è comunque possibile utilizzare gli snapshot aggiornabili e in sola lettura e i recordset forward\-only, ma non i dynaset.  È tuttavia possibile che un driver di livello 1 supporti i dynaset, nel caso in cui supporti il recupero esteso e i cursori di tipo keyset.  
  
 Nella terminologia relativa a ODBC, i dynaset e gli snapshot sono definiti cursori.  Un cursore è un meccanismo utilizzato per tenere traccia della posizione in un recordset.  Per ulteriori informazioni sui requisiti dei driver per i dynaset, vedere [Dynaset](../../data/odbc/dynaset.md).  Per ulteriori informazioni sui cursori, vedere l'SDK [Open Database Connectivity \(ODBC\)](https://msdn.microsoft.com/en-us/library/ms710252.aspx) nella documentazione di MSDN.  
  
> [!NOTE]
>  Per i dynaset aggiornabili è necessario che il driver ODBC supporti le istruzioni per gli aggiornamenti posizionati o la funzione API ODBC **::SQLSetPos**.  Nel caso in cui siano supportati entrambi, MFC utilizza **::SQLSetPos** per ottenere prestazioni migliori.  In alternativa, per gli snapshot è possibile utilizzare la libreria di cursori, che fornisce il supporto necessario per gli snapshot aggiornabili \(cursori statici e istruzioni per l'aggiornamento posizionato\).  
  
## Vedere anche  
 [Nozioni fondamentali su ODBC](../../data/odbc/odbc-basics.md)
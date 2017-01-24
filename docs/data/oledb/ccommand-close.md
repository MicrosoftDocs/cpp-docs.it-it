---
title: "CCommand::Close | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CCommand.Close"
  - "CCommand::Close"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Close (metodo)"
ms.assetid: 4da9c02c-7082-4e47-a0fa-78b546f0f7d2
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CCommand::Close
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rilascia il rowset della funzione di accesso associato al comando.  
  
## Sintassi  
  
```  
void Close( );  
```  
  
## Note  
 Un comando utilizza un rowset, la funzione di accesso set di risultati ed eventualmente una funzione di accesso parametro a differenza delle tabelle, che non supportano i parametri e non necessitano di una funzione di accesso parametro\).  
  
 Quando si esegue un comando, è necessario chiamare sia `Close` che [ReleaseCommand](../../data/oledb/ccommand-releasecommand.md) dopo il comando.  
  
 Quando si desidera eseguire più volte lo stesso comando, è necessario rilasciare ogni funzione di accesso set di risultati chiamando `Close` prima di chiamare `Execute`.  Alla fine della serie, è necessario rilasciare la funzione di accesso di parametro chiamando `ReleaseCommand`.  Un altro scenario comune consiste nel chiamare una stored procedure con parametri di output.  In molti provider \(come il provider OLE DB per SQL Server\) i valori dei parametri di output non saranno accessibili fino alla chiusura della funzione di accesso set di risultati.  Chiamare `Close` per chiudere la funzione di accesso restituita al gruppo di risultati e rowset, ma non la funzione di accesso parametro, in modo che recuperare i valori dei parametri di output.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come chiamare `Close` e `ReleaseCommand` quando si esegue più volte lo stesso comando.  
  
 [!code-cpp[NVC_OLEDB_Consumer#2](../../data/oledb/codesnippet/CPP/ccommand-close_1.cpp)]  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CCommand](../../data/oledb/ccommand-class.md)   
 [CCommand::ReleaseCommand](../../data/oledb/ccommand-releasecommand.md)
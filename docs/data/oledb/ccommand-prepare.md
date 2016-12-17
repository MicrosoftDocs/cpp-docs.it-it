---
title: "CCommand::Prepare | Microsoft Docs"
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
  - "CCommand.Prepare"
  - "CCommand::Prepare"
  - "Prepare"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Prepare (metodo)"
ms.assetid: f0e473fc-2f7a-4d29-96c2-1328dc21e702
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CCommand::Prepare
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Convalida e ottimizza il comando corrente.  
  
## Sintassi  
  
```  
  
      HRESULT CCommandBase::Prepare(  
   ULONG cExpectedRuns = 0   
) throw( );  
```  
  
#### Parametri  
 *cExpectedRuns*  
 \[in\] numero di volte che si prevede di eseguire il comando.  
  
## Valore restituito  
 `HRESULT`standard.  
  
## Note  
 Questo metodo esegue il wrapping del metodo [ICommandPrepare::Prepare](https://msdn.microsoft.com/en-us/library/ms718370.aspx) oLE DB.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CCommand](../../data/oledb/ccommand-class.md)
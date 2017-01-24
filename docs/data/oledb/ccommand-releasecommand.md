---
title: "CCommand::ReleaseCommand | Microsoft Docs"
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
  - "CCommand.ReleaseCommand"
  - "ReleaseCommand"
  - "CCommand::ReleaseCommand"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ReleaseCommand (metodo)"
ms.assetid: 3b58230c-13d5-45c5-b43e-bb013ecc3019
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CCommand::ReleaseCommand
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Elimina la funzione di accesso parametro, quindi rilascia il comando stesso.  
  
## Sintassi  
  
```  
  
void CCommandBase::ReleaseCommand( ) throw( );  
  
```  
  
## Note  
 `ReleaseCommand` viene utilizzato insieme a **Chiudi**.  Vedere [Chiudi](../../data/oledb/ccommand-close.md) per i dettagli di utilizzo.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CCommand](../../data/oledb/ccommand-class.md)   
 [CCommand::Close](../../data/oledb/ccommand-close.md)
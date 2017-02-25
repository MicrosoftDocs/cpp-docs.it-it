---
title: "DEFINE_COMMAND_EX | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "DEFINE_COMMAND_EX"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DEFINE_COMMAND_EX (macro)"
ms.assetid: d3e2ef20-1455-46d2-8499-8ab84bbb90a4
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# DEFINE_COMMAND_EX
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica il comando che verrà utilizzato per creare il rowset quando si utilizza la classe di [CCommand](../../data/oledb/ccommand-class.md).  Supporto Unicode e applicazioni ANSI.  
  
## Sintassi  
  
```  
  
DEFINE_COMMAND_EX(  
x  
,   
wszCommand  
 )  
  
```  
  
#### Parametri  
 *x*  
 \[in\] nome della classe di record utente \(comando\).  
  
 `wszCommand`  
 \[in\] la stringa di comando che verrà utilizzata per creare il rowset quando si utilizza [CCommand](../../data/oledb/ccommand-class.md).  
  
## Note  
 La stringa di comando specificata sarà utilizzata come predefinito se non si specifica il testo del comando nel metodo di [CCommand::Open](../../data/oledb/ccommand-open.md).  
  
 Questa macro accetta le stringhe Unicode, indipendentemente dal tipo di applicazione.  Questa macro è preferibile rispetto a [DEFINE\_COMMAND](../../data/oledb/define-command.md) poiché supporta le applicazioni ANSI e Unicode.  
  
## Esempio  
 Vedere [BOOKMARK\_ENTRY](../../data/oledb/bookmark-entry.md).  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Macro e funzioni globali per modelli consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)
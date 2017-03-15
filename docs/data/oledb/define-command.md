---
title: "DEFINE_COMMAND | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "DEFINE_COMMAND"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DEFINE_COMMAND (macro)"
ms.assetid: 9d724968-e242-413c-9a13-e7175fccf9b1
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# DEFINE_COMMAND
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica il comando che verrà utilizzato per creare il rowset quando si utilizza la classe di [CCommand](../../data/oledb/ccommand-class.md).  Accetta solo i tipi di stringa che corrispondono al tipo di applicazione specificato \(ANSI o Unicode.  
  
> [!NOTE]
>  Si consiglia di utilizzare [DEFINE\_COMMAND\_EX](../../data/oledb/define-command-ex.md) anziché `DEFINE_COMMAND`.  
  
## Sintassi  
  
```  
  
DEFINE_COMMAND(  
x  
,   
szCommand  
 )  
  
```  
  
#### Parametri  
 *x*  
 \[in\] nome della classe di record utente \(comando\).  
  
 `szCommand`  
 \[in\] la stringa di comando che verrà utilizzata per creare il rowset quando si utilizza [CCommand](../../data/oledb/ccommand-class.md).  
  
## Note  
 La stringa di comando specificata sarà utilizzata come predefinito se non si specifica il testo del comando nel metodo di [CCommand::Open](../../data/oledb/ccommand-open.md).  
  
 Questa macro accetta le stringhe ANSI se si compila l'applicazione come ANSI, o le stringhe Unicode se si compila l'applicazione come Unicode.  Si consiglia di utilizzare [DEFINE\_COMMAND\_EX](../../data/oledb/define-command-ex.md) anziché `DEFINE_COMMAND`, perché il primo accetta le stringhe Unicode, indipendentemente dall'ANSI o dal tipo di applicazione Unicode.  
  
## Esempio  
 Vedere [BOOKMARK\_ENTRY](../../data/oledb/bookmark-entry.md).  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Macro e funzioni globali per modelli consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)
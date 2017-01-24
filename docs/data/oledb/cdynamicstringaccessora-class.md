---
title: "Classe CDynamicStringAccessorA | Microsoft Docs"
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
  - "CDynamicStringAccessorA"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDynamicStringAccessorA (classe)"
ms.assetid: ed0d9821-a655-41f1-a902-43c3042ac49c
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CDynamicStringAccessorA
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Consente di accedere a un'origine dati quando non si conosce lo schema di database \(struttura sottostante.  
  
## Sintassi  
  
```  
typedef CDynamicStringAccessorT<CHAR, DBTYPE_STR> CDynamicStringAccessorA;  
```  
  
## Note  
 Entrambe richiesta che la raccolta di provider tutti i dati utilizzati dall'archivio dati in formato stringa, ma `CDynamicStringAccessor` richiede dati della stringa ANSI.  
  
 `CDynamicStringAccessorA` eredita **GetString** e `SetString` da `CDynamicStringAccessor`.  Quando si utilizzano questi metodi in `CDynamicStringAccessorA` oggetto, ***BaseType*** è **CHAR**.  
  
## Requisiti  
 **Intestazione**: atldbcli.h  
  
## Vedere anche  
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)   
 [Classe CAccessor](../../data/oledb/caccessor-class.md)   
 [Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)   
 [Classe CManualAccessor](../../data/oledb/cmanualaccessor-class.md)   
 [Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)   
 [Classe CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md)
---
title: "Classe CManualAccessor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::CManualAccessor"
  - "ATL.CManualAccessor"
  - "CManualAccessor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CManualAccessor (classe)"
ms.assetid: a0088074-7135-465c-b228-69097a50b8cc
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# Classe CManualAccessor
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta un tipo di funzione di accesso progettato per un utilizzo avanzato.  
  
## Sintassi  
  
```  
class CManualAccessor : public CAccessorBase  
```  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[AddBindEntry](../../data/oledb/cmanualaccessor-addbindentry.md)|Aggiunge una voce di associazione alle colonne di output.|  
|[AddParameterEntry](../../data/oledb/cmanualaccessor-addparameterentry.md)|Aggiunge una voce di parametro alla funzione di accesso parametro.|  
|[CreateAccessor](../../data/oledb/cmanualaccessor-createaccessor.md)|Alloca memoria per l'associazione delle colonne struttura e inizializza i membri dati della colonna.|  
|[CreateParameterAccessor](../../data/oledb/cmanualaccessor-createparameteraccessor.md)|Alloca memoria per l'associazione di parametro struttura e inizializza i membri dati di parametro.|  
  
## Note  
 Utilizzando `CManualAccessor`, è possibile specificare l'associazione delle colonne di output e di parametro dalle chiamate di funzione in fase di esecuzione.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [DBViewer](../../top/visual-cpp-samples.md)   
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)   
 [Classe CAccessor](../../data/oledb/caccessor-class.md)   
 [Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)   
 [Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)
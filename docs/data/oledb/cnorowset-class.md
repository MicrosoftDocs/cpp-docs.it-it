---
title: "Classe CNoRowset | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.CNoRowset"
  - "ATL::CNoRowset<TAccessor>"
  - "CNoRowset"
  - "ATL.CNoRowset<TAccessor>"
  - "ATL::CNoRowset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CNoRowset (classe)"
ms.assetid: 55c6c7a4-9e3a-4775-a2dd-c8b333012fa6
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Classe CNoRowset
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Può essere utilizzato come argomento di modello \(`TRowset`\) per [CCommand](../../data/oledb/ccommand-class.md) o [CTable](../../data/oledb/ctable-class.md).  
  
## Sintassi  
  
```  
template <class TAccessor = CAccessorBase>  
class CNoRowset  
```  
  
#### Parametri  
 `TAccessor`  
 Una classe di funzione di accesso.  Il valore predefinito è `CAccessorBase`.  
  
## Note  
 Utilizzare `CNoRowset` come argomento di modello se il comando non restituisce un rowset.  
  
 `CNoRowset` implementa i metodi stub, ognuno dei quali corrispondono agli altri metodi della classe di funzioni di accesso:  
  
-   **BindFinished** \- indica quando l'associazione è completo \(restituisce `S_OK`\).  
  
-   **Chiudi** \- Righe delle versioni e l'interfaccia IRowset corrente.  
  
-   `GetIID` \- recupera l'id di interfaccia di un punto di connessione.  
  
-   **GetInterface** \- recupera un'interfaccia.  
  
-   `GetInterfacePtr` \- recupera un puntatore a interfaccia incapsulato.  
  
-   **SetAccessor** \- set un puntatore alla funzione di accesso.  
  
-   **SetupOptionalRowsetInterfaces** \- setup interfacce facoltative per il rowset.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)
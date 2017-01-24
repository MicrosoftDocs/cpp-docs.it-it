---
title: "db_accessor | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.db_accessor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "db_accessor attribute"
ms.assetid: ec407a9f-24d7-4822-96d4-7cc6a0301815
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# db_accessor
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

gruppi **db\_column** attributi che partecipano a l  `IAccessor`associazione basata.  
  
## Sintassi  
  
```  
  
      [ db_accessor(   
   num,   
   auto   
) ]  
```  
  
#### Parametri  
 *num*  
 Specifica il numero della funzione di accesso \(un intero in base zero\).  È necessario specificare i numeri della funzione di accesso in ordine crescente, utilizzando Integer o dei valori definiti.  
  
 *autoidentificatori*  
 Valore booleano che specifica se la funzione di accesso viene recuperata automaticamente \(**TRUE**\) o non recuperato \(**FALSE**\).  
  
## Note  
 **db\_accessor** definisce la funzione di accesso sottostante OLE DB per le successive  **db\_column** e  **db\_param** attributi all'interno della stessa classe o della funzione.  **db\_accessor** è utile a livello di membro e viene utilizzato per raggruppare  **db\_column** attributi che partecipano a OLE DB  `IAccessor`associazione basata.  Viene utilizzato insieme a uno **db\_table** o  **db\_command** attributi.  Chiamare questo attributo è simile alla chiamata [BEGIN\_ACCESSOR](../data/oledb/begin-accessor.md) e  [END\_ACCESSOR](../data/oledb/end-accessor.md) macro.  
  
 **db\_accessor** genera un rowset e associa ai mapping corrispondenti della funzione di accesso.  Se non si chiama **db\_accessor**, la funzione di accesso 0 verrà automaticamente generata e tutte le associazioni delle colonne verrà eseguito il mapping a questo blocco della funzione di accesso.  
  
 **db\_accessor** raggruppa le associazioni delle colonne del database in uno o più funzioni di accesso.  Per una discussione degli scenari in cui è necessario utilizzare le funzioni di accesso, vedere [Utilizzo di più funzioni di accesso per un rowset](../data/oledb/using-multiple-accessors-on-a-rowset.md).  Vedere anche “supporto di record utente per più funzioni di accesso„ in [Record utente](../data/oledb/user-records.md).  
  
 Quando il provider di tipo consumer di attributo applicato questo attributo a una classe, il compilatore la classe a \_*TheClassName*funzione di accesso, dove *TheClassName* è il nome assegnato alla classe e il compilatore inoltre creata una classe denominata *TheClassName,* quale deriva da \_*TheClassName*funzione di accesso.  In Visualizzazione classi, verranno visualizzate entrambe le classi.  
  
## Esempio  
 Nell'esempio seguente viene utilizzato **db\_accessor** per raggruppare le colonne della tabella Orders del database Northwind in due funzioni di accesso.  La funzione di accesso 0 è una funzione di accesso automatico e la funzione di accesso 1 non è.  
  
```  
// cpp_attr_ref_db_accessor.cpp  
// compile with: /LD /link /OPT:NOREF  
#define _ATL_ATTRIBUTES  
#include <atlbase.h>  
#include <atldbcli.h>  
  
[ db_command(L"SELECT LastName, FirstName FROM Orders") ]  
class CEmployees {  
public:  
   [ db_accessor(0, TRUE) ];  
   [ db_column("1") ] LONG m_OrderID;  
   [ db_column("2") ] TCHAR m_CustomerID[6];  
   [ db_column("4") ] DBTIMESTAMP m_OrderDate;   
  
   [ db_accessor(1, FALSE) ];  
   [ db_column("8") ] CURRENCY m_Freight;  
};  
```  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|blocchi di attributi|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|Nessuno|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [OLE DB Consumer Attributes](../windows/ole-db-consumer-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)
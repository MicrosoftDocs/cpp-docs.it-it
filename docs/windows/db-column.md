---
title: "db_column | Microsoft Docs"
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
  - "vc-attr.db_column"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "db_column attribute"
ms.assetid: 58da4afc-f69c-4ae6-af9a-3f9515f56081
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# db_column
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Associa una colonna specificata a una variabile nel rowset.  
  
## Sintassi  
  
```  
  
      [ db_column(   
   ordinal,   
   dbtype,   
   precision,   
   scale,   
   status,   
   length   
) ]  
```  
  
#### Parametri  
 `ordinal`  
 il numero di colonne ordinale \(**DBCOLUMNINFO** ordinale\) o nome della colonna \(ANSI o stringa Unicode\) che corrisponde a un campo del rowset che per l'associazione dati.  Se si utilizzano i numeri, è possibile ignorare gli ordinali consecutivi \(ad esempio: 1, 2, 3, 5\).  Il nome può contenere spazi se il provider OLE DB si utilizza i contenuti multimediali.  Ad esempio, è possibile utilizzare uno dei seguenti formati:  
  
```  
[db_column("2")] TCHAR szCity[30];  
[db_column(L"city_name")] TCHAR szCity[30];  
```  
  
 *dbtype* \(facoltativo\)  
 Un OLE DB [Indicatore del tipo](https://msdn.microsoft.com/en-us/library/ms711251.aspx) per la voce della colonna.  
  
 *precisione* \(facoltativo\)  
 La precisione da utilizzare per la voce della colonna.  Per informazioni dettagliate, vedere la descrizione di `bPrecision` elemento di  [struttura di DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx)  
  
 *ridimensionamento* \(facoltativo\)  
 La scala da utilizzare per la voce della colonna.  Per informazioni dettagliate, vedere la descrizione di `bScale` elemento di  [struttura di DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx)  
  
 *lo stato* \(facoltativo\)  
 Una variabile membro utilizzato per utilizzare lo stato di questa colonna.  Lo stato indica se il valore della colonna è un valore di dati o un altro valore, ad esempio **NULL**.  per i valori possibili, vedere [lo stato](https://msdn.microsoft.com/en-us/library/ms722617.aspx) in OLE DB Programmer's Reference.  
  
 *durata* \(facoltativo\)  
 Una variabile membro utilizzato per utilizzare la dimensione della colonna in byte.  
  
## Note  
 **db\_column** associa la colonna della tabella specificata a una variabile nel rowset.  Delimita i dati dei membri che possono partecipare a OLE DB `IAccessor`associazione basata.  Questo attributo è installato la mappa delle colonne in genere definita utilizzando le macro consumer OLE DB [BEGIN\_COLUMN\_MAP](../data/oledb/begin-column-map.md),  [END\_COLUMN\_MAP](../data/oledb/end-column-map.md)e  [COLUMN\_ENTRY](../data/oledb/column-entry.md).  Questi cambiano OLE DB [struttura di DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx) per associare la colonna specificata.  Ogni membro di segnate con **db\_column** l'attributo occuperà una voce nella mappa delle colonne sotto forma di voce della colonna.  Di conseguenza, si chiama questo attributo in cui viene inserita la mappa delle colonne, ovvero, nella classe di comando o di tabella.  
  
 utilizzo **db\_column** insieme a uno  [db\_table](../windows/db-table.md) o  [db\_command](../windows/db-command.md) attributi.  
  
 Quando il provider di tipo consumer di attributo applicato questo attributo a una classe, il compilatore la classe a \_*TheClassName*funzione di accesso, dove *TheClassName* è il nome assegnato alla classe e il compilatore inoltre creata una classe denominata *TheClassName,* quale deriva da \_*TheClassName*funzione di accesso.  In Visualizzazione classi, verranno visualizzate entrambe le classi.  
  
 Per esempi di questo attributo utilizzato in un'applicazione, vedere gli esempi [AtlAgent](http://msdn.microsoft.com/it-it/52bef5da-c1a0-4223-b4e6-9e464b6db409)e  [MultiRead](http://msdn.microsoft.com/it-it/5a2a915a-77dc-492f-94b2-1b809995dd5e).  
  
## Esempio  
 Questo esempio si associa una colonna in una tabella a un oggetto **tempo** il membro dati e specificare i campi di stato e di lunghezza.  
  
```  
// db_column_1.cpp  
// compile with: /LD  
#include <atlbase.h>  
#include <atlplus.h>  
#include <atldbcli.h>  
  
[ db_command(L"Select * from Products") ]  
class CProducts {  
   DBSTATUS m_dwProductIDStatus;  
   DBLENGTH m_dwProductIDLength;  
  
   [ db_column("1", status="m_dwProductIDStatus", length="m_dwProductIDLength") ] LONG m_ProductID;  
};  
```  
  
## Esempio  
 Nell'esempio viene associato quattro colonne a un oggetto **tempo**, una stringa di caratteri, un timestamp e  **DB\_NUMERIC** Integer, in questo ordine.  
  
```  
// db_column_2.cpp  
// compile with: /LD  
#include <atlbase.h>  
#include <atlplus.h>  
#include <atldbcli.h>  
  
[ db_command(L"Select * from Products") ]  
class CProducts {  
   [db_column("1")] LONG m_OrderID;  
   [db_column("2")] TCHAR m_CustomerID[6];  
   [db_column("4")] DB_NUMERIC m_OrderDate;     
   [db_column("7", dbtype="DBTYPE_NUMERIC")] DB_NUMERIC m_ShipVia;  
};  
```  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe**,  `struct`, membro, metodo|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|Nessuno|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [OLE DB Consumer Attributes](../windows/ole-db-consumer-attributes.md)   
 [Class Attributes](../windows/class-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)
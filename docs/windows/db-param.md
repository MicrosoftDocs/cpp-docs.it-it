---
title: "db_param | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.db_param"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "db_param attribute"
ms.assetid: a28315f5-4722-459e-92ef-32e83c0b205a
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# db_param
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Associa la variabile membro specificato con un input o di output e delimita la variabile.  
  
## Sintassi  
  
```  
  
      [ db_param(   
   ordinal,   
   paramtype="DBPARAMIO_INPUT",   
   dbtype,   
   precision,   
   scale,   
   status,   
   length  
) ]  
```  
  
#### Parametri  
 `ordinal`  
 Il numero delle colonne**DBCOLUMNINFO** ordinale\) che corrisponde a un campo del rowset che per l'associazione dati.  
  
 *paramtype* \(facoltativo\)  
 Il tipo da impostare per il parametro.  I provider supportano solo i tipi di parametro I\/O supportati dall'origine dati sottostante.  il tipo è una combinazione di uno o più **DBPARAMIOENUM** valori:  
  
-   **DBPARAMIO\_INPUT** un parametro di input.  
  
-   **DBPARAMIO\_OUTPUT** un parametro di output.  
  
-   **DBPARAMIO\_NOTPARAM** La funzione di accesso non dispone di parametri.  impostare **eParamIO** in questo valore nella riga le funzioni di accesso e riproposta all'utente che i parametri vengono ignorati.  
  
 *dbtype* \(facoltativo\)  
 Un OLE DB [Indicatore del tipo](https://msdn.microsoft.com/en-us/library/ms711251.aspx) per la voce della colonna.  
  
 *precisione* \(facoltativo\)  
 La precisione da utilizzare per la voce della colonna.  Per informazioni dettagliate, vedere la descrizione di **bPrecision** elemento di  [struttura di DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx)  
  
 *ridimensionamento* \(facoltativo\)  
 La scala da utilizzare per la voce della colonna.  Per informazioni dettagliate, vedere la descrizione di **bScale** elemento di  [struttura di DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx)  
  
 *lo stato* \(facoltativo\)  
 Una variabile membro utilizzato per utilizzare lo stato di questa colonna.  Lo stato indica se il valore della colonna è un valore di dati o un altro valore, ad esempio **NULL**.  per i valori possibili, vedere [lo stato](https://msdn.microsoft.com/en-us/library/ms722617.aspx) in OLE DB Programmer's Reference.  
  
 *durata* \(facoltativo\)  
 Una variabile membro utilizzato per utilizzare la dimensione della colonna in byte.  
  
## Note  
 **db\_param** definisce i parametri utilizzati nei controlli; quindi si utilizzano  **db\_command**.  Ad esempio, è possibile utilizzare **db\_param** i parametri di correlazione nelle query SQL o stored procedure.  I parametri in una stored procedure sono mostrati i punti interrogativi \(?\) ed è necessario associare i membri dati nell'ordine in cui i parametri vengono visualizzati.  
  
 **db\_param** delimita i dati dei membri che possono partecipare a OLE DB  `ICommandWithParameters`associazione basata.  Imposta il tipo di parametro \(di input o di output\), il tipo di OLE DB, la precisione, scala, lo stato e la lunghezza per il parametro specificato.  Questo attributo consente di inserire le macro BEGIN\_PARAM\_MAP… consumer OLE DB  END\_PARAM\_MAP.  Ogni membro di segnate con **db\_param** l'attributo occuperà una voce nella mappa sotto forma COLUMN\_ENTRY.  
  
 **db\_param** viene utilizzato insieme a uno  [db\_table](../windows/db-table.md) o  [db\_command](../windows/db-command.md) attributi.  
  
 Quando il provider di tipo consumer di attributo applicato questo attributo a una classe, il compilatore la classe a \_*TheClassName*funzione di accesso, dove *TheClassName* è il nome assegnato alla classe e il compilatore inoltre creata una classe denominata *TheClassName,* quale deriva da \_*TheClassName*funzione di accesso.  In Visualizzazione classi, verranno visualizzate entrambe le classi.  
  
## Esempio  
 Nell'esempio seguente viene creata una classe di comando basata sulla stored procedure di SalesbyYear nel database Northwind.  Associa il primo parametro nella stored procedure con `m_RETURN_VALUE` la variabile e lo definisce come parametro di output.  Associa gli ultimi due parametri di input \(\) con `m_Beginning_Date` e  `m_Ending_Date`.  
  
 Nell'esempio associato `nOutput` variabile con un parametro di output.  
  
```  
// db_param.cpp  
// compile with: /LD  
#include <atlbase.h>  
#include <atlplus.h>  
#include <atldbcli.h>  
  
[ db_source(L"my_connection_string"),   
  db_command(L"{ ? = CALL dbo.\"Sales by Year\"(?,?) }")   
]  
struct CSalesbyYear {  
   DBSTATUS m_dwShippedDateStatus;  
   DBSTATUS m_dwOrderIDStatus;  
   DBSTATUS m_dwSubtotalStatus;  
   DBSTATUS m_dwYearStatus;  
  
   DBLENGTH m_dwShippedDateLength;  
   DBLENGTH m_dwOrderIDLength;  
   DBLENGTH m_dwSubtotalLength;  
   DBLENGTH m_dwYearLength;  
  
   // Bind columns  
   [ db_column("1", status="m_dwShippedDateStatus", length="m_dwShippedDateLength") ] DBTIMESTAMP m_ShippedDate;  
   [ db_column("2", status="m_dwOrderIDStatus", length="m_dwOrderIDLength") ] LONG m_OrderID;  
   [ db_column("3", status="m_dwSubtotalStatus", length="m_dwSubtotalLength") ] CURRENCY m_Subtotal;  
   [ db_column("4", status="m_dwYearStatus", length="m_dwYearLength") ] TCHAR m_Year[31];  
  
   // Bind parameters  
   [ db_param("1", paramtype="DBPARAMIO_OUTPUT") ] LONG m_RETURN_VALUE;  
   [ db_param("2", paramtype="DBPARAMIO_INPUT") ] DBTIMESTAMP m_Beginning_Date;  
   [ db_param("3", paramtype="DBPARAMIO_INPUT") ] DBTIMESTAMP m_Ending_Date;  
};  
```  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe**,  `struct`, membro, metodo, locale|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|Nessuno|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [OLE DB Consumer Attributes](../windows/ole-db-consumer-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)
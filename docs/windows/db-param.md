---
title: db_param | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- vc-attr.db_param
dev_langs:
- C++
helpviewer_keywords:
- db_param attribute
ms.assetid: a28315f5-4722-459e-92ef-32e83c0b205a
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b5224c406f6e10cd4ef9f0ed64fbdbd7c5cc8e62
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="dbparam"></a>db_param
Associa la variabile membro a un parametro di input o output e delimita la variabile.  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 `ordinal`  
 Il numero di colonna (**DBCOLUMNINFO** ordinale) corrispondente a un campo nel set di righe a cui associare i dati.  
  
 *ParamType* (facoltativo)  
 Il tipo da impostare per il parametro. Provider supportano solo i tipi dei / o di parametro supportati dall'origine dati sottostante. Il tipo è una combinazione di uno o più **DBPARAMIOENUM** valori:  
  
-   **DBPARAMIO_INPUT** Parametro di input.  
  
-   **DBPARAMIO_OUTPUT** Parametro di output.  
  
-   **DBPARAMIO_NOTPARAM** La funzione di accesso non dispone di parametri. Impostazione **eParamIO** su questo valore nella riga delle funzioni di accesso ricorda all'utente che i parametri vengono ignorati.  
  
 *DbType* (facoltativo)  
 OLE DB [indicatore del tipo](https://msdn.microsoft.com/en-us/library/ms711251.aspx) per la voce di colonna.  
  
 *precisione* (facoltativo)  
 La precisione deve essere utilizzato per la voce di colonna. Per informazioni dettagliate, vedere la descrizione di **bPrecision** elemento il [struttura DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx)  
  
 *scala* (facoltativo)  
 Scala da utilizzare per la voce di colonna. Per informazioni dettagliate, vedere la descrizione di **bScale** elemento il [struttura DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx)  
  
 *stato* (facoltativo)  
 Una variabile membro utilizzata per contenere lo stato di questa colonna. Lo stato indica se il valore della colonna è un valore di dati o un altro valore, ad esempio **NULL**. Per i valori possibili, vedere [stato](https://msdn.microsoft.com/en-us/library/ms722617.aspx) nel *riferimento per programmatori OLE DB*.  
  
 *lunghezza* (facoltativo)  
 Una variabile membro utilizzata per contenere le dimensioni della colonna in byte.  
  
## <a name="remarks"></a>Note  
 **db_param** definisce i parametri che si utilizza nei comandi; pertanto viene usata con **db_command**. Ad esempio, è possibile utilizzare **db_param** per associare i parametri nella query SQL o stored procedure. I parametri in una stored procedure sono contrassegnati da punti interrogativi (?) e associare i membri dati nell'ordine in cui vengono visualizzati i parametri.  
  
 **db_param** delimita i dati dei membri che possono partecipare in OLE DB `ICommandWithParameters`-associazione di base. Imposta il tipo di parametro (di input o output), tipo OLE DB, precisione, scala, stato e lunghezza per il parametro specificato. Questo attributo consente di inserire le macro di consumer OLE DB BEGIN_PARAM_MAP... END_PARAM_MAP. Ogni membro si contrassegna con il **db_param** attributo occupano una voce nella mappa sotto forma di un COLUMN_ENTRY.  
  
 **db_param** viene usato in combinazione con il [db_table](../windows/db-table.md) o [db_command](../windows/db-command.md) attributi.  
  
 Quando il provider di attributi del consumer si applica questo attributo a una classe, il compilatore Rinomina la classe per \_ *NomeClasse*funzione di accesso, in cui *NomeClasse* è il nome assegnato il classe e il compilatore creerà inoltre una classe denominata *NomeClasse*, che deriva da \_ *NomeClasse*della funzione di accesso.  In Visualizzazione classi verranno visualizzate entrambe le classi.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene creata una classe di comando basata sulla procedura SalesbyYear archiviati nel database Northwind. Associa il primo parametro nella stored procedure con il `m_RETURN_VALUE` variabile e definisce come un parametro di output. Associa gli ultimi due parametri (inpui) con `m_Beginning_Date` e `m_Ending_Date`.  
  
 Nell'esempio seguente il `nOutput` variabile con un parametro di output.  
  
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
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe**, `struct`, membro, metodo, locale|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi del consumer OLE DB](../windows/ole-db-consumer-attributes.md)   

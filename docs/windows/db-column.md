---
title: db_column | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.db_column
dev_langs:
- C++
helpviewer_keywords:
- db_column attribute
ms.assetid: 58da4afc-f69c-4ae6-af9a-3f9515f56081
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 35ab2472ac9e46b620ca735d06b23806126871e0
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33879633"
---
# <a name="dbcolumn"></a>db_column
Associa una colonna specificata a una variabile nel set di righe.  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 `ordinal`  
 Il numero ordinale di colonna (**DBCOLUMNINFO** ordinale) o nome di colonna (stringa ANSI o Unicode) corrispondente a un campo nel set di righe a cui associare i dati. Se si utilizzano numeri, è possibile ignorare gli ordinali consecutivi (ad esempio: 1, 2, 3, 5). Se il provider OLE DB che si utilizza lo supporta, il nome può contenere spazi. Ad esempio, è possibile utilizzare uno dei formati seguenti:  
  
```  
[db_column("2")] TCHAR szCity[30];  
[db_column(L"city_name")] TCHAR szCity[30];  
```  
  
 *DbType* (facoltativo)  
 OLE DB [indicatore del tipo](https://msdn.microsoft.com/en-us/library/ms711251.aspx) per la voce di colonna.  
  
 *precisione* (facoltativo)  
 La precisione deve essere utilizzato per la voce di colonna. Per informazioni dettagliate, vedere la descrizione del `bPrecision` elemento del [struttura DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx)  
  
 *scala* (facoltativo)  
 Scala da utilizzare per la voce di colonna. Per informazioni dettagliate, vedere la descrizione del `bScale` elemento del [struttura DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx)  
  
 *stato* (facoltativo)  
 Una variabile membro utilizzata per contenere lo stato di questa colonna. Lo stato indica se il valore della colonna è un valore di dati o un altro valore, ad esempio **NULL**. Per i valori possibili, vedere [stato](https://msdn.microsoft.com/en-us/library/ms722617.aspx) nel *riferimento per programmatori OLE DB*.  
  
 *lunghezza* (facoltativo)  
 Una variabile membro utilizzata per contenere le dimensioni della colonna in byte.  
  
## <a name="remarks"></a>Note  
 **db_column** associa la colonna di tabella specificata a una variabile nel set di righe. Delimita i dati dei membri che possono partecipare in OLE DB `IAccessor`-associazione di base. Questo attributo imposta la mappa delle colonne in genere definita tramite le macro del consumer OLE DB [BEGIN_COLUMN_MAP](../data/oledb/begin-column-map.md), [END_COLUMN_MAP](../data/oledb/end-column-map.md), e [COLUMN_ENTRY](../data/oledb/column-entry.md). Questi modificare OLE DB [struttura DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx) da associare alla colonna specificata. Ogni membro si contrassegna con il **db_column** attributo occupano una voce nella mappa colonne sotto forma di una voce di colonna. Pertanto, si chiama questo attributo in cui inserire la mappa delle colonne, ovvero nella classe di comando o tabella.  
  
 Utilizzare **db_column** in combinazione con il [db_table](../windows/db-table.md) o [db_command](../windows/db-command.md) attributi.  
  
 Quando il provider di attributi del consumer si applica questo attributo a una classe, il compilatore Rinomina la classe per \_ *NomeClasse*funzione di accesso, in cui *NomeClasse* è il nome assegnato il classe e il compilatore creerà inoltre una classe denominata *NomeClasse*, che deriva da \_ *NomeClasse*della funzione di accesso.  In Visualizzazione classi verranno visualizzate entrambe le classi.  
  
 Per esempi di questo attributo in un'applicazione, vedere gli esempi [AtlAgent](http://msdn.microsoft.com/en-us/52bef5da-c1a0-4223-b4e6-9e464b6db409), e [MultiRead](http://msdn.microsoft.com/en-us/5a2a915a-77dc-492f-94b2-1b809995dd5e).  
  
## <a name="example"></a>Esempio  
 In questo esempio associa una colonna in una tabella per un **lungo** (membro dati) e specifica i campi stato e lunghezza.  
  
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
  
## <a name="example"></a>Esempio  
 In questo esempio associa quattro colonne a un **lungo**, una stringa di caratteri, un timestamp e un **DB_NUMERIC** integer, nell'ordine specificato.  
  
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
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe**, `struct`, membro, metodo|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi del Consumer OLE DB](../windows/ole-db-consumer-attributes.md)   
 [Attributi di classe](../windows/class-attributes.md)   

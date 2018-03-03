---
title: db_table | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- vc-attr.db_table
dev_langs:
- C++
helpviewer_keywords:
- db_table attribute
ms.assetid: ff9eb957-4e6d-4175-afcc-fd8ea916cec0
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 37dd6fd80a0d18f1b9d93f5299fca797238a509f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="dbtable"></a>db_table
Verrà visualizzata una tabella OLE DB.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ db_table(   
   db_table,   
   name,   
   source_name,   
   hresult   
) ]  
```  
  
#### <a name="parameters"></a>Parametri  
 *db_table*  
 Stringa che specifica il nome di una tabella di database (ad esempio, "prodotti").  
  
 *name* (facoltativo)  
 Il nome dell'handle consentono di lavorare con la tabella. È necessario specificare questo parametro se si desidera restituire più righe di risultati. **db_table** genera una variabile con il parametro specificato *nome* che può essere utilizzato per scorrere il set di righe o eseguire più query.  
  
 *source_name* (facoltativo)  
 La variabile `CSession` o l'istanza di una classe a cui è applicato l'attributo `db_source` con cui viene eseguito il comando. Vedere [db_source](../windows/db-source.md).  
  
 `hresult` (facoltativo)  
 Identifica la variabile che riceverà il `HRESULT` di questo comando di database. Se la variabile non esiste, verrà automaticamente inserita dall'attributo.  
  
## <a name="remarks"></a>Note  
 **db_table** crea un [CTable](../data/oledb/ctable-class.md) oggetto, che viene utilizzato da un consumer OLE DB per aprire una tabella. È possibile utilizzare questo attributo solo a livello di classe; non può essere utilizzato in linea. Utilizzare **db_column** per associare le colonne della tabella a variabili; utilizzare **db_param** per delimitare (impostato il tipo di parametro, quindi sulla) dei parametri.  
  
 Quando il provider di attributi del consumer si applica questo attributo a una classe, il compilatore Rinomina la classe per \_ *NomeClasse*funzione di accesso, in cui *NomeClasse* è il nome assegnato il classe e il compilatore creerà inoltre una classe denominata *NomeClasse*, che deriva da \_ *NomeClasse*della funzione di accesso.  In Visualizzazione classi verranno visualizzate entrambe le classi.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene visualizzata la tabella di prodotti per l'utilizzo da `CProducts`.  
  
```  
// db_table.cpp  
// compile with: /LD  
#include <atlbase.h>  
#include <atlplus.h>  
#include <atldbcli.h>  
  
[ db_table(L"dbo.Products") ]  
class CProducts {  
   [ db_column("1") ] LONG m_ProductID;  
};  
```  
  
 Per un esempio di questo attributo in un'applicazione, vedere gli esempi [AtlAgent](http://msdn.microsoft.com/en-us/52bef5da-c1a0-4223-b4e6-9e464b6db409) e [MultiRead](http://msdn.microsoft.com/en-us/5a2a915a-77dc-492f-94b2-1b809995dd5e).  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**class**, `struct`|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi del consumer OLE DB](../windows/ole-db-consumer-attributes.md)   

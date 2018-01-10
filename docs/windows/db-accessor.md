---
title: db_accessor | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: vc-attr.db_accessor
dev_langs: C++
helpviewer_keywords: db_accessor attribute
ms.assetid: ec407a9f-24d7-4822-96d4-7cc6a0301815
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5faa84773fbf1fe15fd0223c97f0361f1215b149
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="dbaccessor"></a>db_accessor
Gruppi **db_column** gli attributi che fanno parte di `IAccessor`-associazione di base.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ db_accessor(   
   num,   
   auto   
) ]  
```  
  
#### <a name="parameters"></a>Parametri  
 *num*  
 Specifica il numero delle funzioni di accesso (un indice intero in base zero). È necessario specificare numeri di funzione di accesso in ordine crescente d'ordine, usando interi o valori definiti.  
  
 *auto*  
 Un valore booleano che specifica se la funzione di accesso viene recuperato automaticamente (**TRUE**) o non recuperati (**FALSE**).  
  
## <a name="remarks"></a>Note  
 **db_accessor** definisce la funzione di accesso OLE DB sottostanti per le successive **db_column** e **db_param** attributi all'interno della stessa classe o funzione. **db_accessor** è utilizzabile a livello di membro e viene utilizzata al gruppo **db_column** gli attributi che fanno parte di OLE DB `IAccessor`-associazione di base. Viene utilizzato in combinazione con il **db_table** o **db_command** attributi. La chiamata di questo attributo è simile alla chiamata di [BEGIN_ACCESSOR](../data/oledb/begin-accessor.md) e [END_ACCESSOR](../data/oledb/end-accessor.md) macro.  
  
 **db_accessor** genera un set di righe e li associa ai mapping di funzione di accesso corrispondente. Se non si chiama **db_accessor**, funzione di accesso 0 verrà automaticamente generato e tutte le associazioni di colonna verranno mappate a questo blocco di funzione di accesso.  
  
 **db_accessor** gruppi di associazioni di colonna all'interno di uno o più funzioni di accesso del database. Per una descrizione degli scenari in cui è necessario utilizzare più funzioni di accesso, vedere [utilizzo di più funzioni di accesso per un Rowset](../data/oledb/using-multiple-accessors-on-a-rowset.md). Vedere anche "Utente Record supporto per più funzioni di accesso" in [record utente](../data/oledb/user-records.md).  
  
 Quando il provider di attributi del consumer si applica questo attributo a una classe, il compilatore Rinomina la classe per \_ *NomeClasse*funzione di accesso, in cui *NomeClasse* è il nome assegnato il classe e il compilatore creerà inoltre una classe denominata *NomeClasse*, che deriva da \_ *NomeClasse*della funzione di accesso.  In Visualizzazione classi verranno visualizzate entrambe le classi.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente usa **db_accessor** per raggruppare le colonne nella tabella Orders del database Northwind in due funzioni di accesso. Funzione di accesso 0 è automatica, e non 1 della funzione di accesso.  
  
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
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Blocchi di attributi|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi del consumer OLE DB](../windows/ole-db-consumer-attributes.md)   

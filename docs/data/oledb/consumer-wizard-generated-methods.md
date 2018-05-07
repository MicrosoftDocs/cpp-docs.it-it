---
title: Metodi generati dalla creazione guidata consumer | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- OpenAll method
- attribute-injected classes and methods
- wizard-generated classes and methods
- OLE DB consumers, wizard-generated classes and methods
- methods [C++], OLE DB Consumer Wizard-generated
- CloseDataSource method
- consumer wizard-generated classes and methods
- OpenDataSource method
- CloseAll method
- OpenRowset method
- GetRowsetProperties method
ms.assetid: d80ee51c-8bb3-4dca-8760-5808e0fb47b4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: c0e03d24f61b3eba1ff4c6fa1e4d888a0252a21b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="consumer-wizard-generated-methods"></a>Metodi generati mediante la Creazione guidata consumer
La creazione guidata Consumer OLE DB ATL e la creazione guidata applicazione MFC genera alcune funzioni di cui è necessario essere consapevoli. Si noti che alcuni metodi vengono implementati in modo diverso in progetti con attributi, pertanto vi sono alcune considerazioni; ogni case è descritto di seguito. Per informazioni sulla visualizzazione di codice inserito, vedere [Debug del codice inserito](/visualstudio/debugger/how-to-debug-injected-code).  
  
-   `OpenAll` Apre l'origine dati, set di righe e attiva i segnalibri, se sono disponibili.  
  
-   `CloseAll` Chiude tutti i rowset aperti e rilascia tutte le esecuzioni di comandi.  
  
-   `OpenRowset` viene chiamato da OpenAll per aprire i set di righe o set di righe del consumer.  
  
-   `GetRowsetProperties` Recupera un puntatore all'insieme con è possono impostare le proprietà di proprietà del set di righe.  
  
-   `OpenDataSource` Apre l'origine dati utilizzando la stringa di inizializzazione specificato nella **proprietà di Data Link** la finestra di dialogo.  
  
-   `CloseDataSource` Chiude l'origine dati in modo appropriato.  
  
## <a name="openall-and-closeall"></a>OpenAll e CloseAll  
  
```  
HRESULT OpenAll();   

void CloseAll();  
```  
  
 Nell'esempio seguente viene illustrato come chiamare `OpenAll` e `CloseAll` quando si esegue più volte lo stesso comando. Confrontare l'esempio di codice in [CCommand](../../data/oledb/ccommand-close.md), che mostra una variazione che chiama **Chiudi** e `ReleaseCommand` anziché `CloseAll`.  
  
```  
int main(int argc, char* argv[])  
{  
   HRESULT hr;  
  
   hr = CoInitialize(NULL);  
  
   CCustOrdersDetail rs;      // Your CCommand-derived class  
   rs.m_OrderID = 10248;      // Open order 10248  
   hr = rs.OpenAll();         // (Open also executes the command)  
   hr = rs.MoveFirst();         // Move to the first row and print it  
   printf( "Name: %s, Unit Price: %d, Quantity: %d, Discount %d, Extended Price %d\n", rs.m_ProductName, rs.m_UnitPrice.int64, rs.m_Quantity, rs.m_Discount, rs.m_ExtendedPrice.int64 );  
  
   // Close the first command execution  
   rs.Close();  
  
   rs.m_OrderID = 10249;      // Open order 10249 (a new order)  
   hr = rs.Open();            // (Open also executes the command)  
   hr = rs.MoveFirst();         // Move to the first row and print it  
   printf( "Name: %s, Unit Price: %d, Quantity: %d, Discount %d, Extended Price %d\n", rs.m_ProductName, rs.m_UnitPrice.int64, rs.m_Quantity, rs.m_Discount, rs.m_ExtendedPrice.int64 );  
  
   // Close the second command execution;  
   // Instead of rs.CloseAll() you could call  
   // rs.Close() and rs.ReleaseCommand():  
   rs.CloseAll();  
  
   CoUninitialize();  
   return 0;  
}  
```  
  
## <a name="remarks"></a>Note  
 Si noti che se si definisce un `HasBookmark` (metodo), il `OpenAll` codice imposta la proprietà DBPROP_IRowsetLocate; assicurarsi eseguire questa operazione solo se il provider supporta questa proprietà.  
  
## <a name="openrowset"></a>OpenRowset  
  
```  
// OLE DB Template version:   
HRESULT OpenRowset(DBPROPSET* pPropSet = NULL)  
// Attribute-injected version:  
HRESULT OpenRowset(const CSession& session, LPCWSTR szCommand = NULL);  
```  
  
 **OpenAll** chiama questo metodo per aprire il set di righe o di un set di righe del consumer. In genere, non è necessario chiamare `OpenRowset` a meno che non si desidera lavorare con più origini dati, le sessioni/rowset. `OpenRowset` viene dichiarata nel file di intestazione classe di comando o di tabella:  
  
```  
// OLE DB Template version:  
HRESULT OpenRowset(DBPROPSET *pPropSet = NULL)  
{  
   HRESULT hr = Open(m_session, NULL, pPropSet);  
   #ifdef _DEBUG  
   if(FAILED(hr))  
      AtlTraceErrorRecords(hr);  
   #endif  
   return hr;  
}  
```  
  
 Gli attributi di questo metodo viene implementato in modo diverso. Questa versione accetta un oggetto di sessione e una stringa di comando che per impostazione predefinita la stringa di comando specificata in db_command, sebbene sia possibile passare a uno diverso. Si noti che se si definisce un `HasBookmark` (metodo), il `OpenRowset` codice imposta la proprietà DBPROP_IRowsetLocate; assicurarsi eseguire questa operazione solo se il provider supporta questa proprietà.  
  
```  
// Attribute-injected version:  
HRESULT OpenRowset(const CSession& session, LPCWSTR szCommand=NULL)  
{  
  
   DBPROPSET *pPropSet = NULL;  
   CDBPropSet propset(DBPROPSET_ROWSET);  
   __if_exists(HasBookmark)  
  
   {  
      propset.AddProperty(DBPROP_IRowsetLocate, true);  
      pPropSet= &propset;  
      }  
...  
}  
```  
  
## <a name="getrowsetproperties"></a>GetRowsetProperties  
  
```  
void GetRowsetProperties(CDBPropSet* pPropSet);  
```  
  
 Questo metodo recupera un puntatore al set di proprietà del set di righe. è possibile utilizzare l'indicatore di misura per impostare le proprietà come illustrato di seguito. `GetRowsetProperties` viene utilizzato come indicato di seguito nella classe di record utente. È possibile modificare il codice per impostare le proprietà del set di righe aggiuntive:  
  
```  
void GetRowsetProperties(CDBPropSet* pPropSet)  
{  
   pPropSet->AddProperty(DBPROP_CANFETCHBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);  
   pPropSet->AddProperty(DBPROP_CANSCROLLBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);  
   pPropSet->AddProperty(DBPROP_IRowsetChange, true, DBPROPOPTIONS_OPTIONAL);  
   pPropSet->AddProperty(DBPROP_UPDATABILITY, DBPROPVAL_UP_CHANGE | DBPROPVAL_UP_INSERT | DBPROPVAL_UP_DELETE);  
}  
```  
  
## <a name="remarks"></a>Note  
 È consigliabile non definire globale `GetRowsetProperties` metodo poiché potrebbero essere in conflitto con quella definiti dalla procedura guidata. Si noti che questo è un metodo generato dalla procedura guidata che con progetti di modelli e con attributi. gli attributi non inserire questo codice.  
  
## <a name="opendatasource-and-closedatasource"></a>OpenDataSource e CloseDataSource  
  
```  
HRESULT OpenDataSource();   

void CloseDataSource();  
```  
  
## <a name="remarks"></a>Note  
 La procedura guidata definisce i metodi `OpenDataSource` e `CloseDataSource`; `OpenDataSource` chiamate [CDataSource:: OpenFromInitializationString](../../data/oledb/cdatasource-openfrominitializationstring.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di un consumer OLE DB tramite la procedura guidata](../../data/oledb/creating-an-ole-db-consumer-using-a-wizard.md)
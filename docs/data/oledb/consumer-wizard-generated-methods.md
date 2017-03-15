---
title: "Metodi generati mediante la Creazione guidata consumer | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi e metodi inseriti dagli attributi"
  - "CloseAll (metodo)"
  - "CloseDataSource (metodo)"
  - "classi e metodi generati dalla Creazione guidata consumer"
  - "GetRowsetProperties (metodo)"
  - "metodi [C++], Creazione guidata consumer OLE DB"
  - "OLE DB (consumer), classi e metodi generati dalla procedura guidata"
  - "OpenAll (metodo)"
  - "OpenDataSource (metodo)"
  - "OpenRowset (metodo)"
  - "classi e metodi generati dalla procedura guidata"
ms.assetid: d80ee51c-8bb3-4dca-8760-5808e0fb47b4
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Metodi generati mediante la Creazione guidata consumer
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La Creazione guidata consumer OLE DB ATL e la Creazione guidata applicazione MFC generano alcune funzioni di cui è bene essere a conoscenza:  Poiché alcuni metodi sono implementati in modo differente nei progetti con attributi, sarà opportuno osservare alcune raccomandazioni. Ognuno dei casi di rilievo è trattato di seguito.  Per informazioni sulla visualizzazione di codice inserito, vedere [Debug di codice inserito](../Topic/How%20to:%20Debug%20Injected%20Code.md).  
  
-   `OpenAll` apre le origini dati e i rowset e attiva i bookmark se disponibili.  
  
-   `CloseAll` chiude tutti i rowset aperti e rilascia le esecuzioni di tutti i comandi.  
  
-   `OpenRowset` viene chiamata da OpenAll per aprire i rowset del consumer.  
  
-   `GetRowsetProperties` recupera un puntatore all'insieme di proprietà del rowset con cui è possibile impostare le proprietà.  
  
-   `OpenDataSource` apre l'origine dati utilizzando la stringa di installazione specificata nella finestra di dialogo delle proprietà di Data Link.  
  
-   `CloseDataSource` chiude l'origine dati nel modo opportuno.  
  
## OpenAll e CloseAll  
  
```  
HRESULT OpenAll();   
void CloseAll();  
```  
  
 Nell'esempio seguente viene illustrato come chiamare le funzioni `OpenAll` e `CloseAll`  quando si esegue più volte lo stesso comando.  Confrontare l'esempio di codice utilizzato in [CCommand::Close](../../data/oledb/ccommand-close.md), in cui è illustrata una variante in virtù della quale vengono chiamate **Close** e `ReleaseCommand` anziché `CloseAll`.  
  
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
  
## Osservazioni  
 Poiché se si definisce un metodo `HasBookmark`, il codice `OpenAll`  imposterà la proprietà DBPROP\_IRowsetLocate, eseguire tale operazione solo se il provider supporta questa proprietà.  
  
## OpenRowset  
  
```  
// OLE DB Template version:   
HRESULT OpenRowset(DBPROPSET* pPropSet = NULL)  
// Attribute-injected version:  
HRESULT OpenRowset(const CSession& session, LPCWSTR szCommand = NULL);  
```  
  
 È il metodo che viene chiamato da **OpenAll** per aprire i rowset presenti nel consumer.  In genere, non è necessario chiamare `OpenRowset` a meno che non si desideri utilizzare più origini dati\/sessioni\/rowset.  `OpenRowset` viene dichiarato nel file di intestazione della classe di comando o di tabella:  
  
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
  
 Mediante gli attributi questo metodo viene implementato in modo differente.  In questo caso, accetta un oggetto sessione e una stringa di comando rappresentata, per impostazione predefinita, dalla stringa di comando specificata in db\_command. È tuttavia possibile passare una stringa differente.  Si noti che se si definisce un metodo `HasBookmark`, il codice `OpenRowset` imposta la proprietà DBPROP\_IRowsetLocate; pertanto assicurarsi di eseguire questa operazione solo se il provider supporta questa proprietà.  
  
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
  
## GetRowsetProperties  
  
```  
void GetRowsetProperties(CDBPropSet* pPropSet);  
```  
  
 Questo metodo recupera un puntatore al set di proprietà del rowset e può essere utilizzato per impostare proprietà come DBPROP\_IRowsetChange.  `GetRowsetProperties` viene utilizzato nella classe di record utente nel modo seguente.  Il codice può anche essere modificato per impostare ulteriori proprietà di rowset:  
  
```  
void GetRowsetProperties(CDBPropSet* pPropSet)  
{  
   pPropSet->AddProperty(DBPROP_CANFETCHBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);  
   pPropSet->AddProperty(DBPROP_CANSCROLLBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);  
   pPropSet->AddProperty(DBPROP_IRowsetChange, true, DBPROPOPTIONS_OPTIONAL);  
   pPropSet->AddProperty(DBPROP_UPDATABILITY, DBPROPVAL_UP_CHANGE | DBPROPVAL_UP_INSERT | DBPROPVAL_UP_DELETE);  
}  
```  
  
## Osservazioni  
 È consigliabile evitare la definizione di un metodo `GetRowsetProperties` globale poiché potrebbe entrare in conflitto con quello definito dalla procedura guidata.  Si noti che si tratta di un metodo generato dalla procedura guidata che si ottiene mediante i progetti con modelli e con attributi. Questo codice non viene inserito dagli attributi.  
  
## OpenDataSource e CloseDataSource  
  
```  
HRESULT OpenDataSource();   
void CloseDataSource();  
```  
  
## Osservazioni  
 Nel corso della procedura guidata vengono definiti i metodi `OpenDataSource` e `CloseDataSource`, il primo dei quali chiama [CDataSource::OpenFromInitializationString](../../data/oledb/cdatasource-openfrominitializationstring.md).  
  
## Vedere anche  
 [Creazione di un consumer OLE DB mediante procedura guidata](../../data/oledb/creating-an-ole-db-consumer-using-a-wizard.md)
---
title: "Riferimento a una propriet&#224; nel provider | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "provider OLE DB, proprietà"
  - "riferimenti, proprietà nei provider"
  - "riferimenti a proprietà nei provider"
ms.assetid: bfbb3851-5eed-467a-a179-4a97a9515525
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Riferimento a una propriet&#224; nel provider
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Cercare il gruppo e l'ID della proprietà desiderata.  Per ulteriori informazioni, vedere [Proprietà OLE DB](https://msdn.microsoft.com/en-us/library/ms722734.aspx) in *OLE DB Programmer's Reference* \(informazioni in lingua inglese\).  
  
 Nell'esempio che segue si ipotizza un tentativo di ottenere una proprietà dal rowset.  Il codice per l'utilizzo della sessione o del comando è simile, ma viene utilizzata un'interfaccia diversa.  
  
 Creare un oggetto [CDBPropSet](../../data/oledb/cdbpropset-class.md) utilizzando il gruppo di proprietà come parametro da fornire al costruttore.  Di seguito è riportato un esempio.  
  
```  
CDBPropSet propset(DBPROPSET_ROWSET);  
```  
  
 Chiamare [AddProperty](../../data/oledb/cdbpropset-addproperty.md), passando l'ID della proprietà e un valore da assegnare alla proprietà.  Il tipo di valore dipende dalla proprietà utilizzata.  
  
```  
CDBPropSet propset(DBPROPSET_ROWSET);  
propset.AddProperty(DBPROP_IRowsetChange, true);  
propset.AddProperty(DBPROP_UPDATABILITY,  
DBPROPVAL_UP_INSERT | DBPROPVAL_UP_CHANGE | DBPROPVAL_UP_DELETE);  
```  
  
 Utilizzare l'interfaccia `IRowset` per chiamare **GetProperties**.  Passare l'insieme di proprietà come parametro.  Di seguito viene riportato il codice finale:  
  
```  
CAgentRowset<CMyProviderCommand>* pRowset = (CAgentRowset<CMyProviderCommand>*) pThis;  
  
CComQIPtr<IRowsetInfo, &IID_IRowsetInfo> spRowsetProps = pRowset;  
  
DBPROPIDSET set;  
set.AddPropertyID(DBPROP_BOOKMARKS);  
DBPROPSET* pPropSet = NULL;  
ULONG ulPropSet = 0;  
HRESULT hr;  
  
if (spRowsetProps)  
   hr = spRowsetProps->GetProperties(1, &set, &ulPropSet, &pPropSet);  
  
if (pPropSet)  
{  
   CComVariant var = pPropSet->rgProperties[0].vValue;  
   CoTaskMemFree(pPropSet->rgProperties);  
   CoTaskMemFree(pPropSet);  
  
   if (SUCCEEDED(hr) && (var.boolVal == VARIANT_TRUE))  
   {  
      ...  // Use property here  
   }  
}  
```  
  
## Vedere anche  
 [Utilizzo dei modelli provider OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)
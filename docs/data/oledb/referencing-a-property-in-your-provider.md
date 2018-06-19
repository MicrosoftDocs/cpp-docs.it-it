---
title: Riferimento a una proprietà nel Provider | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- OLE DB providers, properties
- references, to properties in providers
- referencing properties in providers
ms.assetid: bfbb3851-5eed-467a-a179-4a97a9515525
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 36965ac33fc0a563951c0c0dfdce60d9d0e4f55b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33106544"
---
# <a name="referencing-a-property-in-your-provider"></a>Riferimento a una proprietà nel provider
Trovare il gruppo di proprietà e l'ID di proprietà per la proprietà desiderata. Per ulteriori informazioni, vedere [proprietà OLE DB](https://msdn.microsoft.com/en-us/library/ms722734.aspx) nel *riferimento per programmatori OLE DB*.  
  
 Nell'esempio seguente si presuppone che si sta tentando di ottenere una proprietà dal set di righe. Il codice per l'utilizzo della sessione o un comando è simile, ma usa un'interfaccia diversa.  
  
 Creare un [CDBPropSet](../../data/oledb/cdbpropset-class.md) utilizzando il gruppo di proprietà come parametro al costruttore dell'oggetto. Ad esempio:  
  
```  
CDBPropSet propset(DBPROPSET_ROWSET);  
```  
  
 Chiamare [AddProperty](../../data/oledb/cdbpropset-addproperty.md), passando l'ID di proprietà e un valore da assegnare alla proprietà. Il tipo del valore dipende dalla proprietà in uso.  
  
```  
CDBPropSet propset(DBPROPSET_ROWSET);  

propset.AddProperty(DBPROP_IRowsetChange, true);  

propset.AddProperty(DBPROP_UPDATABILITY, DBPROPVAL_UP_INSERT | DBPROPVAL_UP_CHANGE | DBPROPVAL_UP_DELETE);  
```  
  
 Utilizzare il `IRowset` interfaccia per chiamare **GetProperties**. Passare la proprietà impostata come parametro. Ecco il codice finale:  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Uso dei modelli provider OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)
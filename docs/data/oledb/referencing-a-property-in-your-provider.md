---
title: Riferimento a una proprietà nel Provider | Microsoft Docs
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
ms.openlocfilehash: ec2a52949754e6b19730d5ef025f958d517f6fd0
ms.sourcegitcommit: 889a75be1232817150be1e0e8d4d7f48f5993af2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/30/2018
ms.locfileid: "39341036"
---
# <a name="referencing-a-property-in-your-provider"></a>Riferimento a una proprietà nel provider
Trovare il gruppo di proprietà e l'ID di proprietà per la proprietà desiderata. Per altre informazioni, vedere [proprietà OLE DB](https://msdn.microsoft.com/library/ms722734.aspx) nel *riferimento per programmatori OLE DB*.  
  
 Nell'esempio seguente si presuppone che si sta tentando di ottenere una proprietà dal set di righe. Il codice per usare la sessione o il comando è simile, ma usa un'interfaccia diversa.  
  
 Creare un [CDBPropSet](../../data/oledb/cdbpropset-class.md) utilizzando il gruppo di proprietà come parametro al costruttore dell'oggetto. Ad esempio:  
  
```cpp  
CDBPropSet propset(DBPROPSET_ROWSET);  
```  
  
 Chiamare [AddProperty](../../data/oledb/cdbpropset-addproperty.md), passando l'ID di proprietà e un valore da assegnare alla proprietà. Il tipo del valore dipende dalla proprietà che si utilizza.  
  
```cpp  
CDBPropSet propset(DBPROPSET_ROWSET);  

propset.AddProperty(DBPROP_IRowsetChange, true);  

propset.AddProperty(DBPROP_UPDATABILITY, DBPROPVAL_UP_INSERT | DBPROPVAL_UP_CHANGE | DBPROPVAL_UP_DELETE);  
```  
  
 Usare la `IRowset` interfaccia da chiamare `GetProperties`. Passare la proprietà è impostata come parametro. Ecco il codice finale:  
  
```cpp  
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
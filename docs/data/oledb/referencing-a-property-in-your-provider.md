---
title: Riferimento a una proprietà nel provider
ms.date: 11/04/2016
helpviewer_keywords:
- OLE DB providers, properties
- references, to properties in providers
- referencing properties in providers
ms.assetid: bfbb3851-5eed-467a-a179-4a97a9515525
ms.openlocfilehash: d70a1901c457d9fbdbe8712d84999e256a54d0c2
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80209774"
---
# <a name="referencing-a-property-in-your-provider"></a>Riferimento a una proprietà nel provider

Trovare il gruppo di proprietà e l'ID proprietà per la proprietà desiderata. Per ulteriori informazioni, vedere [OLE DB proprietà](/previous-versions/windows/desktop/ms722734(v=vs.85)) nella Guida **di riferimento per programmatori OLE DB**.

Nell'esempio seguente si presuppone che si stia tentando di ottenere una proprietà dal set di righe. Il codice per l'uso della sessione o del comando è simile, ma usa un'interfaccia diversa.

Creare un oggetto [CDBPropSet](../../data/oledb/cdbpropset-class.md) usando il gruppo di proprietà come parametro per il costruttore. Ad esempio:

```cpp
CDBPropSet propset(DBPROPSET_ROWSET);
```

Chiamare [AddProperty](../../data/oledb/cdbpropset-addproperty.md), passando l'ID della proprietà e un valore da assegnare alla proprietà. Il tipo di valore dipende dalla proprietà che si sta usando.

```cpp
CDBPropSet propset(DBPROPSET_ROWSET);

propset.AddProperty(DBPROP_IRowsetChange, true);

propset.AddProperty(DBPROP_UPDATABILITY, DBPROPVAL_UP_INSERT | DBPROPVAL_UP_CHANGE | DBPROPVAL_UP_DELETE);
```

Utilizzare l'interfaccia `IRowset` per chiamare `GetProperties`. Passare il set di proprietà come parametro. Ecco il codice finale:

```cpp
CAgentRowset<CCustomCommand>* pRowset = (CAgentRowset<CCustomCommand>*) pThis;

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

---
description: 'Altre informazioni su: fare riferimento a una proprietà nel provider'
title: Riferimento a una proprietà nel provider
ms.date: 11/04/2016
helpviewer_keywords:
- OLE DB providers, properties
- references, to properties in providers
- referencing properties in providers
ms.assetid: bfbb3851-5eed-467a-a179-4a97a9515525
ms.openlocfilehash: dfc3b06820b98477a033b450d42feca52c5c7a72
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97286618"
---
# <a name="referencing-a-property-in-your-provider"></a>Riferimento a una proprietà nel provider

Trovare il gruppo di proprietà e l'ID proprietà per la proprietà desiderata. Per ulteriori informazioni, vedere [OLE DB proprietà](/previous-versions/windows/desktop/ms722734(v=vs.85)) nella Guida **di riferimento per programmatori OLE DB**.

Nell'esempio seguente si presuppone che si stia tentando di ottenere una proprietà dal set di righe. Il codice per l'uso della sessione o del comando è simile, ma usa un'interfaccia diversa.

Creare un oggetto [CDBPropSet](../../data/oledb/cdbpropset-class.md) usando il gruppo di proprietà come parametro per il costruttore. Ad esempio:

```cpp
CDBPropSet propset(DBPROPSET_ROWSET);
```

Chiamare [AddProperty](./cdbpropset-class.md#addproperty), passando l'ID della proprietà e un valore da assegnare alla proprietà. Il tipo di valore dipende dalla proprietà che si sta usando.

```cpp
CDBPropSet propset(DBPROPSET_ROWSET);

propset.AddProperty(DBPROP_IRowsetChange, true);

propset.AddProperty(DBPROP_UPDATABILITY, DBPROPVAL_UP_INSERT | DBPROPVAL_UP_CHANGE | DBPROPVAL_UP_DELETE);
```

Utilizzare l' `IRowset` interfaccia per chiamare `GetProperties` . Passare il set di proprietà come parametro. Ecco il codice finale:

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

## <a name="see-also"></a>Vedi anche

[Uso dei modelli di provider di OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)

---
title: Riferimento a una proprietà nel provider
ms.date: 11/04/2016
helpviewer_keywords:
- OLE DB providers, properties
- references, to properties in providers
- referencing properties in providers
ms.assetid: bfbb3851-5eed-467a-a179-4a97a9515525
ms.openlocfilehash: d8c775af8f887deb7bf49016f9716fa0a76d2439
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57415942"
---
# <a name="referencing-a-property-in-your-provider"></a>Riferimento a una proprietà nel provider

Trovare il gruppo di proprietà e l'ID di proprietà per la proprietà desiderata. Per altre informazioni, vedere [proprietà OLE DB](/previous-versions/windows/desktop/ms722734(v=vs.85)) nel **riferimento per programmatori OLE DB**.

Nell'esempio seguente si presuppone che si sta tentando di ottenere una proprietà dal set di righe. Il codice per usare la sessione o il comando è simile, ma usa un'interfaccia diversa.

Creare un [CDBPropSet](../../data/oledb/cdbpropset-class.md) utilizzando il gruppo di proprietà come parametro al costruttore dell'oggetto. Ad esempio:

```cpp
CDBPropSet propset(DBPROPSET_ROWSET);
```

Chiamare [AddProperty](../../data/oledb/cdbpropset-addproperty.md), passando l'ID di proprietà e un valore da assegnare alla proprietà. Il tipo del valore dipende dalla proprietà in uso.

```cpp
CDBPropSet propset(DBPROPSET_ROWSET);

propset.AddProperty(DBPROP_IRowsetChange, true);

propset.AddProperty(DBPROP_UPDATABILITY, DBPROPVAL_UP_INSERT | DBPROPVAL_UP_CHANGE | DBPROPVAL_UP_DELETE);
```

Usare la `IRowset` interfaccia da chiamare `GetProperties`. Passare la proprietà è impostata come parametro. Ecco il codice finale:

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
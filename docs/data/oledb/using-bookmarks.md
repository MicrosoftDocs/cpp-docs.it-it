---
title: Uso dei segnalibri
ms.date: 10/24/2018
helpviewer_keywords:
- rowsets, bookmarks
- OLE DB provider templates, bookmarks
- bookmarks, OLE DB
- OLE DB providers, bookmark support
ms.assetid: 7fa1d1a8-5063-4aa9-93ee-815bb9c98fae
ms.openlocfilehash: 8caa33b3bafbaa9e537d9669aa7b60a9355475ef
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87218299"
---
# <a name="using-bookmarks"></a>Uso dei segnalibri

Prima di aprire il set di righe, è necessario indicare al provider che si desidera utilizzare i segnalibri. A tale scopo, impostare la `DBPROP_BOOKMARKS` proprietà su **`true`** nel set di proprietà. Il provider recupera i segnalibri come colonna zero, quindi è necessario usare la macro speciale BOOKMARK_ENTRY e la `CBookmark` classe se si usa una funzione di accesso statica. `CBookmark`è una classe modello in cui l'argomento è la lunghezza in byte del buffer dei segnalibri. La lunghezza del buffer necessaria per un segnalibro dipende dal provider. Se si utilizza il provider ODBC OLE DB, come illustrato nell'esempio seguente, il buffer deve essere di 4 byte.

```cpp
class CProducts
{
public:
   CBookmark<4> bookmark;

   BEGIN_COLUMN_MAP(CProducts)
      BOOKMARK_ENTRY(bookmark)
   END_COLUMN_MAP()
};
```

Quindi, usato dal codice seguente:

```cpp
CDBPropSet propset(DBPROPSET_ROWSET);
propset.AddProperty(DBPROP_BOOKMARKS, true);

CTable<CAccessor<CProducts>> product;
CSession session;
product.Open(session, "Products", &propset);
```

Se si usa `CDynamicAccessor` , il buffer viene impostato in modo dinamico in fase di esecuzione. In questo caso, è possibile usare una versione specializzata di `CBookmark` per la quale non si specifica una lunghezza del buffer. Usare la funzione `GetBookmark` per recuperare il segnalibro dal record corrente, come illustrato nell'esempio di codice seguente:

```cpp
CTable<CDynamicAccessor> product;
CBookmark<> bookmark;
CDBPropSet propset(DBPROPSET_ROWSET);
CSession session;

propset.AddProperty(DBPROP_BOOKMARKS, true);
product.Open(session, "Products", &propset);
product.MoveNext();
product.GetBookmark(&bookmark);
```

Per informazioni sul supporto dei segnalibri nei provider, vedere [supporto del provider per i segnalibri](../../data/oledb/provider-support-for-bookmarks.md).

## <a name="see-also"></a>Vedere anche

[Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)

---
title: Utilizzo dei bookmark
ms.date: 10/24/2018
helpviewer_keywords:
- rowsets, bookmarks
- OLE DB provider templates, bookmarks
- bookmarks, OLE DB
- OLE DB providers, bookmark support
ms.assetid: 7fa1d1a8-5063-4aa9-93ee-815bb9c98fae
ms.openlocfilehash: 579e67151858904e877a34bf30467e3cb97fe2c4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62388956"
---
# <a name="using-bookmarks"></a>Utilizzo dei bookmark

Prima di aprire il set di righe, è necessario indicare al provider che si desidera usare i segnalibri. A questo scopo, impostare il `DBPROP_BOOKMARKS` proprietà **true** nel set di proprietà. Il provider recupera segnalibri come colonna da zero, pertanto è necessario usare la macro speciale BOOKMARK_ENTRY e `CBookmark` classe se si usa una funzione di accesso statico. `CBookmark` è una classe di modello in cui l'argomento è la lunghezza in byte del buffer del segnalibro. La lunghezza del buffer necessaria per un segnalibro dipende dal provider. Se si usa il provider OLE DB ODBC, come illustrato nell'esempio seguente, il buffer deve essere 4 byte.

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

Quindi, usato nel codice seguente:

```cpp
CDBPropSet propset(DBPROPSET_ROWSET);
propset.AddProperty(DBPROP_BOOKMARKS, true);

CTable<CAccessor<CProducts>> product;
CSession session;
product.Open(session, "Products", &propset);
```

Se si usa `CDynamicAccessor`, il buffer viene impostato in modo dinamico in fase di esecuzione. In questo caso, è possibile usare una versione specializzata della `CBookmark` per cui non si specifica una lunghezza di buffer. Utilizzare la funzione `GetBookmark` per recuperare il segnalibro dal record corrente, come illustrato nell'esempio di codice:

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

Per informazioni sul supporto dei bookmark nel provider, vedere [supporto dei bookmark nel Provider](../../data/oledb/provider-support-for-bookmarks.md).

## <a name="see-also"></a>Vedere anche

[Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)
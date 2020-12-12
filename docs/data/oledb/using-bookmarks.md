---
description: 'Altre informazioni su: uso dei segnalibri'
title: Uso dei segnalibri
ms.date: 10/24/2018
helpviewer_keywords:
- rowsets, bookmarks
- OLE DB provider templates, bookmarks
- bookmarks, OLE DB
- OLE DB providers, bookmark support
ms.assetid: 7fa1d1a8-5063-4aa9-93ee-815bb9c98fae
ms.openlocfilehash: d0cf27a5f93b3e6b00fa6f8cbb69ae7414f4d819
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97319157"
---
# <a name="using-bookmarks"></a>Uso dei segnalibri

Prima di aprire il set di righe, è necessario indicare al provider che si desidera utilizzare i segnalibri. A tale scopo, impostare la `DBPROP_BOOKMARKS` proprietà su **`true`** nel set di proprietà. Il provider recupera i segnalibri come colonna zero, quindi è necessario usare la macro speciale BOOKMARK_ENTRY e la `CBookmark` classe se si usa una funzione di accesso statica. `CBookmark` è una classe modello in cui l'argomento è la lunghezza in byte del buffer dei segnalibri. La lunghezza del buffer necessaria per un segnalibro dipende dal provider. Se si utilizza il provider ODBC OLE DB, come illustrato nell'esempio seguente, il buffer deve essere di 4 byte.

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

## <a name="see-also"></a>Vedi anche

[Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)

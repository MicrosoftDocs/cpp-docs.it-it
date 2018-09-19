---
title: Uso dei segnalibri | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- rowsets, bookmarks
- OLE DB provider templates, bookmarks
- bookmarks, OLE DB
- OLE DB providers, bookmark support
ms.assetid: 7fa1d1a8-5063-4aa9-93ee-815bb9c98fae
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 8643b8150f08191fa041107fa4a88e3cbcf2964a
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46042260"
---
# <a name="using-bookmarks"></a>Utilizzo dei bookmark

Prima di aprire il set di righe, è necessario indicare al provider che si desidera usare i segnalibri. A questo scopo, impostare il `DBPROP_BOOKMARKS` proprietà **true** nel set di proprietà. Il provider recupera segnalibri come colonna da zero, pertanto è necessario usare la macro speciale BOOKMARK_ENTRY e `CBookmark` classe se si usa una funzione di accesso statico. `CBookmark` è una classe di modello in cui l'argomento è la lunghezza in byte del buffer del segnalibro. La lunghezza del buffer necessaria per un segnalibro dipende dal provider. Se si utilizza il provider OLE DB ODBC, come illustrato nell'esempio seguente, il buffer deve essere 4 byte.  
  
```cpp  
class CProducts  
{  
public:  
   CBookmark<4>   bookmark;  
  
   BEGIN_COLUMN_MAP(CProducts)  
      BOOKMARK_ENTRY(bookmark)  
   END_COLUMN_MAP()  
};  
  
CDBPropSet propset(DBPROPSET_ROWSET);  

propset.AddProperty(DBPROP_BOOKMARKS, true);  
  

CTable<CAccessor<CProducts>> product;  
product.Open(session, "Products", &propset);  
```  
  
Se si usa `CDynamicAccessor`, il buffer viene allocato dinamicamente in fase di esecuzione. In questo caso, è possibile usare una versione specializzata della `CBookmark` per cui non si specifica una lunghezza di buffer. Utilizzare la funzione `GetBookmark` per recuperare il segnalibro dal record corrente, come illustrato nell'esempio di codice:  
  
```cpp  
CTable<CDynamicAccessor> product;  
CBookmark<>              bookmark;  
CDBPropSet propset(DBPROPSET_ROWSET);  
  

propset.AddProperty(DBPROP_BOOKMARKS, true);  

product.Open(session, "Products", &propset);  

product.MoveNext();  

product.GetBookmark(&bookmark);  
```  
  
Per informazioni sul supporto dei bookmark nel provider, vedere [supporto dei bookmark nel Provider](../../data/oledb/provider-support-for-bookmarks.md).  
  
## <a name="see-also"></a>Vedere anche  

[Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)
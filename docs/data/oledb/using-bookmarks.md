---
title: Utilizzo di segnalibri | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- rowsets, bookmarks
- OLE DB provider templates, bookmarks
- bookmarks, OLE DB
- OLE DB providers, bookmark support
ms.assetid: 7fa1d1a8-5063-4aa9-93ee-815bb9c98fae
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 27c6b4a98eeaf3ffcae07d8277e823375176eed2
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="using-bookmarks"></a>Utilizzo dei bookmark
Prima di aprire il set di righe, è necessario indicare al provider che si desidera utilizzare i segnalibri. A tale scopo, impostare il **DBPROP_BOOKMARKS** proprietà **true** nel set delle proprietà. Il provider recupera i segnalibri come colonna zero, pertanto è necessario utilizzare la macro speciale `BOOKMARK_ENTRY` e `CBookmark` classe se si utilizza una funzione di accesso statica. `CBookmark` è una classe di modello in cui l'argomento è la lunghezza in byte del buffer del segnalibro. La lunghezza del buffer necessaria per un segnalibro dipende dal provider. Se si utilizza il provider OLE DB ODBC, come illustrato nell'esempio seguente, il buffer deve essere 4 byte.  
  
```  
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
  
 Se si utilizza `CDynamicAccessor`, il buffer viene allocato in modo dinamico in fase di esecuzione. In questo caso, è possibile utilizzare una versione specializzata di `CBookmark` per cui non si specifica la lunghezza del buffer. Utilizzare la funzione `GetBookmark` per recuperare il segnalibro dal record corrente, come illustrato in questo esempio di codice:  
  
```  
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
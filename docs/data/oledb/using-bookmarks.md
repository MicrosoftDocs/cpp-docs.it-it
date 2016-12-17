---
title: "Utilizzo dei bookmark | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "segnalibri, OLE DB"
  - "modelli del provider OLE DB, segnalibri"
  - "provider OLE DB, supporto per segnalibro"
  - "rowset, segnalibri"
ms.assetid: 7fa1d1a8-5063-4aa9-93ee-815bb9c98fae
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo dei bookmark
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Prima di aprire il rowset, è necessario indicare al provider che si desidera utilizzare i bookmark.  A tal scopo, impostare la proprietà **DBPROP\_BOOKMARKS** su **true**.  Il provider recupera i segnalibri come colonna zero, pertanto è necessario utilizzare la macro speciale `BOOKMARK_ENTRY` e la classe `CBookmark` se si sta utilizzando una funzione di accesso statica.  `CBookmark` è una classe di modello in cui l'argomento è la lunghezza in byte del buffer del segnalibro.  La lunghezza del buffer necessaria per un bookmark dipende dal provider.  Se si utilizza il provider OLE DB ODBC, come nel seguente esempio, il buffer deve essere di 4 byte.  
  
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
  
CTable<CAccessor<CProducts> > product;  
product.Open(session, "Products", &propset);  
```  
  
 Se si utilizza `CDynamicAccessor`, il buffer verrà allocato in modo dinamico in fase di esecuzione.  In tal caso, è possibile utilizzare una versione speciale di `CBookmark` per la quale non si specifica la lunghezza del buffer.  Utilizzare la funzione `GetBookmark` per recuperare il bookmark dal record corrente, come nell'esempio di codice riportato di seguito:  
  
```  
CTable<CDynamicAccessor> product;  
CBookmark<>              bookmark;  
CDBPropSet propset(DBPROPSET_ROWSET);  
  
propset.AddProperty(DBPROP_BOOKMARKS, true);  
product.Open(session, "Products", &propset);  
product.MoveNext();  
product.GetBookmark(&bookmark);  
```  
  
 Per informazioni sul supporto dei bookmark nei provider, vedere [Supporto dei bookmark da parte dei provider](../../data/oledb/provider-support-for-bookmarks.md).  
  
## Vedere anche  
 [Utilizzo delle funzioni di accesso](../../data/oledb/using-accessors.md)
---
title: BOOKMARK_ENTRY | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- BOOKMARK_ENTRY
dev_langs:
- C++
helpviewer_keywords:
- BOOKMARK_ENTRY macro
ms.assetid: ec8222f5-9d90-46cb-989e-23f24465083f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: ac128e20afc6e3b596a05357a9d961547aacb701
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33092266"
---
# <a name="bookmarkentry"></a>BOOKMARK_ENTRY
Associa la colonna del segnalibro.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
BOOKMARK_ENTRY(variable)  
  
```  
  
#### <a name="parameters"></a>Parametri  
 *Variabile*  
 [in] La variabile da associare alla colonna del segnalibro.  
  
## <a name="example"></a>Esempio  

```
cpp  
class CArtistsBookmark
{
public:
// Data Elements
   CBookmark<4> m_bookmark;
   short m_nAge;
   TCHAR m_szFirstName[21];
   TCHAR m_szLastName[31];

// Output binding map
BEGIN_COLUMN_MAP(CArtistsBookmark)
   BOOKMARK_ENTRY(m_bookmark)
   COLUMN_ENTRY(1, m_nAge)
   COLUMN_ENTRY(2, m_szFirstName)
   COLUMN_ENTRY(3, m_szLastName)
END_COLUMN_MAP()

   void GetRowsetProperties(CDBPropSet* pPropSet)
   {
      pPropSet->AddProperty(DBPROP_BOOKMARKS, true);
   }

   HRESULT OpenDataSource()
   {
      CDataSource _db;
      _db.Open();
      return m_session.Open(_db);
   }

   void CloseDataSource()
   {
      m_session.Close();
   }

   CSession m_session;

   DEFINE_COMMAND_EX(CArtistsBookmark, L" \
   SELECT \
      Age, \
      FirstName, \
      LastName \
      FROM Artists")
};
```
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali per modelli Consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [CBookmark (classe)](../../data/oledb/cbookmark-class.md)   
 [DBPROP_BOOKMARKS](https://msdn.microsoft.com/en-us/library/ms709728.aspx)
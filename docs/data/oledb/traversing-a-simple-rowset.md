---
title: Scorrimento di un Rowset semplice | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- data access [C++], rowsets
- rowsets [C++], accessing
- simple rowsets
- OLE DB consumers [C++], database attributes
- accessors [C++], rowsets
ms.assetid: b45acf16-4029-429d-ab8d-b7fba98b9740
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 6ba5262577fc9176669916a7fc30d299d06770a8
ms.sourcegitcommit: 889a75be1232817150be1e0e8d4d7f48f5993af2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/30/2018
ms.locfileid: "39336654"
---
# <a name="traversing-a-simple-rowset"></a>Scorrimento di un rowset semplice
L'esempio seguente illustra un accesso rapido e semplice database che non riguarda i comandi. Il codice del consumer, in un progetto ATL, recupera i record da una tabella denominata *alle creazioni degli artisti* in Microsoft Access database utilizzando il Provider Microsoft OLE DB per ODBC. Il codice crea un [CTable](../../data/oledb/ctable-class.md) oggetto di tabella con una funzione di accesso basato sulla classe di record utente `CArtists`. Apre una connessione, apre una sessione sulla connessione e la tabella viene aperta nella sessione.  
  
```cpp  
#include <atldbcli.h>  
  
CDataSource connection;  
CSession session;  
CTable<CAccessor<CArtists>> artists;  
  
// Open the connection, session, and table, specifying authentication   
// using Windows NT integrated security. Hard-coding a password is a major  
// security weakness.  
connection.Open(CLSID_MSDASQL, "NWind", NULL, NULL, DBPROP_AUTH_INTEGRATED);  

session.Open(connection);  

artists.Open(session, "Artists");  
  
// Get data from the rowset  
while (artists.MoveNext() == S_OK)  
{  
   cout << artists.m_szFirstName;  
   cout << artists.m_szLastName;  
}  
```  
  
 Il record dell'utente, `CArtists`, ha un aspetto simile al seguente:  
  
```cpp  
class CArtists  
{  
public:  
// Data Elements  
   CHAR m_szFirstName[20];  
   CHAR m_szLastName[30];  
   short m_nAge;  
  
// Column binding map  
BEGIN_COLUMN_MAP(CArtists)  
   COLUMN_ENTRY(1, m_szFirstName)  
   COLUMN_ENTRY(2, m_szLastName)  
   COLUMN_ENTRY(3, m_nAge)  
END_COLUMN_MAP()  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Uso dei modelli consumer OLE DB](../../data/oledb/working-with-ole-db-consumer-templates.md)
---
title: "Scorrimento di un rowset semplice | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzioni di accesso [C++], rowset"
  - "accesso ai dati [C++], rowset"
  - "consumer OLE DB [C++], attributi database"
  - "rowset [C++], accesso"
  - "rowset semplici"
ms.assetid: b45acf16-4029-429d-ab8d-b7fba98b9740
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Scorrimento di un rowset semplice
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Nell'esempio che segue viene mostrato un tipo di accesso rapido e semplice a un database senza l'utilizzo di comandi.  Nella situazione considerata, il codice del consumer, in un progetto ATL, recupera record da una tabella di un database di Microsoft Access denominata *Artists* tramite il provider Microsoft OLE DB per ODBC.  Mediante tale codice viene creato un oggetto tabella [CTable](../../data/oledb/ctable-class.md) con una funzione di accesso basata sulla classe di record utente `CArtists`.  Vengono aperte una connessione, una sessione sulla connessione e la tabella sulla sessione.  
  
```  
#include <atldbcli.h>  
  
CDataSource connection;  
CSession session;  
CTable<CAccessor<CArtists> > artists;  
  
// Open the connection, session, and table, specifying authentication   
// using Windows NT integrated security. Hard-coding a password is a major  
// security weakness.  
connection.Open(CLSID_MSDASQL, "NWind", NULL, NULL,   
DBPROP_AUTH_INTEGRATED);  
session.Open(connection);  
artists.Open(session, "Artists");  
  
// Get data from the rowset  
while (artists.MoveNext() == S_OK)  
{  
   cout << artists.m_szFirstName;  
   cout << artists.m_szLastName;  
}  
```  
  
 Il record utente `CArtists` ha il seguente formato:  
  
```  
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
  
## Vedere anche  
 [Utilizzo dei modelli consumer OLE DB](../../data/oledb/working-with-ole-db-consumer-templates.md)
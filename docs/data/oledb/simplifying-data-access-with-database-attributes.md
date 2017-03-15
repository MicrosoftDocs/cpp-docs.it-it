---
title: "Semplificazione dell&#39;accesso ai dati con gli attributi del database | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc-attr.db_param"
  - "vc-attr.db_column"
  - "vc-attr.db_accessor"
  - "vc-attr.db_command"
  - "vc-attr.db_table"
  - "vc-attr.db_source"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "attributi [C++], accesso ai dati"
  - "attributi [C++], database"
  - "attributi [C++], consumer OLE DB"
  - "dati [C++], semplificazione di accesso"
  - "accesso ai dati [C++], attributi database"
  - "attributi database [C++]"
  - "database [C++], attributi"
  - "consumer OLE DB [C++], attributi database"
ms.assetid: 560d2456-e307-4cb7-ba7b-4d0ed674697f
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Semplificazione dell&#39;accesso ai dati con gli attributi del database
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrato l'utilizzo degli attributi di database per semplificare le operazioni relative a database.  
  
 La soluzione più semplice per accedere a informazioni di un database consiste nel creare una classe di comando o di tabella e una classe di record utente per una determinata tabella del database.  Gli attributi del database semplificano alcune delle dichiarazioni dei modelli che in precedenza erano compito del programmatore.  
  
 Per illustrare l'utilizzo degli attributi del database, nelle sezioni che seguono vengono impiegate due dichiarazioni di classe di tabella e di classe di record utente equivalenti: nel primo caso vengono utilizzati gli attributi, mentre nel secondo vengono utilizzati i modelli OLE DB.  Il codice delle dichiarazioni si trova in genere in un file di intestazione denominato in base all'oggetto tabella o al comando, ad esempio Authors.h.  
  
 Confrontando i due file, è possibile constatare la maggiore semplicità derivante dall'uso degli attributi.  Di seguito sono elencate le principali differenze.  
  
-   Se si utilizzano gli attributi, è necessario dichiarare una sola classe, `CAuthors`, mentre con i modelli è necessario dichiararne due: `CAuthorsNoAttrAccessor` e `CAuthorsNoAttr`.  
  
-   La chiamata a `db_source` nella versione con gli attributi equivale alla chiamata `OpenDataSource()` nella dichiarazione del modello.  
  
-   La chiamata a **db\_table** nella versione con gli attributi equivale alla seguente dichiarazione del modello:  
  
    ```  
    class CAuthorsNoAttr : public CTable<CAccessor<CAuthorsNoAttrAccessor> >  
    ```  
  
-   Le chiamate a **db\_column** nella versione con gli attributi equivalgono alla mappa delle colonne \(vedere `BEGIN_COLUMN_MAP ... END_COLUMN_MAP`\) nella dichiarazione del modello.  
  
 Gli attributi inseriscono automaticamente una dichiarazione della classe di record utente.  La classe di record utente equivale a `CAuthorsNoAttrAccessor` nella dichiarazione del modello.  Se la classe di tabella è `CAuthors`, la classe di record utente inserita verrà denominata `CAuthorsAccessor` e la relativa dichiarazione potrà essere visualizzata solo nel codice inserito.  Per ulteriori informazioni, vedere "Classi di record utente inserite dagli attributi" in [Record utente](../../data/oledb/user-records.md).  
  
 Si noti che in entrambi i casi è necessario impostare le proprietà del rowset tramite `CDBPropSet::AddProperty`.  
  
 Per informazioni sugli attributi descritti in questo argomento, vedere [Attributi del consumer OLE DB](../../windows/ole-db-consumer-attributes.md).  
  
## Dichiarazione della tabella e della funzione di accesso tramite gli attributi  
 Il codice seguente chiama `db_source` e **db\_table** nella classe di tabella.  `db_source` specifica l'origine dati e la connessione da utilizzare.  **db\_table** inserisce il codice del modello appropriato per dichiarare una classe di tabella.  **db\_column** specifica la mappa delle colonne e inserisce la dichiarazione della funzione di accesso.  È possibile utilizzare gli attributi del consumer OLE DB in qualsiasi progetto in grado di supportare ATL.  
  
 Di seguito è riportata la dichiarazione della tabella e della funzione di accesso specificata tramite attributi.  
  
```  
//////////////////////////////////////////////////////////////////////  
// Table and accessor declaration using attributes  
// authors.h  
//////////////////////////////////////////////////////////////////////  
  
// Table class declaration  
// (Note that you must provide your own connection string for db_source.)  
[  
   db_source(L"your connection string"),  
   db_table("Authors")  
]  
class CAuthors  
{  
public:  
   DWORD m_dwAuIDStatus;  
   DWORD m_dwAuthorStatus;  
   DWORD m_dwYearBornStatus;  
   DWORD m_dwAuIDLength;  
   DWORD m_dwAuthorLength;  
   DWORD m_dwYearBornLength;  
   [ db_column(1, status=m_dwAuIDStatus, length=m_dwAuIDLength) ] LONG m_AuID;  
   [ db_column(2, status=m_dwAuthorStatus, length=m_dwAuthorLength) ] TCHAR m_Author[51];  
   [ db_column(3, status=m_dwYearBornStatus, length=m_dwYearBornLength) ] SHORT m_YearBorn;  
   void GetRowsetProperties(CDBPropSet* pPropSet)  
   {  
      pPropSet->AddProperty(DBPROP_CANFETCHBACKWARDS, true);  
      pPropSet->AddProperty(DBPROP_CANSCROLLBACKWARDS, true);  
      pPropSet->AddProperty(DBPROP_IRowsetChange, true);  
   }  
};  
```  
  
## Dichiarazione della tabella e della funzione di accesso tramite i modelli  
 Di seguito è riportata la dichiarazione della tabella e della funzione di accesso specificata tramite modelli.  
  
```  
//////////////////////////////////////////////////////////////////////  
// Table and user record class declaration using templates  
// authors.h  
//////////////////////////////////////////////////////////////////////  
  
// User record class declaration  
class CAuthorsNoAttrAccessor  
{  
public:  
   DWORD m_dwAuIDStatus;  
   DWORD m_dwAuthorStatus;  
   DWORD m_dwYearBornStatus;  
   DWORD m_dwAuIDLength;  
   DWORD m_dwAuthorLength;  
   DWORD m_dwYearBornLength;  
   LONG m_AuID;  
   TCHAR m_Author[51];  
   SHORT m_YearBorn;  
   void GetRowsetProperties(CDBPropSet* pPropSet)  
   {  
      pPropSet->AddProperty(DBPROP_CANFETCHBACKWARDS, true);  
      pPropSet->AddProperty(DBPROP_CANSCROLLBACKWARDS, true);  
      pPropSet->AddProperty(DBPROP_IRowsetChange, true);  
   }  
   HRESULT OpenDataSource()  
   {  
      CDataSource _db;  
      HRESULT hr;  
      hr = _db.OpenFromInitializationString(L"your connection string");  
      if (FAILED(hr))  
      {  
#ifdef _DEBUG  
         AtlTraceErrorRecords(hr);  
#endif  
         return hr;  
      }  
      return m_session.Open(_db);  
   }  
   void CloseDataSource()  
   {  
      m_session.Close();  
   }  
   operator const CSession&()  
   {  
      return m_session;  
   }  
   CSession m_session;  
   BEGIN_COLUMN_MAP(CAuthorsNoAttrAccessor)  
      COLUMN_ENTRY_LENGTH_STATUS(1, m_AuID, m_dwAuIDLength, m_dwAuIDStatus)  
      COLUMN_ENTRY_LENGTH_STATUS(2, m_Author, m_dwAuthorLength, m_dwAuthorStatus)  
      COLUMN_ENTRY_LENGTH_STATUS(3, m_YearBorn, m_dwYearBornLength, m_dwYearBornStatus)  
   END_COLUMN_MAP()  
};  
class CAuthorsNoAttr : public CTable<CAccessor<CAuthorsNoAttrAccessor> >  
{  
public:  
   HRESULT OpenAll()  
   {  
      HRESULT hr;  
      hr = OpenDataSource();  
      if (FAILED(hr))  
         return hr;  
      __if_exists(GetRowsetProperties)  
      {  
         CDBPropSet propset(DBPROPSET_ROWSET);  
         __if_exists(HasBookmark)  
         {  
            propset.AddProperty(DBPROP_IRowsetLocate, true);  
         }  
         GetRowsetProperties(&propset);  
         return OpenRowset(&propset);  
      }  
      __if_not_exists(GetRowsetProperties)  
      {  
         __if_exists(HasBookmark)  
         {  
            CDBPropSet propset(DBPROPSET_ROWSET);  
            propset.AddProperty(DBPROP_IRowsetLocate, true);  
            return OpenRowset(&propset);  
         }  
      }  
      return OpenRowset();  
   }  
   HRESULT OpenRowset(DBPROPSET *pPropSet = NULL)  
   {  
      HRESULT hr = Open(m_session, "Authors", pPropSet);  
#ifdef _DEBUG  
      if(FAILED(hr))  
         AtlTraceErrorRecords(hr);  
#endif  
      return hr;  
   }  
   void CloseAll()  
   {  
      Close();  
      CloseDataSource();  
   }  
};  
```  
  
## Vedere anche  
 [OLE DB Consumer Attributes](../../windows/ole-db-consumer-attributes.md)   
 [Attributes Walkthroughs](http://msdn.microsoft.com/it-it/73df1d5d-261a-4521-98fb-06dcbf5ec0d0)
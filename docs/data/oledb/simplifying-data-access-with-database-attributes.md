---
title: Semplificazione dell'accesso ai dati con gli attributi del Database | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- vc-attr.db_param
- vc-attr.db_column
- vc-attr.db_accessor
- vc-attr.db_command
- vc-attr.db_table
- vc-attr.db_source
dev_langs:
- C++
helpviewer_keywords:
- attributes [C++], database
- attributes [C++], data access
- databases [C++], attributes
- data [C++], simplifying access
- data access [C++], database attributes
- database attributes [C++]
- OLE DB consumers [C++], database attributes
- attributes [C++], OLE DB consumer
ms.assetid: 560d2456-e307-4cb7-ba7b-4d0ed674697f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: a9897be9bbcae0a03ef67996bda6f3ffbe894b8f
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43680452"
---
# <a name="simplifying-data-access-with-database-attributes"></a>Semplificazione dell'accesso ai dati con gli attributi del database
In questo argomento viene illustrato l'utilizzo degli attributi del database per semplificare le operazioni di database.  
  
 Il modo semplice per accedere alle informazioni da un database consiste nel creare una classe di comando (o tabella) e una classe di record utente per una determinata tabella nel database. Gli attributi di database semplificano alcune delle dichiarazioni di modello che in precedenza era necessario eseguire operazioni.  
  
 Per illustrare l'uso degli attributi del database, le sezioni seguenti illustrano due equivalente nella tabella e le dichiarazioni di classe di record utente: il primo Usa gli attributi e il secondo Usa modelli OLE DB. Il codice delle dichiarazioni in genere viene inserito in un file di intestazione denominato per l'oggetto tabella o un comando, ad esempio authors.  
  
 Confrontando i due file, è possibile vedere molto più semplice è usare gli attributi. Le principali differenze sono:  
  
-   Uso di attributi, è sufficiente dichiarare una classe: `CAuthors`, mentre con i modelli è necessario dichiarare due: `CAuthorsNoAttrAccessor` e `CAuthorsNoAttr`.  
  
-   Il `db_source` chiamata nella versione con attributa è equivalente al `OpenDataSource()` chiamare nella dichiarazione del modello.  
  
-   Il `db_table` chiamata nella versione con attributa è equivalente alla dichiarazione di modello seguente:  
  
    ```  
    class CAuthorsNoAttr : public CTable<CAccessor<CAuthorsNoAttrAccessor>>  
    ```  
  
-   Il `db_column` chiamate nella versione con attributa sono equivalenti alla mappa delle colonne (vedere `BEGIN_COLUMN_MAP ... END_COLUMN_MAP`) nella dichiarazione del modello.  
  
 Gli attributi inseriscono una dichiarazione di classe di record utente per l'utente. È equivalente alla classe di record utente `CAuthorsNoAttrAccessor` nella dichiarazione del modello. Se è la classe di tabella `CAuthors`, la classe di record utente inserito è denominata `CAuthorsAccessor`, ed è possibile visualizzare solo la relativa dichiarazione nel codice inserito. Per altre informazioni, vedere "Classi di Record utente inserite dagli attributi" nella [record utente](../../data/oledb/user-records.md).  
  
 Si noti che l'attributo sia il codice basato su modelli, è necessario impostare le proprietà del set di righe utilizzando `CDBPropSet::AddProperty`.  
  
 Per informazioni sugli attributi descritti in questo argomento, vedere [attributi del Consumer OLE DB](../../windows/ole-db-consumer-attributes.md).  
  
## <a name="table-and-accessor-declaration-using-attributes"></a>Dichiarazione di funzione di accesso utilizzando gli attributi e tabella  
 Il codice seguente chiama `db_source` e `db_table` sulla classe di tabella. `db_source` Specifica l'origine dati e la connessione da utilizzare. `db_table` Inserisce il codice del modello appropriato per dichiarare una classe di tabella. `db_column` Specifica la mappa delle colonne e inserire la dichiarazione di funzione di accesso. È possibile usare gli attributi del consumer OLE DB in qualsiasi progetto che supporta ATL.  
  
 Ecco la dichiarazione di funzioni di accesso e di tabella utilizzando gli attributi:  
  
```cpp
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
  
## <a name="table-and-accessor-declaration-using-templates"></a>Dichiarazione di funzione di accesso usando i modelli e tabella  
 Ecco la dichiarazione di tabella e della funzione di accesso usando i modelli.  
  
```cpp
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
class CAuthorsNoAttr : public CTable<CAccessor<CAuthorsNoAttrAccessor>>  
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
  
## <a name="see-also"></a>Vedere anche  
 [Attributi del consumer OLE DB](../../windows/ole-db-consumer-attributes.md)   

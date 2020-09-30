---
title: Semplificazione dell'accesso ai dati con gli attributi del database
ms.date: 10/19/2018
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
ms.openlocfilehash: faee3ea47a6d96b09729d9d4b5bfa21584096d31
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91509469"
---
# <a name="simplifying-data-access-with-database-attributes"></a>Semplificazione dell'accesso ai dati con gli attributi del database

In questo argomento viene illustrato l'utilizzo di attributi di database per semplificare le operazioni di database.

Il modo più semplice per accedere alle informazioni da un database consiste nel creare una classe Command (o Table) e una classe di record utente per una determinata tabella del database. Gli attributi del database semplificano alcune delle dichiarazioni di modello che in precedenza era necessario eseguire.

Per illustrare l'uso degli attributi di database, nelle sezioni seguenti vengono illustrate due dichiarazioni di classe di record utente e tabella equivalenti: il primo usa gli attributi e il secondo USA OLE DB modelli. Tale codice di dichiarazione viene in genere inserito in un file di intestazione denominato per la tabella o l'oggetto Command, ad esempio authors. h.

Confrontando i due file, è possibile vedere quanto più semplice è usare gli attributi. Tra le differenze:

- Utilizzando gli attributi, è necessario dichiarare solo una classe: `CAuthors` , mentre con i modelli è necessario dichiarare due: `CAuthorsNoAttrAccessor` e `CAuthorsNoAttr` .

- La `db_source` chiamata nella versione con attributi equivale alla `OpenDataSource()` chiamata nella dichiarazione di modello.

- La `db_table` chiamata nella versione con attributi equivale alla dichiarazione di modello seguente:

    ```cpp
    class CAuthorsNoAttr : public CTable<CAccessor<CAuthorsNoAttrAccessor>>
    ```

- Le `db_column` chiamate nella versione con attributi sono equivalenti alla mappa delle colonne (vedere `BEGIN_COLUMN_MAP ... END_COLUMN_MAP` ) nella dichiarazione del modello.

Gli attributi inseriscono una dichiarazione di classe di record utente. La classe di record utente è uguale a `CAuthorsNoAttrAccessor` nella dichiarazione di modello. Se la classe Table è `CAuthors` , la classe di record utente inserita viene denominata `CAuthorsAccessor` ed è possibile visualizzarne solo la dichiarazione nel codice inserito. Per ulteriori informazioni, vedere "classi di record utente inseriti dall'attributo" nei [record utente](../../data/oledb/user-records.md).

Sia nel codice con attributi che nel codice basato su modelli, è necessario impostare le proprietà del set di righe utilizzando `CDBPropSet::AddProperty` .

Per informazioni sugli attributi descritti in questo argomento, vedere [OLE DB gli attributi del consumer](../../windows/attributes/ole-db-consumer-attributes.md).

> [!NOTE]
> `include`Per compilare gli esempi riportati di seguito, è necessario eseguire le istruzioni seguenti:

> ```cpp
> #include <atlbase.h>
> #include <atlplus.h>
> #include <atldbcli.h>
> ```

## <a name="table-and-accessor-declaration-using-attributes"></a>Dichiarazione della tabella e della funzione di accesso con attributi

Il codice seguente chiama `db_source` e `db_table` sulla classe Table. `db_source` Specifica l'origine dati e la connessione da utilizzare. `db_table` inserisce il codice del modello appropriato per dichiarare una classe della tabella. `db_column` specificare la mappa della colonna e inserire la dichiarazione della funzione di accesso. È possibile utilizzare OLE DB gli attributi del consumer in qualsiasi progetto che supporti ATL.

Ecco la dichiarazione della tabella e della funzione di accesso usando gli attributi:

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
   DBSTATUS m_dwAuIDStatus;
   DBSTATUS m_dwAuthorStatus;
   DBSTATUS m_dwYearBornStatus;
   DBLENGTH m_dwAuIDLength;
   DBLENGTH m_dwAuthorLength;
   DBLENGTH m_dwYearBornLength;
   [db_column("1", status = "m_dwAuIDStatus", length = "m_dwAuIDLength")] LONG m_AuID;
   [db_column("2", status = "m_dwAuthorStatus", length = "m_dwAuthorLength")] TCHAR m_Author[51];
   [db_column("3", status = "m_dwYearBornStatus", length = "m_dwYearBornLength")] SHORT m_YearBorn;
   void GetRowsetProperties(CDBPropSet* pPropSet)
   {
      pPropSet->AddProperty(DBPROP_CANFETCHBACKWARDS, true);
      pPropSet->AddProperty(DBPROP_CANSCROLLBACKWARDS, true);
      pPropSet->AddProperty(DBPROP_IRowsetChange, true);
   }
};
```

## <a name="table-and-accessor-declaration-using-templates"></a>Dichiarazione della tabella e della funzione di accesso con i modelli

Ecco la dichiarazione della tabella e della funzione di accesso usando i modelli.

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

[Attributi del consumer OLE DB](../../windows/attributes/ole-db-consumer-attributes.md)

---
title: "Membri dati di stato dei campi in funzioni di accesso generate dalla creazione guidata | Microsoft Docs"
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
  - "stato dei campi nei modelli OLE DB"
  - "OLE DB (modelli consumer), stato dei campi"
ms.assetid: 66e4e223-c60c-471e-860d-d23abcdfe371
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Membri dati di stato dei campi in funzioni di accesso generate dalla creazione guidata
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Quando si utilizza la Creazione guidata consumer OLE DB ATL per creare un consumer, viene generato un membro dati nella classe di record utente per ogni campo specificato nella mappa delle colonne.  Ogni membro dati è di tipo `DWORD` e contiene un valore di stato corrispondente al rispettivo campo.  
  
 Per un membro dati *m\_OwnerID*, ad esempio, viene generato un membro dati aggiuntivo per lo stato del campo \(*dwOwnerIDStatus*\) e un altro per la lunghezza del campo \(*dwOwnerIDLength*\).  Viene inoltre generata una mappa delle colonne con voci `COLUMN_ENTRY_LENGTH_STATUS`.  
  
 Questa operazione è descritta nel codice che segue:  
  
```  
[db_source("insert connection string")]  
[db_command(" \  
   SELECT \  
      Au_ID, \  
      Author, \  
      `Year Born`, \  
      FROM Authors")]  
  
class CAuthors  
{  
public:  
  
   // The following wizard-generated data members contain status   
   // values for the corresponding fields in the column map. You   
   // can use these values to hold NULL values that the database   
   // returns or to hold error information when the compiler returns   
   // errors. See "Field Status Data Members in Wizard-Generated   
   // Accessors" in the Visual C++ documentation for more information   
   // on using these fields.  
   DWORD m_dwAuIDStatus;  
   DWORD m_dwAuthorStatus;  
   DWORD m_dwYearBornStatus;  
  
   // The following wizard-generated data members contain length  
   // values for the corresponding fields in the column map.  
   DWORD m_dwAuIDLength;  
   DWORD m_dwAuthorLength;  
   DWORD m_dwYearBornLength;  
  
BEGIN_COLUMN_MAP(CAuthorsAccessor)  
   COLUMN_ENTRY_LENGTH_STATUS(1, m_AuID, dwAuIDLength, dwAuIDStatus)  
   COLUMN_ENTRY_LENGTH_STATUS(2, m_Author, dwAuthorLength, dwAuthorStatus)  
   COLUMN_ENTRY_LENGTH_STATUS(3, m_YearBorn, dwYearBornLength, dwYearBornStatus)  
END_COLUMN_MAP()  
  
   [ db_column(1, status=m_dwAuIDStatus, length=m_dwAuIDLength) ] LONG m_AuID;  
   [ db_column(2, status=m_dwAuthorStatus, length=m_dwAuthorLength) ] TCHAR m_Author[51];  
   [ db_column(3, status=m_dwYearBornStatus, length=m_dwYearBornLength) ] SHORT m_YearBorn;  
  
   void GetRowsetProperties(CDBPropSet* pPropSet)  
   {  
      pPropSet->AddProperty(DBPROP_IRowsetChange, true);  
      pPropSet->AddProperty(DBPROP_UPDATABILITY, DBPROPVAL_UP_CHANGE | DBPROPVAL_UP_INSERT | DBPROPVAL_UP_DELETE);  
   }  
};  
```  
  
> [!NOTE]
>  Se si modifica la classe di record utente o si crea un consumer personalizzato, le variabili dei dati devono essere specificate prima delle variabili di stato e di lunghezza.  
  
 È possibile utilizzare i valori di stato per eseguire il debug.  Se il codice generato dalla Creazione guidata consumer OLE DB ATL provoca un errore di compilazione quale **DB\_S\_ERRORSOCCURRED** o **DB\_E\_ERRORSOCCURRED**, è necessario innanzitutto controllare i valori correnti dei membri dati di stato dei campi.  Quelli che hanno un valore diverso da zero corrispondono alle colonne che hanno generato l'errore.  
  
 È inoltre possibile utilizzare i valori di stato per impostare un valore NULL per un determinato campo.  Questa operazione risulta utile nei casi in cui si desidera distinguere un valore di campo come NULL anziché come zero.  È compito del programmatore decidere se considerare NULL un valore valido oppure un valore speciale e stabilire il modo in cui l'applicazione dovrà gestire tale valore.  OLE DB definisce **DBSTATUS\_S\_ISNULL** come metodo corretto per specificare un valore NULL generico.  Se il consumer recupera i dati e il valore è Null, il campo dello stato verrà impostato su **DBSTATUS\_S\_ISNULL**.  Se il consumer deve impostare un valore NULL, imposta il valore di stato su **DBSTATUS\_S\_ISNULL** prima di chiamare il provider.  
  
 Aprire quindi oledb.h e cercare **DBSTATUSENUM**.  A questo punto, è possibile confrontare il valore numerico dello stato diverso da zero con i valori di enumerazione di **DBSTATUSENUM**.  Se il nome dell'enumerazione non è sufficiente per indicare che il problema, vedere l'argomento "status" nella sezione di valori di associazione di dati" [La guida per i programmatori OLE DB](http://go.microsoft.com/fwlink/?LinkId=121548).  Questo argomento contiene tabelle di valori di stato utilizzate durante l'acquisizione o l'impostazione di dati.  Per informazioni sui valori delle lunghezze, vedere l'argomento "Length" nella stessa sezione.  
  
## Recupero della lunghezza o dello stato di una colonna  
 È possibile recuperare la lunghezza di una colonna di lunghezza variabile o lo stato di una colonna, ad esempio per controllare **DBSTATUS\_S\_ISNULL**.  
  
-   Per ottenere la lunghezza, utilizzare la macro `COLUMN_ENTRY_LENGTH`.  
  
-   Per ottenere lo stato, utilizzare la macro `COLUMN_ENTRY_STATUS`.  
  
-   Per ottenere entrambi, utilizzare `COLUMN_ENTRY_LENGTH_STATUS`, come indicato di seguito.  
  
```  
class CProducts  
{  
public:  
   char      szName[40];  
   long      nNameLength;  
   DBSTATUS   nNameStatus;  
  
BEGIN_COLUMN_MAP(CProducts)  
// Bind the column to CProducts.m_ProductName.  
// nOrdinal is zero-based, so the column number of m_ProductName is 1.  
   COLUMN_ENTRY_LENGTH_STATUS(1, szName, nNameLength, nNameStatus)  
END_COLUMN_MAP()  
};  
  
CTable<CAccessor<CProducts > > product;  
  
product.Open(session, "Product");  
while (product.MoveNext() == S_OK)  
{  
   // Check the product name isn't NULL before tracing it  
   if (product.nNameStatus == DBSTATUS_S_OK)  
      ATLTRACE("%s is %d characters\n", szName, nNameLength);  
}  
```  
  
 Quando si utilizza `CDynamicAccessor`, la lunghezza e lo stato vengono associati automaticamente.  Per recuperare i valori della lunghezza e dello stato, utilizzare le funzioni membro `GetLength` e **GetStatus**.  
  
## Vedere anche  
 [Utilizzo dei modelli consumer OLE DB](../../data/oledb/working-with-ole-db-consumer-templates.md)
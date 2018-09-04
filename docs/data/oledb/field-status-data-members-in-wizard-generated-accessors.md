---
title: Campo di membri dati di stato in funzioni di accesso generate dalla procedura guidata | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- OLE DB consumer templates, field status
- field status in OLE DB templates
ms.assetid: 66e4e223-c60c-471e-860d-d23abcdfe371
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 2538e2b14277b24c583ae2392dd9249c93d4854b
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43690265"
---
# <a name="field-status-data-members-in-wizard-generated-accessors"></a>Membri dati di stato dei campi in funzioni di accesso generate dalla creazione guidata
Quando si usa la creazione guidata Consumer OLE DB ATL per creare un utente, la procedura guidata genera un membro dati della classe di record utente per ogni campo che specifica nella mappa delle colonne. Ogni membro dati è di tipo `DWORD` e contiene un valore di stato corrispondente al campo corrispondente.  
  
 Ad esempio, per un membro dati *m_OwnerID*, la procedura guidata genera un membro dati aggiuntivi per lo stato del campo (*dwOwnerIDStatus*) e un altro per la lunghezza del campo (*dwOwnerIDLength*). Viene inoltre generata una mappa delle colonne con voci COLUMN_ENTRY_LENGTH_STATUS.  
  
 Questa operazione è illustrata nel codice seguente:  
  
```cpp  
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
  
 È possibile usare i valori di stato per scopi di debug. Se il codice generato dalla creazione guidata Consumer OLE DB ATL genera errori di compilazione, ad esempio DB_S_ERRORSOCCURRED o DB_E_ERRORSOCCURRED, è necessario innanzitutto controllare i valori correnti dei membri di dati dello stato del campo. Quelli che hanno valori diversi da zero corrispondono alle colonne che causa l'errore.  
  
 È anche possibile usare i valori di stato per impostare un valore NULL per un determinato campo. In questo modo risulta utile nei casi in cui si vuole distinguere un valore del campo come valore NULL anziché zero. È responsabilità dell'utente a decidere se NULL è un valore valido o un valore speciale e decidere come l'applicazione deve gestire. OLE DB definisce DBSTATUS_S_ISNULL come il termine corretto si intende specificare un valore NULL generico. Se il consumer legge i dati e il valore è null, il campo stato è impostato su DBSTATUS_S_ISNULL. Se l'utente desidera impostare un valore NULL, il consumer imposta il valore di stato su DBSTATUS_S_ISNULL prima di chiamare il provider.  
  
 Successivamente, aprire OleDb e cercare `DBSTATUSENUM`. È quindi possibile confrontare il valore numerico dello stato diverso da zero con la `DBSTATUSENUM` valori di enumerazione. Se il nome dell'enumerazione non è sufficiente per individuare il problema, vedere l'argomento "Status" nella sezione "Associazione dei valori di dati" del [Guida per programmatori OLE DB](/previous-versions/windows/desktop/ms713643\(v=vs.85\)). In questo argomento contiene le tabelle di valori di stati utilizzati per ottenere o impostare i dati. Per informazioni sui valori di lunghezza, vedere l'argomento "Length" nella stessa sezione.  
  
## <a name="retrieving-the-length-or-status-of-a-column"></a>Recupero della lunghezza o lo stato di una colonna  
 È possibile recuperare la lunghezza di una colonna a lunghezza variabile o lo stato di una colonna (da cercare DBSTATUS_S_ISNULL, ad esempio):  
  
-   Per ottenere la lunghezza, usare il COLUMN_ENTRY_LENGTH (macro).  
  
-   Per ottenere lo stato, usare il COLUMN_ENTRY_STATUS (macro).  
  
-   Per ottenere entrambi, usare COLUMN_ENTRY_LENGTH_STATUS, come illustrato di seguito.  
  
```cpp  
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
  
CTable<CAccessor<CProducts >> product;  
  
product.Open(session, "Product");  

while (product.MoveNext() == S_OK)  
{  
   // Check the product name isn't NULL before tracing it  
   if (product.nNameStatus == DBSTATUS_S_OK)  
      ATLTRACE("%s is %d characters\n", szName, nNameLength);  
}  
```  
  
 Quando si usa `CDynamicAccessor`, la lunghezza e stato vengono associati automaticamente. Per recuperare i valori di lunghezza e stato, usare il `GetLength` e `GetStatus` funzioni membro.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso dei modelli consumer OLE DB](../../data/oledb/working-with-ole-db-consumer-templates.md)
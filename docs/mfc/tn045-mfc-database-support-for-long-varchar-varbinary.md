---
title: "TN045: supporto di MFC/database per Long Varchar/Varbinary | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.data"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "TN045"
  - "Varbinary (tipo di dati)"
  - "Varchar (tipo di dati)"
ms.assetid: cf572c35-5275-45b5-83df-5f0e36114f40
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# TN045: supporto di MFC/database per Long Varchar/Varbinary
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online.  Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati.  Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota viene descritto come recuperare e inviare i tipi di dati ODBC **SQL\_LONGVARCHAR** e di **SQL\_LONGVARBINARY** utilizzo di classi di database MFC.  
  
## Cenni preliminari sul supporto esteso di Varchar\/Varbinary  
 I tipi di dati ODBC **SQL\_LONG\_VARCHAR** e di **SQL\_LONGBINARY** \(indicati qui come colonne di dati long\) possono utilizzare i grande quantità di dati.  Esistono 3 modalità che è possibile gestire questi dati:  
  
-   Associazione a `CString`\/`CByteArray`.  
  
-   Associazione a `CLongBinary`.  
  
-   Non è associata alcuna e non vengono recuperati e non invia il valore dei dati long manualmente, indipendente dalle classi di database.  
  
 Ciascuno dei tre metodi presenta vantaggi e svantaggi.  
  
 Le colonne di dati lunghe non sono supportate per i parametri a una query.  Sono supportate solo per i outputColumns.  
  
## Associazione di una colonna di dati long in un CString\/CByteArray  
 Vantaggi:  
  
 Questo approccio è semplice comprensione e di lavoro con le classi comuni.  Il framework fornisce il supporto di `CFormView` a `CString` con `DDX_Text`.  Sono disponibili molti di funzionalità generale della raccolta o della stringa con le classi di `CByteArray` e di `CString` ed è possibile modificare la quantità di memoria allocata in locale per contenere il valore dei dati.  Il framework gestisce una copia precedente di dati dei campi durante **Modifica** o chiamate di funzione di `AddNew` e il framework può rilevare automaticamente le modifiche ai dati.  
  
> [!NOTE]
>  Poiché `CString` è progettato per funzionare nei dati di tipo carattere e `CByteArray` da eseguire sui dati binari, è consigliabile viene inserito i dati di tipo carattere \(**SQL\_LONGVARCHAR**\) in `CString` e i dati binari \(**SQL\_LONGVARBINARY**\) in `CByteArray`.  
  
 Le funzioni RFX per `CString` e `CByteArray` hanno un argomento supplementare che consente di eseguire l'override della dimensione predefinita di memoria allocata per contenere il valore recuperato per la colonna di dati.  Annotare l'argomento nMaxLength nelle dichiarazioni di funzione:  
  
```  
void AFXAPI RFX_Text(CFieldExchange* pFX, const char *szName,  
    CString& value, int nMaxLength = 255, int nColumnType =  
    SQL_VARCHAR);  
  
void AFXAPI RFX_Binary(CFieldExchange* pFX, const char *szName,   
    CByteArray& value,int nMaxLength = 255);  
```  
  
 Se si recupera una colonna di dati long in `CString` o in `CByteArray`, la quantità di dati restituita è, per impostazione predefinita, 255 byte.  Nient'altro che questo viene ignorato.  In questo caso, il framework genera l'eccezione **AFX\_SQL\_ERROR\_DATA\_TRUNCATED**.  Fortunatamente, è possibile in modo esplicito aumentare il nMaxLength ai valori maggiori, fino a **MAXINT**.  
  
> [!NOTE]
>  Il valore di nMaxLength viene utilizzato da MFC per impostare il buffer locale della funzione di **SQLBindColumn**.  Si tratta del buffer locale per l'archiviazione dei dati e non influisce sulla quantità di dati restituiti dal driver ODBC.  `RFX_Text` e fare `RFX_Binary` solo una chiamata tramite **SQLFetch** per recuperare i dati dal database back\-end.  Ogni driver ODBC presenta un limite diverso della quantità di dati che possono restituire in un'unica raccolta.  Questo limite può essere molto inferiore del valore impostato in nMaxLength in questo caso, l'eccezione **AFX\_SQL\_ERROR\_DATA\_TRUNCATED** verrà generata.  In queste condizioni, dell'opzione a utilizzare `RFX_LongBinary` anziché `RFX_Text` o di `RFX_Binary` in modo da poter recuperare tutti i dati.  
  
 ClassWizard verrà associata **SQL\_LONGVARCHAR** a `CString`, o **SQL\_LONGVARBINARY** a `CByteArray` automaticamente.  Se si desidera allocare più di 255 byte in cui recuperare la colonna di dati long, è possibile fornire un valore esplicito per nMaxLength.  
  
 Quando una colonna di dati lunga viene associata a `CString` o a `CByteArray`, aggiornando il funzionamento di campo solo lo stesso di quando è associata a uno SQL\_**VARCHAR** o a SQL\_**VARBINARY**.  Durante il **Modifica**, il valore è memorizzato nella cache tramite e successivamente viene confrontato **Aggiorna** quando viene chiamato per rilevare le modifiche al valore di dati e per impostare il modificato e i valori null per la colonna in modo appropriato.  
  
## Associazione di una colonna di dati lunga a un CLongBinary  
 Se la colonna di dati lunga può contenere più byte di **MAXINT** dei dati, è consigliabile considerare la possibilità di recuperarla in `CLongBinary`.  
  
 Vantaggi:  
  
 Ciò recupera l'intera colonna di dati long, fino alla memoria disponibile.  
  
 Svantaggi:  
  
 I dati vengono utilizzati in memoria.  Questo approccio è anche proibitivamente dispendioso per quantità di dati molto grandi.  È necessario chiamare `SetFieldDirty` per il membro dati associati per proteggere il campo sono inclusi in un'operazione di **Aggiorna**.  
  
 Se si recupera le colonne di dati long in `CLongBinary`, le classi di database nella dimensione totale della colonna di dati long, quindi allocare un segmento di memoria di `HGLOBAL` sufficiente per utilizzarla il valore dei dati.  Le classi di database quindi si recupera il valore dei dati in `HGLOBAL`allocato.  
  
 Se l'origine dati non può restituire la dimensione prevista della colonna di dati long, il framework genera l'eccezione **AFX\_SQL\_ERROR\_SQL\_NO\_TOTAL**.  Se allocare `HGLOBAL` non riesce, viene generata un'eccezione standard di memoria viene generata.  
  
 ClassWizard verrà associata **SQL\_LONGVARCHAR** o **SQL\_LONGVARBINARY** a `CLongBinary` automaticamente.  `CLongBinary` selezionato come la variabile nella finestra di dialogo variabile membro.  ClassWizard aggiunge quindi una chiamata di `RFX_LongBinary` alla chiamata di `DoFieldExchange` e incrementerà il numero totale di campi associati.  
  
 Per aggiornare i valori estesi della colonna di dati, assicurarsi innanzitutto che `HGLOBAL` allocato sia sufficiente per contenere i nuovi dati chiamando **::GlobalSize** al membro di `m_hData` di `CLongBinary`.  Se è troppo piccolo, rilasciare `HGLOBAL` e allocare uno le dimensioni corrette.  `m_dwDataLength` quindi impostare per riflettere la nuova dimensione.  
  
 In caso contrario, se `m_dwDataLength` è maggiore delle dimensioni dei dati che si sta sostituendo, è possibile disponibile e ridistribuire `HGLOBAL`, o lasciarlo allocato.  Assicurarsi indicare il numero di byte effettivamente utilizzato in `m_dwDataLength`.  
  
## Come CLongBinary aggiornando un Funzionamento  
 Non è necessario capire come aggiornare il funzionamento di `CLongBinary`, ma può essere utile come esempio su come inviare i valori dei dati long a un'origine dati, se si sceglie il terzo metodo, descritta di seguito.  
  
> [!NOTE]
>  Affinché un campo di `CLongBinary` da includere in un aggiornamento, è necessario chiamare in modo esplicito `SetFieldDirty` per il campo.  Se si modifica a un campo, inclusi su null, è necessario chiamare `SetFieldDirty`.  È inoltre necessario chiamare `SetFieldNull`, al secondo parametro che è **FALSE**, per contrassegnare un campo come dotata di un valore.  
  
 Nell'aggiornamento di un campo di `CLongBinary`, il meccanismo di **DATA\_AT\_EXEC** di utilizzo di ODBC di classi di database \(vedere la documentazione ODBC nell'argomento di rgbValue di **SQLSetPos** \).  Quando il framework rende inserimento o un'istruzione UPDATE, anziché puntare a `HGLOBAL` contenente i dati, l'indirizzo di `CLongBinary` sono impostati come *valore della* colonna invece e l'indicatore di lunghezza impostato su **SQL\_DATA\_AT\_EXEC**.  In un secondo momento, quando l'istruzione update viene inviata all'origine dati, **SQLExecDirect** restituirà **SQL\_NEED\_DATA**.  Ciò avvisa il framework del valore di param per questa colonna viene effettivamente l'indirizzo di `CLongBinary`.  Il framework chiama una volta **SQLGetData** con un piccolo buffer, prevedente il driver per restituire l'effettiva lunghezza dei dati.  Se il driver e restituisce la lunghezza dell'oggetto binario di grandi dimensioni \(il BLOB\), MFC ridistribuisce a seconda delle esigenze più spazio per recuperare il BLOB.  Se l'origine dati restituisce **SQL\_NO\_TOTAL**, a indicare che non può determinare la dimensione dei BLOB, MFC creerà i blocchi più piccoli.  La dimensione iniziale predefinita è KB e i blocchi successivi verranno doppio la dimensione; ad esempio, il secondo verrà 128K, il terzo è 256K, e così via.  La dimensione iniziale è configurabile.  
  
## Non associazione: Recuperare\/che invia i dati direttamente da ODBC con SQLGetData  
 Con questo metodo si ignora completamente le classi di database e verrà business con la colonna di dati long.  
  
 Vantaggi:  
  
 È possibile memorizzare nella cache i dati su disco se necessario, oppure scegliere dinamicamente la quantità di dati da recuperare.  
  
 Svantaggi:  
  
 Non si ottiene il supporto di **Modifica** o di `AddNew` del framework ed è necessario scrivere il codice è stato scritto per eseguire la funzionalità di base \(**Elimina** viene eseguito in ogni caso, poiché non è un'operazione a livello di colonna\).  
  
 In questo caso, la colonna di dati long sia nell'elenco di selezione del recordset, ma non deve essere associata dal framework.  A tale scopo è quello di fornire l'istruzione SQL personalizzata tramite `GetDefaultSQL` o come argomento lpszSQL della funzione di `CRecordset`**Apri** e non associare la colonna aggiuntiva a una chiamata di funzione di RFX\_.  ODBC è necessario che i campi non associati vengano visualizzati a destra di campi associati, pertanto aggiunge la colonna o colonne non associate alla fine dell'elenco di selezione.  
  
> [!NOTE]
>  Poiché la colonna di dati long non è associata dal framework, le modifiche non verranno gestite dalle chiamate di `CRecordset::Update`.  È necessario creare e inviare SQL obbligatorio **INSERIMENTO** e istruzioni di **AGGIORNA** manualmente.  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)
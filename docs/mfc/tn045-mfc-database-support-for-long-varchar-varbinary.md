---
title: 'TN045: Supporto MFC Database per Long Varchar, Varbinary | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.mfc.data
dev_langs:
- C++
helpviewer_keywords:
- TN045
- Varbinary data type
- Varchar data type
ms.assetid: cf572c35-5275-45b5-83df-5f0e36114f40
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1454be53dce60f5e84e03b895575c480d972c4c0
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36956875"
---
# <a name="tn045-mfcdatabase-support-for-long-varcharvarbinary"></a>TN045: supporto di MFC/database per Long Varchar/Varbinary
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota viene descritto come recuperare e inviare ODBC **SQL_LONGVARCHAR** e **SQL_LONGVARBINARY** tipi di dati tramite l'operazione MFC classi di database.  
  
## <a name="overview-of-long-varcharvarbinary-support"></a>Panoramica del supporto per Long Varchar/Varbinary  
 ODBC **SQL_LONG_VARCHAR** e **SQL_LONGBINARY** tipi di dati (definiti qui come colonne di dati long) possono contenere grandi quantità di dati. Modi 3 è possibile gestire i dati seguenti:  
  
-   Associarlo a un `CString` / `CByteArray`.  
  
-   Associarlo a un `CLongBinary`.  
  
-   Non associarlo affatto e recuperare e inviare il valore di dati di tipo long che manualmente, indipendente da classi di database.  
  
 Ognuno dei tre metodi presenta vantaggi e svantaggi.  
  
 Le colonne di dati Long non sono supportate per i parametri a una query. Sono supportati solo per outputColumns.  
  
## <a name="binding-a-long-data-column-to-a-cstringcbytearray"></a>Associazione di una colonna di dati Long a un'oggetto CString/CByteArray  
 Vantaggi:  
  
 Questo approccio è semplice da comprendere e si lavora con le classi comuni. Il framework fornisce `CFormView` supporto `CString` con `DDX_Text`. Si dispone di un numero elevato di funzionalità generali di stringa o una raccolta con il `CString` e `CByteArray` classi ed è possibile controllare la quantità di memoria allocata in locale per contenere il valore di dati. Il framework gestisce una copia precedente dei dati di campo durante `Edit` o `AddNew` chiamate di funzione e i framework, possono rilevare automaticamente le modifiche ai dati per l'utente.  
  
> [!NOTE]
>  Poiché `CString` è progettato per le operazioni sui dati di tipo carattere, e `CByteArray` da utilizzare su dati binari, è consigliabile inserire i dati di tipo carattere (**SQL_LONGVARCHAR**) in `CString`e i dati binari ( **SQL_LONGVARBINARY**) in `CByteArray`.  
  
 Per il funzionamento di RFX `CString` e `CByteArray` hanno un argomento aggiuntivo che consente eseguire l'override le dimensioni predefinite di memoria allocata per contenere il valore recuperato per la colonna di dati. Si noti l'argomento nMaxLength nelle dichiarazioni di funzione seguente:  
  
```  
void AFXAPI RFX_Text(CFieldExchange* pFX,
    const char *szName,  
    CString& value,
    int nMaxLength = 255,
    int nColumnType = 
    SQL_VARCHAR);

 
void AFXAPI RFX_Binary(CFieldExchange* pFX,
    const char *szName,   
    CByteArray& value,
    int nMaxLength = 255);
```  
  
 Se si recupera una colonna di dati long in un `CString` o `CByteArray`, il valore massimo restituito quantità di dati, per impostazione predefinita, 255 byte. Qualsiasi elemento oltre questo viene ignorato. In questo caso, il framework viene generata l'eccezione **AFX_SQL_ERROR_DATA_TRUNCATED**. Fortunatamente, è possibile in modo esplicito aumentare nMaxLength per valori superiori, fino a **MAXINT**.  
  
> [!NOTE]
>  Il valore di nMaxLength è usato da MFC per impostare il buffer locale del `SQLBindColumn` (funzione). Questo è il buffer locale per l'archiviazione dei dati e non influenza concretamente la quantità di dati restituiti dal driver ODBC. `RFX_Text` e `RFX_Binary` solo effettuare una chiamata tramite `SQLFetch` per recuperare i dati dal database back-end. Ogni driver ODBC è limitata diversi per la quantità di dati che possono restituire in un'unica operazione di recupero. Questo limite può essere notevolmente inferiore al valore impostato nel nMaxLength, nel qual caso l'eccezione **AFX_SQL_ERROR_DATA_TRUNCATED** verrà generata. In queste circostanze, passare all'utilizzo `RFX_LongBinary` invece di `RFX_Text` o `RFX_Binary` in modo che tutti i dati possono essere recuperati.  
  
 ClassWizard eseguirà l'associazione una **SQL_LONGVARCHAR** a un `CString`, o un **SQL_LONGVARBINARY** a un `CByteArray` automaticamente. Se si desidera allocare più di 255 byte in cui si recupera la colonna di dati di tipo long, è possibile specificare un valore esplicito per nMaxLength.  
  
 Quando una colonna di dati long è associata a un `CString` oppure `CByteArray`, aggiornando il campo funziona nello stesso come quando è associato a un SQL _**VARCHAR** o SQL _**VARBINARY**. Durante la `Edit`, il valore dei dati viene memorizzato nella cache da subito e in un secondo momento quando confrontati `Update` viene chiamato per rilevare le modifiche ai dati di valore e impostato il Dirty e i valori Null per la colonna in modo appropriato.  
  
## <a name="binding-a-long-data-column-to-a-clongbinary"></a>Associazione di una colonna di dati Long a un oggetto CLongBinary  
 Se la colonna di dati long può contenere più **MAXINT** byte di dati, è probabilmente consigliabile recuperarli in un `CLongBinary`.  
  
 Vantaggi:  
  
 Consente di recuperare una colonna di dati long intero, un massimo di memoria disponibile.  
  
 Svantaggi:  
  
 I dati viene mantenuti nella memoria. Questo approccio risulta anche proibitivo per grandi quantità di dati. È necessario chiamare `SetFieldDirty` per i dati associati membro per verificare che il campo è incluso in un `Update` operazione.  
  
 Se si recuperano colonne di dati long in un `CLongBinary`, le classi di database verranno, controllare le dimensioni totali della colonna di dati di tipo long, quindi allocare un `HGLOBAL` segmento di memoria sufficiente per tenerla premuta l'intero valore dei dati. Le classi di database, quindi recupero il valore di tutti i dati in allocato `HGLOBAL`.  
  
 Se l'origine dati non può restituire la dimensione prevista della colonna di dati di tipo long, il framework viene generata l'eccezione **AFX_SQL_ERROR_SQL_NO_TOTAL**. Se il tentativo di allocare il `HGLOBAL` ha esito negativo, viene generata un'eccezione di memoria standard.  
  
 ClassWizard eseguirà l'associazione un' **SQL_LONGVARCHAR** oppure **SQL_LONGVARBINARY** a un `CLongBinary` automaticamente. Selezionare `CLongBinary` come il tipo della variabile nella finestra di dialogo Aggiunta guidata variabile membro. ClassWizard verrà quindi aggiunta un' `RFX_LongBinary` chiamata ai `DoFieldExchange` chiamare e incrementa il numero totale di campi associati.  
  
 Per aggiornare dati long i valori di colonna, assicurarsi innanzitutto allocato `HGLOBAL` è sufficientemente grande da contenere nei nuovi dati chiamando **:: GlobalSize** sul *denominato m_hData* membro del `CLongBinary`. Se è troppo piccolo, rilasciare il `HGLOBAL` e allocare uno ha dimensioni appropriate. Quindi impostare *m_dwDataLength* in modo da riflettere la nuova dimensione.  
  
 In caso contrario, se *m_dwDataLength* è maggiore delle dimensioni dei dati si desidera sostituire, è possibile liberare e riallocare la `HGLOBAL`, o lasciare il campo allocata. Verificare che indicare il numero di byte effettivamente utilizzati nel *m_dwDataLength*.  
  
## <a name="how-updating-a-clongbinary-works"></a>Funziona come aggiornamento un CLongBinary  
 Non è necessario comprendere come aggiornamento un `CLongBinary` works, ma può essere utile ad esempio su come inviare i valori di dati long a un'origine dati, se si sceglie questo metodo terzo, descritto di seguito.  
  
> [!NOTE]
>  Affinché un `CLongBinary` campo da includere in un'istruzione update, è necessario chiamare esplicitamente `SetFieldDirty` per il campo. Se si apporta modifiche a un campo, inclusa l'impostazione è Null, è necessario chiamare `SetFieldDirty`. È inoltre necessario chiamare `SetFieldNull`, mentre il secondo parametro diventa **FALSE**per contrassegnare il campo come se avesse un valore.  
  
 Quando si aggiorna un `CLongBinary` campo, le classi di database utilizzano ODBC **DATA_AT_EXEC** meccanismo (vedere documentazione di ODBC su `SQLSetPos`dell'argomento rgbValue). Quando il framework prepara l'istruzione insert o update, invece di puntare ai `HGLOBAL` che contiene i dati, il *indirizzo* del `CLongBinary` viene impostato come il *valore* della colonna al contrario e l'indicatore di lunghezza impostata su **SQL_DATA_AT_EXEC**. Successivamente, quando l'istruzione update viene inviata all'origine dati `SQLExecDirect` restituirà **SQL_NEED_DATA**. In questo modo il framework che il valore di parametro per la colonna sia effettivamente l'indirizzo di un `CLongBinary`. Il framework chiama `SQLGetData` una volta con un buffer di piccole dimensioni, è previsto il driver per restituire la lunghezza effettiva dei dati. Se il driver restituisce la lunghezza effettiva dell'oggetto binario di grandi dimensioni (BLOB), MFC rialloca una quantità di spazio necessario per recuperare il BLOB. Se l'origine dati restituisce **SQL_NO_TOTAL**, che indica che non può determinare le dimensioni del BLOB, MFC creerà blocchi più piccoli. La dimensione iniziale predefinita è 64 KB e blocchi successivi sarà doppia rispetto alla dimensione; ad esempio, il secondo sarà 128 KB, il terzo è 256K e così via. La dimensione iniziale è configurabile.  
  
## <a name="not-binding-retrievingsending-data-directly-from-odbc-with-sqlgetdata"></a>Non è vincolante: Il recupero o l'invio dei dati dirette da ODBC con SQLGetData  
 Con questo metodo completamente ignorare le classi di database e affrontare la colonna di dati di tipo long.  
  
 Vantaggi:  
  
 È possibile memorizzare nella cache di dati su disco se necessario, o decidere in modo dinamico la quantità di dati da recuperare.  
  
 Svantaggi:  
  
 Non si ottiene il framework `Edit` oppure `AddNew` supporto ed è necessario scrivere codice per eseguire le funzionalità di base (`Delete` funzionare, tuttavia, poiché non è un'operazione a livello di colonna).  
  
 La colonna di dati long in questo caso, è necessario racchiudere l'elenco di selezione del recordset, ma non deve essere associata a dal framework. Un modo per effettuare ciò consiste nel fornire un'istruzione SQL personalizzata tramite `GetDefaultSQL` o come argomento lpszSQL `CRecordset`del `Open` funzionare e non associare la colonna aggiuntiva con una chiamata di funzione RFX_. ODBC è necessario che i campi non associati vengono visualizzati a destra di campi associati, aggiungere la colonna non associata o le colonne alla fine dell'elenco di selezione.  
  
> [!NOTE]
>  Poiché la colonna di dati long non è associata dal framework, le modifiche a esso non verranno gestite con `CRecordset::Update` chiamate. È necessario creare e inviare il codice SQL necessario **inserire** e **aggiornamento** istruzioni manualmente.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)


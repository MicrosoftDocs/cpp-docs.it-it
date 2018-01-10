---
title: 'TN045: Supporto di MFC-Database per Long Varchar, Varbinary | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.mfc.data
dev_langs: C++
helpviewer_keywords:
- TN045
- Varbinary data type
- Varchar data type
ms.assetid: cf572c35-5275-45b5-83df-5f0e36114f40
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e1c9b64ef3b164c45a1633281bbaebd6525df659
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="tn045-mfcdatabase-support-for-long-varcharvarbinary"></a>TN045: supporto di MFC/database per Long Varchar/Varbinary
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota viene descritto come recuperare e inviare ODBC **SQL_LONGVARCHAR** e **SQL_LONGVARBINARY** tipi di dati tramite MFC classi di database.  
  
## <a name="overview-of-long-varcharvarbinary-support"></a>Panoramica del supporto per Long Varchar/Varbinary  
 ODBC **SQL_LONG_VARCHAR** e **SQL_LONGBINARY** tipi di dati (definiti qui come colonne di dati long) possono contenere grandi quantità di dati. Sono disponibili 3 modi è possibile gestire questo tipo di dati:  
  
-   Associarlo a un `CString` / `CByteArray`.  
  
-   Associarlo a un `CLongBinary`.  
  
-   Non associarlo affatto e recuperare e inviare il valore di dati di tipo long che manualmente, le classi di database indipendente.  
  
 Ciascuno dei tre metodi presenta vantaggi e svantaggi.  
  
 Colonne di dati Long non sono supportate per i parametri per una query. Sono supportati solo per outputColumns.  
  
## <a name="binding-a-long-data-column-to-a-cstringcbytearray"></a>Associazione di una colonna di dati Long a un'oggetto CString/CByteArray  
 Vantaggi:  
  
 Questo approccio è semplice da comprendere e utilizzo di classi familiarità. Il framework fornisce `CFormView` il supporto per `CString` con `DDX_Text`. Si dispone di numerose funzionalità generali di stringa o una raccolta con il `CString` e `CByteArray` classi ed è possibile controllare la quantità di memoria allocata in locale per contenere il valore di dati. Il framework gestisce una copia precedente dei dati di campo durante **modifica** o `AddNew` chiamate di funzione e può framework rileva automaticamente le modifiche ai dati per l'utente.  
  
> [!NOTE]
>  Poiché `CString` è progettato per le operazioni sui dati di tipo carattere e `CByteArray` per l'utilizzo di dati binari, è consigliabile inserire i dati di tipo carattere (**SQL_LONGVARCHAR**) in `CString`e i dati binari ( **SQL_LONGVARBINARY**) in `CByteArray`.  
  
 Per il funzionamento di RFX `CString` e `CByteArray` dispone di un argomento aggiuntivo che consente eseguire l'override le dimensioni predefinite di memoria allocata per contenere il valore recuperato per la colonna di dati. Si noti l'argomento nMaxLength nelle dichiarazioni di funzione seguente:  
  
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
>  Il valore di nMaxLength è usato da MFC per impostare il buffer locale del **SQLBindColumn** (funzione). Questo è il buffer locale per l'archiviazione dei dati e non influisce in effetti la quantità di dati restituiti dal driver ODBC. `RFX_Text`e `RFX_Binary` solo effettuare una chiamata tramite **SQLFetch** per recuperare i dati dal database back-end. Ogni driver ODBC presenta un diverso limite sulla quantità di dati che possono restituire in un'unica operazione di recupero. Questo limite può essere notevolmente inferiore al valore impostato nel nMaxLength, nel qual caso l'eccezione **AFX_SQL_ERROR_DATA_TRUNCATED** verrà generata. In queste circostanze, passare all'utilizzo `RFX_LongBinary` anziché `RFX_Text` o `RFX_Binary` in modo che tutti i dati possono essere recuperati.  
  
 ClassWizard eseguirà l'associazione una **SQL_LONGVARCHAR** per un `CString`, o un **SQL_LONGVARBINARY** per un `CByteArray` automaticamente. Se si desidera allocare più di 255 byte in cui si recupera la colonna di dati di tipo long, è quindi possibile fornire un valore esplicito per nMaxLength.  
  
 Quando una colonna di dati long è associata a un `CString` o `CByteArray`, aggiornando il campo funziona proprio come quando è associato a un SQL _**VARCHAR** o SQL _**VARBINARY**. Durante la **modifica**, il valore dei dati viene memorizzato nella cache da subito e in un secondo momento quando confrontati **aggiornamento** viene chiamato per rilevare le modifiche ai dati di valore e impostato il Dirty e i valori Null per la colonna in modo appropriato.  
  
## <a name="binding-a-long-data-column-to-a-clongbinary"></a>Associazione di una colonna di dati Long a un oggetto CLongBinary  
 Se la colonna di dati long può contenere più **MAXINT** byte di dati, è probabilmente consigliabile recuperarli in un `CLongBinary`.  
  
 Vantaggi:  
  
 Consente di recuperare una colonna di dati long intero, un massimo di memoria disponibile.  
  
 Svantaggi:  
  
 I dati vengono archiviati in memoria. Questo approccio è inoltre proibitivo per grandi quantità di dati. È necessario chiamare `SetFieldDirty` per i dati associati membro per verificare che il campo è incluso in un **aggiornamento** operazione.  
  
 Se si recuperano colonne di dati long in un `CLongBinary`, le classi di database verranno, controllare le dimensioni totali della colonna di dati di tipo long, quindi allocare un `HGLOBAL` segmento di memoria sufficiente per contenere l'intero valore dei dati. Le classi di database, quindi recupero il valore di tutti i dati in allocato `HGLOBAL`.  
  
 Se l'origine dati non può restituire la dimensione prevista della colonna di dati di tipo long, il framework viene generata l'eccezione **AFX_SQL_ERROR_SQL_NO_TOTAL**. Se il tentativo di allocare il `HGLOBAL` ha esito negativo, viene generata un'eccezione di memoria standard.  
  
 ClassWizard eseguirà l'associazione un **SQL_LONGVARCHAR** o **SQL_LONGVARBINARY** per un `CLongBinary` automaticamente. Selezionare `CLongBinary` come il tipo della variabile nella finestra di dialogo Aggiunta guidata variabile membro. ClassWizard aggiungerà quindi un `RFX_LongBinary` tutte le chiamate al `DoFieldExchange` chiamare e incrementa il numero totale di campi associati.  
  
 Per aggiornare dati long i valori di colonna, assicurarsi innanzitutto allocato `HGLOBAL` è sufficientemente grande da contenere i nuovi dati chiamando **:: GlobalSize** sul `m_hData` appartenente il `CLongBinary`. Se è troppo piccolo, rilasciare il `HGLOBAL` e allocare una dimensione appropriata. Impostare quindi `m_dwDataLength` in modo da riflettere la nuova dimensione.  
  
 In caso contrario, se `m_dwDataLength` è maggiore delle dimensioni dei dati di cui si desidera sostituire, è possibile liberare e riallocare la `HGLOBAL`, o lasciare il campo allocata. Assicurarsi di indicare il numero di byte effettivamente utilizzati nel `m_dwDataLength`.  
  
## <a name="how-updating-a-clongbinary-works"></a>Aggiornamento come un CLongBinary funziona  
 Non è necessario comprendere la modalità di aggiornamento un `CLongBinary` funziona, ma può essere utile ad esempio su come inviare i valori di dati long a un'origine dati, se si sceglie il terzo metodo, descritto di seguito.  
  
> [!NOTE]
>  Affinché un `CLongBinary` campo da includere in un aggiornamento, è necessario chiamare esplicitamente `SetFieldDirty` per il campo. Se si apporta modifiche a un campo, inclusa l'impostazione è Null, è necessario chiamare `SetFieldDirty`. È inoltre necessario chiamare `SetFieldNull`, con il secondo parametro **FALSE**per contrassegnare il campo come se avesse un valore.  
  
 Quando si aggiorna un `CLongBinary` campo, le classi di database utilizzano ODBC **DATA_AT_EXEC** meccanismo (vedere documentazione di ODBC in **SQLSetPos**dell'argomento rgbValue). Quando il framework prepara l'istruzione insert o update, invece di puntare al `HGLOBAL` che contiene i dati, il *indirizzo* del `CLongBinary` è impostato come il *valore* della colonna In alternativa, impostare l'indicatore di lunghezza e **SQL_DATA_AT_EXEC**. Successivamente, quando l'istruzione update viene inviata all'origine dati, **SQLExecDirect** restituirà **SQL_NEED_DATA**. In questo modo il framework che il valore di parametro per la colonna sia effettivamente l'indirizzo di un `CLongBinary`. Il framework chiama **SQLGetData** una volta con un buffer di piccole dimensioni, è previsto il driver per restituire la lunghezza effettiva dei dati. Se il driver restituisce la lunghezza effettiva dell'oggetto binario di grandi dimensioni (BLOB), MFC rialloca una quantità di spazio necessario per recuperare il BLOB. Se l'origine dati restituisce **SQL_NO_TOTAL**, che indica che non può determinare la dimensione del BLOB, MFC creerà blocchi più piccoli. La dimensione iniziale predefinita è 64 KB e blocchi successivi sarà doppia rispetto alla dimensione; ad esempio, il secondo sarà 128 KB, il terzo è 256K e così via. La dimensione iniziale è configurabile.  
  
## <a name="not-binding-retrievingsending-data-directly-from-odbc-with-sqlgetdata"></a>Non è vincolante: Il recupero o l'invio dei dati direttamente da ODBC con SQLGetData  
 Con questo metodo completamente ignorare le classi di database e gestire la colonna di dati di tipo long.  
  
 Vantaggi:  
  
 È possibile memorizzare nella cache di dati su disco se necessario, o decidere in modo dinamico la quantità di dati da recuperare.  
  
 Svantaggi:  
  
 Non si ottiene il framework **modifica** o `AddNew` supporto ed è necessario scrivere codice per eseguire le funzionalità di base (**eliminare** funzionare, tuttavia, poiché non è un'operazione a livello di colonna).  
  
 La colonna di dati long in questo caso, deve essere nell'elenco di selezione del recordset, ma non deve essere associata a dal framework. Un modo per effettuare ciò consiste nel fornire un'istruzione SQL personalizzata tramite `GetDefaultSQL` o come argomento lpszSQL `CRecordset`del **aprire** funzione e non associare la colonna aggiuntiva con una chiamata di funzione RFX_. ODBC richiede che i campi non associati vengono visualizzati a destra di campi associati e di aggiungere la colonna non associata o le colonne alla fine dell'elenco di selezione.  
  
> [!NOTE]
>  Poiché la colonna di dati long non è associata dal framework, le modifiche a esso non verranno gestite con `CRecordset::Update` chiamate. È necessario creare e inviare l'istruzione SQL necessari **inserire** e **aggiornamento** istruzioni manualmente.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)


---
title: "TN054: chiamata a DAO diretta durante l'utilizzo delle classi DAO MFC"
ms.date: 09/17/2019
helpviewer_keywords:
- MFC, DAO and
- passwords [MFC], calling DAO
- security [MFC], DAO
- DAO (Data Access Objects), calling directly
- DAO (Data Access Objects), security
- security [MFC]
- TN054
- DAO (Data Access Objects), and MFC
ms.assetid: f7de7d85-8d6c-4426-aa05-2e617c0da957
ms.openlocfilehash: 0eb9daf156f51ecb4eb1e6fdc721b34878a43351
ms.sourcegitcommit: 069e3833bd821e7d64f5c98d0ea41fc0c5d22e53
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/21/2019
ms.locfileid: "74303419"
---
# <a name="tn054-calling-dao-directly-while-using-mfc-dao-classes"></a>TN054: chiamata a DAO diretta durante l'utilizzo delle classi DAO MFC

> [!NOTE]
> DAO viene usato con i database di Access ed è supportato tramite Office 2013. DAO 3,6 è la versione finale ed è considerata obsoleta. Gli ambienti C++ visivi e le procedure guidate non supportano DAO (sebbene le classi DAO siano incluse ed è comunque possibile usarle). Microsoft consiglia di utilizzare i [Modelli OLE DB](../data/oledb/ole-db-templates.md) oppure [ODBC e MFC](../data/odbc/odbc-and-mfc.md) per i nuovi progetti. È consigliabile utilizzare solo DAO per la gestione delle applicazioni esistenti.

Quando si utilizzano le classi di database DAO MFC, è possibile che si verifichino situazioni in cui è necessario utilizzare direttamente DAO. In genere, questo non è il caso, ma MFC ha fornito alcuni meccanismi helper per facilitare la semplice esecuzione di chiamate DAO dirette quando si combina l'uso delle classi MFC con chiamate DAO dirette. L'esecuzione di chiamate DAO dirette ai metodi di un oggetto DAO gestito da MFC deve richiedere solo poche righe di codice. Se è necessario creare e utilizzare oggetti DAO *non* gestiti da MFC, sarà necessario eseguire altre operazioni chiamando effettivamente `Release` per l'oggetto. Questa nota tecnica spiega quando potrebbe essere necessario chiamare direttamente DAO, cosa possono fare gli helper MFC per facilitare l'utilizzo e utilizzare le interfacce OLE DAO. Infine, in questa nota vengono fornite alcune funzioni di esempio che illustrano come chiamare direttamente DAO per le funzionalità di sicurezza DAO.

## <a name="when-to-make-direct-dao-calls"></a>Quando effettuare chiamate DAO dirette

Le situazioni più comuni per l'esecuzione di chiamate DAO dirette si verificano quando è necessario aggiornare le raccolte o quando si implementano funzionalità non sottoposte a incapsulamento da MFC. La funzionalità più significativa non esposta da MFC è la sicurezza. Se si desidera implementare le funzionalità di sicurezza, sarà necessario utilizzare direttamente gli oggetti o i gruppi di DAO. Oltre alla sicurezza, esistono solo alcune altre funzionalità DAO non supportate da MFC. Sono incluse le funzionalità di clonazione dei recordset e di replica di database, oltre ad alcune aggiunte tardive a DAO.

## <a name="a-brief-overview-of-dao-and-mfcs-implementation"></a>Breve panoramica dell'implementazione di DAO e MFC

Il wrapping di DAO di MFC rende più semplice l'uso di DAO gestendo molti dei dettagli, pertanto non è necessario preoccuparsi delle piccole cose. Questa operazione include l'inizializzazione di OLE, la creazione e la gestione degli oggetti DAO (in particolare gli oggetti Collection), il controllo degli errori e la fornitura di un'interfaccia fortemente tipizzata, più semplice (nessun argomento **Variant** o `BSTR`). È possibile effettuare chiamate DAO dirette e sfruttare ancora queste funzionalità. Tutto il codice deve essere chiamato `Release` per tutti gli oggetti creati dalle chiamate dirette a DAO e *non* modificare i puntatori di interfaccia che MFC può utilizzare internamente. Ad esempio, non modificare il membro *m_pDAORecordset* di un oggetto `CDaoRecordset` aperto, a meno che non si conoscano *tutte* le ramificazioni interne. È tuttavia possibile utilizzare l'interfaccia *m_pDAORecordset* per chiamare direttamente DAO per ottenere la raccolta di campi. In questo caso il membro *m_pDAORecordset* non verrà modificato. Al termine dell'oggetto, è sufficiente chiamare `Release` sull'oggetto raccolta Fields.

## <a name="description-of-helpers-to-make-dao-calls-easier"></a>Descrizione degli helper per semplificare le chiamate DAO

Gli helper forniti per semplificare la chiamata di DAO sono gli stessi Helper usati internamente nelle classi di database DAO MFC. Questi helper vengono usati per controllare i codici restituiti quando si effettua una chiamata DAO diretta, si registra l'output di debug, si verificano gli errori previsti e si generano eccezioni appropriate, se necessario. Sono disponibili due funzioni di supporto sottostanti e quattro macro che eseguono il mapping a uno di questi due helper. La spiegazione migliore consiste nel leggere semplicemente il codice. Vedere **DAO_CHECK**, **DAO_CHECK_ERROR**, **DAO_CHECK_MEM**e **DAO_TRACE** in AFXDAO. H per visualizzare le macro e vedere **AfxDaoCheck** e **AfxDaoTrace** in Daocore. CPP.

## <a name="using-the-dao-ole-interfaces"></a>Utilizzo delle interfacce OLE DAO

Le interfacce OLE per ogni oggetto nella gerarchia di oggetti DAO sono definite nel file di intestazione DBDAOINT. H, disponibile nella directory \Programmi\microsoft Visual Studio .NET 2003 \ VC7\include Queste interfacce forniscono metodi che consentono di modificare l'intera gerarchia DAO.

Per molti dei metodi nelle interfacce DAO, sarà necessario modificare un oggetto `BSTR` (una stringa con prefisso di lunghezza utilizzata nell'automazione OLE). L'oggetto `BSTR` in genere viene incapsulato all'interno del tipo di dati **Variant** . La classe MFC `COleVariant` stessa eredita dal tipo di dati **Variant** . A seconda del fatto che il progetto venga compilato per ANSI o Unicode, le interfacce DAO restituiranno ANSI o Unicode `BSTR`s. Due macro, V_BSTR e V_BSTRT, sono utili per garantire che l'interfaccia DAO ottenga la `BSTR` del tipo previsto.

V_BSTR estrae il membro *bstrVal* di un `COleVariant`. Questa macro viene in genere utilizzata quando è necessario passare il contenuto di un `COleVariant` a un metodo di un'interfaccia DAO. Il frammento di codice seguente mostra sia le dichiarazioni che l'utilizzo effettivo per due metodi dell'interfaccia DAOUser di DAO che sfruttano i vantaggi della macro V_BSTR:

```cpp
COleVariant varOldName;
COleVariant varNewName(_T("NewUser"), VT_BSTRT);

// Code to assign pUser to a valid value omitted DAOUser *pUser = NULL;

// These method declarations were taken from DBDAOINT.H
// STDMETHOD(get_Name) (THIS_ BSTR FAR* pbstr) PURE;
// STDMETHOD(put_Name) (THIS_ BSTR bstr) PURE;
DAO_CHECK(pUser->get_Name(&V_BSTR (&varOldName)));
DAO_CHECK(pUser->put_Name(V_BSTR (&varNewName)));
```

Si noti che l'argomento `VT_BSTRT` specificato nel costruttore di `COleVariant` precedente garantisce la presenza di un `BSTR` ANSI nel `COleVariant` se si compila una versione ANSI dell'applicazione e un `BSTR` Unicode per una versione Unicode dell'applicazione. Questo è ciò che è previsto da DAO.

L'altra macro, V_BSTRT, estrae un membro *BSTRVAL* ANSI o unicode di `COleVariant` a seconda del tipo di compilazione (ANSI o Unicode). Il codice seguente illustra come estrarre il valore `BSTR` da un `COleVariant` in un `CString`:

```cpp
COleVariant varName(_T("MyName"), VT_BSTRT);
CString str = V_BSTRT(&varName);
```

Il V_BSTRT macro, insieme ad altre tecniche per aprire altri tipi archiviati in `COleVariant`, è illustrato nell'esempio DAOVIEW. In particolare, questa conversione viene eseguita nel metodo `CCrack::strVARIANT`. Questo metodo, laddove possibile, converte il valore di un `COleVariant` in un'istanza di `CString`.

## <a name="simple-example-of-a-direct-call-to-dao"></a>Esempio semplice di chiamata diretta a DAO

È possibile che si verifichino situazioni in cui è necessario aggiornare gli oggetti della raccolta DAO sottostante. In genere, questa operazione non è necessaria, ma è una procedura semplice se necessaria. Un esempio di quando potrebbe essere necessario aggiornare una raccolta è quando si opera in un ambiente multiutente con più utenti che creano nuovi oggetti TableDef. In questo caso, la raccolta di TableDef potrebbe diventare obsoleta. Per aggiornare la raccolta, è sufficiente chiamare il metodo di `Refresh` dell'oggetto raccolta specifico e verificare la presenza di errori:

```cpp
DAO_CHECK(pMyDaoDatabase->m_pDAOTableDefs->Refresh());
```

Si noti che attualmente tutte le interfacce oggetto della raccolta DAO sono dettagli di implementazione non documentati delle classi di database DAO MFC.

## <a name="using-dao-directly-for-dao-security-features"></a>Utilizzo diretto di DAO per le funzionalità di sicurezza DAO

Le classi di database DAO MFC non eseguono il wrapping delle funzionalità di sicurezza DAO. Per utilizzare alcune funzionalità di sicurezza DAO, è necessario chiamare i metodi delle interfacce DAO. La funzione seguente imposta il database di sistema e quindi modifica la password dell'utente. Questa funzione chiama altre tre funzioni, che vengono definite successivamente.

```cpp
void ChangeUserPassword()
{
    // Specify path to the Microsoft Access *// system database
    CString strSystemDB =
        _T("c:\\Program Files\\MSOffice\\access\\System.mdw");

    // Set system database before MFC initilizes DAO
    // NOTE: An MFC module uses only one instance
    // of a DAO database engine object. If you have
    // called a DAO object in your application prior
    // to calling the function below, you must call
    // AfxDaoTerm to destroy the existing database
    // engine object. Otherwise, the database engine
    // object already in use will be reused, and setting
    // a system datbase will have no effect.
    //
    // If you have used a DAO object prior to calling
    // this function it is important that DAO be
    // terminated with AfxDaoTerm since an MFC
    // module only gets one copy of the database engine
    // and that engine will be reused if it hasn't been
    // terminated. In other words, if you do not call
    // AfxDaoTerm and there is currently a database
    // initialized, setting the system database will
    // have no effect.
    SetSystemDB(strSystemDB);

    // User name and password manually added
    // by using Microsoft Access
    CString strUserName = _T("NewUser");
    CString strOldPassword = _T("Password");
    CString strNewPassword = _T("NewPassword");

    // Set default user so that MFC will be able
    // to log in by default using the user name and
    // password from the system database
    SetDefaultUser(strUserName, strOldPassword);

    // Change the password. You should be able to
    // call this function from anywhere in your
    // MFC application
    ChangePassword(strUserName, strOldPassword, strNewPassword);

    // ...
}
```

I quattro esempi successivi dimostrano come:

- Impostare il database DAO di sistema (. File MDW).

- Impostare l'utente e la password predefiniti.

- Modificare la password di un utente.

- Modificare la password di un oggetto. File MDB.

### <a name="setting-the-system-database"></a>Impostazione del database di sistema

Di seguito è riportata una funzione di esempio per impostare il database di sistema che verrà utilizzato da un'applicazione. Questa funzione deve essere chiamata prima che vengano eseguite altre chiamate DAO.

```cpp
// Set the system database that the
// DAO database engine will use

void SetSystemDB(CString& strSystemMDB)
{
    COleVariant varSystemDB(strSystemMDB, VT_BSTRT);

    // Initialize DAO for MFC
    AfxDaoInit();
    DAODBEngine* pDBEngine = AfxDaoGetEngine();

    ASSERT(pDBEngine != NULL);

    // Call put_SystemDB method to set the *// system database for DAO engine
    DAO_CHECK(pDBEngine->put_SystemDB(varSystemDB.bstrVal));
}
```

### <a name="setting-the-default-user-and-password"></a>Impostazione dell'utente e della password predefiniti

Per impostare l'utente e la password predefiniti per un database di sistema, utilizzare la funzione seguente:

```cpp
void SetDefaultUser(CString& strUserName,
    CString& strPassword)
{
    COleVariant varUserName(strUserName, VT_BSTRT);
    COleVariant varPassword(strPassword, VT_BSTRT);

    DAODBEngine* pDBEngine = AfxDaoGetEngine();
    ASSERT(pDBEngine != NULL);

    // Set default user:
    DAO_CHECK(pDBEngine->put_DefaultUser(varUserName.bstrVal));

    // Set default password:
    DAO_CHECK(pDBEngine->put_DefaultPassword(varPassword.bstrVal));
}
```

### <a name="changing-a-users-password"></a>Modifica della password di un utente

Per modificare la password di un utente, usare la funzione seguente:

```cpp
void ChangePassword(CString &strUserName,
    CString &strOldPassword,
    CString &strNewPassword)
{
    // Create (open) a workspace
    CDaoWorkspace wsp;
    CString strWspName = _T("Temp Workspace");

    wsp.Create(strWspName, strUserName, strOldPassword);
    wsp.Append();

    // Determine how many objects there are *// in the Users collection
    short nUserCount;
    short nCurrentUser;
    DAOUser *pUser = NULL;
    DAOUsers *pUsers = NULL;

    // Side-effect is implicit OLE AddRef()
    // on DAOUser object:
    DAO_CHECK(wsp.m_pDAOWorkspace->get_Users(&pUsers));

    // Side-effect is implicit OLE AddRef()
    // on DAOUsers object
    DAO_CHECK(pUsers->getcount(&nUserCount));

    // Traverse through the list of users
    // and change password for the userid
    // used to create/open the workspace
    for(nCurrentUser = 0; nCurrentUser <nUserCount; nCurrentUser++)
    {
        COleVariant varIndex(nCurrentUser, VT_I2);
        COleVariant varName;

        // Retrieve information for user nCurrentUser
        DAO_CHECK(pUsers->get_Item(varIndex, &pUser));

        // Retrieve name for user nCurrentUser
        DAO_CHECK(pUser->get_Name(&V_BSTR(&varName)));

        CString strTemp = V_BSTRT(&varName);

        // If there is a match, change the password
        if (strTemp == strUserName)
        {
            COleVariant varOldPwd(strOldPassword, VT_BSTRT);
            COleVariant varNewPwd(strNewPassword, VT_BSTRT);

            DAO_CHECK(pUser->NewPassword(V_BSTR(&varOldPwd),
                V_BSTR(&varNewPwd)));

            TRACE("\t Password is changed\n");
        }
    }
    // Clean up: decrement the usage count
    // on the OLE objects
    pUser->Release();
    pUsers->Release();
    wsp.Close();
}
```

### <a name="changing-the-password-of-an-mdb-file"></a>Modifica della password di un oggetto. MDB (file)

Per modificare la password di un oggetto. File MDB, usare la funzione seguente:

```cpp
void SetDBPassword(LPCTSTR pDB,
    LPCTSTR pszOldPassword,
    LPCTSTR pszNewPassword)
{
    CDaoDatabase db;
    CString strConnect(_T(";pwd="));

    // the database must be opened as exclusive
    // to set a password
    db.Open(pDB, TRUE, FALSE, strConnect + pszOldPassword);

    COleVariant NewPassword(pszNewPassword, VT_BSTRT),
                OldPassword(pszOldPassword, VT_BSTRT);

    DAO_CHECK(db.m_pDAODatabase->NewPassword(V_BSTR(&OldPassword),
        V_BSTR(&NewPassword)));

    db.Close();
}
```

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)

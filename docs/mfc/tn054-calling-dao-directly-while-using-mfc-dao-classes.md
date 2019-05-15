---
title: "TN054: Chiamata a DAO diretta durante l'utilizzo delle classi DAO MFC"
ms.date: 06/28/2018
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
ms.openlocfilehash: b6aae8929e2840791e8d629378a0ec2261a2cda9
ms.sourcegitcommit: 934cb53fa4cb59fea611bfeb9db110d8d6f7d165
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/14/2019
ms.locfileid: "65610979"
---
# <a name="tn054-calling-dao-directly-while-using-mfc-dao-classes"></a>TN054: Chiamata a DAO diretta durante l'utilizzo delle classi DAO MFC

> [!NOTE]
> L'ambiente di Visual C++ e le procedure guidate non supportano DAO (anche se sono incluse le classi DAO ed è comunque possibile usarli). Microsoft consiglia di usare [modelli OLE DB](../data/oledb/ole-db-templates.md) oppure [ODBC e MFC](../data/odbc/odbc-and-mfc.md) per i nuovi progetti. È consigliabile utilizzare solo DAO nella gestione delle applicazioni esistenti.

Quando si usano le classi database DAO MFC, potrebbero verificarsi situazioni in cui è necessario utilizzare direttamente gli oggetti DAO. In genere, ciò non sarà il caso, ma MFC ha fornito alcuni meccanismi di helper per semplificare le chiamate DAO dirette semplice quando si combinano l'uso delle classi MFC con chiamate dirette DAO. Rendere DAO diretta chiamate ai metodi di un oggetto DAO MFC gestito dovrebbero richiedere solo poche righe di codice. Se è necessario creare e usare oggetti DAO *non* gestito da MFC, sarà necessario un po' più operazioni chiamando effettivamente `Release` sull'oggetto. In questa nota tecnica spiega quando si potrebbe desiderare di chiamare direttamente DAO, cosa possono fare gli helper MFC per semplificare e come usare le interfacce OLE DAO. Infine, questa nota fornisce alcune funzioni di esempio che illustra come chiamare DAO direttamente per le funzionalità di sicurezza DAO.

## <a name="when-to-make-direct-dao-calls"></a>Quando effettuare chiamate a DAO diretta

Si verificano le situazioni più comuni per l'esecuzione di DAO chiamate dirette quando le raccolte devono essere aggiornati o quando si implementa le funzionalità non integrate in MFC. La funzionalità più importante non esposta da MFC è la sicurezza. Se si desidera implementare funzionalità di sicurezza, è necessario utilizzare direttamente gli oggetti DAO utenti e gruppi. Oltre alla sicurezza, sono presenti solo poche altre DAO funzionalità non supportate da MFC. Queste includono funzioni di replica di database e la clonazione recordset, nonché alcune aggiunte tardiva DAO.

## <a name="a-brief-overview-of-dao-and-mfcs-implementation"></a>Una breve panoramica dell'implementazione di MFC e DAO

Ritorno a capo di MFC di DAO rende usando più semplici DAO gestendo molte informazioni dettagliate in modo che non devi preoccuparti le piccole cose. Ciò include l'inizializzazione di OLE, la creazione e gestione degli oggetti DAO (in particolare gli oggetti raccolta), errore di verifica e fornisce un'interfaccia più semplice e fortemente tipizzata (nessun **VARIANT** o `BSTR` argomenti). È possibile effettuare chiamate dirette DAO e comunque sfruttare queste funzionalità. Il codice deve eseguire è chiamare `Release` per tutti gli oggetti creati da DAO diretta chiama e *non* modificare i puntatori di interfaccia che MFC può basarsi sul internamente. Ad esempio, non modificare il *m_pDAORecordset* membro di un elemento aperto `CDaoRecordset` dell'oggetto se non si conoscono *tutti* le ramificazioni interne. È tuttavia possibile, usare il *m_pDAORecordset* interfaccia da chiamare a DAO diretta per ottenere la raccolta di campi. In questo caso il *m_pDAORecordset* verrà modificato non membro. È sufficiente chiamare `Release` per l'oggetto raccolta di campi dopo averli completati con l'oggetto.

## <a name="description-of-helpers-to-make-dao-calls-easier"></a>Descrizione di helper per rendere DAO chiama più semplice

Gli helper forniti per rendere la chiamata a DAO più semplici sono gli stessi helper che vengono usati internamente nelle classi Database DAO MFC. Questi helper consentono di controllare i codici restituiti quando si effettua una chiamata a DAO diretta, la registrazione dell'output di debug, il controllo degli errori previsti e la generazione di eccezioni appropriate, se necessario. Sono disponibili due funzioni di supporto sottostante e quattro le macro che eseguono il mapping a uno di questi due helper. La spiegazione migliore sarebbe sufficiente leggere il codice. Visualizzare **DAO_CHECK**, **DAO_CHECK_ERROR**, **DAO_CHECK_MEM**, e **DAO_TRACE** in AFXDAO. H per le macro e sta **AfxDaoCheck** e **AfxDaoTrace** in DAOCORE. CPP.

## <a name="using-the-dao-ole-interfaces"></a>Usare le interfacce OLE DAO

Le interfacce OLE per ogni oggetto nella gerarchia di oggetti DAO sono definite nel file di intestazione DBDAOINT. H, situata nella directory \Programmi\Microsoft Visual Studio .NET 2003\VC7\include. Queste interfacce forniscono metodi che consentono di gestire l'intera gerarchia DAO.

Per molti dei metodi nelle interfacce di DAO, sarà necessario modificare un `BSTR` oggetto (con prefisso di lunghezza stringa utilizzata nell'automazione OLE). Il `BSTR` oggetto in genere viene incapsulato all'interno di **VARIANT** tipo di dati. Classe MFC `COleVariant` a sua volta eredita dal **VARIANT** tipo di dati. A seconda del fatto che si compila il progetto per ANSI o Unicode, le interfacce DAO restituirà ANSI o Unicode `BSTR`s. Le due macro V_BSTR e V_BSTRT, sono utili per assicurare che l'interfaccia DAO Ottiene il `BSTR` del tipo previsto.

V_BSTR verrà estratto il *bstrVal* membro di un `COleVariant`. Questa macro viene in genere usata quando è necessario passare il contenuto di un `COleVariant` a un metodo di un'interfaccia di DAO. Il frammento di codice seguente mostra le dichiarazioni e l'uso effettivo per due metodi di interfaccia di DAO DAOUser che sfruttano la macro V_BSTR:

```cpp
COleVariant varOldName;
COleVariant varNewName(_T("NewUser"), VT_BSTRT);

// Code to assign pUser to a valid value omitted
DAOUser *pUser = NULL;

// These method declarations were taken from DBDAOINT.H
// STDMETHOD(get_Name) (THIS_ BSTR FAR* pbstr) PURE;
// STDMETHOD(put_Name) (THIS_ BSTR bstr) PURE;

DAO_CHECK(pUser->get_Name(&V_BSTR (&varOldName)));
DAO_CHECK(pUser->put_Name(V_BSTR (&varNewName)));
```

Si noti che il `VT_BSTRT` specificato nell'argomento il `COleVariant` costruttore precedente assicura che siano presenti ANSI `BSTR` nel `COleVariant` se si compila una versione ANSI dell'applicazione e Unicode `BSTR` per una versione Unicode di l'applicazione. Questo è quanto prevede DAO.

Estrae le altre macro, V_BSTRT, ANSI o Unicode *bstrVal* membro di `COleVariant` a seconda del tipo di compilazione (ANSI o Unicode). Il codice seguente illustra come estrarre il `BSTR` valore da un `COleVariant` in un `CString`:

```cpp
COleVariant varName(_T("MyName"), VT_BSTRT);
CString str = V_BSTRT(&varName);
```

La macro V_BSTRT, con altre tecniche per aprire altri tipi che vengono archiviati in `COleVariant`, è illustrato nell'esempio DAOVIEW. In particolare, questa conversione viene eseguita nel `CCrack::strVARIANT` (metodo). Questo metodo, laddove possibile, converte il valore di una `COleVariant` in un'istanza di `CString`.

## <a name="simple-example-of-a-direct-call-to-dao"></a>Esempio semplice di una chiamata a DAO diretta

Quando è necessario aggiornare gli oggetti della raccolta sottostanti DAO, possono verificarsi situazioni. In genere, ciò non dovrebbe essere necessaria, ma è una procedura semplice se è necessario. Un esempio di quando potrebbe essere necessario una raccolta da aggiornare è quando si opera in un ambiente multiutente con più utenti che creano nuovi tabledefs. In questo caso la raccolta tabledefs potrebbe diventare non aggiornata. Per aggiornare la raccolta, è sufficiente chiamare il `Refresh` metodo dell'oggetto raccolta specifica e controllo per gli errori:

```cpp
DAO_CHECK(pMyDaoDatabase->m_pDAOTableDefs->Refresh());
```

Si noti che attualmente tutte le interfacce dell'oggetto raccolta DAO sono dettagli di implementazione non documentate delle classi database DAO MFC.

## <a name="using-dao-directly-for-dao-security-features"></a>Utilizzo di DAO direttamente per le funzionalità di sicurezza DAO

Le classi database DAO MFC non andare a capo le funzionalità di sicurezza DAO. È necessario chiamare i metodi delle interfacce DAO usare alcune funzionalità di sicurezza DAO. La funzione seguente imposta il database di sistema e quindi modifica la password dell'utente. Questa funzione chiama tre altre funzioni che sono definiti successivamente.

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

I quattro esempi illustrano come:

- Impostare il database di sistema DAO (. File con estensione MDW).

- Impostare l'utente predefinito e la password.

- Modificare la password di un utente.

- Modificare la password di un. File con estensione MDB.

### <a name="setting-the-system-database"></a>Impostazione del Database di sistema

Di seguito è una funzione di esempio per impostare il database di sistema che verrà usato da un'applicazione. Questa funzione deve essere chiamata prima di apportare eventuali altre chiamate DAO.

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

### <a name="setting-the-default-user-and-password"></a>Impostare l'utente predefinito e la Password

Per impostare l'utente predefinito e la password per un database di sistema, utilizzare la funzione seguente:

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

### <a name="changing-a-users-password"></a>Modifica Password dell'utente

Per modificare la password dell'utente, usare la funzione seguente:

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

### <a name="changing-the-password-of-an-mdb-file"></a>Modifica della Password di un. File con estensione MDB

Per modificare la password di un. MDB di file, usare la funzione seguente:

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

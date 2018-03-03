---
title: 'TN054: Chiamata a DAO diretta durante l''utilizzo delle classi DAO MFC | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.mfc.dao
dev_langs:
- C++
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: de49cec931878cbfe06939269721b17a37a66202
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="tn054-calling-dao-directly-while-using-mfc-dao-classes"></a>TN054: chiamata a DAO diretta durante l'utilizzo delle classi DAO MFC
> [!NOTE]
>  L'ambiente di Visual C++ e le procedure guidate non supportano DAO (anche se sono incluse le classi DAO ed è comunque possibile usarle). Microsoft consiglia di utilizzare [modelli OLE DB](../data/oledb/ole-db-templates.md) o [ODBC e MFC](../data/odbc/odbc-and-mfc.md) per i nuovi progetti. Utilizzare solo DAO di gestione delle applicazioni esistenti.  
  
 Quando si utilizzano le classi di database DAO MFC, possono esistere situazioni in cui è necessario utilizzare direttamente DAO. In genere, non sarà il caso, ma MFC fornisce alcuni meccanismi di supporto per semplificare le chiamate DAO dirette semplice quando si combinano l'utilizzo delle classi MFC con chiamate dirette di DAO. DAO diretta effettua chiamate ai metodi di un oggetto DAO MFC gestiti dovrebbero richiedere solo poche righe di codice. Se è necessario creare e utilizzare oggetti DAO *non* gestito da MFC, sarà necessario un po' più operazioni chiamando effettivamente **versione** sull'oggetto. Questa nota tecnica illustra quando si potrebbe desiderare di chiamare direttamente DAO, operazioni che è possono eseguire gli helper MFC che consentono di e come utilizzare le interfacce OLE DAO. Infine, questa nota fornisce alcune funzioni di esempio che illustra come chiamare DAO direttamente per le funzionalità di sicurezza DAO.  
  
## <a name="when-to-make-direct-dao-calls"></a>Quando effettuare chiamate a DAO diretta  
 Si verificano le situazioni più comuni per l'esecuzione di DAO chiamate dirette quando è necessario aggiornare le raccolte o quando si implementa le funzionalità non sottoposto a wrapping da MFC. La funzionalità più significativa non esposta da MFC è la sicurezza. Se si desidera implementare funzionalità di sicurezza, è necessario utilizzare direttamente gli oggetti DAO utenti e gruppi. Oltre alla sicurezza, sono disponibili solo pochi altri DAO funzionalità non supportate da MFC. Queste includono funzioni di replica di database e la clonazione recordset, nonché alcune aggiunte ad associazione tardiva a DAO.  
  
## <a name="a-brief-overview-of-dao-and-mfcs-implementation"></a>Una breve panoramica dell'implementazione di MFC e DAO  
 Ritorno a capo MFC consente di DAO, DAO semplificano notevolmente l'utilizzo gestendo molti dettagli dell'operazione non è necessario preoccuparsi di piccola. Ciò include l'inizializzazione di OLE, la creazione e gestione degli oggetti DAO (in particolare gli oggetti della raccolta), verifica e l'interfaccia fortemente tipizzata e più semplice (Nessuna **VARIANT** o `BSTR` argomenti). È possibile effettuare chiamate dirette di DAO e comunque sfruttare queste funzionalità. Tutto il codice deve eseguire è chiamata **versione** per tutti gli oggetti creati da DAO diretta chiama e *non* modificare i puntatori di interfaccia in MFC si basano internamente. Ad esempio, non modificare il **m_pDAORecordset** membro di un elemento aperto `CDaoRecordset` oggetto se non si comprende *tutti* le ramificazioni interne. Tuttavia, è possibile utilizzare il **m_pDAORecordset** interfaccia per chiamare DAO direttamente per ottenere la raccolta di campi. In questo caso il **m_pDAORecordset** membro potrebbe non essere modificato. È sufficiente chiamare **versione** per l'oggetto raccolta di campi dopo aver terminato con l'oggetto.  
  
## <a name="description-of-helpers-to-make-dao-calls-easier"></a>Descrizione degli helper per rendere DAO chiama più semplice  
 Gli helper forniti per rendere la chiamata a DAO semplice sono gli stessi helper utilizzate internamente in classi di Database DAO MFC. Questi helper utilizzati per verificare i codici restituiti quando si effettua una chiamata diretta di DAO, registrazione dell'output di debug, il controllo degli errori previsti e la generazione di eccezioni appropriate, se necessario. Sono disponibili due funzioni di supporto sottostante e quattro le macro che eseguono il mapping a uno di questi due helper. La spiegazione migliore potrebbe essere semplicemente la lettura del codice. Vedere **DAO_CHECK**, **DAO_CHECK_ERROR**, **DAO_CHECK_MEM**, e **DAO_TRACE** in AFXDAO. H per vedere le macro e **AfxDaoCheck** e **AfxDaoTrace** in DAOCORE. CPP.  
  
## <a name="using-the-dao-ole-interfaces"></a>Usare le interfacce OLE DAO  
 Le interfacce OLE per ogni oggetto nella gerarchia di oggetti DAO sono definite nel file di intestazione DBDAOINT. H, che viene trovato nella directory \Programmi\Microsoft Visual Studio .NET 2003\VC7\include. Queste interfacce forniscono metodi che consentono di gestire l'intera gerarchia DAO.  
  
 Per molti dei metodi delle interfacce di DAO, sarà necessario modificare un `BSTR` oggetto (un prefisso di lunghezza stringa utilizzata nell'automazione OLE). Il `BSTR` oggetto in genere viene incapsulato all'interno di **VARIANT** tipo di dati. Classe MFC `COleVariant` eredita dal **VARIANT** tipo di dati. A seconda se si compila il progetto per ANSI o Unicode, le interfacce DAO restituirà ANSI o Unicode `BSTR`s. Le due macro **V_BSTR** e **V_BSTRT**, sono utili per verificare che l'interfaccia DAO Ottiene il `BSTR` del tipo previsto.  
  
 **V_BSTR** verrà estratto il **bstrVal** membro di un `COleVariant`. Questa macro viene usata in genere quando è necessario passare il contenuto di un `COleVariant` a un metodo di un'interfaccia DAO. Frammento di codice seguente mostra le dichiarazioni e l'uso effettivo per due metodi dell'interfaccia DAOUser DAO che sfruttano il **V_BSTR** macro:  
  
```  
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
  
 Si noti che il `VT_BSTRT` specificato nell'argomento di `COleVariant` costruttore precedente assicura che non vi saranno ANSI `BSTR` nel `COleVariant` se si compila una versione ANSI, Unicode e applicazione `BSTR` per una versione Unicode di l'applicazione. Questo è quello previsto dalla DAO.  
  
 La macro, **V_BSTRT**, verrà estratto ANSI o Unicode **bstrVal** membro di `COleVariant` a seconda del tipo di compilazione (ANSI o Unicode). Il codice seguente viene illustrato come estrarre il `BSTR` valore da un `COleVariant` in un `CString`:  
  
```  
COleVariant varName(_T("MyName"), VT_BSTRT);

CString str = V_BSTRT(&varName);
```  
  
 Il **V_BSTRT** (macro), con altre tecniche per aprire altri tipi che sono archiviati in `COleVariant`, è illustrato nell'esempio DAOVIEW. In particolare, questa conversione viene eseguita nel **CCrack::strVARIANT** metodo. Questo metodo, ove possibile, converte il valore di un `COleVariant` in un'istanza di `CString`.  
  
## <a name="simple-example-of-a-direct-call-to-dao"></a>Esempio semplice di una chiamata a DAO diretta  
 Quando è necessario aggiornare gli oggetti della raccolta sottostanti DAO, possono verificarsi i casi. In genere, ciò non dovrebbe essere necessario, ma è una procedura semplice se è necessario. Un esempio di quando una raccolta potrebbe dover essere aggiornati è quando si opera in un ambiente multiutente con più utenti, la creazione di nuovi tabledefs. In questo caso la raccolta tabledefs potrebbe diventare non aggiornata. Per aggiornare la raccolta, è sufficiente chiamare il **aggiornamento** metodo dell'oggetto di raccolta specifico e controllo per gli errori:  
  
```  
DAO_CHECK(pMyDaoDatabase->  
    m_pDAOTableDefs->Refresh());
```  
  
 Si noti che tutte le interfacce di oggetto raccolta di DAO non sono attualmente i dettagli di implementazione non trattati nella documentazione di classi di database DAO MFC.  
  
## <a name="using-dao-directly-for-dao-security-features"></a>Utilizzo di DAO direttamente per le funzionalità di sicurezza DAO  
 Le classi di database DAO MFC non eseguire il wrapping di funzionalità di sicurezza DAO. È necessario chiamare i metodi delle interfacce DAO per usare alcune funzionalità di sicurezza DAO. La funzione seguente imposta il database di sistema e quindi modifica la password dell'utente. Questa funzione chiama tre altre funzioni che sono definiti successivamente.  
  
```  
void ChangeUserPassword()  
{ *// Specify path to the Microsoft Access *// system database  
    CString strSystemDB = 
    _T("c:\\Program Files\\MSOffice\\access\\System.mdw");

 *// Set system database before MFC initilizes DAO *// NOTE: An MFC module uses only one instance *// of a DAO database engine object. If you have *// called a DAO object in your application prior *// to calling the function below,
    you must call *// AfxDaoTerm to destroy the existing database *// engine object. Otherwise,
    the database engine *// object already in use will be reused,
    and setting *// a system datbase will have no effect. *// *// If you have used a DAO object prior to calling *// this function it is important that DAO be *// terminated with AfxDaoTerm since an MFC *// module only gets one copy of the database engine *// and that engine will be reused if it hasn't been *// terminated. In other words,
    if you do not call *// AfxDaoTerm and there is currently a database *// initialized,
    setting the system database will *// have no affect.  
 
    SetSystemDB(strSystemDB);

 *// User name and password manually added *// by using Microsoft Access  
    CString strUserName = _T("NewUser");

    CString strOldPassword = _T("Password");

    CString strNewPassword = _T("NewPassword");

 *// Set default user so that MFC will be able *// to log in by default using the user name and *// password from the system database  
    SetDefaultUser(strUserName,
    strOldPassword);

 *// Change the password. You should be able to *// call this function from anywhere in your *// MFC application  
    ChangePassword(strUserName,
    strOldPassword,   
    strNewPassword);

 
 .  
 .  
 .  
 
}  
```  
  
 I quattro esempi illustrano come:  
  
-   Impostare il database di sistema DAO (. File di data warehouse di gestione).  
  
-   Impostare il valore predefinito e la password utente.  
  
-   Modificare la password di un utente.  
  
-   Modificare la password di un. File MDB.  
  
### <a name="setting-the-system-database"></a>Impostazione del Database di sistema  
 Di seguito è un esempio di funzione per impostare il database di sistema che verrà utilizzato da un'applicazione. Questa funzione deve essere chiamata prima di apportare eventuali altre chiamate DAO.  
  
```  
// Set the system database that the   
// DAO database engine will use  
 
void SetSystemDB(CString& strSystemMDB)  
{  
    COleVariant varSystemDB(strSystemMDB, VT_BSTRT);

 *// Initialize DAO for MFC  
    AfxDaoInit();
DAODBEngine* pDBEngine = AfxDaoGetEngine();

 
    ASSERT(pDBEngine != NULL);

 *// Call put_SystemDB method to set the *// system database for DAO engine  
    DAO_CHECK(pDBEngine->put_SystemDB(varSystemDB.bstrVal));

} 
```  
  
### <a name="setting-the-default-user-and-password"></a>Impostare il valore predefinito e la Password utente  
 Per impostare l'utente predefinito e la password per un database di sistema, utilizzare la funzione seguente:  
  
```  
void SetDefaultUser(CString& strUserName,
    CString& strPassword)  
{  
    COleVariant varUserName(strUserName,
    VT_BSTRT);

    COleVariant varPassword(strPassword,
    VT_BSTRT);

 
    DAODBEngine* pDBEngine = AfxDaoGetEngine();
ASSERT(pDBEngine != NULL);

 *// Set default user:  
    DAO_CHECK(pDBEngine->put_DefaultUser(varUserName.bstrVal));

 *// Set default password:  
    DAO_CHECK(pDBEngine->put_DefaultPassword(varPassword.bstrVal));

} 
```  
  
### <a name="changing-a-users-password"></a>Modifica Password di un utente  
 Per modificare una password, utilizzare la funzione seguente:  
  
```  
void ChangePassword(CString &strUserName,   
    CString &strOldPassword,   
    CString &strNewPassword)  
{ *// Create (open) a workspace  
    CDaoWorkspace wsp;  
    CString strWspName = _T("Temp Workspace");

 
    wsp.Create(strWspName, strUserName,  
    strOldPassword);

 wsp.Append();

 *// Determine how many objects there are *// in the Users collection  
    short nUserCount;  
    short nCurrentUser;  
    DAOUser *pUser = NULL;  
    DAOUsers *pUsers = NULL;  
 *// Side-effect is implicit OLE AddRef() *// on DAOUser object:  
    DAO_CHECK(wsp.m_pDAOWorkspace->get_Users(&pUsers));

 *// Side-effect is implicit OLE AddRef() *// on DAOUsers object  
    DAO_CHECK(pUsers->getcount(&nUserCount));

 *// Traverse through the list of users *// and change password for the userid *// used to create/open the workspace  
    for(nCurrentUser = 0; nCurrentUser <nUserCount;  
    nCurrentUser++) 
 {  
    COleVariant varIndex(nCurrentUser, VT_I2);

    COleVariant varName;  
 *// Retrieve information for user nCurrentUser  
    DAO_CHECK(pUsers->get_Item(varIndex, &pUser));

 *// Retrieve name for user nCurrentUser  
    DAO_CHECK(pUser->get_Name(&V_BSTR(&varName)));

 
    CString strTemp = V_BSTRT(&varName);

 *// If there is a match, change the password  
    if(strTemp == strUserName)  
 {  
    COleVariant varOldPwd(strOldPassword,   
    VT_BSTRT);

 COleVariant  varNewPwd(strNewPassword,   
    VT_BSTRT);

 
    DAO_CHECK(pUser->NewPassword(V_BSTR(&varOldPwd), 
    V_BSTR(&varNewPwd)));

 
    TRACE("\t Password is changed\n");

 }  
 }  
 *// Clean up: decrement the usage count *// on the OLE objects  
    pUser->Release();
pUsers->Release();

 
    wsp.Close();

} 
```  
  
### <a name="changing-the-password-of-an-mdb-file"></a>Modifica della Password di un. File MDB  
 Per modificare la password di un. MDB file, utilizzare la funzione seguente:  
  
```  
void SetDBPassword(LPCTSTR pDB,
    LPCTSTR pszOldPassword,
    LPCTSTR pszNewPassword)  
{  
    CDaoDatabase db;  
    CString strConnect(_T(";pwd="));

 *// the database must be opened as exclusive *// to set a password  
    db.Open(pDB,
    TRUE,
    FALSE,   
    strConnect + pszOldPassword);

 
    COleVariant NewPassword(pszNewPassword,
    VT_BSTRT),  
    OldPassword(pszOldPassword,
    VT_BSTRT);

 
    DAO_CHECK(db.m_pDAODatabase->NewPassword(V_BSTR(&OldPassword), 
    V_BSTR(&NewPassword)));

 
    db.Close();

} 
```  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)


---
title: "TN054: chiamata a DAO diretta durante l&#39;utilizzo delle classi DAO MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.dao"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DAO (Data Access Objects), e MFC"
  - "DAO (Data Access Objects), chiamata diretta"
  - "DAO (Data Access Objects), sicurezza"
  - "MFC [C++], DAO e"
  - "password [C++], chiamata di DAO"
  - "sicurezza [MFC]"
  - "sicurezza [MFC], DAO"
  - "TN054"
ms.assetid: f7de7d85-8d6c-4426-aa05-2e617c0da957
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# TN054: chiamata a DAO diretta durante l&#39;utilizzo delle classi DAO MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  A partire da Visual C\+\+ .NET, l'ambiente e le procedure guidate di Visual C\+\+ non supportano più DAO, anche se le classi DAO sono incluse e possono essere comunque utilizzate.  Si consiglia di utilizzare [Modelli OLE DB](../data/oledb/ole-db-templates.md) o [ODBC e MFC](../data/odbc/odbc-and-mfc.md) per i nuovi progetti.  di utilizzare DAO solo per la gestione delle applicazioni già esistenti.  
  
 Quando si utilizzano le classi di database DAO di MFC, è possibile che si verifichino casi in cui è necessario utilizzare direttamente le API DAO.  In genere, questo non verrà il caso, ma MFC forniti alcuni meccanismi di supporto per semplificare la lettura delle chiamate dirette di DAO semplici quando si combinano l'utilizzo delle classi MFC con chiamate dirette di DAO.  La esecuzione di chiamate dirette di DAO ai metodi di oggetto MFC gestito di DAO richiedere solo alcune righe di codice.  Se è necessario creare e utilizzare gli oggetti DAO che *non* sono gestiti da MFC, sarà necessario eseguire un poco più lavoro effettivamente chiamando **Rilascio** sull'oggetto.  Questa nota tecnica viene illustrato quando è tuttavia possibile chiamare direttamente le API DAO, quali gli helper MFC possono essere utili e come utilizzare le interfacce OLE di DAO.  Infine, questa nota fornisce alcune funzioni di esempio che illustrano come chiamare direttamente le API DAO per le funzionalità di sicurezza di DAO.  
  
## Quando eseguire chiamate dirette di DAO  
 Le situazioni più comuni per la creazione di chiamate dirette di DAO si verificano quando le raccolte devono essere aggiornate o quando si implementano le funzionalità non è stato eseguito il wrapping in MFC.  La funzionalità più significativa non esposta da MFC è sicurezza.  Se si desidera implementare le funzionalità di sicurezza, sarà necessario utilizzare gli utenti di DAO e il gruppo di oggetti direttamente.  Oltre alla sicurezza, sono disponibili solo alcune altre funzionalità di DAO supportate da MFC.  Questi comprendono funzionalità di replica della clonazione e il database di recordset nonché alcuni miglioramenti recenti a DAO.  
  
## Una breve panoramica dell'implementazione di MFC e DAO  
 Il wrapping di DAO MFC di rende mediante DAO più semplice la gestione di molti dettagli in modo da non dover per piccole operazioni.  Ciò include l'inizializzazione di OLE, la creazione e la gestione degli oggetti di DAO \(soprattutto gli oggetti Collection\), il controllo degli errori e di creazione di un'interfaccia fortemente tipizzata e più semplice \(nessun **VARIANT** o argomenti di `BSTR` \).  È possibile effettuare chiamate dirette di DAO e tuttavia sfruttare.  Tutto il codice deve effettuare consiste nel chiamare **Rilascio** per tutti gli oggetti creati dalle chiamate dirette di DAO e *non* modificarne uno dei puntatori a interfaccia che MFC può affidarsi a internamente.  Ad esempio, non modificare il membro di **m\_pDAORecordset** di un oggetto su apri `CDaoRecordset` a meno che non si conosca la *tutte le* ramificazioni interne.  È possibile, tuttavia, utilizzare l'interfaccia di **m\_pDAORecordset** per chiamare direttamente le API DAO per ottenere la raccolta dei campi.  In questo caso il membro di **m\_pDAORecordset** non viene modificato.  È necessario chiamare semplicemente **Rilascio** sull'oggetto Collection dei campi al termine dell'oggetto.  
  
## Descrizione di helper per rendere le chiamate di DAO più semplici  
 Gli helper forniti per eseguire la chiamata a DAO più semplice sono uguali helper utilizzati internamente nelle classi di database DAO MFC.  Questi helper vengono utilizzati per controllare i codici restituiti quando si effettua una chiamata diretta di DAO, registrando l'output di debug, controllo degli errori previsti e generazione di eccezioni appropriate se necessario.  Esistono due funzioni di supporto sottostante e quattro macro che eseguono il mapping a uno di questi due helper.  La migliore spiegazione verrebbe di leggere semplicemente il codice.  Vedere **DAO\_CHECK**, **DAO\_CHECK\_ERROR**, **DAO\_CHECK\_MEM** e **DAO\_TRACE** in AFXDAO.H per visualizzare le macro e vedere **AfxDaoCheck** e **AfxDaoTrace** in DAOCORE.CPP.  
  
## Tramite interfacce OLE di DAO  
 Interfacce OLE per ogni oggetto della gerarchia di oggetti di DAO sono definite nel file di intestazione DBDAOINT.H, che si trova in \\ programmi \\ Microsoft Visual Studio .NET 2003. \\ VC7 \\ directory di inclusione.  Queste interfacce fornisce metodi che consentono di modificare l'intera gerarchia di DAO.  
  
 Per molti dei metodi nelle interfacce DAO, sarà necessario modificare un oggetto di `BSTR` \(una stringa con prefisso di lunghezza utilizzata nell'automazione OLE\).  L'oggetto di `BSTR` in genere è incapsulato nel tipo di dati di **VARIANT**.  La classe MFC `COleVariant` stesso eredita dal tipo di dati di **VARIANT**.  A seconda se si compila il progetto per ANSI o Unicode, le interfacce DAO restituiranno ANSI o Unicode `BSTR`S.  Due macro, **V\_BSTR** e **V\_BSTRT**, sono utili per la certezza che l'interfaccia di DAO ottiene `BSTR` al tipo previsto.  
  
 **V\_BSTR** estrarrà il membro di **bstrVal** di `COleVariant`.  Questa macro in genere utilizzata quando è necessario passare il contenuto di `COleVariant` a un metodo di interfaccia di DAO.  Nel frammento di codice mostra sia le dichiarazioni che effettivamente utilizzato per due metodi di interfaccia di DAO DAOUser che utilizzano la macro di **V\_BSTR** :  
  
```  
COleVariant varOldName;  
COleVariant varNewName( _T("NewUser"), VT_BSTRT );  
  
// Code to assign pUser to a valid value omitted  
DAOUser *pUser = NULL;  
  
// These method declarations were taken from DBDAOINT.H  
// STDMETHOD(get_Name) (THIS_ BSTR FAR* pbstr) PURE;  
// STDMETHOD(put_Name) (THIS_ BSTR bstr) PURE;  
  
DAO_CHECK( pUser->get_Name( &V_BSTR ( &varOldName ) ));  
DAO_CHECK( pUser->put_Name( V_BSTR ( &varNewName ) ));  
```  
  
 Si noti che l'argomento di `VT_BSTRT` specificato nel costruttore di `COleVariant` sopra assicurarsi che sia presente un `BSTR` ANSI in `COleVariant` se si compila una versione ANSI dell'applicazione e un Unicode `BSTR` di versione Unicode dell'applicazione.  Questa operazione DAO prevede.  
  
 Altre macro, **V\_BSTRT**, estrarrà un ANSI o il membro Unicode **bstrVal** di `COleVariant` a seconda del tipo di compilazione \(ANSI o Unicode.  Il codice seguente viene illustrato come estrarre il valore di `BSTR` da `COleVariant` in `CString`:  
  
```  
COleVariant varName( _T( "MyName" ), VT_BSTRT );  
CString str = V_BSTRT( &varName );  
```  
  
 La macro di **V\_BSTRT**, con altre tecniche per aprire altri tipi archiviati in `COleVariant`, è illustrata nell'esempio di DAOVIEW.  In particolare, questa conversione viene eseguita nel metodo di **CCrack::strVARIANT**.  Questo metodo, laddove possibile converte il valore di `COleVariant` in un'istanza di `CString`.  
  
## Esempio semplice di una chiamata diretta a DAO  
 Le situazioni può verificarsi quando è necessario aggiornare gli oggetti Collection sottostanti di DAO.  In genere, questo non deve essere necessario, ma è una procedura semplice se necessario.  Un esempio in cui una raccolta potrebbe richiedere di essere aggiornato quando si lavora in un ambiente multiutente con più utenti che creano nuovi TableDef.  In questo caso la forza di raccolta così diventano non aggiornato.  Per aggiornare la raccolta, occorre semplicemente la chiamata del metodo **Aggiorna** dell'oggetto Collection e del controllo specifici per gli errori:  
  
```  
DAO_CHECK( pMyDaoDatabase->  
    m_pDAOTableDefs->Refresh( ) );  
```  
  
 Si noti che attualmente tutte le interfacce dell'oggetto Collection di DAO sono dettagli di implementazione non documentati delle classi di database DAO MFC.  
  
## Mediante DAO direttamente per le funzionalità di sicurezza di DAO  
 Le classi di database DAO MFC non eseguono il wrapping delle funzionalità di sicurezza di DAO.  È necessario chiamare metodi delle interfacce DAO per utilizzare alcune funzionalità di sicurezza di DAO.  La funzione imposta il database di sistema e quindi modificare la password dell'utente.  Questa funzione chiama altre tre funzioni, che successivamente vengono definite.  
  
```  
void ChangeUserPassword( )  
{  
   // Specify path to the Microsoft Access  
   // system database  
   CString strSystemDB =   
     _T( "c:\\Program Files\\MSOffice\\access\\System.mdw" );  
  
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
   // have no affect.  
  
   SetSystemDB( strSystemDB );  
  
   // User name and password manually added  
   // by using Microsoft Access  
   CString strUserName = _T( "NewUser" );  
   CString strOldPassword = _T( "Password" );  
   CString strNewPassword = _T( "NewPassword" );  
  
   // Set default user so that MFC will be able  
   // to log in by default using the user name and   
   // password from the system database  
   SetDefaultUser( strUserName, strOldPassword );  
  
   // Change the password. You should be able to  
   // call this function from anywhere in your   
   // MFC application  
   ChangePassword( strUserName, strOldPassword,   
                   strNewPassword );  
  
   .  
   .  
   .  
  
}  
```  
  
 I quattro esempi seguenti viene illustrato come how to:  
  
-   Impostare il database DAO system \(file di .MDW\).  
  
-   Impostare l'utente e la password predefiniti.  
  
-   Modificare la password di un utente.  
  
-   Modificare la password di un file di .MDB.  
  
### Per impostare il database di sistema  
 Di seguito è una funzione di esempio per impostare il database di sistema che verrà utilizzato da un'applicazione.  Questa funzione deve essere chiamata prima delle altre chiamate di DAO sono effettuate.  
  
```  
// Set the system database that the   
// DAO database engine will use  
  
void SetSystemDB( CString & strSystemMDB )  
{  
   COleVariant varSystemDB( strSystemMDB, VT_BSTRT );  
  
   // Initialize DAO for MFC  
   AfxDaoInit( );  
   DAODBEngine* pDBEngine = AfxDaoGetEngine( );  
  
   ASSERT( pDBEngine != NULL );  
  
   // Call put_SystemDB method to set the   
   // system database for DAO engine  
   DAO_CHECK( pDBEngine->put_SystemDB( varSystemDB.bstrVal ) );  
}  
```  
  
### L'impostazione dell'utente e la password predefiniti  
 Per l'impostazione dell'utente e la password predefinito per un database di sistema, utilizzare la funzione seguente:  
  
```  
void SetDefaultUser(CString & strUserName, CString & strPassword)  
{  
  COleVariant varUserName( strUserName, VT_BSTRT );  
  COleVariant varPassword( strPassword, VT_BSTRT );  
  
  DAODBEngine* pDBEngine = AfxDaoGetEngine( );  
  ASSERT( pDBEngine != NULL );  
  
  // Set default user:  
  DAO_CHECK( pDBEngine->put_DefaultUser( varUserName.bstrVal ) );  
  
  // Set default password:  
  DAO_CHECK( pDBEngine->put_DefaultPassword( varPassword.bstrVal ) );  
}  
```  
  
### Modificare la password di un utente  
 Per modificare la password di un utente, utilizzare la funzione seguente:  
  
```  
void ChangePassword( CString &strUserName,   
                     CString &strOldPassword,   
                     CString &strNewPassword )  
{  
   // Create (open) a workspace  
   CDaoWorkspace wsp;  
   CString strWspName = _T( "Temp Workspace" );  
  
   wsp.Create( strWspName, strUserName,  
               strOldPassword );  
   wsp.Append( );  
  
   // Determine how many objects there are  
   // in the Users collection  
   short nUserCount;  
   short nCurrentUser;  
   DAOUser *pUser  = NULL;  
   DAOUsers *pUsers = NULL;  
  
   // Side-effect is implicit OLE AddRef( )   
   // on DAOUser object:  
   DAO_CHECK( wsp.m_pDAOWorkspace->get_Users( &pUsers ) );  
  
   // Side-effect is implicit OLE AddRef( )   
   // on DAOUsers object  
    DAO_CHECK( pUsers->get_Count( &nUserCount ) );  
  
   // Traverse through the list of users   
   // and change password for the userid  
   // used to create/open the workspace  
   for( nCurrentUser = 0; nCurrentUser < nUserCount;  
        nCurrentUser++ )  
   {  
       COleVariant varIndex( nCurrentUser, VT_I2 );  
       COleVariant varName;  
  
       // Retrieve information for user nCurrentUser  
       DAO_CHECK( pUsers->get_Item( varIndex, &pUser ) );  
  
       // Retrieve name for user nCurrentUser  
       DAO_CHECK( pUser->get_Name( &V_BSTR( &varName ) ) );  
  
       CString strTemp = V_BSTRT( &varName );  
  
       // If there is a match, change the password  
       if( strTemp == strUserName )  
       {  
           COleVariant varOldPwd( strOldPassword,   
                                  VT_BSTRT );  
           COleVariant varNewPwd( strNewPassword,   
                                  VT_BSTRT );  
  
           DAO_CHECK( pUser->NewPassword( V_BSTR( &varOldPwd ),  
                      V_BSTR( &varNewPwd ) ) );  
  
           TRACE( "\t Password is changed\n" );  
       }  
   }  
  
   // Clean up: decrement the usage count  
   // on the OLE objects  
   pUser->Release( );  
   pUsers->Release( );  
  
   wsp.Close( );  
}  
```  
  
### Modificare la password di un file di .MDB  
 Per modificare la password di un file di .MDB, utilizzare la funzione seguente:  
  
```  
void SetDBPassword( LPCTSTR pDB, LPCTSTR pszOldPassword, LPCTSTR pszNewPassword )  
{  
   CDaoDatabase db;  
   CString strConnect( _T( ";pwd=" ) );  
  
   // the database must be opened as exclusive  
   // to set a password  
   db.Open( pDB, TRUE, FALSE,   
            strConnect + pszOldPassword );  
  
   COleVariant NewPassword( pszNewPassword, VT_BSTRT ),  
               OldPassword( pszOldPassword, VT_BSTRT );  
  
   DAO_CHECK( db.m_pDAODatabase->NewPassword( V_BSTR( &OldPassword ),  
              V_BSTR( &NewPassword ) ) );  
  
   db.Close();  
}  
```  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)
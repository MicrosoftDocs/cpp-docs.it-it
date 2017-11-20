---
title: 'TN058: Implementazione di stato del modulo MFC | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.mfc.implementation
dev_langs: C++
helpviewer_keywords:
- thread state [MFC]
- module states [MFC], managing state data
- TN058
- MFC, managing state data
- module states [MFC], switching
- DLLs [MFC], module states
- process state [MFC]
ms.assetid: 72f5b36f-b3da-4009-a144-24258dcd2b2f
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: ecc87072530cc71d7194f650e9e46bec55bb80da
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="tn058-mfc-module-state-implementation"></a>TN058: implementazione di stato del modulo MFC
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota tecnica viene descritta l'implementazione di costrutti "Stato del modulo MFC". La comprensione dell'implementazione di stato del modulo è fondamentale per l'utilizzo di MFC DLL da una DLL condivise (o del server OLE in-process).  
  
 Prima di leggere questa nota, vedere "Gestione di stato dei dati dei moduli MFC" in [la creazione di nuovi documenti, finestre e visualizzazioni](../mfc/creating-new-documents-windows-and-views.md). In questo articolo contiene informazioni importanti sull'utilizzo e informazioni generali su questo argomento.  
  
## <a name="overview"></a>Panoramica  
 Esistono tre tipi di informazioni sullo stato MFC: stato del modulo, lo stato del processo e lo stato del Thread. In alcuni casi è possibile combinare questi tipi di stato. Ad esempio, le mappe di handle di MFC sono modulo locale sia locale di thread. In questo modo due moduli diversi per disporre mappe diverse in ognuna dei thread.  
  
 Stato del processo e lo stato del Thread sono simili. Questi elementi di dati sono operazioni che sono sempre stato variabili globali, ma hanno devono essere specifiche per un determinato processo o thread per il supporto corretto Win32s o per il supporto multithreading. Categoria a cui è contenuto in un elemento di dati specificato dipende da tale elemento e la semantica desiderata per quanto riguarda i limiti di thread e processi.  
  
 Stato del modulo è univoco può contenere stato realmente globale o dello stato dei processi locali o locale di thread. Inoltre, è possibile cambiare rapidamente.  
  
## <a name="module-state-switching"></a>Cambio di stato del modulo  
 Ogni thread contiene un puntatore allo stato del modulo "corrente" o "attivi" (ovviamente, il puntatore fa parte dello stato locale di thread di MFC). L'indicatore di misura viene modificato quando il thread di esecuzione passa a un limite di modulo, ad esempio un'applicazione che chiama in un controllo OLE o DLL o un controllo OLE richiamata in un'applicazione.  
  
 Lo stato corrente del modulo viene impostato chiamando **AfxSetModuleState**. La maggior parte, non verrà interagisce direttamente con l'API. MFC, in molti casi, verrà chiamato per l'utente (in WinMain, OLE punti di ingresso, **AfxWndProc**, ecc.). Questa operazione viene eseguita in qualsiasi componente che si scrive il collegamento statico in una speciale **WndProc**e una speciale `WinMain` (o `DllMain`) in grado di cui lo stato del modulo deve essere corrente. È possibile osservare questo codice in DLLMODUL. CPP o APPMODUL. CPP nella directory MFC\SRC.  
  
 È raro che si desidera impostare lo stato del modulo e quindi non nuovamente. La maggior parte dei casi che si desidera un modulo personalizzato "push" è stato quello corrente e quindi, dopo avere completato, "pop" Indietro nel contesto originale. Questa operazione viene eseguita dalla macro [AFX_MANAGE_STATE](reference/extension-dll-macros.md#afx_manage_state) e la classe speciale **AFX_MAINTAIN_STATE**.  
  
 `CCmdTarget`include funzionalità speciali per il supporto di cambio di stato di modulo. In particolare, un `CCmdTarget` è la classe radice utilizzata per l'automazione OLE e COM OLE punti di ingresso. Come qualsiasi altro punto di ingresso esposti al sistema, i punti di ingresso necessario impostare lo stato del modulo corretto. Come does un determinato `CCmdTarget` sapere quale deve essere lo stato del modulo "corretto" la risposta è che "memorizza" che cos'è lo stato del modulo "corrente" quando viene creato, in modo da poter impostare lo stato del modulo corrente a quella "memorizzate" chiamato valore quando è una versione successiva. Di conseguenza, il modulo di stato che un determinato `CCmdTarget` oggetto è associato a è lo stato del modulo che risultava corrente quando l'oggetto è stato costruito. Richiedere un semplice esempio di caricamento di un server INPROC, creazione di un oggetto e chiamando i relativi metodi.  
  
1.  Il caricamento della DLL da OLE utilizzando **LoadLibrary**.  
  
2. **RawDllMain** viene chiamato per primo. Imposta lo stato del modulo per lo stato del modulo statico noti per la DLL. Per questo motivo **RawDllMain** è collegata in modo statico alla DLL.  
  
3.  Viene chiamato il costruttore per la class factory associata a questo oggetto. `COleObjectFactory`derivato da `CCmdTarget` e di conseguenza, rimane memorizzato nel modulo lo stato in cui è stata creata un'istanza. Questo aspetto è importante, ovvero quando la class factory viene richiesto di creare oggetti, sa ora lo stato del modulo da impostare come corrente.  
  
4. `DllGetClassObject`viene chiamato per ottenere la class factory. MFC Cerca nell'elenco di factory di classe associato al modulo e lo restituisce.  
  
5. **COleObjectFactory::XClassFactory2::CreateInstance** viene chiamato. Prima di creare l'oggetto e il ripristino, la funzione imposta lo stato del modulo per lo stato del modulo corrente nel passaggio 3 (quello corrente quando il `COleObjectFactory` è stata creata un'istanza). Questa operazione viene eseguita all'interno di [METHOD_PROLOGUE](com-interface-entry-points.md).  
  
6.  Quando viene creato l'oggetto, è troppo un `CCmdTarget` derivati e nello stesso modo `COleObjectFactory` memorizzate quali lo stato del modulo è stato attivo, quindi non questo nuovo oggetto. Dopo l'oggetto sa quali lo stato del modulo per passare a ogni volta che viene chiamato.  
  
7.  Il client chiama una funzione per l'oggetto OLE COM che ha ricevuto dal relativo `CoCreateInstance` chiamare. Quando viene chiamato l'oggetto utilizza `METHOD_PROLOGUE` per cambiare lo stato del modulo come `COleObjectFactory` does.  
  
 Come si può notare, lo stato del modulo viene propagato da oggetto a oggetto al momento della creazione. È importante avere lo stato del modulo impostato in modo appropriato. Se non è impostata, l'oggetto COM o DLL può interagire in modo inadeguato con un'applicazione MFC che viene eseguita la chiamata, potrebbe non essere possibile trovare le proprie risorse o potrebbe non riuscire in altri modi miserable.  
  
 Si noti che alcuni tipi di DLL, in particolare "Estensione MFC" dll non passare lo stato del modulo nella loro **RawDllMain** (in realtà, in genere non ancora hanno un **RawDllMain**). In questo modo sono destinati a un comportamento "as if" fossero effettivamente presente nell'applicazione in cui vengono utilizzati. Sono molto una parte dell'applicazione in cui è in esecuzione ed è l'intenzione di modificare lo stato globale dell'applicazione.  
  
 OLE (controlli) e altre DLL sono molto diversi. Non si desidera modificare lo stato dell'applicazione chiamante; l'applicazione che li chiama non può essere anche un'applicazione MFC e non potrebbero essere pertanto presenti stati modificare. Questo è il motivo che è stato ideato modulo cambio di stato.  
  
 Per le funzioni esportate da una DLL, ad esempio un oggetto che consente di avviare una finestra di dialogo nella DLL, è necessario aggiungere il codice seguente all'inizio della funzione:  
  
```  
AFX_MANAGE_STATE(AfxGetStaticModuleState())  
```  
  
 Scambiato lo stato del modulo corrente con lo stato restituito da [AfxGetStaticModuleState](reference/extension-dll-macros.md#afxgetstaticmodulestate) fino alla fine dell'ambito corrente.  
  
 I problemi con le risorse nelle DLL si verificheranno se non viene utilizzata la macro `AFX_MODULE_STATE`. Per impostazione predefinita, MFC utilizza il gestore delle risorse dell'applicazione principale per caricare il modello di risorsa. Questo modello viene effettivamente archiviato nella DLL. La causa radice consiste nel fatto che l'informazione sullo stato del modulo di MFC non è stata scambiata dalla macro `AFX_MODULE_STATE`. Il gestore delle risorse viene recuperato dallo stato del modulo di MFC. Non scambiare lo stato del modulo provoca l'utilizzo errato del gestore delle risorse.  
  
 `AFX_MODULE_STATE`non è necessario inserire in ogni funzione nella DLL. Ad esempio, `InitInstance` può essere chiamato dal codice MFC nell'applicazione senza `AFX_MODULE_STATE` perché MFC scambia automaticamente lo stato del modulo prima di `InitInstance` e quindi lo cambia nuovamente dopo che `InitInstance` completa la sua esecuzione. Lo stesso vale per tutti i gestori della mappa messaggi. Normali DLL dispongono effettivamente di una routine della finestra principale speciale che cambia automaticamente lo stato del modulo prima di instradare qualsiasi messaggio.  
  
## <a name="process-local-data"></a>Elaborare i dati locali  
 Elaborare i dati locali non sarebbe di questo tipo di grande interesse non fosse stata per la difficoltà del modello Win32s DLL. In Win32s tutte le DLL condividono i dati globali, anche quando caricato da più applicazioni. Questo è molto diverso rispetto al modello di dati di DLL Win32 "real", dove ogni DLL Ottiene una copia distinta del relativo spazio dei dati in ogni processo che si collega alla DLL. Per aggiungere la complessità, i dati allocati nell'heap in una DLL Win32s sono in realtà processo specifico (almeno per quanto riguarda la proprietà diventa). Si consideri il dati e il codice seguente:  
  
```  
static CString strGlobal; // at file scope  
 
__declspec(dllexport)   
void SetGlobalString(LPCTSTR lpsz)  
{  
    strGlobal = lpsz;  
}  
 
__declspec(dllexport)  
void GetGlobalString(LPCTSTR lpsz,
    size_t cb)  
{  
    StringCbCopy(lpsz,
    cb,
    strGlobal);

}  
```  
  
 Si consideri cosa succede se il codice sopra riportato in si trova in una DLL e DLL viene caricato da due processi A e B (potrebbe infatti essere due istanze della stessa applicazione). Chiama `SetGlobalString("Hello from A")`. Di conseguenza, la memoria viene allocata per il `CString` dati nel contesto del processo r. tenere presente che il `CString` stesso è globale ed è visibile ad entrambi A e b. A questo punto B chiama `GetGlobalString(sz, sizeof(sz))`. B sarà in grado di visualizzare i set di dati. Questo avviene perché Win32s non offre protezione tra i processi come Win32. Questo è il primo problema; in molti casi è preferibile non influisce sui dati globali che viene considerati come di proprietà di un'altra applicazione di un'applicazione.  
  
 Esistono anche altri problemi. Si supponga che l'ora viene chiuso. Quando viene chiuso A, la memoria utilizzata dal '`strGlobal`' stringa viene reso disponibile per il sistema, vale a dire, tutta la memoria allocata dal processo viene liberata automaticamente dal sistema operativo. Non viene liberata perché il `CString` viene chiamato un distruttore; non è stato ancora chiamato. Viene liberata semplicemente perché l'applicazione che viene allocata ha lasciato la scena. Se chiamato B `GetGlobalString(sz, sizeof(sz))`, potrebbe non fornire dati validi. Un'altra applicazione vengano utilizzate che la memoria per un altro elemento.  
  
 Chiaramente esiste un problema. MFC 3. x è utilizzata una tecnica denominata archiviazione locale di thread (TLS). MFC 3. x è necessario allocare un indice TLS che in Win32s funge effettivamente da un indice di archiviazione locale di processo, anche se non viene chiamato che e quindi fa riferimento a tutti i dati in base a tale indice TLS. Questa operazione è simile all'indice TLS che è stato utilizzato per archiviare i dati locali del thread su Win32 (vedere di seguito per ulteriori informazioni su questo argomento). La causa di ogni DLL MFC utilizzare almeno due indici TLS per ogni processo. Quando l'account per il caricamento di molti controllo DLL OLE (OCX), si esauriscono rapidamente indici TLS (sono disponibili solo 64). Inoltre, MFC era necessario inserire tutti i dati in un'unica posizione, in una singola struttura. Non è molto estensibile e non è ideale per quanto riguarda l'utilizzo di indici TLS.  
  
 MFC 4. x di risolvere questo problema con un set di modelli di classe, è possibile "includere" tra i dati che devono essere processo locale. Ad esempio, il problema indicato in precedenza possibile risolvere il problema mediante la scrittura:  
  
```  
struct CMyGlobalData : public CNoTrackObject  
{  
    CString strGlobal;  
};  
CProcessLocal<CMyGlobalData> globalData;  
 
__declspec(dllexport)   
void SetGlobalString(LPCTSTR lpsz)  
{  
    globalData->strGlobal = lpsz;  
}  
 
__declspec(dllexport)  
void GetGlobalString(LPCTSTR lpsz, size_t cb)  
{  
    StringCbCopy(lpsz, cb, globalData->strGlobal);

}  
```  
  
 MFC implementa questa in due passaggi. È un livello superiore di Win32 **Tls\***  API (**TlsAlloc**, **TlsSetValue**, **TlsGetValue**e così via) che utilizzare solo due indici TLS per processo, indipendentemente dal numero di DLL necessario. In secondo luogo, il `CProcessLocal` modello è disponibile per l'accesso ai dati. Esegue l'override di operatore -> che è ciò che consente la sintassi intuitiva visualizzati sopra. Tutti gli oggetti che vengono eseguito il wrapping da `CProcessLocal` deve essere derivato da `CNoTrackObject`. `CNoTrackObject`fornisce un allocatore di livello inferiore (**LocalAlloc**/**LocalFree**) e un distruttore virtuale in modo che MFC automaticamente può eliminare definitivamente gli oggetti locali del processo quando il processo è terminato. Tali oggetti possono avere un distruttore personalizzato se è necessario eseguire una pulizia aggiuntiva. L'esempio precedente non richiede uno, poiché il compilatore genera un distruttore predefinito per eliminare l'oggetto incorporato `CString` oggetto.  
  
 Esistono altri vantaggi di questo approccio interessanti. Non solo sono tutti `CProcessLocal` oggetti eliminati automaticamente, non vengono costruiti finché sono necessari. `CProcessLocal::operator->`verrà creata un'istanza dell'oggetto associato alla prima chiamata e non prima. Nell'esempio precedente, ciò significa che il '`strGlobal`' stringa non verrà creata fino a quando il primo **SetGlobalString** o **GetGlobalString** viene chiamato. In alcuni casi, questo può contribuire a ridurre i tempi di avvio della DLL.  
  
## <a name="thread-local-data"></a>Dati locali di thread  
 Analogamente a elaborare i dati locali, dati thread-local viene utilizzati quando i dati devono essere locali per un determinato thread. Vale a dire, un'istanza separata dei dati è necessario per ogni thread che accede a tali dati. Numero di volte utilizzabile al posto di meccanismi di sincronizzazione completa. Se i dati non devono essere condivisi da più thread, tali meccanismi possono essere dispendiosa e non necessari. Si supponga che si è verificato un `CString` oggetto (molto simile a quello riportato sopra). È possibile renderlo thread locale mediante il wrapping con un `CThreadLocal` modello:  
  
```  
struct CMyThreadData : public CNoTrackObject  
{  
    CString strThread;  
};  
CThreadLocal<CMyThreadData> threadData;  
 
void MakeRandomString()  
{ *// a kind of card shuffle (not a great one)  
    CString& str = threadData->strThread;  
    str.Empty();
while (str.GetLength() != 52)  
 {  
    unsigned int randomNumber;  
    errno_t randErr;  
    randErr = rand_s(&randomNumber);

    if (randErr == 0)  
 {  
    TCHAR ch = randomNumber % 52 + 1;  
    if (str.Find(ch) <0)  
    str += ch; // not found, add it  
 }  
 }  
}  
```  
  
 Se `MakeRandomString` è stato chiamato da due thread diversi, ognuno sarebbe "casuale" la stringa in modi diversi senza interferire con l'altro. In questo modo è effettivamente un `strThread` istanza per ogni thread anziché una sola istanza globale.  
  
 Si noti come un riferimento viene utilizzato per acquisire il `CString` indirizzo una volta invece di una volta per ogni iterazione del ciclo. Il codice del ciclo potrebbe essere stato scritto con `threadData->strThread` everywhere '`str`' viene utilizzato, ma il codice sarebbe molto più lento in esecuzione. È consigliabile memorizzare nella cache di un riferimento ai dati quando si verificano tali riferimenti nei cicli.  
  
 Il `CThreadLocal` modello di classe utilizza lo stesso meccanismo che `CProcessLocal` non e le stesse tecniche di implementazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)


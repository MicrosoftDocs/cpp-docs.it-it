---
title: 'TN058: Implementazione di stato del modulo MFC | Documenti Microsoft'
ms.custom: ''
ms.date: 06/28/2018
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.mfc.implementation
dev_langs:
- C++
helpviewer_keywords:
- thread state [MFC]
- module states [MFC], managing state data
- TN058
- MFC, managing state data
- module states [MFC], switching
- DLLs [MFC], module states
- process state [MFC]
ms.assetid: 72f5b36f-b3da-4009-a144-24258dcd2b2f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 662ac381fe5513747795f38866172e6dea6fdb03
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37121991"
---
# <a name="tn058-mfc-module-state-implementation"></a>TN058: implementazione di stato del modulo MFC

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

In questa nota tecnica viene descritta l'implementazione di costrutti "Stato del modulo MFC". Comprendere l'implementazione del modulo stato è critico per utilizza MFC condivisa DLL da una DLL (o server OLE in-process).

Prima di leggere questa nota, fare riferimento a "Gestione di stato dei dati dei moduli MFC" nella [creazione di nuovi documenti, finestre e visualizzazioni](../mfc/creating-new-documents-windows-and-views.md). Questo articolo contiene informazioni importanti sull'utilizzo e informazioni generali su questo argomento.

## <a name="overview"></a>Panoramica

Esistono tre tipi di informazioni sullo stato MFC: stato del modulo, stato del processo e lo stato del Thread. In alcuni casi è possibile combinare questi tipi di stato. Ad esempio, le mappe di handle di MFC sono modulo locale sia locale dei thread. In questo modo due moduli diversi per disporre di mappe differenti che in ognuna dei thread.

Stato del processo e lo stato del Thread sono simili. Questi elementi di dati sono operazioni che sono sempre stato variabili globali, ma hanno devono essere specifiche per un determinato processo o thread per il supporto corretto Win32s o per il supporto multithreading. Categoria a cui è contenuto un elemento di dati specificato in base quell'elemento e la semantica desiderata in relazione a limiti di thread e processi.

Stato del modulo è univoco in quanto può contenere stato realmente globale o dello stato dei processi locali o locale dei thread. Inoltre, è possibile cambiare rapidamente.

## <a name="module-state-switching"></a>Cambio di stato del modulo

Ogni thread contiene un puntatore allo stato del modulo "corrente" o "attivi" (rispettivamente, il puntatore fa parte dello stato locale di thread di MFC). Puntatore ' this ' viene modificato quando il thread di esecuzione supera un limite di modulo, ad esempio un'applicazione che chiama in un controllo OLE o DLL o un controllo OLE richiamata in un'applicazione.

Lo stato corrente del modulo viene impostato chiamando `AfxSetModuleState`. Nella maggior parte, non verrà interagisce direttamente con l'API. MFC, in molti casi, verrà chiamato dal automaticamente (in WinMain, OLE punti di ingresso, `AfxWndProc`, ecc.). Questa operazione viene eseguita in qualsiasi componente si scrive il collegamento statico in una speciale `WndProc`e una speciale `WinMain` (o `DllMain`) in grado di quali lo stato del modulo debba essere aggiornata. È possibile visualizzare questo codice esaminando DLLMODUL. CPP o APPMODUL. CPP nella directory MFC\SRC.

È raro che si desidera impostare lo stato del modulo e quindi non nuovamente. La maggior parte dei casi che si desidera un modulo personalizzato "push" stato del nodo corrente e quindi, dopo avere completato, "pop" Indietro nel contesto originale. In tal caso, la macro [AFX_MANAGE_STATE](reference/extension-dll-macros.md#afx_manage_state) e la classe speciale `AFX_MAINTAIN_STATE`.

`CCmdTarget` include funzionalità speciali per il supporto di cambio di stato di modulo. In particolare, un `CCmdTarget` è la classe radice utilizzata per l'automazione OLE e COM OLE punti di ingresso. Come qualsiasi altro punto di ingresso esposti al sistema, questi punti di ingresso necessario impostare lo stato del modulo corretto. Modalità does un determinato `CCmdTarget` sapere quale deve essere lo stato del modulo "corretto" la risposta è che lo "memorizza" che cos'è lo stato del modulo "corrente" quando viene costruito, in modo da poter impostare lo stato del modulo corrente a quella "memorizzate" valore di quando è successive denominato. Di conseguenza, il modulo di stato che un determinato `CCmdTarget` oggetto è associato a è lo stato del modulo corrente quando l'oggetto è stato costruito. Richiedere un semplice esempio di caricamento di un server in-process, si crea un oggetto e chiamarne i metodi.

1.  Il caricamento della DLL da OLE utilizzando `LoadLibrary`.

2. `RawDllMain` viene chiamato per primo. Imposta lo stato del modulo per lo stato del modulo statico noti per la DLL. Per questo motivo `RawDllMain` è collegata in modo statico alla DLL.

3.  Viene chiamato il costruttore per la class factory associata con l'oggetto. `COleObjectFactory` derivato da `CCmdTarget` e di conseguenza, memorizza il modulo lo stato in cui ne è stata creata un'istanza. Questo aspetto è importante, ovvero quando la class factory viene chiesto di creare oggetti, rilevi che ora lo stato del modulo da impostare come corrente.

4. `DllGetClassObject` viene chiamato per ottenere la class factory. MFC Cerca nell'elenco di factory di classe associato a questo modulo e lo restituisce.

5. Chiamata del metodo `COleObjectFactory::XClassFactory2::CreateInstance`. Prima della creazione dell'oggetto e il ripristino, la funzione imposta lo stato del modulo per lo stato del modulo corrente nel passaggio 3 (quello che era corrente quando il `COleObjectFactory` è stata creata un'istanza). Questa operazione viene eseguita all'interno di [METHOD_PROLOGUE](com-interface-entry-points.md).

6.  Quando l'oggetto viene creato, è troppo una `CCmdTarget` derivati e nello stesso modo `COleObjectFactory` memorizzate quali lo stato del modulo è stato attivo, questo nuovo oggetto è direttamente proporzionale. A questo punto l'oggetto sappia quale stato del modulo per passare a ogni volta che viene chiamato.

7.  Il client chiama una funzione per l'oggetto OLE COM che ha ricevuto dal relativo `CoCreateInstance` chiamare. Quando viene chiamato l'oggetto viene utilizzato `METHOD_PROLOGUE` per passare lo stato del modulo nello stesso modo `COleObjectFactory` does.

Come si può notare, lo stato del modulo viene propagato dal oggetto all'oggetto al momento della creazione. È importante avere lo stato del modulo impostato in modo appropriato. Se non è impostata, l'oggetto COM o DLL può interagire negativamente sulle prestazioni con un'applicazione MFC che viene eseguita la chiamata o potrebbe non essere possibile trovare le proprie risorse, potrebbe non riuscire in altri modi miserable.

Si noti che alcuni tipi di DLL, in particolare le DLL di "Estensione MFC" cambio di piano non lo stato del modulo nella loro `RawDllMain` (in realtà, in genere non anche dispongono di un `RawDllMain`). Questo avviene perché sono progettati per un comportamento "as if" fossero effettivamente presente nell'applicazione che li Usa. Sono molto una parte dell'applicazione in cui è in esecuzione ed è l'intenzione di modificare lo stato globale dell'applicazione.

OLE (controlli) ed altre DLL sono molto diversi. Non si desidera modificare lo stato dell'applicazione chiamante; l'applicazione che li chiama non può essere anche un'applicazione MFC e pertanto non possono esistere alcun stato da modificare. Questo è il motivo che è stato ideato modulo cambio di stato.

Per le funzioni esportate da una DLL, ad esempio un oggetto che consente di avviare una finestra di dialogo nella DLL, è necessario aggiungere il codice seguente all'inizio della funzione:

```cpp
AFX_MANAGE_STATE(AfxGetStaticModuleState())
```

Scambiato lo stato del modulo corrente con lo stato restituito da [AfxGetStaticModuleState](reference/extension-dll-macros.md#afxgetstaticmodulestate) fino alla fine dell'ambito corrente.

Se non viene utilizzata la macro AFX_MODULE_STATE, si verificheranno problemi con le risorse nelle DLL. Per impostazione predefinita, MFC utilizza il gestore delle risorse dell'applicazione principale per caricare il modello di risorsa. Questo modello viene effettivamente archiviato nella DLL. La causa principale è che le informazioni sullo stato di modulo di MFC non sono state scambiate dalla macro AFX_MODULE_STATE. Il gestore delle risorse viene recuperato dallo stato del modulo di MFC. Non scambiare lo stato del modulo provoca l'utilizzo errato del gestore delle risorse.

AFX_MODULE_STATE non dovrà essere inserita in ogni funzione nella DLL. Ad esempio `InitInstance` può essere chiamato dal codice MFC nell'applicazione senza AFX_MODULE_STATE perché MFC viene spostato automaticamente lo stato del modulo prima `InitInstance` e quindi lo cambia nuovamente dopo `InitInstance` restituisce. Lo stesso vale per tutti i gestori della mappa messaggi. DLL regolari MFC dispongono effettivamente di una routine della finestra principale speciale che cambia automaticamente lo stato del modulo prima di instradare qualsiasi messaggio.

## <a name="process-local-data"></a>Elaborare i dati locali

Elaborare i dati locali non sarebbe di tali grande interesse non fosse stata per il livello di difficoltà del modello Win32s DLL. In Win32s tutte le DLL condividono i dati globali, anche quando viene caricato da più applicazioni. Questo è molto diverso rispetto al modello di dati di DLL Win32 "real", dove ogni DLL Ottiene una copia distinta del relativo spazio dei dati in ogni processo che si collega alla DLL. Per aggiungere complessità, i dati allocati nell'heap in una DLL Win32s sono in realtà processo specifico (almeno per quanto riguarda la proprietà diventa). Prendere in considerazione i seguenti dati e codice:

```cpp
static CString strGlobal; // at file scope

__declspec(dllexport)
void SetGlobalString(LPCTSTR lpsz)
{
    strGlobal = lpsz;
}

__declspec(dllexport)
void GetGlobalString(LPCTSTR lpsz, size_t cb)
{
    StringCbCopy(lpsz, cb, strGlobal);
}
```

Si consideri cosa succede se il codice sopra riportato in si trova in una DLL e che DLL viene caricata da due processi A e B (Impossibile, infatti, essere due istanze della stessa applicazione). Chiama `SetGlobalString("Hello from A")`. Di conseguenza, la memoria viene allocata per il `CString` dati nel contesto del processo r. tenere presente che il `CString` stesso è globale ed è visibile ad entrambi A e b. A questo punto B chiama `GetGlobalString(sz, sizeof(sz))`. B sarà in grado di visualizzare i dati che un set. Questo avviene perché Win32s non offre protezione tra i processi come Win32. Questo è il primo problema; in molti casi non è consigliabile avere una sola applicazione influisce sui dati globali che viene considerati come di proprietà di un'altra applicazione.

Esistono anche altri problemi. Si supponga che ora viene chiuso. Quando viene chiuso A, la memoria utilizzata dal '`strGlobal`' stringa viene reso disponibile per il sistema, vale a dire, tutta la memoria allocata dal processo viene liberata automaticamente dal sistema operativo. Non viene liberata perché il `CString` distruttore viene chiamato, ma non è ancora stata chiamate ancora. Viene liberata semplicemente perché l'applicazione cui allocato da ha lasciato la scena. Ora, se chiamato B `GetGlobalString(sz, sizeof(sz))`, potrebbero non fornire dati validi. Un'altra applicazione può essere utilizzato tale memoria qualcos'altro.

Chiaramente è presente un problema. MFC 3.x utilizzata una tecnica denominata archiviazione thread-local (TLS). MFC 3.x verrebbe allocare un indice TLS che sotto Win32s effettivamente si comporta come un indice di archiviazione locale di processo, anche se non viene chiamato che e quindi fa riferimento a tutti i dati in base a tale indice TLS. Questa operazione è simile all'indice TLS che è stata utilizzata per archiviare i dati locali del thread su Win32 (vedere di seguito per ulteriori informazioni su questo argomento). La causa di ogni DLL MFC utilizzare almeno due indici TLS per ogni processo. Quando si conto per il caricamento di molti controllo DLL OLE (OCX), si esauriscono rapidamente indici TLS (sono disponibili solo 64). Inoltre, MFC era necessario inserire tutti i dati in un'unica posizione, in una singola struttura. Non è molto estensibile e non è ideale per l'utilizzo di indici TLS.

MFC 4.x di risolvere questo problema con un set di modelli di classe è possibile "includere" tra i dati che devono essere processo locale. Ad esempio, il problema indicato in precedenza può essere corretto con la scrittura:

```cpp
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

MFC implementa questa in due passaggi. Innanzitutto, è un livello superiore di Win32 __Tls\*__  API (**TlsAlloc**, **TlsSetValue**, **TlsGetValue**e così via) che utilizzare solo due indici TLS per processo, indipendentemente dal numero di DLL sia disponibile. In secondo luogo, il `CProcessLocal` modello è disponibile per accedere ai dati. Esegue l'override di operatore -> che è ciò che consente la sintassi intuitiva visualizzati sopra. Tutti gli oggetti che sono stato eseguito il wrapping `CProcessLocal` deve essere derivato da `CNoTrackObject`. `CNoTrackObject` fornisce un allocatore di basso livello (**LocalAlloc**/**LocalFree**) e un distruttore virtuale in modo che MFC automaticamente può eliminare definitivamente gli oggetti processo locale durante il processo viene terminato. Tali oggetti possono avere un distruttore personalizzato se è necessario eseguire una pulizia aggiuntiva. Nell'esempio precedente non richiede uno, poiché il compilatore genera un distruttore predefinito per eliminare l'oggetto incorporato `CString` oggetto.

Esistono altri vantaggi interessanti di questo approccio. Non solo sono tutti `CProcessLocal` oggetti eliminati automaticamente, non vengono costruiti fino a quando non sono necessari. `CProcessLocal::operator->` Crea un'istanza dell'oggetto associato la prima volta che viene chiamato e non prima. Nell'esempio precedente, ciò significa che il '`strGlobal`' non verrà costruita stringa fino al primo `SetGlobalString` o `GetGlobalString` viene chiamato. In alcuni casi, questo può contribuire a ridurre i tempi di avvio della DLL.

## <a name="thread-local-data"></a>Dati Thread-Local

Analogamente a elaborare i dati locali, dati thread-local viene utilizzati quando i dati devono essere locali a un determinato thread. Vale a dire, un'istanza separata dei dati è necessario per ogni thread che accede a tali dati. Numero di volte utilizzabile al posto di meccanismi di sincronizzazione completa. Se i dati non devono essere condivisi da più thread, tali meccanismi possono essere dispendiosa e non necessari. Si supponga che abbiamo un `CString` oggetto (simile a quello riportato sopra). È possibile renderlo thread locale mediante il wrapping con un `CThreadLocal` modello:

```cpp
struct CMyThreadData : public CNoTrackObject
{
    CString strThread;
};
CThreadLocal<CMyThreadData> threadData;

void MakeRandomString()
{
    // a kind of card shuffle (not a great one)
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

Se `MakeRandomString` è stato chiamato da due thread diversi, ognuno sarebbe "casuale" la stringa in modi diversi senza interferire con l'altro. Infatti è effettivamente un `strThread` istanza per ogni thread anziché una sola istanza globale.

Si noti come un riferimento viene utilizzato per acquisire il `CString` risolvere una volta invece di una volta per ogni iterazione del ciclo. Il codice del ciclo potrebbe essere stato scritto con `threadData->strThread` everywhere '`str`' viene utilizzato, ma il codice sarebbe molto più lento in esecuzione. È consigliabile memorizzare nella cache di un riferimento ai dati quando si verificano tali riferimenti nei cicli.

Il `CThreadLocal` modello di classe utilizza lo stesso meccanismo che `CProcessLocal` non e le stesse tecniche di implementazione.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)  
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)  

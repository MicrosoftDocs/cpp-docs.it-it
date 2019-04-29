---
title: 'TN058: Implementazione di stato del modulo MFC'
ms.date: 06/28/2018
f1_keywords:
- vc.mfc.implementation
helpviewer_keywords:
- thread state [MFC]
- module states [MFC], managing state data
- TN058
- MFC, managing state data
- module states [MFC], switching
- DLLs [MFC], module states
- process state [MFC]
ms.assetid: 72f5b36f-b3da-4009-a144-24258dcd2b2f
ms.openlocfilehash: db34f528e70a7dcc437836684656b3ce8a4078fd
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62399598"
---
# <a name="tn058-mfc-module-state-implementation"></a>TN058: Implementazione di stato del modulo MFC

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

In questa nota tecnica viene descritta l'implementazione di costrutti di "Stato del modulo MFC". Comprendere l'implementazione di stato del modulo è fondamentale per utilizzare MFC condivisi DLL da una DLL (o server OLE in-process).

Prima di leggere questa nota, vedere "Gestione di stato dei dati dei moduli MFC" nella [creazione di nuovi documenti, Windows e le viste](../mfc/creating-new-documents-windows-and-views.md). Questo articolo contiene informazioni importanti sull'utilizzo e informazioni generali su questo argomento.

## <a name="overview"></a>Panoramica

Esistono tre tipi di informazioni sullo stato MFC: Stato del modulo, lo stato del processo e lo stato del Thread. In alcuni casi è possibile combinare questi tipi di stato. Ad esempio, le mappe di handle di MFC sono modulo locale sia locale dei thread. In questo modo due moduli diversi avere mappe diverse in ognuno dei relativi thread.

Stato del processo e lo stato del Thread sono simili. Questi elementi di dati sono operazioni che sono sempre stato variabili globali, ma hanno devono essere specifiche per un determinato processo o thread per supportano Win32s appropriata o per il supporto multithreading appropriato. Categoria a cui si inserisce un elemento dati specificato in dipende da tale elemento e la semantica desiderata per quanto riguarda i limiti di thread e processi.

Stato del modulo è univoco in quanto può contenere lo stato davvero globale o dello stato dei processi locali o locale dei thread. Inoltre, è possibile commutare rapidamente.

## <a name="module-state-switching"></a>Cambio di stato del modulo

Ogni thread contiene un puntatore per lo stato del modulo "corrente" o "attivi" (non è una sorpresa il puntatore fa parte dello stato locale di thread di MFC). Questo puntatore viene modificato quando il thread di esecuzione supera un limite di modulo, ad esempio un'applicazione che chiama in un controllo OLE o DLL o un controllo OLE richiamato in un'applicazione.

Lo stato corrente del modulo viene impostato chiamando `AfxSetModuleState`. Nella maggior parte, non verrà interagisce direttamente con l'API. MFC, in molti casi, verrà chiamato per l'utente (in WinMain, OLE-punti di ingresso, `AfxWndProc`e così via.). Questa operazione viene eseguita in qualsiasi componente di cui si scrive il collegamento statico in una speciale `WndProc`e una speciale `WinMain` (o `DllMain`) che sappia quali lo stato del modulo debba essere aggiornata. È possibile visualizzare questo codice esaminando DLLMODUL. CPP o APPMODUL. CPP nella directory MFC\SRC.

È raro che si desidera impostare lo stato del modulo e quindi non impostarlo di nuovo. La maggior parte dei casi che si vuole eseguire il proprio modulo "push" stato del nodo corrente e quindi, dopo aver, "pop" Indietro nel contesto originale. In tal caso, la macro [AFX_MANAGE_STATE](reference/extension-dll-macros.md#afx_manage_state) e la classe speciale `AFX_MAINTAIN_STATE`.

`CCmdTarget` include funzionalità speciali per il supporto di cambio di stato di modulo. In particolare, un `CCmdTarget` è la classe radice usato per l'automazione OLE e COM OLE punti di ingresso. Come qualsiasi altro punto di ingresso esposto al sistema, questi punti di ingresso necessario impostare lo stato di modulo corretto. Come viene un determinato `CCmdTarget` sapere cosa deve essere lo stato del modulo "corretto" la risposta è che lo "ricorda" che cos'è lo stato del modulo "corrente" quando viene creata, in modo da poter impostare lo stato del modulo corrente a quello "ricordata" chiamato valore al momento più recente. Di conseguenza, il modulo di stato che un determinato `CCmdTarget` è associato a è lo stato del modulo che risultava corrente quando l'oggetto è stato costruito. Richiedere un semplice esempio di caricamento di un server INPROC, creazione di un oggetto e chiamando i relativi metodi.

1. Il caricamento della DLL da OLE utilizzando `LoadLibrary`.

2. `RawDllMain` viene chiamato per primo. Imposta lo stato del modulo per lo stato noto del modulo statico per la DLL. Per questo motivo `RawDllMain` è collegato staticamente alle DLL.

1. Viene chiamato il costruttore per la class factory associato l'oggetto. `COleObjectFactory` è derivato da `CCmdTarget` e di conseguenza, sono state memorizzate in cui lo stato del modulo, è stata creata un'istanza. Questo aspetto è importante, ovvero quando la class factory viene richiesto di creare oggetti, conosce ora quali lo stato del modulo da impostare come corrente.

4. `DllGetClassObject` viene chiamato per ottenere la class factory. MFC Cerca nell'elenco di factory di classe associato al modulo e lo restituisce.

5. Chiamata del metodo `COleObjectFactory::XClassFactory2::CreateInstance`. Prima di creare l'oggetto e la restituzione, questa funzione imposta lo stato del modulo per lo stato del modulo corrente nel passaggio 3 (quello che era quello corrente quando il `COleObjectFactory` è stata creata un'istanza). Questa operazione viene eseguita all'interno di [METHOD_PROLOGUE](com-interface-entry-points.md).

1. Quando viene creato l'oggetto, è anche un `CCmdTarget` derivativo e nello stesso modo `COleObjectFactory` deve ricordare che lo stato del modulo è stato attivo, crescono anche questo nuovo oggetto. A questo punto l'oggetto sappia quali lo stato del modulo per passare a ogni volta che viene chiamato.

1. Il client chiama una funzione sull'oggetto OLE COM che ha ricevuto dal relativo `CoCreateInstance` chiamare. Quando viene chiamato l'oggetto viene utilizzato `METHOD_PROLOGUE` per passare lo stato del modulo come `COleObjectFactory` viene.

Come può notare, lo stato del modulo viene propagato dall'oggetto all'oggetto man mano che vengono creati. È importante avere lo stato del modulo impostato in modo appropriato. Se non è impostata, l'oggetto COM o DLL può interagire in modo inadeguato con un'applicazione MFC che viene eseguita la chiamata o potrebbe non essere possibile trovare le proprie risorse potrebbe non riuscire in altri modi miserabile.

Si noti che alcuni tipi di DLL, in particolare "MFC estensione" dll non cambiare lo stato del modulo nel loro `RawDllMain` (in realtà, sono in genere non devono nemmeno avere un `RawDllMain`). Questo avviene perché sono progettate per comporta "come se" erano effettivamente presenti nell'applicazione che li Usa. Sono molto una parte dell'applicazione in cui è in esecuzione ed è l'intenzione di modificare lo stato globale dell'applicazione.

OLE controlli ed altre DLL sono molto diversi. Essi non si desidera modificare lo stato dell'applicazione chiamante; l'applicazione che li chiama potrebbe non essere anche un'applicazione MFC e pertanto non potrebbero esserci alcun stato da modificare. Questo è il motivo che è stato inventato modulo cambio di stato.

Per le funzioni esportate da una DLL, ad esempio un oggetto che consente di avviare una finestra di dialogo nella DLL, è necessario aggiungere il codice seguente all'inizio della funzione:

```cpp
AFX_MANAGE_STATE(AfxGetStaticModuleState())
```

Ciò consente di scambiare lo stato corrente del modulo con lo stato restituito da [AfxGetStaticModuleState](reference/extension-dll-macros.md#afxgetstaticmodulestate) fino alla fine dell'ambito corrente.

Se non viene utilizzata la macro AFX_MODULE_STATE, si verificheranno problemi con le risorse nelle DLL. Per impostazione predefinita, MFC utilizza il gestore delle risorse dell'applicazione principale per caricare il modello di risorsa. Questo modello viene effettivamente archiviato nella DLL. La causa principale è che le informazioni sullo stato di modulo di MFC non sono state scambiate dalla macro AFX_MODULE_STATE. Il gestore delle risorse viene recuperato dallo stato del modulo di MFC. Non scambiare lo stato del modulo provoca l'utilizzo errato del gestore delle risorse.

AFX_MODULE_STATE non dovrà essere inserita in ogni funzione nella DLL. Ad esempio, `InitInstance` può essere chiamato dal codice MFC nell'applicazione senza AFX_MODULE_STATE perché MFC viene spostato automaticamente lo stato del modulo prima `InitInstance` e quindi lo cambia nuovamente dopo `InitInstance` restituisce. Lo stesso vale per tutti i gestori della mappa messaggi. DLL MFC regolari sono effettivamente una routine della finestra principale speciali che cambia automaticamente lo stato del modulo prima di instradare qualsiasi messaggio.

## <a name="process-local-data"></a>Elaborare i dati locali

Elaborare i dati locali non sarebbe di questo tipo grande interesse non fosse stata per il modello DLL Win32s le difficoltà associate. In Win32s tutte le DLL di condividono i dati globali, anche quando viene caricato da più applicazioni. Ciò è molto diversa rispetto al modello di dati "reale" DLL Win32, in cui ogni DLL Ottiene una copia separata dello spazio dei dati in ogni processo che collega alla DLL. Per aggiungere la complessità, i dati allocati nell'heap in una DLL Win32s sono in realtà processo specifico (almeno per quanto riguarda la proprietà diventa). Prendere in considerazione dati e al codice seguente:

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

Considerare ciò che accade se il codice sopra riportato si in trova in una DLL e DLL viene caricata da due processi A e B (Impossibile, infatti, essere due istanze della stessa applicazione). Un chiamate `SetGlobalString("Hello from A")`. Di conseguenza, la memoria viene allocata per il `CString` i dati nel contesto del processo r. tenere presente che il `CString` stesso è globale ed è visibile ad entrambi A e b. A questo punto B chiama `GetGlobalString(sz, sizeof(sz))`. B sarà in grado di visualizzare i dati che un set. Questo avviene perché Win32s non offre alcuna protezione tra i processi come Win32. Questo è il primo problema; in molti casi non è consigliabile avere una sola applicazione influisce sui dati globali che viene considerati come di proprietà di un'altra applicazione.

Esistono anche altri problemi. Si supponga che ora viene chiuso. Quando viene chiuso A, la memoria usata dal '`strGlobal`' stringa viene resa disponibile per il sistema, vale a dire, tutta la memoria allocata da un processo viene liberata automaticamente dal sistema operativo. Non viene liberata perché il `CString` distruttore viene chiamato; non è ancora stato chiamato. Liberarlo semplicemente perché l'applicazione che viene allocata ha lasciato la scena. Ora, se chiamato B `GetGlobalString(sz, sizeof(sz))`, potrebbero non fornire dati validi. Un'altra applicazione potrebbe avere utilizzata per qualcos'altro che la memoria.

Chiaramente è presente un problema. MFC 3.x utilizzata una tecnica denominata archiviazione thread-local (TLS). MFC 3.x allocherà un indice TLS che sotto Win32s davvero agisce come un indice di archiviazione locale del processo, anche se non viene chiamato che e quindi fa riferimento a tutti i dati basati su tale indice TLS. È simile all'indice TLS che è stato usato per archiviare i dati locali del thread in Win32 (vedere di seguito per altre informazioni su questo argomento). La causa di ogni DLL MFC a utilizzare almeno due indici TLS per il processo. Quando si considera per il caricamento di molti OLE controllo DLL (OCX), si esaurisce rapidamente gli indici di TLS (sono disponibili solo a 64). Inoltre, MFC era necessario inserire tutti i dati in un'unica posizione, in una singola struttura. Non era molto estensibile e non si è rivelata ideale per quanto riguarda l'uso di indici TLS.

MFC 4.x risolve questo problema con un set di modelli di classe è possibile "wrapping" i dati che devono essere processo locale. Ad esempio, il problema indicato in precedenza può essere corretto con la scrittura:

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

MFC implementa questa in due passaggi. In primo luogo, è presente un livello superiore Win32 __Tls\*__  le API (**TlsAlloc**, **TlsSetValue**, **TlsGetValue**e così via) che usare solo due indici TLS per ogni processo, indipendentemente dal numero di DLL necessario. Secondo, il `CProcessLocal` modello è disponibile per l'accesso ai dati. Esegue l'override di operatore -> che è ciò che consente la sintassi intuitiva illustrato in precedenza. Tutti gli oggetti sono a wrapping da `CProcessLocal` deve essere derivato da `CNoTrackObject`. `CNoTrackObject` fornisce un livello inferiore di allocatore (**LocalAlloc**/**LocalFree**) e un distruttore virtuale in modo che MFC automaticamente può eliminare definitivamente gli oggetti locali processo quando il processo viene terminato. Tali oggetti possono avere un distruttore personalizzato se è necessaria eseguire una pulizia aggiuntiva. Nell'esempio precedente non è necessario uno, poiché il compilatore genererà un distruttore predefinito per eliminare definitivamente l'oggetto incorporato `CString` oggetto.

Esistono altri vantaggi interessante di questo approccio. Non solo sono tutti `CProcessLocal` gli oggetti eliminati automaticamente, non vengono costruiti fino a quando non sono necessari. `CProcessLocal::operator->` verrà creata un'istanza dell'oggetto associato la prima volta che viene chiamato e non prima. Nell'esempio precedente, ciò significa che il '`strGlobal`' non verrà costruita stringa fino al primo `SetGlobalString` o `GetGlobalString` viene chiamato. In alcuni casi, ciò può contribuire a ridurre il tempo di avvio DLL.

## <a name="thread-local-data"></a>I dati locali del thread

Simile a elaborare i dati locali, dati locale di thread vengono usati quando i dati devono essere locali per un determinato thread. Vale a dire, è necessaria un'istanza separata dei dati per ogni thread che accede a tali dati. Numero di volte utilizzabile al posto dei meccanismi di sincronizzazione completo. Se i dati non devono essere condivisi da più thread, meccanismi di questo tipo possono essere costoso e inutile. Si supponga che avevamo un `CString` oggetto (analogo a quello nell'esempio precedente). È realizzare di thread locale eseguendo il wrapping con un `CThreadLocal` modello:

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

Se `MakeRandomString` è stato chiamato da due thread diversi, ognuno sarebbe "shuffle" la stringa in modi diversi senza interferire con l'altro. Questo accade perché si è effettivamente un `strThread` istanza per ogni thread anziché una sola istanza globale.

Si noti come riferimento viene utilizzato per acquisire il `CString` indirizzo una sola volta anziché una sola volta per ogni iterazione del ciclo. Il codice del ciclo è stato scritto con `threadData->strThread` everywhere '`str`' viene usato, ma il codice sarebbe molto più lento in esecuzione. È consigliabile memorizzare nella cache di un riferimento ai dati quando si verificano tali riferimenti nei cicli.

Il `CThreadLocal` modello di classe Usa gli stessi meccanismi che `CProcessLocal` non e le stesse tecniche di implementazione.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)

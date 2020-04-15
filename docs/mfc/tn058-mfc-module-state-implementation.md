---
title: 'TN058: implementazione di stato del modulo MFC'
ms.date: 06/28/2018
helpviewer_keywords:
- thread state [MFC]
- module states [MFC], managing state data
- TN058
- MFC, managing state data
- module states [MFC], switching
- DLLs [MFC], module states
- process state [MFC]
ms.assetid: 72f5b36f-b3da-4009-a144-24258dcd2b2f
ms.openlocfilehash: b64fb6b97474007c44a2124315e83e1ac119f9ec
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366613"
---
# <a name="tn058-mfc-module-state-implementation"></a>TN058: implementazione di stato del modulo MFC

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

Questa nota tecnica descrive l'implementazione dei costrutti "module state" MFC. Una conoscenza dell'implementazione dello stato del modulo è fondamentale per l'utilizzo delle DLL condivise MFC da una DLL (o server OLE in-process).

Prima di leggere questa nota, fare riferimento a "Gestione dei dati di stato dei moduli MFC" in [Creazione di nuovi documenti, finestre e visualizzazioni](../mfc/creating-new-documents-windows-and-views.md). Questo articolo contiene importanti informazioni sull'utilizzo e informazioni generali su questo argomento.

## <a name="overview"></a>Panoramica

Esistono tre tipi di informazioni sullo stato MFC: stato del modulo, stato del processo e stato del thread. A volte questi tipi di stato possono essere combinati. Ad esempio, le mappe di handle di MFC sono sia locale del modulo che thread locale. Ciò consente a due moduli diversi di avere mappe diverse in ciascuno dei relativi thread.

Lo stato del processo e lo stato del thread sono simili. Questi elementi di dati sono elementi che sono stati tradizionalmente variabili globali, ma devono essere specifici di un determinato processo o thread per il supporto Win32s corretto o per il supporto multithreading appropriato. La categoria a cui si adatta un determinato elemento di dati dipende da tale elemento e dalla semantica desiderata per quanto riguarda i limiti di processi e thread.

Lo stato del modulo è univoco in quanto può contenere uno stato veramente globale o uno stato locale del processo o locale del thread. Inoltre, può essere commutato rapidamente.

## <a name="module-state-switching"></a>Cambio di stato del modulo

Ogni thread contiene un puntatore allo stato del modulo "corrente" o "attivo" (non sorprendentemente, il puntatore fa parte dello stato locale del thread di MFC). Questo puntatore viene modificato quando il thread di esecuzione passa un limite del modulo, ad esempio un'applicazione che chiama in un controllo OLE o DLL o un controllo OLE che richiama in un'applicazione.

Lo stato del modulo `AfxSetModuleState`corrente viene disattivato chiamando . Per la maggior parte, non si avrà mai a che fare direttamente con l'API. MFC, in molti casi, lo chiamerà per l'utente (in WinMain, punti di ingresso OLE, `AfxWndProc`ecc.). Questa operazione viene eseguita in qualsiasi componente `WndProc`scritto mediante `WinMain` il `DllMain`collegamento statico in uno speciale e in uno speciale (o ) che sa quale stato del modulo deve essere corrente. È possibile visualizzare questo codice esaminando DLLMODUL. CPP o APPMODUL. CPP nella directory MFC-SRC.

È raro che si desideri impostare lo stato del modulo e quindi non ripristinarlo. La maggior parte delle volte si desidera "spingere" il proprio stato del modulo come quello corrente e poi, al termine, "pop" il contesto originale indietro. Questa operazione viene [AFX_MANAGE_STATE](reference/extension-dll-macros.md#afx_manage_state) eseguita dalla `AFX_MAINTAIN_STATE`macro AFX_MANAGE_STATE e dalla classe speciale .

`CCmdTarget`ha caratteristiche speciali per il supporto della commutazione di stato del modulo. In particolare, `CCmdTarget` a è la classe radice utilizzata per l'automazione OLE e i punti di ingresso OLE COM. Come qualsiasi altro punto di ingresso esposto al sistema, questi punti di ingresso devono impostare lo stato corretto del modulo. Come fa `CCmdTarget` un dato a sapere quale sia lo stato del modulo "corretto" La risposta è che "ricorda" ciò che lo stato del modulo "corrente" è quando viene costruito, in modo che possa impostare lo stato del modulo corrente su quel valore "ricordato" quando viene chiamato in seguito. Di conseguenza, lo stato `CCmdTarget` del modulo a cui è associato un determinato oggetto è lo stato del modulo che era corrente quando l'oggetto è stato costruito. Si supponga un semplice esempio di caricamento di un server INPROC, creazione di un oggetto e chiamata dei relativi metodi.

1. La DLL viene caricata `LoadLibrary`da OLE utilizzando .

1. `RawDllMain`viene chiamato per primo. Imposta lo stato del modulo sullo stato del modulo statico noto per la DLL. Per questo `RawDllMain` motivo è collegato in modo statico alla DLL.

1. Viene chiamato il costruttore per la class factory associata all'oggetto. `COleObjectFactory`deriva da `CCmdTarget` e di conseguenza, ricorda in quale stato del modulo è stata creata un'istanza. Questo è importante: quando alla class factory viene chiesto di creare oggetti, ora sa quale stato del modulo rendere corrente.

1. `DllGetClassObject`viene chiamato per ottenere la class factory. MFC cerca l'elenco di class factory associato a questo modulo e lo restituisce.

1. Viene chiamato `COleObjectFactory::XClassFactory2::CreateInstance`. Prima di creare l'oggetto e restituirlo, questa funzione imposta lo stato del modulo sullo stato `COleObjectFactory` del modulo corrente nel passaggio 3 (quello corrente quando è stata creata un'istanza di the). Questo viene fatto all'interno di [METHOD_PROLOGUE](com-interface-entry-points.md).

1. Quando l'oggetto viene creato, `CCmdTarget` è anche una `COleObjectFactory` derivata e nello stesso modo ricorda quale stato del modulo era attivo, così fa questo nuovo oggetto. Ora l'oggetto sa a quale stato del modulo passare ogni volta che viene chiamato.

1. Il client chiama una funzione sull'oggetto OLE COM ricevuto dalla chiamata. `CoCreateInstance` Quando l'oggetto viene `METHOD_PROLOGUE` chiamato viene utilizzato `COleObjectFactory` per cambiare lo stato del modulo come fa.

Come si può vedere, lo stato del modulo viene propagato da un oggetto all'altro quando vengono creati. È importante impostare lo stato del modulo in modo appropriato. Se non è impostato, la DLL o l'oggetto COM potrebbe interagire male con un'applicazione MFC che lo chiama, o potrebbe non essere in grado di trovare le proprie risorse, o potrebbe non riuscire in altri modi miserabili.

Si noti che alcuni tipi di DLL, in particolare le DLL "Estensione `RawDllMain` MFC" non cambiano lo stato `RawDllMain`del modulo nel loro (in realtà, in genere non hanno nemmeno un ). Questo perché sono destinati a comportarsi "come se" erano effettivamente presenti nell'applicazione che li utilizza. Sono molto una parte dell'applicazione che è in esecuzione ed è loro intenzione di modificare lo stato globale dell'applicazione.

Controlli OLE e altre DLL sono molto diversi. Non desiderano modificare lo stato dell'applicazione chiamante. l'applicazione che li chiama potrebbe anche non essere un'applicazione MFC e pertanto potrebbe non essere presente alcuno stato da modificare. Questo è il motivo per cui è stata inventata la commutazione dello stato del modulo.

Per le funzioni esportate da una DLL, ad esempio una che avvia una finestra di dialogo nella DLL, è necessario aggiungere il codice seguente all'inizio della funzione:

```cpp
AFX_MANAGE_STATE(AfxGetStaticModuleState())
```

In questo modo lo stato del modulo corrente viene scambiato con lo stato restituito da [AfxGetStaticModuleState](reference/extension-dll-macros.md#afxgetstaticmodulestate) fino alla fine dell'ambito corrente.

Se la macro AFX_MODULE_STATE non viene utilizzata, si verificheranno problemi con le risorse nelle DLL. Per impostazione predefinita, MFC utilizza il gestore delle risorse dell'applicazione principale per caricare il modello di risorsa. Questo modello viene effettivamente archiviato nella DLL. La causa principale è che le informazioni sullo stato del modulo di MFC non è stato cambiato dalla macro AFX_MODULE_STATE. Il gestore delle risorse viene recuperato dallo stato del modulo di MFC. Non scambiare lo stato del modulo provoca l'utilizzo errato del gestore delle risorse.

AFX_MODULE_STATE non deve essere inserita in ogni funzione nella DLL. Ad esempio, `InitInstance` può essere chiamato dal codice MFC nell'applicazione senza AFX_MODULE_STATE `InitInstance` perché MFC sposta `InitInstance` automaticamente lo stato del modulo prima e quindi lo cambia nuovamente dopo la restituzione. Lo stesso vale per tutti i gestori della mappa messaggi. Le DLL MFC regolari dispongono in realtà di una speciale routine della finestra master che passa automaticamente lo stato del modulo prima di instradare qualsiasi messaggio.

## <a name="process-local-data"></a>Elabora dati locali

Elaborare i dati locali non sarebbe di grande preoccupazione se non fosse stato per la difficoltà del modello DLL Win32s. In Win32s tutte le DLL condividono i dati globali, anche quando vengono caricate da più applicazioni. Questo è molto diverso dal modello di dati DLL Win32 "reale", in cui ogni DLL ottiene una copia separata del relativo spazio dati in ogni processo che si connette alla DLL. Per aggiungere alla complessità, i dati allocati nell'heap in una DLL Win32s sono infatti specifici del processo (almeno per quanto riguarda la proprietà). Considerare i dati e il codice seguenti:Consider the following data and code:

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

Si consideri cosa accade se il codice precedente si trova in una DLL e tale DLL viene caricata da due processi A e B (potrebbe, infatti, essere due istanze della stessa applicazione). A `SetGlobalString("Hello from A")`chiama . Di conseguenza, la memoria `CString` viene allocata per i dati `CString` nel contesto del processo A. Tenere presente che il file stesso è globale ed è visibile sia ad A che a B. Ora B `GetGlobalString(sz, sizeof(sz))`chiama . B sarà in grado di vedere i dati che A impostato. Questo perché Win32s non offre alcuna protezione tra i processi come Win32 fa. Questo è il primo problema; in molti casi non è auspicabile che un'applicazione influisca sui dati globali considerati di proprietà di un'applicazione diversa.

Ci sono anche altri problemi. Diciamo che A ora esce. Quando A esce, la memoria`strGlobal`utilizzata dalla stringa ' ' viene resa disponibile per il sistema, ovvero tutta la memoria allocata dal processo A viene liberata automaticamente dal sistema operativo. Non viene liberato `CString` perché viene chiamato il distruttore; non è ancora stato chiamato. Viene liberato semplicemente perché l'applicazione che l'ha allocata ha lasciato la scena. Ora, se `GetGlobalString(sz, sizeof(sz))`B ha chiamato , potrebbe non ottenere dati validi. Qualche altra applicazione potrebbe aver usato quella memoria per qualcos'altro.

Chiaramente esiste un problema. MFC 3.x utilizzato una tecnica denominata archiviazione locale di thread (TLS). MFC 3.x allocherebbe un indice TLS che in Win32s agisce realmente come un indice di archiviazione locale del processo, anche se non viene chiamato che e quindi fare riferimento a tutti i dati basati su tale indice TLS. È simile all'indice TLS utilizzato per archiviare i dati locali del thread in Win32 (vedere di seguito per ulteriori informazioni sull'argomento). In questo modo ogni DLL MFC per utilizzare almeno due indici TLS per processo. Quando si tiene conto del caricamento di molte DLL di controllo OLE (OCX), si esauriscono rapidamente gli indici TLS (sono disponibili solo 64). Inoltre, MFC ha dovuto inserire tutti questi dati in un'unica posizione, in un'unica struttura. Non era molto estensibile e non era ideale per quanto riguarda il suo uso di indici TLS.

MFC 4.x risolve questo problema con un set di modelli di classe che è possibile "avvolgere" intorno ai dati che devono essere elaborazione locale. Ad esempio, il problema di cui sopra potrebbe essere risolto scrivendo:

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

MFC implementa questo in due passaggi. In primo luogo, è presente un livello in cima alle API __Tls\* __ Win32 (**TlsAlloc**, **TlsSetValue**, **TlsGetValue**e così via) che utilizzano solo due indici TLS per processo, indipendentemente dal numero di DLL disponibili. In secondo `CProcessLocal` luogo, viene fornito il modello per accedere a questi dati. Esegue l'override di operator-> che è ciò che consente la sintassi intuitiva che si vede sopra. Tutti gli oggetti `CProcessLocal` di cui `CNoTrackObject`viene eseguito il wrapping devono essere derivati da . `CNoTrackObject`fornisce un allocatore di livello inferiore (**LocalAlloc**/**LocalFree**) e un distruttore virtuale in modo che MFC possa eliminare automaticamente il processo di oggetti locali quando il processo viene terminato. Tali oggetti possono avere un distruttore personalizzato se è necessaria una pulizia aggiuntiva. L'esempio precedente non ne richiede uno, poiché il compilatore `CString` genererà un distruttore predefinito per eliminare l'oggetto incorporato.

Ci sono altri vantaggi interessanti a questo approccio. Non solo `CProcessLocal` tutti gli oggetti vengono distrutti automaticamente, ma non vengono costruiti fino a quando non sono necessari. `CProcessLocal::operator->`verrà creata un'istanza dell'oggetto associato la prima volta che viene chiamato e non prima. Nell'esempio precedente, ciò`strGlobal`significa che la stringa ' `SetGlobalString` ' `GetGlobalString` non verrà costruita fino alla prima volta o non viene chiamata. In alcuni casi, ciò consente di ridurre il tempo di avvio della DLL.

## <a name="thread-local-data"></a>Dati locali del threadThread Local Data

Analogamente ai dati locali di processo, i dati locali del thread vengono utilizzati quando i dati devono essere locali in un determinato thread. Vale a dire, è necessaria un'istanza separata dei dati per ogni thread che accede a tali dati. Questo può essere utilizzato molte volte al posto di meccanismi di sincronizzazione estesi. Se i dati non devono essere condivisi da più thread, tali meccanismi possono essere costosi e superflui. Supponiamo di `CString` avere un oggetto (molto simile all'esempio precedente). Possiamo renderlo thread locale avvolgendolo `CThreadLocal` con un modello:

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

Se `MakeRandomString` è stato chiamato da due thread diversi, ognuno "shuffle" la stringa in modi diversi senza interferire con l'altro. Questo perché esiste in `strThread` realtà un'istanza per thread anziché una sola istanza globale.

Si noti come un `CString` riferimento viene utilizzato per acquisire l'indirizzo una volta anziché una volta per ogni iterazione del ciclo. Il codice del ciclo `threadData->strThread` avrebbe`str`potuto essere scritto con ovunque ' ' viene utilizzato, ma il codice sarebbe molto più lento nell'esecuzione. È consigliabile memorizzare nella cache un riferimento ai dati quando tali riferimenti si verificano nei cicli.

Il `CThreadLocal` modello di classe usa `CProcessLocal` gli stessi meccanismi che non fanno e le stesse tecniche di implementazione.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)

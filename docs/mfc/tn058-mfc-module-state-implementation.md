---
description: 'Altre informazioni su: TN058: implementazione dello stato del modulo MFC'
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
ms.openlocfilehash: c4b300b9aa184e9fa1c6cfd5a8cf668d163d85ef
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97214780"
---
# <a name="tn058-mfc-module-state-implementation"></a>TN058: implementazione di stato del modulo MFC

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

Questa nota tecnica descrive l'implementazione dei costrutti "stato del modulo" di MFC. Per comprendere l'implementazione dello stato del modulo è fondamentale utilizzare le DLL condivise MFC da una DLL (o server OLE in-process).

Prima di leggere questa nota, vedere la sezione relativa alla gestione dei dati sullo stato dei moduli MFC nella pagina relativa alla [creazione di nuovi documenti, finestre e visualizzazioni](../mfc/creating-new-documents-windows-and-views.md). Questo articolo contiene informazioni importanti sull'utilizzo e informazioni generali su questo argomento.

## <a name="overview"></a>Panoramica

Sono disponibili tre tipi di informazioni sullo stato MFC: stato del modulo, stato del processo e stato del thread. A volte questi tipi di stato possono essere combinati. Le mappe di handle di MFC, ad esempio, sono sia locali che di thread locali. In questo modo, due moduli diversi possono avere mappe diverse in ognuno dei rispettivi thread.

Stato del processo e stato del thread sono simili. Questi elementi di dati sono elementi che tradizionalmente sono variabili globali, ma devono essere specifici di un determinato processo o thread per il supporto Win32s appropriato o per il supporto del multithreading appropriato. La categoria a cui si riferisce un determinato elemento di dati dipende da tale elemento e dalla semantica desiderata per quanto riguarda i limiti di processi e thread.

Lo stato del modulo è univoco in quanto può contenere uno stato o uno stato realmente globale che è il processo locale o thread-local. Inoltre, può essere cambiata rapidamente.

## <a name="module-state-switching"></a>Cambio stato del modulo

Ogni thread contiene un puntatore allo stato del modulo "Current" o "Active" (non sorprendentemente, il puntatore fa parte dello stato locale del thread di MFC). Questo puntatore viene modificato quando il thread di esecuzione passa un limite del modulo, ad esempio un'applicazione che chiama un controllo o una DLL OLE, oppure un controllo OLE che richiama un'applicazione.

Lo stato corrente del modulo viene attivato chiamando `AfxSetModuleState` . Nella maggior parte dei casi, non si tratterà mai direttamente dell'API. MFC, in molti casi, lo chiamerà per l'utente (in WinMain, punti di ingresso OLE, `AfxWndProc` e così via). Questa operazione viene eseguita in qualsiasi componente scritto mediante collegamento statico in uno speciale `WndProc` e uno speciale `WinMain` (o `DllMain` ) che sa quale stato del modulo deve essere corrente. È possibile visualizzare questo codice esaminando DLLMODUL. CPP o APPMODUL. CPP nella directory MFC\SRC

È raro che si voglia impostare lo stato del modulo e quindi non impostarlo di nuovo. Nella maggior parte dei casi si vuole "effettuare il push" dello stato del modulo come quello corrente e quindi, al termine, "pop" il contesto originale. Questa operazione viene eseguita dalla macro [AFX_MANAGE_STATE](reference/extension-dll-macros.md#afx_manage_state) e dalla classe speciale `AFX_MAINTAIN_STATE` .

`CCmdTarget` dispone di funzionalità speciali per supportare il cambio dello stato del modulo. In particolare, un `CCmdTarget` è la classe radice utilizzata per l'automazione OLE e i punti di ingresso OLE com. Come per qualsiasi altro punto di ingresso esposto al sistema, questi punti di ingresso devono impostare lo stato corretto del modulo. Il modo in cui un determinato `CCmdTarget` stato del modulo "corretto" deve essere la risposta è che "ricorda" lo stato del modulo "corrente" quando viene costruito, in modo da poter impostare lo stato del modulo corrente sul valore "memorizzato" quando viene chiamato in seguito. Di conseguenza, lo stato del modulo a cui un determinato `CCmdTarget` oggetto è associato è lo stato del modulo che era corrente quando l'oggetto è stato costruito. Eseguire un semplice esempio di caricamento di un server inproc, della creazione di un oggetto e della chiamata dei relativi metodi.

1. La DLL viene caricata da OLE utilizzando `LoadLibrary` .

1. `RawDllMain` viene chiamato prima. Imposta lo stato del modulo sullo stato del modulo statico noto per la DLL. Per questo motivo `RawDllMain` è collegato in modo statico alla dll.

1. Viene chiamato il costruttore per il class factory associato all'oggetto. `COleObjectFactory` deriva da `CCmdTarget` e, di conseguenza, ricorda lo stato del modulo di cui è stata creata un'istanza. Si tratta di un aspetto importante, quando al class factory viene chiesto di creare oggetti, ora sa quale stato del modulo rendere corrente.

1. `DllGetClassObject` viene chiamato per ottenere la class factory. MFC esegue la ricerca nell'elenco di class factory associato a questo modulo e lo restituisce.

1. Chiamata del metodo `COleObjectFactory::XClassFactory2::CreateInstance`. Prima di creare l'oggetto e restituirlo, questa funzione imposta lo stato del modulo sullo stato del modulo corrente nel passaggio 3 (quello che era corrente quando `COleObjectFactory` è stata creata l'istanza di). Questa operazione viene eseguita all'interno di [METHOD_PROLOGUE](com-interface-entry-points.md).

1. Quando viene creato l'oggetto, è anch ' esso un `CCmdTarget` derivato e nello stesso modo in cui è stato `COleObjectFactory` ricordato lo stato del modulo attivo, quindi questo nuovo oggetto. A questo punto, l'oggetto conosce lo stato del modulo a cui passare ogni volta che viene chiamato.

1. Il client chiama una funzione nell'oggetto OLE COM ricevuto dalla relativa `CoCreateInstance` chiamata. Quando l'oggetto viene chiamato, USA `METHOD_PROLOGUE` per cambiare lo stato del modulo Analogamente a `COleObjectFactory` .

Come si può notare, lo stato del modulo viene propagato dall'oggetto all'oggetto man mano che vengono creati. È importante che lo stato del modulo sia impostato in modo appropriato. Se non è impostata, la DLL o l'oggetto COM potrebbe interagire in modo non corretto con un'applicazione MFC che la chiama o potrebbe non essere in grado di trovare le proprie risorse oppure potrebbe non riuscire in altri modi.

Si noti che alcuni tipi di dll, in particolare le dll "estensione MFC", non comportano lo stato del modulo nella propria `RawDllMain` (in realtà, in genere non hanno neanche un `RawDllMain` ). Questo perché sono destinati a comportarsi come se fossero effettivamente presenti nell'applicazione che li utilizza. Sono parte integrante dell'applicazione in esecuzione e si intende modificare lo stato globale dell'applicazione.

I controlli OLE e le altre DLL sono molto diversi. Non desiderano modificare lo stato dell'applicazione chiamante. l'applicazione che li chiama potrebbe non essere un'applicazione MFC, quindi potrebbe non esserci alcuno stato da modificare. Questo è il motivo per cui è stato inventato il cambio di stato del modulo.

Per le funzioni esportate da una DLL, ad esempio una che avvia una finestra di dialogo nella DLL, è necessario aggiungere il codice seguente all'inizio della funzione:

```cpp
AFX_MANAGE_STATE(AfxGetStaticModuleState())
```

Questo scambia lo stato del modulo corrente con lo stato restituito da [AfxGetStaticModuleState](reference/extension-dll-macros.md#afxgetstaticmodulestate) fino alla fine dell'ambito corrente.

Si verificheranno problemi con le risorse nelle dll se la macro AFX_MODULE_STATE non viene utilizzata. Per impostazione predefinita, MFC utilizza il gestore delle risorse dell'applicazione principale per caricare il modello di risorsa. Questo modello viene effettivamente archiviato nella DLL. La causa principale è che le informazioni sullo stato del modulo di MFC non sono state scambiate dalla AFX_MODULE_STATE macro. Il gestore delle risorse viene recuperato dallo stato del modulo di MFC. Non scambiare lo stato del modulo provoca l'utilizzo errato del gestore delle risorse.

Non è necessario inserire AFX_MODULE_STATE in tutte le funzioni della DLL. Ad esempio, `InitInstance` può essere chiamato dal codice MFC nell'applicazione senza AFX_MODULE_STATE perché MFC sposta automaticamente lo stato del modulo prima `InitInstance` di e quindi lo passa nuovamente dopo la `InitInstance` restituzione di. Lo stesso vale per tutti i gestori della mappa messaggi. Le normali DLL MFC hanno effettivamente una speciale routine della finestra master che cambia automaticamente lo stato del modulo prima di instradare qualsiasi messaggio.

## <a name="process-local-data"></a>Elabora dati locali

I dati locali di elaborazione non sarebbero di grande interesse per la difficoltà del modello DLL Win32s. In Win32s tutte le DLL condividono i dati globali, anche quando vengono caricati da più applicazioni. Si tratta di un'operazione molto diversa dal modello di dati DLL Win32 "reale", in cui ogni DLL ottiene una copia separata dello spazio dati in ogni processo collegato alla DLL. Per aggiungere la complessità, i dati allocati nell'heap in una DLL Win32s sono in effetti specifici del processo (almeno per quanto riguarda la proprietà). Considerare i dati e il codice seguenti:

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

Si consideri cosa accade se il codice sopra riportato si trova in una DLL e tale DLL viene caricata da due processi A e B (in realtà, può essere costituita da due istanze della stessa applicazione). Chiama `SetGlobalString("Hello from A")` . Di conseguenza, la memoria viene allocata per i `CString` dati nel contesto del processo a. tenere presente che `CString` è globale ed è visibile sia a che a B. A questo punto `GetGlobalString(sz, sizeof(sz))` , B chiama. B sarà in grado di visualizzare i dati impostati da un set. Questo perché Win32s non offre protezione tra processi come Win32. Questo è il primo problema. in molti casi non è consigliabile che un'applicazione influisca sui dati globali considerati di proprietà di un'applicazione diversa.

Sono presenti anche altri problemi. A questo punto, si dice che A viene chiuso. Quando viene chiuso, la memoria utilizzata dalla `strGlobal` stringa '' viene resa disponibile per il sistema, ovvero tutta la memoria allocata dal processo A viene liberata automaticamente dal sistema operativo. Non viene liberato perché il `CString` distruttore viene chiamato e non è stato ancora chiamato. Viene liberato semplicemente perché l'applicazione che lo ha allocato ha lasciato la scena. Ora, se B `GetGlobalString(sz, sizeof(sz))` ha chiamato, potrebbe non ottenere dati validi. Per altre applicazioni è possibile che la memoria sia stata usata da un'altra applicazione.

Ovviamente esiste un problema. MFC 3. x usava una tecnica chiamata archiviazione locale di thread (TLS). MFC 3. x alloca un indice TLS che in Win32s funge realmente da indice di archiviazione locale del processo, anche se non viene chiamato e quindi fa riferimento a tutti i dati in base a tale indice TLS. Questa operazione è simile all'indice TLS usato per archiviare i dati locali del thread in Win32 (vedere di seguito per altre informazioni su tale argomento). In questo modo ogni DLL MFC utilizzerebbe almeno due indici TLS per processo. Quando si tiene conto del caricamento di molte DLL di controllo OLE (ocx), si esauriscono rapidamente gli indici TLS (sono disponibili solo 64). Inoltre, MFC doveva inserire tutti questi dati in un'unica posizione, in una singola struttura. Non era molto estendibile e non era ideale per quanto riguarda l'uso degli indici TLS.

MFC 4. x risolve questo problema con un set di modelli di classe che è possibile racchiudere tra i dati che devono essere elaborati localmente. Il problema menzionato in precedenza, ad esempio, potrebbe essere risolto scrivendo:

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

MFC implementa questa operazione in due passaggi. In primo luogo, è disponibile un livello superiore alle API __TLS \*__ Win32 (**TlsAlloc**, **TlsSetValue**, **TlsGetValue** e così via) che usano solo due indici TLS per processo, indipendentemente dal numero di dll disponibili. In secondo luogo, il `CProcessLocal` modello viene fornito per accedere ai dati. Esegue l'override di operator->, che consente la sintassi intuitiva visualizzata sopra. Tutti gli oggetti di cui è stato eseguito il wrapper `CProcessLocal` devono essere derivati da `CNoTrackObject` . `CNoTrackObject`fornisce un allocatore di livello inferiore (**LocalAlloc** / **LocalFree**) e un distruttore virtuale in modo che MFC possa eliminare automaticamente gli oggetti locali del processo quando il processo viene terminato. Tali oggetti possono avere un distruttore personalizzato se è necessaria una pulizia aggiuntiva. L'esempio precedente non ne richiede uno, perché il compilatore genererà un distruttore predefinito per eliminare definitivamente l' `CString` oggetto incorporato.

Questo approccio presenta altre interessanti vantaggi. Non solo tutti `CProcessLocal` gli oggetti vengono eliminati automaticamente e non vengono costruiti fino a quando non sono necessari. `CProcessLocal::operator->` creerà un'istanza dell'oggetto associato la prima volta che viene chiamato e non prima. Nell'esempio precedente, ciò significa che la stringa ' `strGlobal` ' non verrà costruita fino alla prima volta o non `SetGlobalString` `GetGlobalString` viene chiamato. In alcuni casi, ciò consente di ridurre il tempo di avvio della DLL.

## <a name="thread-local-data"></a>Dati locali di thread

Analogamente all'elaborazione di dati locali, i dati locali dei thread vengono usati quando i dati devono essere locali per un determinato thread. Ovvero è necessaria un'istanza separata dei dati per ogni thread che accede a tali dati. Questa operazione può essere utilizzata più volte al posto dei meccanismi di sincronizzazione completi. Se i dati non devono essere condivisi da più thread, tali meccanismi possono essere costosi e non necessari. Si supponga di avere un `CString` oggetto (molto simile all'esempio precedente). È possibile renderla thread-local eseguendone il wrapping con un `CThreadLocal` modello:

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

Se `MakeRandomString` è stato chiamato da due thread diversi, ognuno di essi "shuffle" la stringa in modi diversi senza interferire con l'altro. Questo perché esiste effettivamente un' `strThread` istanza per thread anziché una sola istanza globale.

Si noti come viene usato un riferimento per acquisire l' `CString` Indirizzo una volta anziché una volta per ogni iterazione del ciclo. Il codice del ciclo potrebbe essere stato scritto con `threadData->strThread` ' `str` ' ovunque, ma il codice sarebbe molto più lento nell'esecuzione. È consigliabile memorizzare nella cache un riferimento ai dati quando tali riferimenti si verificano nei cicli.

Il `CThreadLocal` modello di classe usa gli stessi meccanismi che `CProcessLocal` esegue e le stesse tecniche di implementazione.

## <a name="see-also"></a>Vedi anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)

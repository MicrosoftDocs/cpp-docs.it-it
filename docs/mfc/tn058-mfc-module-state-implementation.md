---
title: "TN058: implementazione di stato del modulo MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.implementation"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DLL [C++], stati dei moduli"
  - "MFC [C++], gestione dei dati sullo stato"
  - "stati dei moduli [C++], gestione dei dati sullo stato"
  - "stati dei moduli [C++], cambio"
  - "stato di processo [C++]"
  - "stato d thread [C++]"
  - "TN058"
ms.assetid: 72f5b36f-b3da-4009-a144-24258dcd2b2f
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# TN058: implementazione di stato del modulo MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online.  Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati.  Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota tecnica descritta l'implementazione "costrutti dello stato del modulo" MFC.  Una conoscenza dell'implementazione di stato del modulo è fondamentale per utilizzare le DLL MFC condivisi da una DLL \(o dal server in\-process OLE\).  
  
 Prima di leggere questa nota, vedere "per gestire i dati dello stato dei moduli MFC" in [Creazione di nuovi documenti, le finestre e delle visualizzazioni](../mfc/creating-new-documents-windows-and-views.md).  In questo articolo sono le informazioni e informazioni generali importanti di utilizzo a essa.  
  
## Panoramica  
 Esistono tre tipi di informazioni sullo stato MFC: Stato del modulo, stato di processo e lo stato del thread.  Talvolta questi tipi di stato possono essere combinate.  Ad esempio, le mappe di handle di MFC sono sia locale del modulo che variabile locale di thread.  In questo modo due moduli diversi siano diverse mappe in ognuno dei thread.  
  
 Lo stato e lo stato del thread gestiti sono simili.  Questi elementi di dati sono operazioni che è stata tradizionalmente variabili globali, ma è necessario che siano specifici di un processo o un thread specificato per il supporto appropriato di Win32 o per il supporto del multithreading appropriato.  La categoria un elemento di dati specificato ha lasciato a dipende dall'elemento e dalla relativa semantica desiderata rispetto ai limiti del thread e processi.  
  
 Lo stato del modulo sono univoci in quanto può contenere lo stato realmente globale o dello stato a local processo o variabile locale di thread.  Inoltre, può essere modificato rapidamente.  
  
## Passaggio di stato del modulo  
 Ogni thread contiene un puntatore a "corrente" o "lo stato attivo" module \(in base alle aspettative, il puntatore fa parte dello stato locale del thread di MFC.  Questo puntatore viene modificato quando il thread di esecuzione passa un limite del modulo, ad esempio un'applicazione chiamante un controllo OLE o DLL, o in un controllo OLE chiamante in un'applicazione.  
  
 Lo stato del modulo corrente viene passato chiamando **AfxSetModuleState**.  In genere, non viene mai direttamente occuperete dell'API.  MFC, in molti casi, la chiamata automaticamente \(WinMain, punti di ingresso OLE, **AfxWndProc**, e così via.\). Questa operazione viene eseguita in qualsiasi componente scritto collegandola in **WndProc**speciale e `WinMain` speciale \(o `DllMain`\) che sa quale stato del modulo deve essere corrente.  È possibile visualizzare questo codice di DLLMODUL.CPP o APPMODUL.CPP nella directory \\ SRC MFC.  
  
 È raro che si desidera impostare lo stato del modulo e quindi non impostarlo indietro.  In genere si "per inserire" il proprio stato del modulo come quello corrente, quindi il termine "," schiocchi la parte finale originale di contesto.  Questa operazione viene eseguita da macro [AFX\_MANAGE\_STATE](../Topic/AFX_MANAGE_STATE.md) e dalla classe speciale **AFX\_MAINTAIN\_STATE**.  
  
 `CCmdTarget` dispone di funzionalità speciali per il passaggio di stato del modulo.  In particolare, `CCmdTarget` è la classe radice utilizzata per automazione OLE e i punti di ingresso OLE COM.  Come qualsiasi altro punto di ingresso esposto al sistema, questi punti di ingresso devono impostare lo stato del modulo corretto.  Come `CCmdTarget` specificato in quanto lo stato corretto" module deve essere?  La risposta è "che si memorizza" cosa lo stato corrente "" module è quando viene costruito, in modo che può impostare lo stato del modulo corrente su quello valore "ricordato" quando successivamente viene chiamato.  Di conseguenza, lo stato del modulo cui un determinato oggetto di `CCmdTarget` è associato è lo stato del modulo che era corrente quando l'oggetto è stato creato.  Creare un semplice esempio di carico del server INPROC, di creare un oggetto e chiamare i relativi metodi.  
  
1.  Il caricamento della DLL da OLE tramite **LoadLibrary**.  
  
2.  **RawDllMain** viene chiamato per primo.  Imposta lo stato del modulo allo stato static noto del modulo della DLL.  Per questo motivo **RawDllMain** è collegata alla DLL.  
  
3.  Il costruttore per il class factory associato al termine oggetto viene chiamato.  `COleObjectFactory` è derivato da `CCmdTarget` e di conseguenza, si nota in cui stato del modulo è stata creata un'istanza.  Ciò è importante \- quando il class factory viene chiesto di creare oggetti, si sa che cosa stato del modulo per l'esecuzione corrente.  
  
4.  `DllGetClassObject` viene chiamato per ottenere il class factory.  MFC cercherà l'elenco di class factory associato al modulo e lo restituisce.  
  
5.  **COleObjectFactory::XClassFactory2::CreateInstance** viene chiamato.  Prima di creare l'oggetto e restituirlo, la funzione imposta lo stato del modulo allo stato del modulo che era corrente nel passaggio 3 \(contenuto che era corrente quando `COleObjectFactory` è stata creata un'istanza\).  Questa operazione viene eseguita in [METHOD\_PROLOGUE](../Topic/METHOD_PROLOGUE.md).  
  
6.  Quando viene creato l'oggetto, è anche un derivato e analogamente `COleObjectFactory` di `CCmdTarget` ricordati che lo stato del modulo era attivo, pertanto a questo nuovo oggetto.  Ora l'oggetto sa quale stato del modulo da passare ogni volta che viene chiamato.  
  
7.  Il client chiama una funzioneoggetto COM che OLE ha ricevuto dalla chiamata di `CoCreateInstance`.  Quando l'oggetto viene chiamato utilizza `METHOD_PROLOGUE` per passare lo stato del modulo come `COleObjectFactory`.  
  
 Come si può notare, lo stato del modulo vengono propagate da object a oggetto come vengono creati.  È importante eseguire lo stato del modulo impostare in modo appropriato.  Se non è impostata, la DLL o oggetto COM può interagire correttamente con un'applicazione MFC situato chiamante, oppure può non essere possibile trovare le proprie risorse, oppure può avere esito negativo in altre modalità misere.  
  
 Si noti che determinati tipi di DLL, in particolare "DLL di estensione MFC" non superano lo stato del modulo nel **RawDllMain** \(in realtà, in genere non dispongono **RawDllMain**\).  Questo perché sono progettati per comportarsi "" come se fossero effettivamente presenti nell'applicazione che li utilizza.  Sono molte una parte dell'applicazione in esecuzione ed è la propria intenzione modificare che lo stato complessivo dell'applicazione.  
  
 I controlli OLE e altre DLL sono molto diversi.  Non desidera modificare lo stato dell'applicazione chiamante; l'applicazione che è relativo chiamante può non essere un'applicazione MFC e da due può non essere stato da modificare.  Questo è il motivo per cui il passaggio di stato del modulo è stata inventata.  
  
 Per le funzioni esportate da una DLL, quale un controllo che attiva una finestra di dialogo nella DLL, è necessario aggiungere il seguente codice all'inizio della funzione:  
  
```  
AFX_MANAGE_STATE(AfxGetStaticModuleState( ))  
```  
  
 Ciò scambia lo stato corrente del modulo con lo stato restituito da [AfxGetStaticModuleState](../Topic/AfxGetStaticModuleState.md) fino al termine dell'ambito corrente.  
  
 I problemi con le risorse nella DLL si verificheranno se la macro di `AFX_MODULE_STATE` non viene utilizzata.  Per impostazione predefinita, MFC utilizza l'handle di risorsa dell'applicazione principale caricare il modello di risorsa.  Questo modello viene effettivamente archiviato nella DLL.  La causa radice delle informazioni sullo stato del modulo di MFC non è stato passato dalla macro di `AFX_MODULE_STATE`.  Handle della risorsa vengono recuperate dallo stato del modulo di MFC.  Non passare lo stato del modulo impone a un handle di risorsa errato per essere utilizzato.  
  
 `AFX_MODULE_STATE` non deve essere collocato in ogni funzione nella DLL.  Ad esempio, `InitInstance` può essere chiamato da codice MFC nell'applicazione senza `AFX_MODULE_STATE` perché MFC scorre automaticamente lo stato del modulo prima di `InitInstance` quindi le opzioni di nuovo dopo il completamento di `InitInstance`.  Lo stesso vale per tutti i gestori della mappa messaggi.  Le DLL regolari ha effettivamente una routine della finestra @ master speciale che passa automaticamente lo stato del modulo prima di utilizzare come destinazione qualsiasi messaggio.  
  
## Dati locali considerati  
 I dati locali considerati non verrebbero di tale grande preoccupazione se non è stato per la difficoltà del modello di DLL Win32.  In tutte le DLL Win32 condividere i dati globali, anche se caricato da più applicazioni.  È molto diverso dal modello di dati "reale" di DLL Win32, in cui ogni DLL ottiene una copia distinta dello spazio di dati in ogni processo che connette alla DLL.  Per aggiungere alla complessità, i dati allocati nell'heap in una DLL Win32 sono in effetti specifico processo \(per almeno quanto la proprietà va\).  Si considerino i dati e codice:  
  
```  
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
  
 Si consideri ciò che si verifica se il codice precedente è in trova in una DLL e il caricamento della DLL da due processi A e B \(potrebbe, infatti, essere due istanze della stessa applicazione\).  Chiamate `SetGlobalString("Hello from A")`.  Pertanto, è allocata la memoria per i dati di `CString` nel contesto del processo A.  Tenere presente che `CString` stesso è complessiva ed è visibile sia a E B che a.  Ora B chiama `GetGlobalString(sz, sizeof(sz))`.  B potrà visualizzare i dati che A impostato.  Questo perché i Win32 non offre protezione tra processi quale Win32.  Questo è il primo problema; in molti casi non si desidera disporre di un dati globale di effetti di applicazione che sono considerati come posseduti da un'applicazione diversa.  
  
 Esistono problemi aggiuntivi anche.  Intende che ora si chiude l'applicazione.  Quando A disconnessione, la memoria utilizzata dalla stringa di '`strGlobal`' viene resa disponibile per il sistema, ovvero tutta la memoria allocata da elabora A liberata automaticamente dal sistema operativo.  Non viene liberata perché il distruttore di `CString` viene chiamato; non è ancora stata chiamata.  Viene liberata semplicemente perché l'applicazione da cui è stata allocata let la scena.  Ora se B chiami `GetGlobalString(sz, sizeof(sz))`, non può ottenere dati validi.  Un'altra applicazione può utilizzare tale memoria per la parte.  
  
 Esiste un problema in modo chiaro.  MFC 3.x utilizzata una tecnica denominata l'archiviazione locale di thread \(TLS\).  MFC 3.x allocherebbe un indice TLS che in Win32 effettivamente funge da indice di archiviazione di uno variabile locale, anche se non viene chiamato che quindi farebbe riferimento a tutti i dati basati su tale indice TLS.  È simile all'indice di TLS utilizzato per archiviare i dati di thread locale su Win32 \(vedere di seguito per ulteriori informazioni sull'oggetto\).  Ciò ha generato ogni DLL MFC a utilizzare almeno due indici TLS per processo.  Quando per il caricamento di diverse DLL di controlli OLE \(OCXs\), si esaurisce rapidamente gli indici TLS \(vi sono disponibili solo 64\).  Inoltre, MFC è necessario inserire tutti questi dati in un luogo, in una singola struttura.  Non era molto estendibile e non è ideale per quanto riguarda il relativo utilizzo degli indici di TLS.  
  
 MFC 4.x risolve questo con un set di modelli che la classe è "il wrapping per" intorno ai dati che devono essere locale del processo.  Ad esempio, il problema accennato in precedenza può essere corretto scrivendo:  
  
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
  
 MFC implementa questo in due passaggi.  Innanzitutto, è presente un livello sulle API Win32 **Tls\*** \(**TlsAlloc**, **TlsSetValue**, **TlsGetValue**, e così via.\) che utilizzano soltanto due indici TLS per processo, indipendentemente dal numero di DLL si dispone.  In secondo luogo, il modello di `CProcessLocal` viene fornito per accedere a tali dati.  Eseguire l'override dell'operatore\> utilizzato da consente la sintassi intuitiva che viene visualizzato sopra.  Tutti gli oggetti che viene eseguito il wrapping da `CProcessLocal` devono essere derivati da `CNoTrackObject`.  `CNoTrackObject` fornisce un allocatore di basso livello \(**LocalAlloc**\/**LocalFree**\) e un distruttore virtuale in modo che MFC può automaticamente eliminino gli oggetti locali considerati quando il processo è terminata.  Tali oggetti possono avere un distruttore personalizzato se la pulizia aggiuntiva necessaria.  L'esempio precedente non richiede uno, poiché il compilatore genererà un distruttore predefinito elimini l'oggetto incorporato di `CString`.  
  
 Esistono altri vantaggi interessanti a questo approccio.  Non solo tutti gli oggetti di `CProcessLocal` vengono eliminati automaticamente, non vengono creati finché non sono necessari.  `CProcessLocal::operator->` creare un'istanza dell'oggetto collegato la prima volta che viene chiamato e non in precedenza.  Nell'esempio precedente, ciò significa che la stringa di '`strGlobal`' non verrà creata la prima volta fino a **SetGlobalString** o **GetGlobalString** viene chiamato.  In alcuni casi, questo può aiutare a ridurre i tempi di avvio della DLL.  
  
## Dati locali di thread  
 Analogamente ai dati locali dei processi, dati locali del thread utilizzato quando i dati devono essere locali del thread specificato.  Ovvero sono necessari un'istanza separata dei dati per ogni thread che accede ai dati.  È spesso possibile utilizzare in alternativa a estesi meccanismi di sincronizzazione.  Se i dati non devono essere condivisi da più thread, tali meccanismi possono rivelarsi costosi e non necessari.  Si supponga che non necessari un oggetto di `CString` \(simile all'esempio precedente\).  È possibile convertire la variabile locale di thread eseguendola il wrapping con un modello di `CThreadLocal` :  
  
```  
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
      randErr = rand_s( &randomNumber );  
      if ( randErr == 0 )  
      {  
         TCHAR ch = randomNumber % 52 + 1;  
         if (str.Find(ch) < 0)  
            str += ch; // not found, add it  
      }  
   }  
}  
```  
  
 Se `MakeRandomString` è stato chiamato da due thread diversi, ognuno "mescolerebbe" la stringa in modi diversi senza interferire con altri.  Questo perché esiste davvero un'istanza di `strThread` per thread anziché solo un'istanza globale.  
  
 Nota su come riferimento viene utilizzato per acquisire una volta l'indirizzo di `CString` anziché una volta per iterazione del ciclo.  Il codice del ciclo potrebbe essere scritto con `threadData->strThread` in '`str`' viene utilizzato, ma il codice sarebbe molto più lento in esecuzione.  Si consiglia di memorizzare nella cache un riferimento ai dati quando tali riferimenti si verificano nei cicli.  
  
 Il modello della classe di `CThreadLocal` utilizza gli stessi meccanismi che fa `CProcessLocal` e le stesse tecniche di implementazione.  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)
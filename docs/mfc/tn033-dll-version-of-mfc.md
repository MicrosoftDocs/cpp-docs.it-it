---
title: 'TN033: versione DLL di MFC'
ms.date: 06/28/2018
helpviewer_keywords:
- MFC DLLs [MFC], writing MFC extension DLLS
- AFXDLL library
- DLLs [MFC], MFC
- DLL version of MFC [MFC]
- TN033
ms.assetid: b6f1080b-b66b-4b1e-8fb1-926c5816392c
ms.openlocfilehash: ad4cb883cfe7e397cf599d659afb02b23501dc5a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370322"
---
# <a name="tn033-dll-version-of-mfc"></a>TN033: versione DLL di MFC

In questa nota viene descritto come utilizzare le librerie a collegamento dinamico condivise MFCxx.DLL e MFCxxD.DLL (dove x è il numero di versione di MFC) con le applicazioni MFC e le DLL di estensione MFC. Per ulteriori informazioni sulle DLL MFC regolari, vedere [Utilizzo di MFC come parte di una DLL](../mfc/tn011-using-mfc-as-part-of-a-dll.md).

Questa nota tecnica copre tre aspetti delle DLL. Gli ultimi due sono per gli utenti più avanzati:

- [Modalità di compilazione di una DLL di estensione MFC](#_mfcnotes_how_to_write_an_mfc_extension_dll)

- [Come compilare un'applicazione MFC che utilizza la versione DLL di MFC](#_mfcnotes_writing_an_application_that_uses_the_dll_version)

- [Modalità di implementazione delle librerie a collegamento dinamico condivise MFC](#_mfcnotes_how_the_mfc30.dll_is_implemented)

Se si è interessati alla compilazione di una DLL utilizzando MFC che può essere utilizzata con applicazioni non MFC (questa operazione viene chiamata DLL MFC regolare), fare riferimento alla [Nota tecnica 11](../mfc/tn011-using-mfc-as-part-of-a-dll.md).

## <a name="overview-of-mfcxxdll-support-terminology-and-files"></a>Panoramica del supporto MFCxx.DLL: terminologia e file

**DLL MFC regolare**: si utilizza una DLL MFC regolare per compilare una DLL autonoma utilizzando alcune delle classi MFC. Le interfacce attraverso il limite App/DLL sono interfacce "C" e l'applicazione client non deve essere un'applicazione MFC.

Questa è la versione del supporto DLL supportata in MFC 1.0. Viene descritto nella [nota tecnica 11](../mfc/tn011-using-mfc-as-part-of-a-dll.md) e nell'esempio di concetti avanzati MFC [DLLScreenCap](../overview/visual-cpp-samples.md).

> [!NOTE]
> A partire dalla versione 4.0, il termine **USRDLL** è obsoleto ed è stato sostituito da una DLL MFC regolare collegata a MFC in modo statico. È inoltre possibile compilare una DLL MFC regolare che si collega in modo dinamico a MFC.

MFC 3.0 (e versioni successive) supporta DLL MFC regolari con tutte le nuove funzionalità, incluse le classi OLE e Database.

**AFXDLL**: questa operazione viene definita anche la versione condivisa delle librerie MFC. Questo è il nuovo supporto DLL aggiunto in MFC 2.0. La libreria MFC stessa è in un numero di DLL (descritto di seguito) e un'applicazione client o DLL collega dinamicamente le DLL che richiede. Le interfacce all'interno del limite dell'applicazione/DLL sono interfacce di classe C.NET/MFC. L'applicazione client DEVE essere un'applicazione MFC. Supporta tutte le funzionalità di MFC 3.0 (eccezione: UNICODE non è supportato per le classi di database).

> [!NOTE]
> A partire dalla versione 4.0 di Visual C, questo tipo di DLL viene definito "DLL di estensione".

Questa nota utilizzerà MFCxx.DLL per fare riferimento all'intero set di DLL MFC, che include:

- Debug: MFCxxD.DLL (combinato) e MFCSxxD.LIB (statico).

- Rilascio: MFCxx.DLL (combinato) e MFCSxx.LIB (statico).

- Debug Unicode: MFCxxUD.DLL (combinato) e MFCSxxD.LIB (statico).

- Versione Unicode: MFCxxU.DLL (combinato) e MFCSxxU.LIB (statico).

> [!NOTE]
> The MFCSxx[U][D]. Le librerie LIB vengono utilizzate insieme alle DLL condivise MFC. Queste librerie contengono codice che deve essere collegato in modo statico all'applicazione o DLL.

Un'applicazione si collega alle librerie di importazione corrispondenti:

- Debug: MFCxxD.LIB

- Versione: MFCxx.LIB

- Debug Unicode: MFCxxUD.LIB

- Versione Unicode: MFCxxU.LIB

Una "DLL di estensione MFC" è una DLL basata su MFCxx.DLL (e/o le altre DLL condivise MFC). In questo caso viene avviato l'architettura dei componenti MFC. Se si deriva una classe utile da una classe MFC o si compila un altro toolkit di tipo MFC, è possibile inserirla in una DLL. Tale DLL utilizza MFCxx.DLL, così come l'applicazione client finale. Ciò consente classi foglia riutilizzabili, classi di base riutilizzabili e classi di visualizzazione/documento riutilizzabili.

## <a name="pros-and-cons"></a>Pro e contro

Perché è consigliabile utilizzare la versione condivisa di MFC

- L'utilizzo della libreria condivisa può comportare applicazioni più piccole (un'applicazione minima che utilizza la maggior parte della libreria MFC è inferiore a 10K).

- La versione condivisa di MFC supporta le DLL di estensione MFC e le DLL MFC regolari.

- La compilazione di un'applicazione che utilizza le librerie MFC condivise è più veloce della compilazione di un'applicazione MFC collegata in modo statico perché non è necessario collegare MFC stesso. Ciò è particolarmente vero nelle compilazioni **DEBUG** in cui il linker deve compattare le informazioni di debug: tramite il collegamento con una DLL che contiene già le informazioni di debug, sono presenti meno informazioni di debug da compattare all'interno dell'applicazione.

Perché non utilizzare la versione condivisa di MFC:

- La spedizione di un'applicazione che utilizza la libreria condivisa richiede la spedizione della libreria MFCxx.DLL (e altri) con il programma. MFCxx.DLL è liberamente ridistribuibile come molte DLL, ma è comunque necessario installare la DLL nel programma SETUP. Inoltre, è necessario spedire il file MSVCRTxx.DLL, che contiene la libreria di runtime del linguaggio C utilizzata sia dal programma che dalle DLL MFC stesse.

## <a name="how-to-write-an-mfc-extension-dll"></a><a name="_mfcnotes_how_to_write_an_mfc_extension_dll"></a>Come scrivere una DLL di estensione MFCHow to Write an MFC Extension DLL

Una DLL di estensione MFC è una DLL contenente classi e funzioni scritte per abbellire la funzionalità delle classi MFC. Una DLL di estensione MFC utilizza le DLL MFC condivise nello stesso modo in cui viene utilizzata da un'applicazione, con alcune considerazioni aggiuntive:

- Il processo di compilazione è simile alla compilazione di un'applicazione che utilizza le librerie MFC condivise con alcune opzioni aggiuntive del compilatore e del linker.

- Una DLL di estensione `CWinApp`MFC non dispone di una classe derivata.

- Una DLL di estensione `DllMain`MFC deve fornire un file . AppWizard fornisce `DllMain` una funzione che è possibile modificare.

- Una DLL di estensione MFC in genere `CDynLinkLibrary` fornisce una routine di `CRuntimeClass`inizializzazione per creare un se la DLL di estensione MFC desidera esportare es o risorse nell'applicazione. Una classe `CDynLinkLibrary` derivata di può essere utilizzata se i dati per applicazione devono essere gestiti dalla DLL di estensione MFC.

Queste considerazioni sono descritte in dettaglio di seguito. È inoltre necessario fare riferimento all'esempio di concetti avanzati MFC [DLLHUSK](../overview/visual-cpp-samples.md) poiché illustra:

- Compilazione di un'applicazione utilizzando le librerie condivise. (DLLHUSK. EXE è un'applicazione MFC che si collega in modo dinamico alle librerie MFC e altre DLL.)

- Compilazione di una DLL di estensione MFC. (Si noti i `_AFXEXT` flag speciali come quelli utilizzati nella compilazione di una DLL di estensione MFC)

- Due esempi di DLL di estensione MFC. Uno mostra la struttura di base di una DLL di estensione MFC con esportazioni limitate (TESTDLL1) e l'altro mostra l'esportazione di un'intera interfaccia di classe (TESTDLL2).

Sia l'applicazione client che tutte le DLL di estensione MFC devono utilizzare la stessa versione di MFCxx.DLL. È necessario seguire la convenzione della DLL MFC e fornire una versione di debug e finale (/release) della DLL di estensione MFC. Ciò consente ai programmi client di compilare sia le versioni di debug che le versioni finali delle applicazioni e di collegarle alla versione di debug o finale appropriata di tutte le DLL.

> [!NOTE]
> Dal caso in cui il nome di c'è mangling problemi, l'elenco di esportazione da una DLL di estensione MFC può essere diverso tra le versioni di debug e di vendita al dettaglio della stessa DLL e DLL per piattaforme diverse. L'MFCxx.DLL al dettaglio ha circa 2000 punti di ingresso esportati; il debug MFCxxD.DLL ha circa 3000 punti di ingresso esportati.

### <a name="quick-note-on-memory-management"></a>Nota rapida sulla gestione della memoria

La sezione intitolata "Gestione della memoria", verso la fine di questa nota tecnica, descrive l'implementazione di MFCxx.DLL con la versione condivisa di MFC. Le informazioni che è necessario conoscere per implementare solo una DLL di estensione MFC è descritto qui.

MFCxx.DLL e tutte le DLL di estensione MFC caricate nello spazio degli indirizzi di un'applicazione client utilizzeranno lo stesso allocatore di memoria, il caricamento delle risorse e altri stati "globali" MFC come se si trovassero nella stessa applicazione. Ciò è significativo perché le librerie DLL non MFC e le DLL MFC regolari collegate in modo statico a MFC fanno l'esatto contrario e hanno ogni DLL allocando fuori del proprio pool di memoria.

Se una DLL di estensione MFC alloca memoria, tale memoria può liberamente intermix con qualsiasi altro oggetto allocato dall'applicazione. Inoltre, se un'applicazione che utilizza le librerie MFC condivise si arresta in modo anomalo, la protezione del sistema operativo manterrà l'integrità di qualsiasi altra applicazione MFC che condivide la DLL.

Analogamente altri stati MFC "globali", come il file eseguibile corrente da cui caricare le risorse, vengono condivisi anche tra l'applicazione client e tutte le DLL di estensione MFC, nonché MFCxx.DLL stesso.

### <a name="building-an-mfc-extension-dll"></a>Compilazione di una DLL di estensione MFCBuilding an MFC extension DLL

È possibile utilizzare AppWizard per creare un progetto DLL di estensione MFC e verrà generata automaticamente le impostazioni del compilatore e del linker appropriate. È stata inoltre `DllMain` generata una funzione che è possibile modificare.

Se si converte un progetto esistente in una DLL di estensione MFC, iniziare con le regole standard per la compilazione di un'applicazione utilizzando la versione condivisa di MFC, quindi eseguire le operazioni seguenti:

- Aggiungere **/D_AFXEXT** ai flag del compilatore. Nella finestra di dialogo Proprietà progetto, selezionare il nodo C/C. Selezionare quindi la categoria Preprocessore. Aggiungere `_AFXEXT` al campo Definisci macro, separando ciascuno degli elementi con un punto e virgola.

- Rimuovere l'opzione del compilatore **/Gy.** Nella finestra di dialogo Proprietà progetto, selezionare il nodo C/C. Selezionare quindi la categoria Generazione codice. Assicurarsi che l'opzione "Abilita collegamento a livello di funzione" non sia abilitata. In questo modo sarà più semplice esportare le classi perché il linker non rimuoverà le funzioni senza riferimenti. Se il progetto originale viene utilizzato per compilare una DLL MFC regolare collegata a MFC in modo statico, modificare l'opzione del compilatore **/MT[d]** in **/MD[d]**.

- Compilare una libreria di esportazione con l'opzione **/DLL** in LINK. Questo verrà impostato quando si crea una nuova destinazione, specificando Win32 Dynamic-Link Library come tipo di destinazione.

### <a name="changing-your-header-files"></a>Modifica dei file di intestazione

L'obiettivo di una DLL di estensione MFC è in genere quello di esportare alcune funzionalità comuni in una o più applicazioni che possono utilizzare tale funzionalità. Ciò si riduce all'esportazione di classi e funzioni globali disponibili per le applicazioni client.

A tale scopo, è necessario assicurarsi che ciascuna delle funzioni membro sia contrassegnata come importazione o esportazione in base alle esigenze. Ciò richiede dichiarazioni speciali: `__declspec(dllexport)` e `__declspec(dllimport)`. Quando le classi vengono utilizzate dalle applicazioni client, `__declspec(dllimport)`si desidera che vengano dichiarate come . Quando la DLL di estensione MFC stessa viene `__declspec(dllexport)`compilata, devono essere dichiarati come . Inoltre, le funzioni devono essere effettivamente esportate, in modo che i programmi client si associano a loro in fase di caricamento.

Per esportare l'intera classe, utilizzare `AFX_EXT_CLASS` nella definizione della classe. Questa macro viene definita `__declspec(dllexport)` dal `_AFXDLL` `_AFXEXT` framework come quando `__declspec(dllimport)` e `_AFXEXT` viene definita, ma definita come quando non è definita. `_AFXEXT`come descritto in precedenza, viene definito solo durante la compilazione della DLL di estensione MFC. Ad esempio:

```cpp
class AFX_EXT_CLASS CExampleExport : public CObject
{ /* ... class definition ... */ };
```

### <a name="not-exporting-the-entire-class"></a>Non esportare l'intera classe

A volte potresti voler esportare solo i singoli membri necessari della tua classe. Ad esempio, se si `CDialog`esporta una classe derivata, potrebbe essere `DoModal` necessario esportare solo il costruttore e la chiamata . È possibile esportare questi membri utilizzando il file DLL . DEF, ma è anche `AFX_EXT_CLASS` possibile utilizzare più o meno allo stesso modo sui singoli membri che è necessario esportare.

Ad esempio:

```cpp
class CExampleDialog : public CDialog
{
public:
    AFX_EXT_CLASS CExampleDialog();
    AFX_EXT_CLASS int DoModal();
    // rest of class definition
    // ...
};
```

In questo caso, è possibile che si verifichi un problema aggiuntivo perché non si esportano più tutti i membri della classe. Il problema è nel modo in cui funzionano le macro MFC. Molte delle macro helper di MFC dichiarano o definiscono effettivamente i membri dati. Pertanto, questi membri dati dovranno anche essere esportati dalla DLL.

Ad esempio, la macro DECLARE_DYNAMIC viene definita come segue quando si compila una DLL di estensione MFC:

```cpp
#define DECLARE_DYNAMIC(class_name) \
protected: \
    static CRuntimeClass* PASCAL _GetBaseClass(); \
    public: \
    static AFX_DATA CRuntimeClass class##class_name; \
    virtual CRuntimeClass* GetRuntimeClass() const; \
```

La riga che `AFX_DATA`inizia "static" è la dichiarazione di un oggetto statico all'interno della classe. Per esportare correttamente questa classe e accedere alle informazioni di runtime da un client . EXE, è necessario esportare questo oggetto statico. Poiché l'oggetto statico `AFX_DATA`viene dichiarato con `AFX_DATA` il `__declspec(dllexport)` modificatore , è sufficiente `__declspec(dllimport)` definire come durante la compilazione della DLL e definirla come quando si compila l'eseguibile client.

Come discusso `AFX_EXT_CLASS` in precedenza, è già definito in questo modo. Devi solo ridefinire `AFX_DATA` per essere lo `AFX_EXT_CLASS` stesso di circa la definizione della classe.

Ad esempio:

```cpp
#undef  AFX_DATA
#define AFX_DATA AFX_EXT_CLASS
class CExampleView : public CView
{
    DECLARE_DYNAMIC()
    // ... class definition ...
};
#undef  AFX_DATA
#define AFX_DATA
```

MFC utilizza `AFX_DATA` sempre il simbolo sugli elementi di dati che definisce all'interno delle macro, pertanto questa tecnica funzionerà per tutti questi scenari. Ad esempio, funzionerà per DECLARE_MESSAGE_MAP.

> [!NOTE]
> Se si esporta l'intera classe anziché i membri selezionati della classe, i membri dati statici vengono esportati automaticamente.

È possibile utilizzare la stessa `CArchive` tecnica per esportare automaticamente l'operatore di estrazione per le classi che utilizzano le DECLARE_SERIAL e IMPLEMENT_SERIAL macro. Esportare l'operatore di archivio racchiudendo tra parentesi le dichiarazioni di classe (situate nella cartella . H) con il seguente codice:

```cpp
#undef AFX_API
#define AFX_API AFX_EXT_CLASS

/* your class declarations here */

#undef AFX_API
#define AFX_API
```

### <a name="limitations-of-_afxext"></a>Limitazioni dei _AFXEXT

È possibile utilizzare il simbolo di preprocessore **_ AFXEXT** per le DLL di estensione MFC, purché non si dispone di più livelli di DLL di estensione MFC. Se si dispone di DLL di estensione MFC che chiamano o derivano da classi nelle proprie DLL di estensione MFC, che derivano quindi dalle classi MFC, è necessario utilizzare il proprio simbolo del preprocessore per evitare ambiguità.

Il problema è che in Win32, è `__declspec(dllexport)` necessario dichiarare in modo esplicito `__declspec(dllimport)` tutti i dati come se deve essere esportato da una DLL e se deve essere importato da una DLL. Quando si `_AFXEXT`definisce , le `AFX_EXT_CLASS` intestazioni MFC assicurarsi che sia definito correttamente.

Quando si dispone di più `AFX_EXT_CLASS` livelli, un simbolo, ad esempio non è sufficiente, poiché una DLL di estensione MFC può esportare nuove classi, nonché importare altre classi da un'altra DLL di estensione MFC. Per risolvere questo problema, utilizzare uno speciale simbolo del preprocessore che indica che si sta compilando la DLL stessa rispetto all'utilizzo della DLL. Si supponga, ad esempio, due DLL di estensione MFC, A.DLL e B.DLL. Ognuno di essi esporta alcune classi in A.H e B.H, rispettivamente. B.DLL utilizza le classi di A.DLL. I file di intestazione sono simili ai seguente:

```cpp
/* A.H */
#ifdef A_IMPL
    #define CLASS_DECL_A   __declspec(dllexport)
#else
    #define CLASS_DECL_A   __declspec(dllimport)
#endif

class CLASS_DECL_A CExampleA : public CObject
{ /* ... class definition ... */ };

/* B.H */
#ifdef B_IMPL
    #define CLASS_DECL_B   __declspec(dllexport)
#else
    #define CLASS_DECL_B   __declspec(dllimport)
#endif

class CLASS_DECL_B CExampleB : public CExampleA
{ /* ... class definition ... */ };
```

Quando A.DLL viene compilato, viene compilato con **/DA_IMPL** e quando B.DLL viene compilato, viene compilato con **/DB_IMPL**. Utilizzando simboli separati per ogni DLL, CExampleB viene esportato e CExampleA viene importato durante la compilazione di B.DLL. CExampleA viene esportato durante la compilazione di A.DLL e importato quando utilizzato da B.DLL (o da un altro client).

Questo tipo di stratificazione non può essere `AFX_EXT_CLASS` `_AFXEXT` eseguito quando si utilizzano i simboli incorporati e del preprocessore. La tecnica descritta in precedenza risolve questo problema in modo non diverso dal meccanismo utilizzato da MFC durante la compilazione delle DLL di estensione OLE, Database e MFC di rete.

### <a name="not-exporting-the-entire-class"></a>Non esportare l'intera classe

Anche in questo caso, si dovrà prestare particolare attenzione quando non si esporta un'intera classe. È necessario assicurarsi che gli elementi di dati necessari creati dalle macro MFC vengono esportati correttamente. Questa operazione può essere `AFX_DATA` eseguita ridefinendo la macro della classe specifica. Questa operazione deve essere eseguita ogni volta che non si esporta l'intera classe.

Ad esempio:

```cpp
// A.H
#ifdef A_IMPL
    #define CLASS_DECL_A  _declspec(dllexport)
#else
    #define CLASS_DECL_A  _declspec(dllimport)
#endif

#undef  AFX_DATA
#define AFX_DATA CLASS_DECL_A

class CExampleA : public CObject
{
    DECLARE_DYNAMIC()
    CLASS_DECL_A int SomeFunction();
    // class definition
    // ...
};

#undef AFX_DATA
#define AFX_DATA
```

### <a name="dllmain"></a>DllMain

Di seguito è riportato il codice esatto che è necessario inserire nel file di origine principale per la DLL di estensione MFC. Dovrebbe venire dopo che la norma include. Si noti che quando si utilizza AppWizard per creare file `DllMain` iniziali per una DLL di estensione MFC, fornisce un per l'utente.

```cpp
#include "afxdllx.h"

static AFX_EXTENSION_MODULE extensionDLL;

extern "C" int APIENTRY
DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID)
{
   if (dwReason == DLL_PROCESS_ATTACH)
   {
      // MFC extension DLL one-time initialization
      if (!AfxInitExtensionModule(
             extensionDLL, hInstance))
         return 0;

      // TODO: perform other initialization tasks here
   }
   else if (dwReason == DLL_PROCESS_DETACH)
   {
      // MFC extension DLL per-process termination
      AfxTermExtensionModule(extensionDLL);

      // TODO: perform other cleanup tasks here
   }
   return 1;   // ok
}
```

La chiamata `AfxInitExtensionModule` per acquisire le classi`CRuntimeClass` di runtime dei moduli (strutture) e le relative factory di oggetti (oggetti)`COleObjectFactory` da utilizzare in un secondo momento quando viene creato l'oggetto. `CDynLinkLibrary` La chiamata (facoltativa) per consentire a `AfxTermExtensionModule` MFC di pulire la DLL di estensione MFC quando ogni processo si disconnette `FreeLibrary` (che si verifica quando il processo viene chiuso o quando la DLL viene scaricata in seguito a una chiamata) dalla DLL di estensione MFC. Poiché la maggior parte delle DLL di estensione MFC non vengono caricate `AfxTermExtensionModule` in modo dinamico (in genere, sono collegate tramite le librerie di importazione), la chiamata a in genere non è necessaria.

Se l'applicazione carica e libera le DLL di estensione `AfxTermExtensionModule` MFC in modo dinamico, assicurarsi di chiamare come illustrato in precedenza. Assicurarsi inoltre `AfxLoadLibrary` di `AfxFreeLibrary` utilizzare e (anziché funzioni `LoadLibrary` Win32 e `FreeLibrary`) se l'applicazione utilizza più thread o se carica dinamicamente una DLL di estensione MFC. L'utilizzo `AfxLoadLibrary` e `AfxFreeLibrary` assicura che il codice di avvio e arresto che viene eseguito quando la DLL di estensione MFC viene caricata e scaricata non danneggia lo stato globale MFC.

File di intestazione AFXDLLX. H contiene definizioni speciali per le strutture utilizzate nelle DLL `AFX_EXTENSION_MODULE` `CDynLinkLibrary`di estensione MFC, ad esempio la definizione per e .

*L'estensione globaleDLL* deve essere dichiarata come illustrato. A differenza della versione a 16 bit di MFC, è possibile allocare memoria e chiamare le funzioni `DllMain` MFC durante questo periodo, poiché il mfCxx.DLL è completamente inizializzato nel momento in cui viene chiamato .

### <a name="sharing-resources-and-classes"></a>Condivisione di risorse e classi

Le DLL di estensione MFC semplici devono esportare solo alcune funzioni a larghezza di banda ridotta nell'applicazione client e nient'altro. Nell'applicazione client potrebbero essere necessarie più intense di DLL con un'interfaccia utente.

L'esportazione delle risorse viene eseguita tramite un elenco di risorse. In ogni applicazione è un elenco `CDynLinkLibrary` di oggetti collegati in modo secondario. Quando si cerca una risorsa, la maggior parte delle implementazioni MFC`AfxGetResourceHandle`standard che caricano le `CDynLinkLibrary` risorse esamina innanzitutto il modulo di risorsa corrente ( ) e, se non viene trovata, esamina l'elenco di oggetti che tentano di caricare la risorsa richiesta.

La creazione dinamica di oggetti C , dato un nome di classe C , è simile. Il meccanismo di deserializzazione dell'oggetto MFC deve disporre di tutti gli `CRuntimeClass` oggetti registrati in modo che possa essere ricostruttivo creando in modo dinamico l'oggetto di tipo obbligatorio in base a ciò che è stato archiviato in precedenza.

Se si desidera che l'applicazione client utilizzi `DECLARE_SERIAL`le classi nella DLL di estensione MFC che sono , sarà necessario esportare le classi in modo che siano visibili all'applicazione client. Questo viene fatto anche `CDynLinkLibrary` camminando sulla lista.

Nel caso dell'esempio di concetti avanzati MFC [DLLHUSK](../overview/visual-cpp-samples.md), l'elenco è simile al seguente:

```Example
head ->   DLLHUSK.EXE   - or - DLLHUSK.EXE
               |                    |
          TESTDLL2.DLL         TESTDLL2.DLL
               |                    |
          TESTDLL1.DLL         TESTDLL1.DLL
               |                    |
               |                    |
           MFC90D.DLL           MFC90.DLL
```

Il file MFCxx.DLL è in genere l'ultimo nell'elenco delle risorse e delle classi. MFCxx.DLL include tutte le risorse MFC standard, incluse le stringhe di richiesta per tutti gli ID di comando standard. Posizionandolo alla fine dell'elenco consente alle DLL e all'applicazione client stessa di non disporre di una propria copia delle risorse MFC standard, ma di basarsi sulle risorse condivise in MFCxx.DLL.

L'unione delle risorse e dei nomi di classe di tutte le DLL nello spazio dei nomi dell'applicazione client presenta lo svantaggio di prestare attenzione agli ID o ai nomi prescelta. Naturalmente è possibile disabilitare questa funzionalità non esportando le risorse o un `CDynLinkLibrary` oggetto nell'applicazione client. L'esempio [DLLHUSK](../overview/visual-cpp-samples.md) gestisce lo spazio dei nomi di risorse condivise utilizzando più file di intestazione. Vedere [Nota tecnica 35](../mfc/tn035-using-multiple-resource-files-and-header-files-with-visual-cpp.md) per ulteriori suggerimenti sull'utilizzo di file di risorse condivise.

### <a name="initializing-the-dll"></a>Inizializzazione della DLL

Come accennato in precedenza, `CDynLinkLibrary` in genere si desidera creare un oggetto per esportare le risorse e le classi nell'applicazione client. È necessario fornire un punto di ingresso esportato per inizializzare la DLL. Minimamente, questa è una routine void che non accetta argomenti e non restituisce nulla, ma può essere qualsiasi cosa che ti piace.

Ogni applicazione client che desidera utilizzare la DLL deve chiamare questa routine di inizializzazione, se si utilizza questo approccio. È inoltre possibile `CDynLinkLibrary` allocare `DllMain` questo `AfxInitExtensionModule`oggetto nel proprio dopo aver chiamato .

La routine di `CDynLinkLibrary` inizializzazione deve creare un oggetto nell'heap dell'applicazione corrente, collegato alle informazioni sulla DLL di estensione MFC. Questo può essere fatto con quanto segue:

```cpp
extern "C" extern void WINAPI InitXxxDLL()
{
    new CDynLinkLibrary(extensionDLL);
}
```

Il nome della routine, *InitXxxDLL* in questo esempio, può essere qualsiasi elemento desiderato. Non è necessario che sia **extern "C",** ma in questo modo l'elenco di esportazione è più facile da gestire.

> [!NOTE]
> Se si utilizza la DLL di estensione MFC da una DLL MFC regolare, è necessario esportare questa funzione di inizializzazione. Questa funzione deve essere chiamata dalla DLL MFC regolare prima di utilizzare qualsiasi classe DLL di estensione MFC o risorse.

### <a name="exporting-entries"></a>Esportazione delle voci

Il modo semplice per esportare `__declspec(dllimport)` `__declspec(dllexport)` le classi consiste nell'utilizzare e su ogni classe e funzione globale che si desidera esportare. Questo rende molto più semplice, ma è meno efficiente rispetto alla denominazione di ogni punto di ingresso (descritto di seguito) poiché si ha meno controllo sulle funzioni esportate e non è possibile esportare le funzioni per ordinale. TESTDLL1 e TESTDLL2 utilizzano questo metodo per esportare le relative voci.

Un metodo più efficiente (e il metodo utilizzato da MFCxx.DLL) consiste nell'esportare ogni voce a mano assegnando un nome a ogni voce nell'oggetto . DEF. Dal momento che stiamo esportando esportazioni selettive dalla nostra DLL (cioè non tutto), dobbiamo decidere quali interfacce particolari vogliamo esportare. Questo è difficile poiché è necessario specificare i nomi alterati al linker sotto forma di voci nel file . DEF. Non esportare le classi C , a meno che non sia necessario disporre di un collegamento simbolico.

Se si è tentato di esportare le classi di C, con un file . DEF in precedenza, è possibile sviluppare uno strumento per generare automaticamente questo elenco. Questa operazione può essere eseguita utilizzando un processo di collegamento in due fasi. Collegare la DLL una sola volta senza esportazioni e consentire al linker di generare un file . file MAP. Le. Il file MAP può essere utilizzato per generare un elenco di funzioni che devono essere esportate, in modo che con qualche riorganizzazione, può essere utilizzato per generare le voci EXPORT per il file . DEF. L'elenco di esportazione per MFCxx.DLL e le DLL di estensione OLE e Database MFC, diverse migliaia di numeri, è stato generato con tale processo (anche se non è completamente automatico e richiede un po 'di regolazione a mano ogni volta).

### <a name="cwinapp-vs-cdynlinklibrary"></a>CWinApp e CDynLinkLibrary

Una DLL di estensione `CWinApp`MFC non dispone di un proprio oggetto derivato; deve invece funzionare `CWinApp`con l'oggetto derivato dall'applicazione client. Ciò significa che l'applicazione client è proprietaria del message pump principale, del ciclo inattivo e così via.

Se la DLL di estensione MFC deve gestire dati aggiuntivi per `CDynLinkLibrary` ogni applicazione, è possibile derivare una nuova classe da e crearla nella routine InitXxxDLL descritta in precedenza. Durante l'esecuzione, la DLL può controllare `CDynLinkLibrary` l'elenco di oggetti dell'applicazione corrente per trovare quello per quella particolare DLL di estensione MFC.

### <a name="using-resources-in-your-dll-implementation"></a>Utilizzo di risorse nell'implementazione della DLLUsing Resources in Your DLL Implementation

Come accennato in precedenza, il `CDynLinkLibrary` carico di risorse predefinito esaminerà l'elenco di oggetti alla ricerca del primo file EXE o DLL con la risorsa richiesta. Tutte le API MFC, nonché tutto `AfxFindResourceHandle` il codice interno utilizza per esaminare l'elenco delle risorse per trovare qualsiasi risorsa, indipendentemente da dove possa risiedere.

Se si desidera caricare solo le risorse da una `AfxGetResourceHandle` `AfxSetResourceHandle` posizione specifica, usare le API e salvare l'handle precedente e impostare il nuovo handle. Assicurarsi di ripristinare l'handle di risorsa precedente prima di tornare all'applicazione client. L'esempio TESTDLL2 utilizza questo approccio per caricare in modo esplicito un menu.

L'utilizzo dell'elenco presenta gli svantaggi che è leggermente più lento e richiede la gestione degli intervalli di ID risorsa. Ha il vantaggio che un'applicazione client che si collega a diverse DLL di estensione MFC può utilizzare qualsiasi risorsa fornita da DLL senza dover specificare l'handle dell'istanza DLL. `AfxFindResourceHandle`è un'API utilizzata per eseguire l'esordimento nell'elenco delle risorse per cercare una determinata corrispondenza. Accetta il nome e il tipo di una risorsa e restituisce l'handle di risorsa in cui è stato trovato per la prima volta (o NULL).

## <a name="writing-an-application-that-uses-the-dll-version"></a><a name="_mfcnotes_writing_an_application_that_uses_the_dll_version"></a>Scrittura di un'applicazione che utilizza la versione DLLWriting an Application That Uses the DLL Version

### <a name="application-requirements"></a>Requisiti dell'applicazione

Un'applicazione che utilizza la versione condivisa di MFC deve seguire alcune semplici regole:

- Deve avere `CWinApp` un oggetto e seguire le regole standard per un message pump.

- Deve essere compilato con un set di flag del compilatore obbligatori (vedere di seguito).

- Deve collegarsi con le librerie di importazione MFCxx. Impostando i flag del compilatore necessari, le intestazioni MFC determinano in fase di collegamento la libreria con cui l'applicazione deve essere collegata.

- Per eseguire l'eseguibile, MFCxx.DLL deve trovarsi nel percorso o nella directory di sistema di Windows.

### <a name="building-with-the-development-environment"></a>Costruire con l'ambiente di sviluppo

Se si utilizza il makefile interno con la maggior parte delle impostazioni predefinite standard, è possibile modificare facilmente il progetto per compilare la versione DLL.

Nel passaggio successivo si presuppone che un'applicazione MFC correttamente funzionante collegata con NAFXCWD. LIB (per il debug) e NAFXCW. LIB (per la vendita al dettaglio) e si desidera convertirlo per utilizzare la versione condivisa della libreria MFC. Si sta eseguendo l'ambiente di Visual C e si dispone di un file di progetto interno.

1. Scegliere **Proprietà** dal **Properties**menu Progetti . Nella pagina **Generale** in **Impostazioni predefinite progetto**impostare Microsoft Foundation Classes su Usa MFC in una DLL **condivisa** (MFCxx(d).dll).

### <a name="building-with-nmake"></a>Costruire con NMAKE

Se si utilizza la funzionalità makefile esterno di Visual C, o si utilizza direttamente NMAKE, sarà necessario modificare il makefile per supportare le opzioni del compilatore e del linker

Flag del compilatore obbligatori:

- **/D_AFXDLL /MD**
   **/D_AFXDLL**

Le intestazioni MFC standard richiedono questo simbolo per essere definito:

- **/MD (informazioni in inglese)** L'applicazione deve utilizzare la versione DLL della libreria di runtime del codice C

Tutti gli altri flag del compilatore seguono le impostazioni predefinite di MFC (ad esempio, _DEBUG per il debug).

Modificare l'elenco di librerie del linker. Modificare NAFXCWD. LIB a MFCxxD.LIB e modificare NAFXCW. da LIB a MFCxx.LIB. Sostituire LIBC. LIB con MSVCRT. Lib. Come con qualsiasi altra libreria MFC, è importante che MFCxxD.LIB venga inserito **prima** di qualsiasi libreria di runtime C.

Facoltativamente, aggiungere **/D_AFXDLL** a entrambe le opzioni del compilatore di risorse di vendita al dettaglio e di debug , ovvero quella che effettivamente compila le risorse con **/R**. In questo modo l'eseguibile finale più piccolo condividendo le risorse presenti nelle DLL MFC.

Una ricostruzione completa è necessaria dopo aver apportato queste modifiche.

### <a name="building-the-samples"></a>Compilazione degli esempi

La maggior parte dei programmi di esempio MFC può essere compilata da Visual C , o da un MAKEFILE condiviso compatibile con NMAKE dalla riga di comando.

Per convertire uno di questi esempi per l'utilizzo di MFCxx.DLL, è possibile caricare il file . MAK nel Visual C, quindi impostare le opzioni di progetto come descritto in precedenza. Se si utilizza la compilazione NMAKE, è possibile specificare "AFXDLL1" nella riga di comando di NMAKE e che verrà compilato l'esempio utilizzando le librerie MFC condivise.

L'esempio di concetti avanzati MFC [DLLHUSK](../overview/visual-cpp-samples.md) viene compilato con la versione DLL di MFC. In questo esempio non solo viene illustrato come compilare un'applicazione collegata a MFCxx.DLL, ma vengono illustrate anche altre funzionalità dell'opzione di creazione di pacchetti dll MFC, ad esempio le DLL di estensione MFC descritte più avanti in questa nota tecnica.

### <a name="packaging-notes"></a>Note sull'imballaggio

La versione finale delle DLL (MFCxx[U]. DLL) sono liberamente ridistribuibili. La versione di debug delle DLL non è liberamente ridistribuibile e deve essere utilizzata solo durante lo sviluppo dell'applicazione.

Le DLL di debug vengono fornite con le informazioni di debug. Tramite il debugger di Visual C, è possibile tracciare l'esecuzione dell'applicazione e la DLL. Le DLL di rilascio (MFCxx[U]. DLL) non contengono informazioni di debug.

Se si personalizzano o ricompilano le DLL, è necessario chiamarle a un valore diverso da "MFCxx" Il file SRC MFCDLL. MAK descrive le opzioni di compilazione e contiene la logica per rinominare la DLL. La ridenominazione dei file è necessaria, poiché queste DLL sono potenzialmente condivise da molte applicazioni MFC. La versione personalizzata delle DLL MFC sostituisce quelle installate nel sistema potrebbe interrompere un'altra applicazione MFC utilizzando le DLL MFC condivise.

Non è consigliabile ricompilare le DLL MFC.

## <a name="how-the-mfcxxdll-is-implemented"></a><a name="_mfcnotes_how_the_mfc30.dll_is_implemented"></a>Modalità di implementazione di MFCxx.DLL

Nella sezione seguente viene descritta la modalità di implementazione della DLL MFC (MFCxx.DLL e MFCxxD.DLL). Comprendere i dettagli qui non sono importanti se si vuole solo utilizzare la DLL MFC con l'applicazione. I dettagli qui non sono essenziali per comprendere come scrivere una DLL di estensione MFC, ma comprendere questa implementazione può aiutare a scrivere la propria DLL.

### <a name="implementation-overview"></a>Panoramica dell'implementazione

La DLL MFC è in realtà un caso speciale di una DLL di estensione MFC come descritto in precedenza. Ha un gran numero di esportazioni per un gran numero di classi. Ci sono alcune cose aggiuntive che facciamo nella DLL MFC che lo rendono ancora più speciale di una DLL di estensione MFC regolare.

### <a name="win32-does-most-of-the-work"></a>Win32 fa la maggior parte del lavoro

La versione a 16 bit di MFC aveva bisogno di una serie di tecniche speciali, tra cui dati per applicazione nel segmento dello stack, segmenti speciali creati da circa 80x86 codice assembly, contesti di eccezione per processo e altre tecniche. Win32 supporta direttamente i dati per processo in una DLL, che è ciò che si desidera la maggior parte del tempo. Per la maggior parte MFCxx.DLL è solo NAFXCW. LIB incluso in una DLL. Se si esamina il codice sorgente MFC, si troverà pochissimi #ifdef _AFXDLL, poiché ci sono pochissimi casi speciali che devono essere fatti. I casi speciali che sono presenti specificamente per gestire Win32 su Windows 3.1 (altrimenti noto come Win32s). Win32s non supporta direttamente i dati DLL per processo, pertanto la DLL MFC deve utilizzare le API Win32 di archiviazione locale di thread (TLS) per ottenere i dati locali di processo.

### <a name="impact-on-library-sources-additional-files"></a>Impatto sulle sorgenti di libreria, file aggiuntivi

L'impatto della versione **_AFXDLL** sulle normali origini e intestazioni della libreria di classi MFC è relativamente minore. C'è un file di versione speciale (AFXV_DLL. H) e un file di intestazione aggiuntivo (AFXDLL_. H) incluso dall'AFXWIN principale. Intestazione H. Il AFXDLL_. L'intestazione `CDynLinkLibrary` H include la `_AFXDLL` classe e altri dettagli di implementazione di entrambe le applicazioni e le DLL di estensione MFC. Oggetto AFXDLLX. H intestazione viene fornita per la compilazione di DLL di estensione MFC (vedere sopra per i dettagli).

Le origini regolari per la libreria MFC in MFC `_AFXDLL` SRC hanno codice condizionale aggiuntivo sotto il #ifdef. Un file di origine aggiuntivo (DLLINIT. CPP) contiene il codice di inizializzazione DLL aggiuntivo e altro colla per la versione condivisa di MFC.

Per compilare la versione condivisa di MFC, vengono forniti file aggiuntivi. (Vedere di seguito per informazioni dettagliate su come compilare la DLL.)

- Due. I file DEF vengono utilizzati per esportare i punti di ingresso della DLL MFC per le versioni di debug (MFCxxD.DEF) e di rilascio (MFCxx.DEF) della DLL.

- Un. File RC (MFCDLL. RC) contiene tutte le risorse MFC standard e una risorsa VERSIONINFO per la DLL.

- Un. File CLW (MFCDLL. CLW) viene fornito per consentire l'esplorazione delle classi MFC utilizzando ClassWizard. Nota: questa funzionalità non è specifica per la versione DLL di MFC.

### <a name="memory-management"></a>Gestione della memoria

Un'applicazione che utilizza MFCxx.DLL utilizza un allocatore di memoria comune fornito da MSVCRTxx.DLL, la DLL condivisa di runtime C. L'applicazione, tutte le DLL di estensione MFC e così come le DLL MFC stessi utilizzano questo allocatore di memoria condivisa. Utilizzando una DLL condivisa per l'allocazione di memoria, le DLL MFC possono allocare memoria che viene successivamente liberata dall'applicazione o viceversa. Poiché sia l'applicazione che la DLL devono utilizzare lo stesso allocatore, non è necessario eseguire l'override dell'operatore globale new o delete **dell'operatore** **di**C. Le stesse regole si applicano al resto delle routine di allocazione della memoria di runtime del sistema C (ad esempio **malloc**, **realloc**, **free**e altri).

### <a name="ordinals-and-class-__declspecdllexport-and-dll-naming"></a>Ordinali e classi __declspec(dllexport) e denominazione DLL

Non viene utilizzata `class` la funzionalità **__declspec(dllexport)** del compilatore C. Al contrario, un elenco di esportazioni è incluso con le origini della libreria di classi (MFCxx.DEF e MFCxxD.DEF). Vengono esportati solo questi set di punti di ingresso selezionati (funzioni e dati). Altri simboli, ad esempio le classi o le funzioni di implementazione private MFC, non vengono esportati Tutte le esportazioni vengono eseguite per ordinale senza un nome di stringa nella tabella dei nomi residente o non residente.

L'utilizzo di `class` **__declspec(dllexport)** può essere un'alternativa praticabile per la compilazione di DLL più piccole, ma nel caso di una DLL di grandi dimensioni come MFC, il meccanismo di esportazione predefinito ha limiti di efficienza e capacità.

Ciò significa che possiamo impacchetizzare una grande quantità di funzionalità nella versione MFCxx.DLL che è solo circa 800 KB senza compromettere molta velocità di esecuzione o caricamento. MFCxx.DLL sarebbe stato 100K più grande se questa tecnica non è stata utilizzata. Ciò consente inoltre di aggiungere ulteriori punti di ingresso alla fine del file . DEF per consentire un controllo delle versioni semplice senza compromettere la velocità e le dimensioni dell'esportazione tramite ordinale. Le revisioni delle versioni principali nella libreria di classi MFC modificheranno il nome della libreria. Ovvero, MFC30. DLL è la DLL ridistribuibile contenente la versione 3.0 della libreria di classi MFC. Un aggiornamento di questa DLL, ad esempio, in un ipotetico MFC 3.1, la DLL sarebbe denominata MFC31. DLL invece. Anche in questo caso, se si modifica il codice sorgente MFC per produrre una versione personalizzata della DLL MFC, utilizzare un nome diverso (e preferibilmente uno senza "MFC" nel nome).

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)

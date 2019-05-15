---
title: 'TN033: Versione DLL di MFC'
ms.date: 06/28/2018
helpviewer_keywords:
- MFC DLLs [MFC], writing MFC extension DLLS
- AFXDLL library
- DLLs [MFC], MFC
- DLL version of MFC [MFC]
- TN033
ms.assetid: b6f1080b-b66b-4b1e-8fb1-926c5816392c
ms.openlocfilehash: fda256043027dbff249cedf490b150b6ad30a5fb
ms.sourcegitcommit: 934cb53fa4cb59fea611bfeb9db110d8d6f7d165
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/14/2019
ms.locfileid: "65611110"
---
# <a name="tn033-dll-version-of-mfc"></a>TN033: Versione DLL di MFC

Questa nota viene descritto come è possibile usare il MFCxx. dll e MFCxxD. dll (dove x è il numero di versione MFC) condividere librerie a collegamento dinamico con le applicazioni MFC e DLL estensione MFC. Per altre informazioni sulle DLL MFC regolari, vedere [utilizzo di MFC come parte di una DLL](../mfc/tn011-using-mfc-as-part-of-a-dll.md).

In questa nota tecnica descrive tre aspetti delle DLL. Gli ultimi due sono per gli utenti più avanzati:

- [Come si compila una DLL di estensione MFC](#_mfcnotes_how_to_write_an_mfc_extension_dll)

- [Come si crea un'applicazione MFC che usa la versione DLL di MFC](#_mfcnotes_writing_an_application_that_uses_the_dll_version)

- [Modalità di condivisione delle librerie a collegamento dinamico di MFC sono implementati](#_mfcnotes_how_the_mfc30.dll_is_implemented)

Se è interessati a compilava una DLL utilizza MFC che può essere utilizzato con le applicazioni non MFC (si tratta di una DLL MFC regolari), fare riferimento a [Nota tecnica 11](../mfc/tn011-using-mfc-as-part-of-a-dll.md).

## <a name="overview-of-mfcxxdll-support-terminology-and-files"></a>Panoramica del supporto MFCxx. dll: Terminologia e i file

**DLL MFC regolari**: Utilizzare una DLL regolare MFC per compilare una DLL autonoma usando alcune delle classi MFC. Interfacce attraverso il limite di App/DLL sono interfacce "C" e l'applicazione client non deve essere un'applicazione MFC.

Si tratta della versione del supporto DLL in MFC 1.0 è supportata. Viene descritto in [Nota tecnica 11](../mfc/tn011-using-mfc-as-part-of-a-dll.md) e l'esempio di concetti avanzati MFC [DLLScreenCap](../overview/visual-cpp-samples.md).

> [!NOTE]
> A partire da Visual C++ versione 4.0, il termine **USRDLL** è obsoleta ed è stata sostituita da una DLL MFC regolare collegata a MFC in modo statico. È anche possibile compilare una normale DLL MFC collegata a MFC in modo dinamico.

MFC 3.0 (e versioni successive) supporta le DLL MFC regolari con tutte le nuove funzionalità, comprese le classi OLE e il Database.

**AFXDLL**: Ciò è detta anche la versione delle librerie MFC condivisa. Questo è il nuovo supporto DLL aggiunto 2.0 MFC. La libreria MFC stessa è in un numero di DLL (descritti di seguito) e un'applicazione client o una DLL collegata in modo dinamico le DLL necessarie. Le interfacce tra i limiti dell'applicazione o DLL sono C++interfacce di classi /MFC. L'applicazione client deve essere un'applicazione MFC. Supporta tutte le funzionalità di MFC 3.0 (eccezione: UNICODE non è supportato per le classi di database).

> [!NOTE]
> A partire da Visual C++ versione 4.0, questo tipo di DLL viene definito come una "DLL di estensione."

In questa nota userà MFCxx. dll per fare riferimento all'intero set di DLL MFC, che include:

- Debug: MFCxxD. dll (combinata) e MFCSxxD.LIB (statico).

- Versione: MFCxx. dll (combinata) e MFCSxx.LIB (statico).

- Debug Unicode: MFCxxUD.DLL (combinata) e MFCSxxD.LIB (statico).

- Versione di Unicode: MFCxxU.DLL (combinata) e MFCSxxU.LIB (statico).

> [!NOTE]
> Il MFCSxx [U] [D]. LIB sono utilizzate combinazione con MFC le DDL condivise. Queste librerie contengono codice che deve essere collegato staticamente all'applicazione o DLL.

Librerie di importazione di un'applicazione i collegamenti ai corrispondenti:

- Debug: MFCxxD.LIB

- Versione: MFCxx.LIB

- Debug Unicode: MFCxxUD.LIB

- Versione di Unicode: MFCxxU.LIB

Una "DLL estensione MFC" è una DLL compilata su MFCxx. dll (e/o di altri MFC DLL condivise). In questo caso l'architettura dei componenti MFC interviene. Se si derivare una classe utile da una classe MFC o creare un altro toolkit simile a MFC, è possibile inserirlo in una DLL. Che la DLL utilizza MFCxx. dll, come l'applicazione client finale. In questo modo le classi foglia riutilizzabili, classi di base riutilizzabili e le classi documento/visualizzazione riutilizzabili.

## <a name="pros-and-cons"></a>Vantaggi e svantaggi

Perché si deve usare la versione condivisa di MFC

- Utilizzo della libreria condivisa può comportare applicazioni più piccole (un'applicazione minima che utilizza la maggior parte della libreria MFC è minore di 10K).

- La versione condivisa di MFC supporta le DLL estensione MFC e DLL MFC regolari.

- Compilazione di un'applicazione che usa le librerie MFC condivise è più veloce rispetto alla creazione di un'applicazione MFC collegata in modo statico perché non è necessario collegare la libreria MFC. Ciò è particolarmente evidente nelle **eseguire il DEBUG** compilazioni in cui il linker deve comprimere le informazioni di debug, ovvero mediante il collegamento con una DLL che già contiene le informazioni di debug, è meno informazioni di debug per comprimere all'interno dell'applicazione.

Perché è non consigliabile utilizzare la versione condivisa di MFC:

- Un'applicazione che usa la libreria condivisa di spedizione è necessario fornire MFCxx (e altri) della libreria con il programma. MFCxx. dll è ridistribuibile gratuitamente come molte DLL, ma è comunque necessario installare la DLL nel programma di installazione. Inoltre, è necessario spedire il MSVCRTxx.DLL, che contiene la libreria di runtime C utilizzata sia per il programma e DLL MFC.

##  <a name="_mfcnotes_how_to_write_an_mfc_extension_dll"></a> Come scrivere una DLL di estensione MFC

Una DLL di estensione MFC è una DLL che contiene le classi e funzioni scritte per arricchire le funzionalità delle classi MFC. Una DLL di estensione MFC Usa le DLL MFC condivisa nello stesso modo che un'applicazione usa, con alcune considerazioni aggiuntive:

- Il processo di compilazione è simile alla creazione di un'applicazione che usa le librerie MFC condivise con qualche aggiuntive del compilatore e le opzioni del linker.

- Una DLL di estensione MFC non ha un `CWinApp`-classe derivata.

- Una DLL di estensione MFC deve fornire una speciale `DllMain`. La creazione guidata applicazione fornisce un `DllMain` funzione che è possibile modificare.

- Una DLL di estensione MFC in genere fornirà una routine di inizializzazione per creare un `CDynLinkLibrary` se l'estensione MFC desidera esportazione DLL `CRuntimeClass`es o le risorse per l'applicazione. Una classe derivata di `CDynLinkLibrary` possono essere usati se i dati per ogni applicazione devono essere mantenuti dalla DLL di estensione MFC.

Queste considerazioni sono descritti in dettaglio più avanti. È anche consigliabile vedere l'esempio di concetti avanzati MFC [DLLHUSK](../overview/visual-cpp-samples.md) poiché illustra:

- Creazione di un'applicazione usando le librerie condivise. (DLLHUSK. File EXE è un'applicazione MFC che collega in modo dinamico alle librerie MFC, nonché altri DLL).

- Creazione di una DLL di estensione MFC. (Si noti, ad esempio i flag speciali `_AFXEXT` usate nella creazione di una DLL di estensione MFC)

- Due esempi di DLL estensione MFC. Uno viene illustrata la struttura di base di una DLL di estensione MFC con esportazioni limitate (TESTDLL1) e l'altro illustra l'esportazione di un'interfaccia di classe per intero (TESTDLL2).

Sia l'applicazione client ed eventuali DLL di estensione MFC deve usare la stessa versione di MFCxx. dll. È necessario seguire la convenzione di DLL MFC e fornire sia un tipo di debug e delle vendite al dettaglio (/Release) versione della DLL di estensione MFC. Ciò consente ai programmi client di compilare le versioni di debug e di vendita al dettaglio delle proprie applicazioni e collegarli con il debug appropriata o una versione finale di tutte le DLL.

> [!NOTE]
>  Poiché C++ denominare alterazione ed esportare i problemi, l'elenco di esportazione da una DLL di estensione MFC potrebbe differire tra versioni di debug e delle vendite al dettaglio della stessa DLL e le DLL per diverse piattaforme. La vendita al dettaglio MFCxx. dll è circa 2000 esportato i punti di ingresso; il debug MFCxxD. dll è circa 3000 esportato i punti di ingresso.

### <a name="quick-note-on-memory-management"></a>Nota rapida in Gestione della memoria

La sezione intitolata "Gestione della memoria," verso la fine di questa nota tecnica, viene descritta l'implementazione di MFCxx con la versione condivisa di MFC. Le informazioni necessarie implementare semplicemente un'estensione MFC che DLL è descritta di seguito.

MFCxx. dll e tutte le DLL estensione MFC caricate nello spazio degli indirizzi di un'applicazione client useranno l'allocatore di memoria stesso, il caricamento delle risorse e altri stati "globale" di MFC come se fossero nella stessa applicazione. Ciò è importante perché le librerie di DLL non MFC e DLL MFC regolari collegate in modo statico a MFC è l'esatto opposto e avere ogni allocazione di DLL all'esterno di un proprio pool di memoria.

Se una DLL di estensione MFC alloca la memoria, tale memoria può liberamente confuso con qualsiasi altro oggetto allocato dall'applicazione. Inoltre, se l'arresto anomalo di un'applicazione che usa le librerie MFC condivise, la protezione del sistema operativo manterranno l'integrità di qualsiasi altra applicazione MFC che condivide la DLL.

Allo stesso modo gli altri stati "globale" di MFC, ad esempio il file eseguibile corrente per caricare le risorse, vengono condivisi tra l'applicazione client e tutte le DLL estensione MFC nonché MFCxx stesso.

### <a name="building-an-mfc-extension-dll"></a>Creazione di una DLL di estensione MFC

È possibile utilizzare AppWizard per creare un progetto DLL estensione MFC e verrà automaticamente generato il compilatore appropriato e le impostazioni del linker. Era inoltre generare un `DllMain` funzione che è possibile modificare.

Se si converte un progetto esistente in una DLL di estensione MFC, iniziare con le regole standard per la creazione di un'applicazione usando la versione condivisa di MFC, quindi eseguire le operazioni seguenti:

- Aggiungere **/D_AFXEXT** ai flag del compilatore. Nella finestra di dialogo proprietà del progetto, selezionare il nodo C/C++. Quindi selezionare la categoria per il preprocessore. Aggiungere `_AFXEXT` al campo definire macro, separare ognuno degli elementi con un punto e virgola.

- Rimuovere il **/Gy** opzione del compilatore. Nella finestra di dialogo proprietà del progetto, selezionare il nodo C/C++. Quindi selezionare la categoria di generazione del codice. Assicurarsi che l'opzione "Abilita collegamento a livello di funzione" non è abilitato. Ciò renderà più facile esportare classi perché il linker non rimuoverà le funzioni senza riferimenti. Se il progetto originale viene utilizzato per compilare una normale DLL MFC staticamente collegate a MFC, modifica il **[d] /MT** dell'opzione del compilatore **/MD [d]**.

- Creazione di una libreria di esportazione con il **/DLL** opzione al collegamento. Questo verrà impostato quando si crea una nuova destinazione, se si specifica di libreria a collegamento dinamico Win32 come il tipo di destinazione.

### <a name="changing-your-header-files"></a>Modifica i file di intestazione

L'obiettivo di una DLL di estensione MFC è in genere per esportare alcune funzionalità comuni per uno o più applicazioni che possono usare tale funzionalità. Si tratta di esportazione di classi e funzioni globali che sono disponibili per le applicazioni client.

A questo scopo è necessario assicurarsi che tutte le funzioni membro è contrassegnato come importare o esportare come appropriato. Ciò richiede che le dichiarazioni speciali: `__declspec(dllexport)` e `__declspec(dllimport)`. Quando le classi vengono usate dalle applicazioni client, si desidera possano essere dichiarati come `__declspec(dllimport)`. Quando viene compilato l'estensione MFC DLL stessa, devono essere dichiarati come `__declspec(dllexport)`. Inoltre, le funzioni devono essere effettivamente esportate, in modo che i programmi client associare ad essi in fase di caricamento.

Per esportare l'intera classe, usare `AFX_EXT_CLASS` nella definizione della classe. Questa macro viene definita dal framework come `__declspec(dllexport)` quando si `_AFXDLL` e `_AFXEXT` viene definito, ma viene definito come `__declspec(dllimport)` quando `_AFXEXT` non è definito. `_AFXEXT` come descritto in precedenza, viene definita solo quando si compila la DLL di estensione MFC. Ad esempio:

```cpp
class AFX_EXT_CLASS CExampleExport : public CObject
{ /* ... class definition ... */ };
```

### <a name="not-exporting-the-entire-class"></a>Non esportare l'intera classe

In alcuni casi è possibile esportare solo i membri della classe necessari singoli. Ad esempio, se si sta esportando un `CDialog`-derivato (classe), si potrebbe essere necessario solo esportare il costruttore e il `DoModal` chiamare. È possibile esportare questi membri tramite la DLL. File DEF, ma è anche possibile usare `AFX_EXT_CLASS` in modo molto simile a sui singoli membri è necessario esportare.

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

Quando si esegue questa operazione, è possibile riscontrare un problema aggiuntivo perché non si siano esportando tutti i membri della classe. Il problema consiste nella modalità di lavoro le macro MFC. Molte delle macro di supporto di MFC effettivamente dichiarare o definire membri dati. Di conseguenza, questi membri dati saranno anche necessario esportate dalla DLL.

DECLARE_DYNAMIC (macro), ad esempio, è definito come segue quando si compila una DLL di estensione MFC:

```cpp
#define DECLARE_DYNAMIC(class_name) \
protected: \
    static CRuntimeClass* PASCAL _GetBaseClass(); \
    public: \
    static AFX_DATA CRuntimeClass class##class_name; \
    virtual CRuntimeClass* GetRuntimeClass() const; \
```

La riga che inizia con "statiche `AFX_DATA`" dichiara un oggetto statico all'interno della classe. Per esportare correttamente questa classe e accedere alle informazioni di runtime da un client. EXE, è necessario esportare questo oggetto statico. Poiché l'oggetto statico è dichiarato con il modificatore `AFX_DATA`, è necessario solo definire `AFX_DATA` essere `__declspec(dllexport)` quando si compila la DLL e definirlo come `__declspec(dllimport)` quando si compila il file eseguibile del client.

Come illustrato in precedenza, `AFX_EXT_CLASS` è già definito in questo modo. È sufficiente definire nuovamente `AFX_DATA` sia uguale `AFX_EXT_CLASS` intorno alla definizione della classe.

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

MFC utilizza sempre il `AFX_DATA` simbolo per elementi di dati viene definito all'interno delle macro, in modo che questa tecnica funziona per tutti questi scenari. Ad esempio, funzionerà per DECLARE_MESSAGE_MAP.

> [!NOTE]
> Se si sta esportando l'intera classe piuttosto che i membri selezionati della classe, vengono esportati automaticamente i membri dati statici.

È possibile usare la stessa tecnica per l'esportazione automatica il `CArchive` operatore di estrazione per le classi che usano le macro DECLARE_SERIAL e IMPLEMENT_SERIAL. Per esportare l'operatore di archivio, che raggruppano le dichiarazioni di classe (che si trova nel. File H) con il codice seguente:

```cpp
#undef AFX_API
#define AFX_API AFX_EXT_CLASS

/* your class declarations here */

#undef AFX_API
#define AFX_API
```

### <a name="limitations-of-afxext"></a>Limitazioni di AFXEXT

È possibile usare la _**AFXEXT** simbolo del preprocessore per le DLL fino a quando non è più livelli di DLL estensione MFC di estensione MFC. Se si dispone di MFC di estensione dll che chiamano o derivare dalle classi in MFC un'estensione personalizzata le DLL, che quindi derivare dalle classi MFC, è necessario utilizzare il simbolo del preprocessore per evitare ambiguità.

Il problema è che in Win32, è necessario dichiarare in modo esplicito tutti i dati come `__declspec(dllexport)` se devono essere esportate da una DLL, e `__declspec(dllimport)` se è possibile importare da una DLL. Quando si definiscono `_AFXEXT`, le intestazioni MFC assicurarsi che `AFX_EXT_CLASS` sia definito correttamente.

Quando sono presenti più livelli, un simbolo, ad esempio `AFX_EXT_CLASS` non è sufficiente, poiché una DLL di estensione MFC possono essere esportare nuove classi, nonché l'importazione di altre classi da un'altra DLL di estensione MFC. Per risolvere questo problema, utilizzare un simbolo del preprocessore speciale che indica che si compila la DLL o tramite la DLL. Si supponga, ad esempio, due DLL estensione MFC, dll e b. dll. Ognuno di essi Esporta alcune classi di h e h, rispettivamente. B. dll Usa le classi dalla DLL. I file di intestazione sarebbe simile al seguente:

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

Quando viene compilato DLL, viene compilata con **/DA_IMPL** e durante la compilazione b. dll, viene compilato con **/DB_IMPL**. Usando i simboli separati per ogni DLL, vengono esportati CExampleB e CExampleA viene importato durante la compilazione b. dll. CExampleA esportato durante la creazione di DLL e importato quando viene usato da DLL (o un altro client).

Questo tipo di sovrapposizione non può essere eseguito quando si usa l'oggetto incorporato `AFX_EXT_CLASS` e `_AFXEXT` simboli del preprocessore. La tecnica descritta in precedenza è stato risolto il problema in modo non diversamente da quanto accade che il meccanismo di MFC Usa quando si compila la DLL di estensione OLE, il Database e rete MFC.

### <a name="not-exporting-the-entire-class"></a>Non esportare l'intera classe

Anche in questo caso, è necessario prestare particolare attenzione quando non si esporta un'intera classe. È necessario assicurarsi che gli elementi dati necessari creati le macro MFC vengono esportati in modo corretto. Questa operazione può essere eseguita definendo nuovamente `AFX_DATA` della macro della classe specifica. Questa operazione deve essere eseguita ogni volta che si sta esportando non l'intera classe.

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

Di seguito è riportato il codice esatto che è necessario inserire nel file sorgente principale per le DLL di estensione MFC. Deve disporre di dopo lo standard include. Si noti che quando si usa la creazione guidata applicazione per creare file di avvio per una DLL di estensione MFC, fornisce un `DllMain` automaticamente.

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

La chiamata a `AfxInitExtensionModule` acquisisce le classi di runtime moduli (`CRuntimeClass` strutture), nonché le factory di oggetto (`COleObjectFactory` oggetti) per l'uso in seguito quando la `CDynLinkLibrary` oggetto viene creato. (Facoltativa) chiamata a `AfxTermExtensionModule` consente MFC per eseguire la pulizia DLL di estensione MFC quando si disconnette ogni processo (situazione che si verifica quando il processo viene chiuso o quando la DLL viene scaricata come risultato di un `FreeLibrary` chiamare) dalla DLL di estensione MFC. Poiché la maggior parte delle estensioni MFC le DLL non vengono caricate in modo dinamico (in genere, sono collegati tramite le librerie di importazione), la chiamata a `AfxTermExtensionModule` non è in genere necessario.

Se l'applicazione viene caricata e libera la DLL di estensione MFC in modo dinamico, accertarsi di chiamare `AfxTermExtensionModule` come illustrato in precedenza. Assicurarsi anche di usare `AfxLoadLibrary` e `AfxFreeLibrary` (anziché funzioni Win32 `LoadLibrary` e `FreeLibrary`) se l'applicazione usa più thread o se dinamicamente carica DLL estensione MFC. Usando `AfxLoadLibrary` e `AfxFreeLibrary` assicura che il codice di avvio e arresto del sistema che viene eseguita quando la DLL di estensione MFC viene caricato e scaricato non danneggiare lo stato complessivo di MFC.

Il file di intestazione AFXDLLX. H contiene le definizioni speciali per le strutture utilizzate nelle DLL di estensione MFC, ad esempio la definizione per `AFX_EXTENSION_MODULE` e `CDynLinkLibrary`.

Globale *extensionDLL* devono essere dichiarati come illustrato. Diversamente dalla versione di MFC a 16 bit, è possibile allocare la memoria e chiamare le funzioni MFC durante questo periodo, poiché il MFCxx. dll è completamente inizializzato entro l'ora di `DllMain` viene chiamato.

### <a name="sharing-resources-and-classes"></a>Condivisione di risorse e le classi

DLL di estensione MFC semplice necessario esportare solo alcune funzioni di larghezza di banda ridotta per l'applicazione client e nient'altro. Altre DLL con utilizzo intensivo di interfaccia utente potrebbe essere necessario esportare le risorse e le classi C++ per l'applicazione client.

Esportazione di risorse viene eseguita tramite un elenco di risorse. In ogni applicazione è un elenco collegato singolarmente di `CDynLinkLibrary` oggetti. Quando si cerca una risorsa, la maggior parte delle implementazioni che caricano le risorse MFC standard cerca innanzitutto nel modulo di risorsa corrente (`AfxGetResourceHandle`) non trovato. percorso e l'elenco di `CDynLinkLibrary` oggetti tenta di caricare la risorsa richiesta.

La creazione dinamica di oggetti C++ assegnato un nome di classe C++ è simile. Il meccanismo di deserializzazione di oggetti MFC deve avere tutti la `CRuntimeClass` gli oggetti registrati in modo che è possibile ricostruire mediante la creazione dinamica di oggetti di C++ del tipo richiesto in base a ciò che è stato memorizzato in precedenza.

Se si desidera che l'applicazione client per utilizzare le classi nella DLL di estensione MFC sono `DECLARE_SERIAL`, è necessario esportare le classi per essere visibile all'applicazione client. Ciò avviene anche scorrendo la `CDynLinkLibrary` elenco.

Nel caso dell'esempio di concetti avanzati MFC [DLLHUSK](../overview/visual-cpp-samples.md), l'elenco simile al seguente:

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

MFCxx. dll è generalmente l'ultimo la risorsa e un elenco di classi. Questo file include tutte le risorse MFC standard, tra cui le stringhe di richiesta per tutti gli ID di comando standard. Collocandola nella fase finale dell'elenco consente di DLL e l'applicazione client per non avere una propria copia di risorse MFC standard, ma come si basano su risorse condivise MFCxx invece.

Unione delle risorse e i nomi delle classi di tutte le DLL nello spazio dei nomi dell'applicazione client offre svantaggio consiste nel fatto che è necessario prestare attenzione a quali ID o nomi che scelto. È possibile naturalmente disabilitare questa funzionalità tramite l'esportazione non sia le risorse o una `CDynLinkLibrary` oggetto all'applicazione client. Il [DLLHUSK](../overview/visual-cpp-samples.md) esempio gestisce lo spazio dei nomi di risorsa condivisa con più file di intestazione. Visualizzare [Nota tecnica 35](../mfc/tn035-using-multiple-resource-files-and-header-files-with-visual-cpp.md) per altri suggerimenti sull'utilizzo dei file di risorsa condivisa.

### <a name="initializing-the-dll"></a>Inizializzazione di DLL

Come indicato in precedenza, è in genere consigliabile creare un `CDynLinkLibrary` oggetto per esportare le classi e le risorse all'applicazione client. È necessario fornire un punto di ingresso esportato per inizializzare la DLL. Minima, si tratta di una routine void che non accetta argomenti e non restituisce nulla, ma può essere liberamente.

Ogni applicazione client che utilizza la DLL deve chiamare la routine di inizializzazione, se si usa questo approccio. È anche possibile allocare questo `CDynLinkLibrary` dell'oggetto nel `DllMain` solo dopo la chiamata `AfxInitExtensionModule`.

Routine di inizializzazione è necessario creare un `CDynLinkLibrary` oggetto nell'heap dell'applicazione corrente, collegata le informazioni di DLL MFC di estensione. Questa operazione può essere eseguita con gli elementi seguenti:

```cpp
extern "C" extern void WINAPI InitXxxDLL()
{
    new CDynLinkLibrary(extensionDLL);
}
```

Il nome della routine, *InitXxxDLL* in questo esempio, può essere qualsiasi operazione desiderata. Se non è necessario che sia **extern "C"**, ma tale scelta rende più facile da gestire l'elenco di esportazione.

> [!NOTE]
> Se si usa la DLL di estensione MFC da una normale DLL MFC, è necessario esportare questa funzione di inizializzazione. Questa funzione deve essere chiamata dalle normali DLL MFC prima di usare le risorse o classi DLL estensione MFC.

### <a name="exporting-entries"></a>Esportazione di voci

Il modo semplice per esportare le classi consiste nell'usare `__declspec(dllimport)` e `__declspec(dllexport)` in ogni classe e funzione globale da esportare. Questo rende molto più semplice, ma è meno efficiente rispetto a ogni punto di ingresso (descritto di seguito) rappresentata dalla denominazione poiché si dispone di un controllo minore sui quali funzioni vengono esportati e non è possibile esportare le funzioni di base al valore ordinale. TESTDLL1 e TESTDLL2 usare questo metodo per esportare le voci.

Un metodo più efficiente (e il metodo usato dal MFCxx. dll) consiste nell'esportare manualmente ogni voce assegnando ogni voce nel. File DEF. Poiché si sta esportazione selettive esportazioni da nostro DLL (vale a dire, non tutti gli elementi), è necessario decidere quali interfacce particolare si desidera esportare. Questo risultato è difficile poiché è necessario specificare i nomi modificati al linker sotto forma di voci nel. File DEF. Non esportare tutte le classi C++, a meno che non è effettivamente necessario dispone di un collegamento simbolico per risolverlo.

Se si è tentato di esportazione C++ le classi con una. Prima, è possibile sviluppare uno strumento per generare automaticamente l'elenco di file DEF. Questa operazione può essere eseguita tramite un processo di collegamento in due fasi. Collegare la DLL di una volta con alcuna esportazione e consente al linker di generare una. File di mapping. Il file con estensione File di mappa può essere utilizzato per generare un elenco di funzioni che devono essere esportati, pertanto con alcuni ridisposizione, può essere utilizzato per generare voci di esportazione per il. File DEF. L'elenco di esportazione per MFCxx. dll e OLE e le DLL di estensione Database MFC, diverse migliaia di numero, è stato generato con questo tipo di processo (anche se non è completamente automatico e richiede alcune mano ottimizzazione ogni tanto in tanto).

### <a name="cwinapp-vs-cdynlinklibrary"></a>CWinApp Visual Studio. CDynLinkLibrary

Una DLL di estensione MFC non ha un `CWinApp`-l'oggetto di un proprio derivato; invece necessario collaborare con il `CWinApp`-derivato l'oggetto dell'applicazione client. Ciò significa che l'applicazione client possiede il message pump principale, il ciclo inattivo e così via.

Se la DLL di estensione MFC deve mantenere dati aggiuntivi per ogni applicazione, è possibile derivare una nuova classe da `CDynLinkLibrary` e crearla nel InitXxxDLL routine descritto sopra. Durante l'esecuzione, la DLL può cercare elenco dell'applicazione corrente di `CDynLinkLibrary` oggetti per trovare quella per quel particolare DLL di estensione MFC.

### <a name="using-resources-in-your-dll-implementation"></a>Utilizzo delle risorse nell'implementazione di DLL

Come indicato in precedenza, il carico di risorse predefinito descrive in dettaglio come elenco di `CDynLinkLibrary` oggetti cercando il primo file EXE o DLL con la risorsa richiesta. Tutte le API di MFC, nonché tutto il codice interno Usa `AfxFindResourceHandle` per esaminare l'elenco di risorse per individuare eventuali risorse, indipendentemente da dove può trovarsi.

Se si vuole solo caricare le risorse da una posizione specifica, usare le API `AfxGetResourceHandle` e `AfxSetResourceHandle` per salvare l'handle precedente e impostare il nuovo handle. Prestare attenzione a ripristinare l'handle di risorsa precedente prima di tornare all'applicazione client. L'esempio TESTDLL2 Usa questo approccio per caricare in modo esplicito un menu.

Scorrere l'elenco presenta gli svantaggi che è leggermente più lenta e richiede la gestione degli intervalli di ID di risorsa. Il vantaggio è che un'applicazione client che include collegamenti a diverse DLL di estensione MFC è possibile usare qualsiasi risorsa fornita dalla DLL senza dover specificare l'handle di istanza DLL. `AfxFindResourceHandle` è un'API utilizzata per scorrere l'elenco di risorse per cercare una corrispondenza specificata. Accetta il nome e il tipo di una risorsa e restituisce l'handle di risorsa in cui è stato trovato prima di tutto (o NULL).

##  <a name="_mfcnotes_writing_an_application_that_uses_the_dll_version"></a> La scrittura di un'applicazione che usa la versione DLL

### <a name="application-requirements"></a>Requisiti dell'applicazione

Un'applicazione che usa la versione condivisa di MFC deve rispettare alcune semplici regole:

- Deve avere un `CWinApp` dell'oggetto e seguire le regole standard per un message pump.

- Deve essere compilato con un set di flag del compilatore necessari (vedere sotto).

- È necessario collegarlo con le librerie di importazione MFCxx. Impostando il flag del compilatore necessarie, le intestazioni MFC determinano in fase di collegamento la libreria che l'applicazione deve collegarsi a.

- Per eseguire il file eseguibile, MFCxx. dll deve essere nel percorso o nella directory di sistema Windows.

### <a name="building-with-the-development-environment"></a>Compilazione con l'ambiente di sviluppo

Se si usa il makefile interno con la maggior parte delle impostazioni predefinite standard, è possibile modificare facilmente il progetto per compilare la versione DLL.

Il passaggio seguente si presuppone un'applicazione MFC che funziona correttamente collegata con NAFXCWD. LIB (per il debug) e NAFXCW. LIB (per attivazione singola) e si desidera convertire in modo che usi la versione condivisa della libreria MFC. È in esecuzione l'ambiente Visual C++ e si dispone di un file di progetto interno.

1. Nel **progetti** menu, fare clic su **proprietà**. Nel **generali** pagina **impostazioni predefinite progetto**, impostare Microsoft Foundation Classes **Usa MFC in una DLL condivisa** (MFCxx(d).dll).

### <a name="building-with-nmake"></a>Compilazione con NMAKE

Se si utilizza la funzionalità di makefile esterni di Visual C++ o Usa NMAKE direttamente, è necessario modificare il makefile per il supporto del compilatore e le opzioni del linker

Flag del compilatore obbligatori:

- **/D_AFXDLL /MD**
   **/D_AFXDLL**

Le intestazioni MFC standard necessario questo simbolo da definire:

- **/MD** l'applicazione deve usare la versione DLL della libreria di runtime C

Tutti gli altri contrassegni del compilatore seguono le impostazioni predefinite MFC (ad esempio, debug per il debug).

Modificare l'elenco del linker delle librerie. Modifica NAFXCWD. LIB per MFCxxD.LIB e modificare NAFXCW. LIB di MFCxx.LIB. Sostituire LIBC. LIB con MSVCRT. LIB. Come con qualsiasi altra libreria MFC è importante che sia collocato MFCxxD.LIB **prima di** tutte le librerie di runtime C.

Facoltativamente, aggiungere **/D_AFXDLL** per le opzioni del compilatore di risorse di distribuzione e di debug (quello che consente di compilare effettivamente le risorse con **/R**). In questo modo il file eseguibile finale più piccoli condividendo le risorse presenti nella DLL MFC.

Dopo aver apportato queste modifiche, è necessaria una ricompilazione completa.

### <a name="building-the-samples"></a>Generazione degli esempi

La maggior parte dei programmi di esempio MFC può essere compilata da Visual C++ o da un MAKEFILE NMAKE compatibile condiviso dalla riga di comando.

Per convertire uno qualsiasi di questi esempi da usare MFCxx. dll, è possibile caricare il. Il codice MAK del file in Visual C++ e impostare le opzioni di progetto come descritto in precedenza. Se si usa la compilazione NMAKE, è possibile specificare "AFXDLL = 1" in NMAKE riga di comando e che compilerà il codice di esempio usando le librerie MFC condivise.

L'esempio di concetti avanzati MFC [DLLHUSK](../overview/visual-cpp-samples.md) viene compilato con la versione DLL di MFC. Questo esempio non solo illustra come compilare un'applicazione collegata con MFCxx. dll, ma illustra anche altre funzionalità dell'opzione di creazione di pacchetti di DLL MFC, ad esempio le DLL estensione MFC descritto più avanti in questa nota tecnica.

### <a name="packaging-notes"></a>Note sulla creazione di pacchetti

La versione delle vendite al dettaglio delle DLL (MFCxx [U]. DLL) possono essere liberamente ridistribuiti. La versione di debug delle DLL non possono essere liberamente ridistribuita e deve essere utilizzato solo durante lo sviluppo dell'applicazione.

Le DLL di debug sono disponibili le informazioni di debug. Utilizzando il debugger di Visual C++, è possibile tracciare l'esecuzione dell'applicazione, nonché la DLL. Le DLL di rilascio (MFCxx [U]. DLL) non contengono informazioni di debug.

Se si personalizza o si ricompila le DLL, quindi si deve chiamarli qualcosa di diverso dal file "MFCxx" The MFC SRC MFCDLL. Il codice MAK vengono descritte le opzioni di compilazione e contiene la logica per la ridenominazione della DLL. Rinominare i file è necessaria, poiché queste DLL sono potenzialmente condivisi da numerose applicazioni MFC. Con la versione personalizzata della sostituzione delle DLL MFC quelle installate nel sistema possono essere interrotte un'altra applicazione MFC con le DLL MFC condivisa.

Non è consigliabile ricompilare le DLL MFC.

##  <a name="_mfcnotes_how_the_mfc30.dll_is_implemented"></a> Modalità di implementazione MFCxx

La sezione seguente descrive le modalità di implementazione della DLL MFC (MFCxx. dll e MFCxxD. dll). Comprendere che i dettagli di seguito non sono importanti se si desidera eseguire è usare la DLL MFC con l'applicazione. I dettagli di seguito non sono essenziali per comprendere come scrivere una DLL di estensione MFC, ma la comprensione di questa implementazione potrebbe consentono di scrivere la propria DLL.

### <a name="implementation-overview"></a>Panoramica dell'implementazione

La DLL di MFC è davvero un caso speciale di una DLL di estensione MFC come descritto in precedenza. Include un numero molto elevato di esportazioni per un numero elevato di classi. Esistono alcuni aspetti aggiuntivi facciamo nella DLL MFC di che lo rendono ancora più particolari rispetto a una DLL di estensione MFC regolari.

### <a name="win32-does-most-of-the-work"></a>Win32 esegue la maggior parte del lavoro

La versione 16 bit di MFC è necessaria una serie di tecniche speciali, inclusi i dati per ogni app nel segmento di stack, segmenti speciale creati da codice 80x86 assembly, contesti di eccezione per ogni processo e altre tecniche. Win32 supporta direttamente i dati per ogni processo in una DLL, che è ciò che si desidera la maggior parte dei casi. Per la maggior parte MFCxx. dll è semplicemente NAFXCW. LIB inclusa in una DLL. Se esamina il codice sorgente MFC, troverai un numero molto ridotto AFXDLL #ifdef, dato che esistono pochissimi casi speciali che è necessario apportare. I casi speciali che vi sono specificamente per affrontare Win32 su Windows 3.1 (noto anche come Win32s). Win32s non supporto per ogni processo DLL dati direttamente così le DLL MFC deve usare l'archiviazione thread-local (TLS) le API Win32 per ottenere i dati locali di processo.

### <a name="impact-on-library-sources-additional-files"></a>Impatto sulle origini di libreria, i file aggiuntivi

L'impatto dei **AFXDLL** versione nelle intestazioni e origini di libreria di classi MFC di normale è relativamente minima. È presente un file versione speciale (AFXV_DLL. H), nonché un file di intestazione aggiuntivi (AFXDLL_. H) inclusa per le principali AFXWIN. Intestazione H. AFXDLL_. Intestazione H include il `CDynLinkLibrary` classi e altri dettagli di implementazione di entrambi `_AFXDLL` DLL di estensione MFC e delle applicazioni. AFXDLLX. Intestazione H viene fornito per la creazione di DLL estensione MFC (vedere sopra per informazioni dettagliate).

Le origini per la libreria MFC in SRC MFC regolare hanno ulteriore codice condizionale sotto il `_AFXDLL` #ifdef. Un file di origine aggiuntivi (DLLINIT. CPP) contiene il codice di inizializzazione di DLL aggiuntivo e altri glue per la versione condivisa di MFC.

Per compilare la versione condivisa di MFC, vengono forniti i file aggiuntivi. (Vedere di seguito per informazioni dettagliate su come compilare la DLL.)

- Due. I file DEF vengono utilizzati per esportare i punti di ingresso DLL MFC per il debug (MFCxxD.DEF) e (MFCxx.DEF) la versione della DLL.

- Un oggetto. File RC (MFCDLL. RC) contiene tutte le risorse MFC standard e una risorsa VERSIONINFO per la DLL.

- OGGETTO. File CLW (MFCDLL. CLW) viene fornito per consentire l'esplorazione di MFC delle classi tramite la creazione guidata classe. Nota: questa funzionalità non è specifica per la versione DLL di MFC.

### <a name="memory-management"></a>Gestione della memoria

Un'applicazione che usa MFCxx Usa un allocatore di memoria comuni fornito da MSVCRTxx.DLL, la DLL di C runtime condivisa. L'applicazione, tutte le DLL estensione MFC e anche come DLL MFC utilizzano questo allocatore di memoria condivisa. Usando una DLL condivisa per l'allocazione di memoria, le DLL MFC possono allocare memoria che viene liberata in un secondo momento dall'applicazione o viceversa. Poiché la DLL sia l'applicazione deve usare l'allocatore stesso, non si deve ignorare C++ globali **operatore new** oppure **operatore delete**. Le stesse regole si applicano al resto delle routine di allocazione della memoria di runtime C (ad esempio **malloc**, **realloc**, **gratuito**e così via).

### <a name="ordinals-and-class-declspecdllexport-and-dll-naming"></a>Numeri ordinali e classi dllexport e DLL di denominazione

Non vengono usati i `class` **dllexport** funzionalità del C++ compilatore. Al contrario, un elenco di esportazioni è incluso con le origini di libreria di classi (MFCxx.DEF e MFCxxD.DEF). Vengono esportati solo questi set selezionato di punti di ingresso (funzioni e dati). Altri simboli, ad esempio MFC implementazione privata funzioni o classi, non vengono esportate tutte le esportazioni sono eseguite dall'ordinale senza un nome di stringa della tabella nome residenti o non residenti.

Usando `class` **dllexport** potrebbe essere una valida alternativa per la creazione di DLL di dimensioni ridotte, ma in caso di una DLL di grandi dimensioni, ad esempio MFC, il valore predefinito esportazione meccanismo con efficienza e la capacità dei limiti.

Ciò significa che tutte le novità che è possibile creare dei package una grande quantità di funzionalità nella versione MFCxx. dll che è solo circa 800 KB senza compromettere la quantità esecuzione o velocità di caricamento. MFCxx sarebbe stato maggiore di 100 KB questa tecnica non fosse stata usata. Questo inoltre rende possibile l'aggiunta di punti di ingresso aggiuntivi alla fine della. File DEF per consentire il controllo delle versioni semplice senza compromettere l'efficienza di velocità e dimensioni di esportazione per ordinale. Revisioni di versione principale nella libreria di classi MFC verranno modificato il nome della libreria. Vale a dire MFC30. DLL è ridistribuibile DLL che contiene la versione 3.0 della libreria di classi MFC. Un aggiornamento di questa DLL, ad esempio, in un ipotetico 3.1 di MFC, la DLL deve essere denominata MFC31. DLL invece. Anche in questo caso, se si modifica il codice sorgente MFC per produrre una versione personalizzata della DLL MFC, usare un nome diverso (e preferibilmente senza "MFC" nel nome).

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)

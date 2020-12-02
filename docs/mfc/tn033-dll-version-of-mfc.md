---
title: 'TN033: versione DLL di MFC'
description: Viene illustrato come utilizzare le librerie a collegamento dinamico MFC condivise con applicazioni MFC e dll di estensione MFC.
ms.date: 11/30/2020
helpviewer_keywords:
- MFC DLLs [MFC], writing MFC extension DLLS
- AFXDLL library
- DLLs [MFC], MFC
- DLL version of MFC [MFC]
- TN033
ms.openlocfilehash: b9330fe7c756f962a8b06a04b840bfda343f3a49
ms.sourcegitcommit: 432c24dde31c400437c4320e8432b1ddb232f844
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/01/2020
ms.locfileid: "96440307"
---
# <a name="tn033-dll-version-of-mfc"></a>TN033: versione DLL di MFC

Questa nota descrive come usare *`MFCxx.DLL`* e *`MFCxxD.DLL`* (dove *XX* è il numero di versione MFC) le librerie a collegamento dinamico condivise con applicazioni MFC e dll di estensione MFC. Per ulteriori informazioni sulle normali DLL MFC, vedere [utilizzo di MFC come parte di una dll](../mfc/tn011-using-mfc-as-part-of-a-dll.md).

Questa nota tecnica comprende tre aspetti della dll. Le ultime due sono destinate agli utenti più avanzati:

- [Come compilare una DLL di estensione MFC](#_mfcnotes_how_to_write_an_mfc_extension_dll)

- [Modalità di compilazione di un'applicazione MFC che utilizza la versione DLL di MFC](#_mfcnotes_writing_an_application_that_uses_the_dll_version)

- [Modalità di implementazione delle librerie di collegamento dinamico condivise MFC](#_mfcnotes_how_the_mfc30.dll_is_implemented)

Se si è interessati a compilare una DLL utilizzando MFC che può essere utilizzata con applicazioni non MFC (nota come *dll MFC normale*), fare riferimento alla [Nota tecnica 11](../mfc/tn011-using-mfc-as-part-of-a-dll.md).

## <a name="overview-of-mfcxxdll-support-terminology-and-files"></a>Panoramica del supporto MFCxx.DLL: terminologia e file

**Normale DLL MFC**: si usa una normale DLL MFC per compilare una DLL autonoma usando alcune classi MFC. Le interfacce tra il limite di App/DLL sono interfacce "C" e l'applicazione client non deve essere un'applicazione MFC.

Le DLL MFC regolari sono la versione delle DLL supportate in MFC 1,0. Sono descritti nella [Nota tecnica 11](../mfc/tn011-using-mfc-as-part-of-a-dll.md) e nell'esempio MFC Advanced Concepts [`DLLScreenCap`](../overview/visual-cpp-samples.md) .

> [!NOTE]
> A partire da Visual C++ versione 4,0, il termine **USRDLL** è obsoleto ed è stato sostituito da una normale DLL MFC collegata in modo statico a MFC. È anche possibile compilare una DLL MFC normale che si collega dinamicamente a MFC.

MFC 3,0 (e versioni successive) supporta le DLL MFC regolari con tutte le nuove funzionalità, incluse le classi OLE e database.

**AFXDLL**: detta anche versione condivisa delle librerie MFC. È il nuovo supporto per le DLL aggiunto in MFC 2,0. La libreria MFC si trova in una serie di dll (descritte di seguito). Un'applicazione client o DLL collega dinamicamente le dll richieste. Le interfacce tra il limite di applicazioni e DLL sono interfacce di classe C++/MFC. L'applicazione client deve essere un'applicazione MFC. Questa DLL supporta tutte le funzionalità di MFC 3,0 (eccezione: UNICODE non è supportato per le classi di database).

> [!NOTE]
> A partire da Visual C++ versione 4,0, questo tipo di DLL viene definito "DLL di estensione".

Questa nota verrà utilizzata *`MFCxx.DLL`* per fare riferimento all'intero set di DLL MFC, che include:

- Debug: *`MFCxxD.DLL`* (combinato) e *`MFCSxxD.LIB`* (statico).

- Versione: *`MFCxx.DLL`* (combinata) e *`MFCSxx.LIB`* (statico).

- Debug Unicode: *`MFCxxUD.DLL`* (combinato) e *`MFCSxxD.LIB`* (statico).

- Versione Unicode: *`MFCxxU.DLL`* (combinata) e *`MFCSxxU.LIB`* (statico).

> [!NOTE]
> Le *`MFCSxx[U][D].LIB`* librerie vengono utilizzate insieme alle DLL condivise MFC. Queste librerie contengono codice che deve essere collegato staticamente all'applicazione o alla DLL.

Un'applicazione consente di collegarsi alle librerie di importazione corrispondenti:

- Debug *`MFCxxD.LIB`*

- Versione *`MFCxx.LIB`*

- Debug Unicode: *`MFCxxUD.LIB`*

- Versione Unicode: *`MFCxxU.LIB`*

Una *dll di estensione MFC* è una dll che estende *`MFCxx.DLL`* (o le altre DLL condivise MFC). Qui viene avviata l'architettura dei componenti MFC. Se si deriva una classe utile da una classe MFC o si compila un altro toolkit simile a MFC, è possibile inserirlo in una DLL. La DLL USA *`MFCxx.DLL`* , così come l'applicazione client Ultimate. Una DLL di estensione MFC consente le classi foglia riutilizzabili, le classi base riutilizzabili e le classi di visualizzazione e documento riutilizzabili.

## <a name="pros-and-cons"></a>Vantaggi e svantaggi

Perché usare la versione condivisa di MFC

- L'uso della libreria condivisa può comportare applicazioni di dimensioni minori. (Un'applicazione minima che utilizza la maggior parte della libreria MFC è inferiore a 10.000).

- La versione condivisa di MFC supporta le DLL di estensione MFC e le DLL MFC regolari.

- È più veloce compilare un'applicazione che usa le librerie MFC condivise rispetto a un'applicazione MFC collegata in modo statico. Questo perché non è necessario collegare MFC. Ciò vale soprattutto per le **`DEBUG`** compilazioni in cui il linker deve comprimere le informazioni di debug. Quando l'applicazione viene collegata a una DLL che contiene già le informazioni di debug, le informazioni di debug sono inferiori a Compact.

Perché non usare la versione condivisa di MFC:

- Per la distribuzione di un'applicazione che usa la libreria condivisa, è necessario distribuire *`MFCxx.DLL`* e altre librerie con il programma. *`MFCxx.DLL`* è possibile ridistribuire gratuitamente come molte dll, ma è comunque necessario installare la DLL nel programma di installazione. Inoltre, sarà necessario spedire le altre librerie ridistribuibili usate sia dal programma che dalle DLL MFC.

## <a name="how-to-write-an-mfc-extension-dll"></a><a name="_mfcnotes_how_to_write_an_mfc_extension_dll"></a> Come scrivere una DLL di estensione MFC

Una DLL di estensione MFC è una DLL che contiene classi e funzioni per espandere la funzionalità delle classi MFC. Una DLL di estensione MFC utilizza le DLL MFC condivise nello stesso modo in cui vengono utilizzate da un'applicazione, con alcune considerazioni aggiuntive:

- Il processo di compilazione è simile alla compilazione di un'applicazione che utilizza le librerie MFC condivise con alcune opzioni aggiuntive del compilatore e del linker.

- Una DLL di estensione MFC non dispone di una `CWinApp` classe derivata da.

- Una DLL di estensione MFC deve fornire una speciale `DllMain` . Creazione guidata applicazioni fornisce una `DllMain` funzione che è possibile modificare.

- Una DLL di estensione MFC fornisce normalmente una routine di inizializzazione per creare un oggetto `CDynLinkLibrary` , se la dll di estensione MFC Esporta `CRuntimeClass` tipi o risorse nell'applicazione. Una classe derivata di `CDynLinkLibrary` può essere utilizzata se i dati per applicazione devono essere gestiti dalla DLL dell'estensione MFC.

Queste considerazioni sono descritte in dettaglio di seguito. Vedere anche l'esempio MFC Advanced Concepts [`DLLHUSK`](../overview/visual-cpp-samples.md) . Viene illustrato come:

- Creare un'applicazione usando le librerie condivise. ( *`DLLHUSK.EXE`* è un'applicazione MFC che si collega dinamicamente alle librerie MFC e ad altre DLL).

- Compilare una DLL di estensione MFC. Mostra come vengono utilizzati flag speciali, ad esempio, `_AFXEXT` quando si compila una DLL di estensione MFC.

- Compilare due esempi di dll di estensione MFC. Una mostra la struttura di base di una DLL di estensione MFC con esportazioni limitate (TESTDLL1) e l'altra mostra l'esportazione di un'intera interfaccia di classe (TESTDLL2).

Sia l'applicazione client che qualsiasi DLL di estensione MFC devono usare la stessa versione di *`MFCxx.DLL`* . Seguire le convenzioni delle DLL MFC e fornire una versione di debug e di rilascio ( **`/release`** ) della DLL dell'estensione MFC. Questa procedura consente ai programmi client di compilare le versioni di debug e rilascio delle applicazioni e di collegarle alla versione di debug o di rilascio appropriata di tutte le dll.

> [!NOTE]
> Poiché i problemi relativi alla gestione e all'esportazione dei nomi C++, l'elenco di esportazione da una DLL di estensione MFC può essere diverso tra le versioni di debug e di rilascio della stessa DLL e delle stesse DLL per piattaforme diverse. La versione *`MFCxx.DLL`* contiene circa 2000 punti di ingresso esportati *`MFCxxD.DLL`* . il debug contiene circa 3000 punti di ingresso esportati.

### <a name="quick-note-on-memory-management"></a>Nota rapida sulla gestione della memoria

Nella sezione intitolata "gestione della memoria", alla fine di questa nota tecnica, viene descritta l'implementazione di *`MFCxx.DLL`* con la versione condivisa di MFC. Le informazioni necessarie per implementare solo una DLL di estensione MFC sono descritte qui.

*`MFCxx.DLL`* e tutte le DLL di estensione MFC caricate nello spazio degli indirizzi di un'applicazione client utilizzeranno lo stesso allocatore di memoria, il caricamento delle risorse e altri Stati "globali" di MFC come se si trovassero nella stessa applicazione. È significativo perché le librerie DLL non MFC e le DLL MFC regolari che si collegano in modo statico a MFC eseguono esattamente il contrario: ogni DLL alloca il proprio pool di memoria.

Se una DLL di estensione MFC alloca memoria, tale memoria può liberamente alterando con qualsiasi altro oggetto allocato dall'applicazione. Inoltre, se un'applicazione che utilizza le librerie MFC condivise si arresta in modo anomalo, il sistema operativo mantiene l'integrità di qualsiasi altra applicazione MFC che condivide la DLL.

Analogamente, gli altri Stati "globali" di MFC, ad esempio il file eseguibile corrente da cui caricare le risorse, vengono condivisi anche tra l'applicazione client, tutte le DLL di estensione MFC e *`MFCxx.DLL`* se stessa.

### <a name="building-an-mfc-extension-dll"></a>Compilazione di una DLL di estensione MFC

È possibile usare creazione guidata applicazioni per creare un progetto DLL di estensione MFC e genera automaticamente le impostazioni appropriate del compilatore e del linker. Genera inoltre una `DllMain` funzione che è possibile modificare.

Se si converte un progetto esistente in una DLL di estensione MFC, iniziare con le impostazioni standard che vengono compilate usando la versione condivisa di MFC. Apportare quindi le modifiche seguenti:

- Aggiungere **`/D_AFXEXT`** ai flag del compilatore. Nella finestra di dialogo Proprietà progetto selezionare la **C/C++**  >  categoria del **preprocessore** C/C++. Aggiungere `_AFXEXT` al campo **define Macros** , separando ognuno degli elementi con un punto e virgola.

- Rimuovere l' **`/Gy`** opzione del compilatore. Nella finestra di dialogo Proprietà progetto selezionare la **C/C++**  >  categoria **generazione codice** C/C++. Verificare che la proprietà **abilita Function-Level collegamento** non sia abilitata. Questa impostazione rende più semplice esportare le classi, perché il linker non rimuove le funzioni senza riferimenti. Se il progetto originale crea una normale DLL MFC collegata in modo statico a MFC, modificare l' **`/MT`** opzione del compilatore (o **`/MTd`** ) in **`/MD`** (o **`/MDd`** ).

- Compilare una libreria di esportazione con l' **`/DLL`** opzione per il collegamento. Questa opzione viene impostata quando si crea una nuova destinazione e si specifica Win32 Dynamic-Link Library come tipo di destinazione.

### <a name="changing-your-header-files"></a>Modifica dei file di intestazione

Il solito obiettivo di una DLL di estensione MFC è l'esportazione di alcune funzionalità comuni in una o più applicazioni che possono usare tale funzionalità. In sostanza, la DLL esporta le classi e le funzioni globali per l'uso da parte delle applicazioni client.

Per assicurarsi che ogni funzione membro venga contrassegnata per l'importazione o l'esportazione nel modo appropriato, utilizzare le dichiarazioni speciali `__declspec(dllexport)` e `__declspec(dllimport)` . Quando le applicazioni client usano le classi, si vuole che vengano dichiarate come `__declspec(dllimport)` . Quando viene compilata la DLL di estensione MFC, le funzioni devono essere dichiarate come `__declspec(dllexport)` . La DLL compilata deve anche esportare le funzioni, in modo che i programmi client possano associarle in fase di caricamento.

Per esportare l'intera classe, usare `AFX_EXT_CLASS` nella definizione della classe. Il Framework definisce questa macro come `__declspec(dllexport)` quando `_AFXDLL` e `_AFXEXT` è definito, ma lo definisce come `__declspec(dllimport)` quando `_AFXEXT` non è definito. `_AFXEXT` viene definito solo quando si compila la DLL dell'estensione MFC. Ad esempio:

```cpp
class AFX_EXT_CLASS CExampleExport : public CObject
{ /* ... class definition ... */ };
```

### <a name="not-exporting-the-entire-class"></a>Non viene esportata l'intera classe

In alcuni casi può essere utile esportare solo i singoli membri necessari della classe. Se ad esempio si esporta una `CDialog` classe derivata da, potrebbe essere necessario esportare solo il costruttore e la `DoModal` chiamata. È possibile esportare questi membri usando il file DEF della DLL, ma è anche possibile usare `AFX_EXT_CLASS` in modo molto simile nei singoli membri che è necessario esportare.

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

Quando si esegue questa operazione, è possibile che si verifichi un ulteriore problema perché non vengono esportati tutti i membri della classe. Il problema riguarda la modalità di funzionamento delle macro MFC. Diverse macro helper di MFC dichiarano effettivamente o definiscono i membri dati. La DLL deve anche esportare questi membri dati.

Ad esempio, la macro DECLARE_DYNAMIC viene definita come indicato di seguito durante la compilazione di una DLL di estensione MFC:

```cpp
#define DECLARE_DYNAMIC(class_name) \
protected: \
    static CRuntimeClass* PASCAL _GetBaseClass(); \
    public: \
    static AFX_DATA CRuntimeClass class##class_name; \
    virtual CRuntimeClass* GetRuntimeClass() const; \
```

La riga che inizia `static AFX_DATA` a dichiarare un oggetto statico all'interno della classe. Per esportare correttamente questa classe e accedere alle informazioni di runtime da un file EXE client, è necessario esportare questo oggetto statico. Poiché l'oggetto statico viene dichiarato con il modificatore `AFX_DATA` , è sufficiente definire `AFX_DATA` come `__declspec(dllexport)` quando si compila la dll. Definirlo come `__declspec(dllimport)` quando si compila il file eseguibile del client.

Come illustrato in precedenza, `AFX_EXT_CLASS` è già definito in questo modo. È sufficiente ridefinire `AFX_DATA` in modo che corrisponda alla `AFX_EXT_CLASS` definizione della classe.

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

MFC utilizza sempre il `AFX_DATA` simbolo per gli elementi di dati definiti all'interno delle macro, quindi questa tecnica funziona per tutti gli scenari di questo tipo. Ad esempio, funzionerà per DECLARE_MESSAGE_MAP.

> [!NOTE]
> Se si esporta l'intera classe anziché i membri selezionati della classe, i membri dati statici vengono esportati automaticamente.

È possibile usare la stessa tecnica per esportare automaticamente l' `CArchive` operatore di estrazione per le classi che usano le macro DECLARE_SERIAL e IMPLEMENT_SERIAL. Esportare l'operatore Archive combinando le dichiarazioni di classe (situate nel file di intestazione) con il codice seguente:

```cpp
#undef AFX_API
#define AFX_API AFX_EXT_CLASS

/* your class declarations here */

#undef AFX_API
#define AFX_API
```

### <a name="limitations-of-_afxext"></a>Limitazioni di _AFXEXT

È possibile utilizzare il `_AFXEXT` simbolo del preprocessore per le DLL di estensione MFC, purché non siano presenti più livelli di dll di estensione MFC. Se si dispone di dll di estensione MFC che chiamano o derivano dalle classi nelle DLL dell'estensione MFC, che derivano quindi dalle classi MFC, è necessario usare il simbolo del preprocessore per evitare ambiguità.

Il problema è che in Win32 è necessario dichiarare in modo esplicito i dati come `__declspec(dllexport)` per esportarli da una dll e `__declspec(dllimport)` per importarli da una dll. Quando si definisce `_AFXEXT` , le intestazioni MFC assicurano che `AFX_EXT_CLASS` sia definito correttamente.

Quando si dispone di più livelli, un simbolo come `AFX_EXT_CLASS` non è sufficiente: una DLL di estensione MFC può esportare le proprie classi e importare anche altre classi da un'altra DLL di estensione MFC. Per risolvere questo problema, utilizzare un simbolo del preprocessore speciale che indichi che si sta compilando la DLL, anziché utilizzare la DLL. Si supponga, ad esempio, che due dll di estensione MFC, *`A.DLL`* e *`B.DLL`* . Ognuno di essi Esporta alcune classi *`A.H`* rispettivamente in e *`B.H`* . *`B.DLL`* utilizza le classi da *`A.DLL`* . I file di intestazione avranno un aspetto simile al seguente:

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

Quando *`A.DLL`* viene compilato, viene compilato con **`/DA_IMPL`** e quando viene compilato, viene compilato *`B.DLL`* con **`/DB_IMPL`** . Utilizzando simboli distinti per ogni DLL, `CExampleB` viene esportato e `CExampleA` viene importato durante la compilazione *`B.DLL`* . `CExampleA` viene esportato durante la compilazione *`A.DLL`* e l'importazione quando viene usato da *`B.DLL`* o da un altro client.

Non è possibile eseguire questo tipo di sovrapposizione quando si usano i simboli predefiniti `AFX_EXT_CLASS` e del `_AFXEXT` preprocessore. La tecnica descritta sopra risolve questo problema nello stesso modo in cui avviene MFC. MFC utilizza questa tecnica quando si compilano le DLL delle estensioni OLE, database e di rete MFC.

### <a name="not-exporting-the-entire-class"></a>Non viene esportata l'intera classe

Anche in questo caso, sarà necessario prestare particolare attenzione quando non si esporta un'intera classe. Verificare che gli elementi di dati necessari creati dalle macro MFC vengano esportati correttamente. È possibile eseguire questa operazione ridefinendo `AFX_DATA` nella macro della classe specifica. Ridefinirla ogni volta che non viene esportata l'intera classe.

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

Di seguito è riportato il codice da inserire nel file di origine principale per la DLL dell'estensione MFC. Dovrebbe essere disponibile dopo l'inclusione standard. Quando si usa creazione guidata applicazioni per creare i file di avvio per una DLL di estensione MFC, fornisce un oggetto `DllMain` per l'utente.

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

La chiamata per `AfxInitExtensionModule` acquisisce le classi di runtime ( `CRuntimeClass` strutture) del modulo e le relative Object Factory ( `COleObjectFactory` oggetti) da utilizzare in un secondo momento, quando `CDynLinkLibrary` viene creato l'oggetto. La chiamata (facoltativa) a `AfxTermExtensionModule` consente a MFC di pulire la dll di estensione MFC quando ogni processo si disconnette (che si verifica quando il processo viene chiuso o quando la dll viene scaricata da una `FreeLibrary` chiamata) dalla DLL dell'estensione MFC. Poiché la maggior parte delle DLL di estensione MFC non vengono caricate dinamicamente (in genere sono collegate tramite le librerie di importazione), la chiamata a in `AfxTermExtensionModule` genere non è necessaria.

Se l'applicazione carica e libera dinamicamente dll di estensione MFC, assicurarsi di chiamare `AfxTermExtensionModule` come illustrato in precedenza. Assicurarsi inoltre di usare `AfxLoadLibrary` e `AfxFreeLibrary` (anziché le funzioni Win32 `LoadLibrary` e `FreeLibrary` ) se l'applicazione usa più thread o se carica dinamicamente una DLL di estensione MFC. `AfxLoadLibrary` `AfxFreeLibrary` Se si utilizza e si garantisce che il codice di avvio e di arresto eseguito quando la dll di estensione MFC venga caricato e scaricato non danneggi lo stato globale di MFC.

Il file di intestazione *`AFXDLLX.H`* contiene definizioni speciali per le strutture utilizzate nelle DLL di estensione MFC, ad esempio la definizione per `AFX_EXTENSION_MODULE` e `CDynLinkLibrary` .

La *ExtensionDLL* globale deve essere dichiarata come illustrato. A differenza della versione a 16 bit di MFC, è possibile allocare memoria e chiamare funzioni MFC durante questo periodo di tempo, poiché l'oggetto *`MFCxx.DLL`* viene inizializzato completamente nel momento in cui `DllMain` viene chiamato il metodo.

### <a name="sharing-resources-and-classes"></a>Condivisione di risorse e classi

Per le DLL di estensioni MFC semplici è necessario esportare solo alcune funzioni a larghezza di banda ridotta nell'applicazione client e nient'altro. Altre DLL con utilizzo intensivo dell'interfaccia utente possono voler esportare le risorse e le classi C++ nell'applicazione client.

L'esportazione delle risorse viene eseguita tramite un elenco di risorse. In ogni applicazione è un elenco di oggetti collegato singolarmente `CDynLinkLibrary` . Quando si esegue la ricerca di una risorsa, la maggior parte delle implementazioni MFC standard che caricano risorse esaminano prima di tutto il modulo della risorsa corrente ( `AfxGetResourceHandle` ) e, se non vengono trovate, l'elenco di `CDynLinkLibrary` oggetti che tentano di caricare la risorsa richiesta.

La creazione dinamica di oggetti C++ in base a un nome di classe C++ è simile. Il meccanismo di deserializzazione di oggetti MFC deve avere tutti gli `CRuntimeClass` oggetti registrati in modo che possa essere ricostruito creando dinamicamente l'oggetto C++ del tipo richiesto in base a quanto archiviato in precedenza.

Se si desidera che l'applicazione client utilizzi le classi nella DLL dell'estensione MFC `DECLARE_SERIAL` , sarà necessario esportare le classi per renderle visibili all'applicazione client. Questa operazione viene eseguita anche scorrendo l' `CDynLinkLibrary` elenco.

Nell'esempio MFC Advanced Concepts [`DLLHUSK`](../overview/visual-cpp-samples.md) l'elenco ha un aspetto simile al seguente:

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

La *`MFCxx.DLL`* voce viene in genere visualizzata per l'ultima volta nell'elenco di classi e risorse. *`MFCxx.DLL`* include tutte le risorse MFC standard, incluse le stringhe di richiesta per tutti gli ID di comando standard. Inserendola alla fine dell'elenco, sia le dll che l'applicazione client si basano sulle risorse condivise in *`MFCxx.DLL`* , anziché avere copie personalizzate.

L'Unione delle risorse e dei nomi delle classi di tutte le dll nello spazio dei nomi dell'applicazione client presenta gli svantaggi che è necessario prestare attenzione agli ID o ai nomi scelti. È possibile disabilitare questa funzionalità non esportando le risorse o un `CDynLinkLibrary` oggetto nell'applicazione client. L' [`DLLHUSK`](../overview/visual-cpp-samples.md) esempio gestisce lo spazio dei nomi delle risorse condivise usando più file di intestazione. Vedere la [Nota tecnica 35](../mfc/tn035-using-multiple-resource-files-and-header-files-with-visual-cpp.md) per altri suggerimenti sull'uso di file di risorse condivise.

### <a name="initializing-the-dll"></a>Inizializzazione della DLL

Come indicato in precedenza, in genere si vuole creare un `CDynLinkLibrary` oggetto per esportare le risorse e le classi nell'applicazione client. È necessario fornire un punto di ingresso esportato per inizializzare la DLL. Il valore minimo è una `void` routine che non accetta argomenti e non restituisce alcun valore, ma può essere qualsiasi elemento.

Se si utilizza questo approccio, ogni applicazione client che desidera utilizzare la DLL deve chiamare questa routine di inizializzazione. È anche possibile allocare questo `CDynLinkLibrary` oggetto in `DllMain` subito dopo la chiamata a `AfxInitExtensionModule` .

La routine di inizializzazione deve creare un `CDynLinkLibrary` oggetto nell'heap dell'applicazione corrente, cablato fino alle informazioni dll dell'estensione MFC. A tale scopo, è possibile definire una funzione come la seguente:

```cpp
extern "C" extern void WINAPI InitXxxDLL()
{
    new CDynLinkLibrary(extensionDLL);
}
```

Il nome della routine, *InitXxxDLL* in questo esempio, può essere qualsiasi elemento desiderato. Non è necessario **`extern "C"`** , ma rende più semplice la gestione dell'elenco di esportazione.

> [!NOTE]
> Se si utilizza la DLL dell'estensione MFC da una normale DLL MFC, è necessario esportare questa funzione di inizializzazione. Questa funzione deve essere chiamata dalla DLL MFC normale prima di utilizzare le classi o le risorse DLL dell'estensione MFC.

### <a name="exporting-entries"></a>Esportazione di voci

Il modo più semplice per esportare le classi consiste nell'usare `__declspec(dllimport)` e `__declspec(dllexport)` in ogni classe e funzione globale che si vuole esportare. È molto più semplice, ma è meno efficiente rispetto alla denominazione di ogni punto di ingresso in un file DEF, come descritto di seguito. Questo perché si ha un controllo minore sulle funzioni che vengono esportate. Non è possibile esportare le funzioni in base all'ordinale. TESTDLL1 e TESTDLL2 usano questo metodo per esportare le voci.

Un metodo più efficiente consiste nell'esportare ogni voce assegnando un nome al file DEF. Questo metodo viene utilizzato da *`MFCxx.DLL`* . Poiché l'esportazione viene eseguita in modo selettivo dalla DLL, è necessario decidere quali interfacce specifiche si desidera esportare. È difficile, dal momento che è necessario specificare i nomi alterati per il linker sotto forma di voci nel file DEF. Non esportare alcuna classe C++, a meno che non sia effettivamente necessario avere un collegamento simbolico.

Se si è tentato di esportare le classi C++ con un file DEF prima, è possibile sviluppare uno strumento per generare automaticamente questo elenco. Per eseguire questa operazione, è possibile usare un processo di collegamento a due fasi. Collegare la DLL una volta senza esportazioni e consentire al linker di generare un file di mappa. Il file di mapping contiene un elenco di funzioni che devono essere esportate. Con alcuni riarrangiamenti, è possibile usarlo per generare le voci di esportazione per il file DEF. L'elenco di esportazione per *`MFCxx.DLL`* e le DLL dell'estensione MFC OLE e database, diverse migliaia di numeri, è stato generato con un processo di questo tipo (sebbene non sia completamente automatico e richiede un'ottimizzazione manuale ogni volta).

### <a name="cwinapp-vs-cdynlinklibrary"></a>CWinApp rispetto a CDynLinkLibrary

Una DLL di estensione MFC non dispone `CWinApp` di un oggetto derivato da. Deve invece funzionare con l' `CWinApp` oggetto derivato da dell'applicazione client. Indica che l'applicazione client è proprietaria del pump principale del messaggio, del ciclo inattivo e così via.

Se la DLL di estensione MFC deve gestire dati aggiuntivi per ogni applicazione, è possibile derivare una nuova classe da `CDynLinkLibrary` e crearla nella `InitXxxDLL` routine descritta sopra. Quando è in esecuzione, la DLL può controllare l'elenco di oggetti dell'applicazione corrente `CDynLinkLibrary` per trovare quello per la specifica dll di estensione MFC.

### <a name="using-resources-in-your-dll-implementation"></a>Uso delle risorse nell'implementazione della DLL

Come indicato in precedenza, il carico di risorse predefinito produrrà l'elenco di `CDynLinkLibrary` oggetti che cercano il primo file exe o dll con la risorsa richiesta. Tutte le API MFC e tutto il codice interno usano `AfxFindResourceHandle` per esaminare l'elenco di risorse per trovare qualsiasi risorsa, indipendentemente dalla posizione.

Se si desidera caricare solo le risorse da una posizione specifica, utilizzare le API `AfxGetResourceHandle` e `AfxSetResourceHandle` salvare il vecchio handle e impostare il nuovo handle. Assicurarsi di ripristinare il vecchio handle di risorsa prima di tornare all'applicazione client. Il TESTDLL2 di esempio usa questo approccio per il caricamento esplicito di un menu.

La visualizzazione dell'elenco presenta alcuni svantaggi: è leggermente più lenta e richiede la gestione degli intervalli di ID risorsa. Il vantaggio è che un'applicazione client che si collega a diverse DLL di estensione MFC può utilizzare qualsiasi risorsa fornita dalla DLL senza dover specificare l'handle dell'istanza della DLL. `AfxFindResourceHandle` è un'API usata per scorrere l'elenco di risorse per cercare una corrispondenza specificata. Accetta il nome e il tipo di una risorsa e restituisce l'handle di risorsa in cui viene individuata per la prima volta la risorsa o NULL.

## <a name="writing-an-application-that-uses-the-dll-version"></a><a name="_mfcnotes_writing_an_application_that_uses_the_dll_version"></a> Scrittura di un'applicazione che utilizza la versione DLL

### <a name="application-requirements"></a>Requisiti delle applicazioni

Un'applicazione che utilizza la versione condivisa di MFC deve seguire alcune regole di base:

- Deve avere un `CWinApp` oggetto e seguire le regole standard per un message pump.

- Deve essere compilato con un set di flag del compilatore richiesti (vedere di seguito).

- Deve essere collegato con le librerie di importazione MFCxx. Impostando i flag del compilatore richiesti, le intestazioni MFC determinano in fase di collegamento la libreria con cui l'applicazione deve essere collegata.

- Per eseguire il file eseguibile, *`MFCxx.DLL`* deve trovarsi nel percorso o nella directory di sistema di Windows.

### <a name="building-with-the-development-environment"></a>Compilazione con l'ambiente di sviluppo

Se si usa il makefile interno con la maggior parte delle impostazioni predefinite standard, è possibile modificare facilmente il progetto per compilare la versione della DLL.

Il passaggio seguente presuppone che si disponga di un'applicazione MFC funzionante correttamente collegata a *`NAFXCWD.LIB`* (per il debug) e *`NAFXCW.LIB`* (per la versione) e che si desideri convertirla in modo da utilizzare la versione condivisa della libreria MFC. Si sta eseguendo l'ambiente di Visual Studio e si dispone di un file di progetto interno.

1. Scegliere **Proprietà** dal menu **progetti** . Nella pagina **generale** in **impostazioni predefinite progetto** impostare Microsoft Foundation Classes per **l'utilizzo di MFC in una DLL condivisa** (MFCxx (d). dll).

### <a name="building-with-nmake"></a>Compilazione con NMAKE

Se si usa la funzionalità makefile esterna del compilatore o si usa direttamente NMAKE, sarà necessario modificare il makefile per supportare le opzioni del compilatore e del linker richieste.

Flag del compilatore necessari:

- **`/D_AFXDLL /MD`**
  **`/D_AFXDLL`**

Per le intestazioni MFC standard `_AFXDLL` è necessario definire il simbolo.

- **`/MD`** L'applicazione deve usare la versione DLL della libreria di runtime C.

Tutti gli altri flag del compilatore seguono le impostazioni predefinite di MFC, ad esempio `_DEBUG` per il debug.

Modificare l'elenco di librerie del linker. Modificare *`NAFXCWD.LIB`* in *`MFCxxD.LIB`* e modificare *`NAFXCW.LIB`* in *`MFCxx.LIB`* . Sostituire *`LIBC.LIB`* con *`MSVCRT.LIB`* . Come per qualsiasi altra libreria MFC, è importante che *`MFCxxD.LIB`* venga posizionata **prima** di tutte le librerie di runtime C.

Facoltativamente, aggiungere le **`/D_AFXDLL`** Opzioni del compilatore di risorse di versione e di debug (quella che compila effettivamente le risorse con **`/R`** ). Questa opzione rende il file eseguibile finale più piccolo condividendo le risorse presenti nelle DLL MFC.

Dopo aver apportato queste modifiche, è necessaria una ricompilazione completa.

### <a name="building-the-samples"></a>Compilazione degli esempi

La maggior parte dei programmi di esempio MFC può essere compilata da Visual C++ o da un MAKEFILE condiviso compatibile con NMAKE dalla riga di comando.

Per convertire uno di questi esempi da usare *`MFCxx.DLL`* , è possibile caricare il file MAK nel Visual C++ e impostare le opzioni del progetto come descritto in precedenza. Se si usa la compilazione NMAKE, è possibile specificare `AFXDLL=1` nella riga di comando NMAKE e che compilerà l'esempio usando le librerie MFC condivise.

L'esempio MFC Advanced Concepts [DLLHUSK](../overview/visual-cpp-samples.md) è compilato con la versione DLL di MFC. In questo esempio non solo viene illustrato come compilare un'applicazione collegata con *`MFCxx.DLL`* , ma vengono illustrate anche altre funzionalità dell'opzione per la creazione di pacchetti DLL MFC, ad esempio le DLL dell'estensione MFC descritte più avanti in questa nota tecnica.

### <a name="packaging-notes"></a>Note sul packaging

Le versioni di rilascio delle dll ( *`MFCxx.DLL`* e *`MFCxxU.DLL`* ) sono liberamente ridistribuibili. Le versioni di debug delle dll non sono liberamente ridistribuibili e devono essere usate solo durante lo sviluppo dell'applicazione.

Le DLL di debug sono fornite con le informazioni di debug. Utilizzando il debugger Visual C++ è possibile tracciare l'esecuzione dell'applicazione e della DLL. Le DLL di versione ( *`MFCxx.DLL`* e *`MFCxxU.DLL`* ) non contengono informazioni di debug.

Se si personalizzano o ricompilano le dll, è necessario chiamarle a un valore diverso da "MFCxx". Il file SRC MFC *`MFCDLL.MAK`* descrive le opzioni di compilazione e contiene la logica per rinominare la dll. La ridenominazione dei file è necessaria, poiché queste dll sono potenzialmente condivise da numerose applicazioni MFC. Se la versione personalizzata delle DLL MFC sostituisce quelle installate nel sistema, è possibile che un'altra applicazione MFC venga interrotta utilizzando le DLL MFC condivise.

Non è consigliabile ricompilare le DLL MFC.

## <a name="how-the-mfcxxdll-is-implemented"></a><a name="_mfcnotes_how_the_mfc30.dll_is_implemented"></a> Modalità di implementazione dell'MFCxx.DLL

Nella sezione seguente viene descritto il modo in cui *`MFCxx.DLL`* viene implementata la DLL MFC (e *`MFCxxD.DLL`* ). La comprensione dei dettagli qui non è importante se si vuole usare la DLL MFC con l'applicazione. I dettagli qui non sono essenziali per comprendere come scrivere una DLL di estensione MFC, ma la comprensione di questa implementazione può essere utile per scrivere la propria DLL.

### <a name="implementation-overview"></a>Panoramica dell'implementazione

La DLL MFC è davvero un caso speciale di una DLL di estensione MFC, come descritto in precedenza. Il numero di esportazioni per un numero elevato di classi è elevato. Nella DLL MFC sono presenti alcuni aspetti aggiuntivi che lo rendono ancora più speciale rispetto a una normale DLL di estensione MFC.

### <a name="win32-does-most-of-the-work"></a>La maggior parte del lavoro viene eseguita da Win32

Per la versione a 16 bit di MFC è necessaria una serie di tecniche speciali, tra cui dati per app nel segmento dello stack, segmenti speciali creati da un codice Assembly 80x86, contesti di eccezioni per processo e altre tecniche. Win32 supporta direttamente i dati per processo in una DLL, ovvero ciò che si desidera per la maggior parte del tempo. Per la maggior parte *`MFCxx.DLL`* è sufficiente creare *`NAFXCW.LIB`* un pacchetto in una dll. Se esaminiamo il codice sorgente MFC, troverai pochi `#ifdef _AFXDLL` casi, perché non ci sono molti casi speciali che devono essere eseguiti. I casi speciali sono specifici per gestire Win32 in Windows 3,1 (altrimenti noto come Win32s). Win32s non supporta direttamente i dati DLL per processo. Per ottenere i dati locali del processo, la DLL MFC deve usare le API Win32 di archiviazione locale di thread (TLS).

### <a name="impact-on-library-sources-additional-files"></a>Effetti sulle origini libreria, file aggiuntivi

L'effetto della `_AFXDLL` versione sulle normali origini e intestazioni della libreria di classi MFC è relativamente minore. È disponibile un file di versione speciale ( *`AFXV_DLL.H`* ) e un file di intestazione aggiuntivo ( *`AFXDLL_.H`* ) incluso nell' *`AFXWIN.H`* intestazione principale. L' *`AFXDLL_.H`* intestazione include la `CDynLinkLibrary` classe e altri dettagli di implementazione delle `_AFXDLL` applicazioni e delle DLL di estensione MFC. L' *`AFXDLLX.H`* intestazione viene fornita per la creazione di dll di estensione MFC (vedere sopra per informazioni dettagliate).

Le origini regolari per la libreria MFC in MFC SRC contengono codice condizionale aggiuntivo sotto la `_AFXDLL` #ifdef. Un file di origine aggiuntivo ( *`DLLINIT.CPP`* ) contiene il codice di inizializzazione della dll aggiuntivo e altro colla per la versione condivisa di MFC.

Per compilare la versione condivisa di MFC, vengono forniti file aggiuntivi. (Vedere di seguito per informazioni dettagliate su come compilare la DLL).

- Per esportare i punti di ingresso DLL MFC per *`MFCxxD.DEF`* le versioni di debug () e Release ( *`MFCxx.DEF`* ) della dll vengono utilizzati due file def.

- Un file RC ( *`MFCDLL.RC`* ) contiene tutte le risorse MFC standard e una `VERSIONINFO` risorsa per la dll.

- Viene fornito un file CLW ( *`MFCDLL.CLW`* ) per consentire l'esplorazione delle classi MFC usando ClassWizard. Questa funzionalità non è particolare per la versione DLL di MFC.

### <a name="memory-management"></a>Gestione della memoria

Un'applicazione che usa *`MFCxx.DLL`* Usa un allocatore di memoria comune fornito da *`MSVCRTxx.DLL`* , la dll di runtime C condivisa. L'applicazione, qualsiasi DLL di estensione MFC e le DLL MFC utilizzano questo allocatore di memoria condivisa. Utilizzando una DLL condivisa per l'allocazione di memoria, le DLL MFC possono allocare memoria che verrà successivamente liberata dall'applicazione o viceversa. Poiché sia l'applicazione che la DLL devono usare lo stesso allocatore, non è necessario eseguire l'override di C++ Global **`operator new`** o **`operator delete`** . Le stesse regole si applicano al resto delle routine di allocazione della memoria di runtime del linguaggio C (ad esempio `malloc` ,, `realloc` `free` e altri).

### <a name="ordinals-and-class-__declspecdllexport-and-dll-naming"></a>Numeri ordinali e __declspec di classe (dllexport) e nome di DLL

Non usiamo la `class` **`__declspec(dllexport)`** funzionalità del compilatore C++. Viene invece incluso un elenco di esportazioni con le origini della libreria di classi ( *`MFCxx.DEF`* e *`MFCxxD.DEF`* ). Viene esportato solo un set selezionato di punti di ingresso (funzioni e dati). Altri simboli, ad esempio le classi o le funzioni di implementazione privata MFC, non vengono esportati. Tutte le esportazioni vengono eseguite in base al numero ordinale senza nome di stringa nella tabella dei nomi residente o non residente.

`class` **`__declspec(dllexport)`** L'utilizzo di può essere un'alternativa valida per la creazione di dll più piccole, ma in una DLL di grandi dimensioni come MFC, il meccanismo di esportazione predefinito presenta limiti di efficienza e capacità.

Ciò significa che è possibile creare un pacchetto di una grande quantità di funzionalità nella versione *`MFCxx.DLL`* solo per circa 800 KB senza compromettere molto l'esecuzione o la velocità di caricamento. *`MFCxx.DLL`* sarebbero stati 100 KB di dimensioni maggiori se questa tecnica non è stata usata. La tecnica rende possibile l'aggiunta di punti di ingresso aggiuntivi alla fine del file DEF. Consente il controllo delle versioni semplice senza compromettere la velocità e l'efficienza delle dimensioni dell'esportazione in base al numero ordinale. Le revisioni della versione principale nella libreria di classi MFC modificheranno il nome della libreria. Ovvero *`MFC30.DLL`* la dll ridistribuibile che contiene la versione 3,0 della libreria di classi MFC. Un aggiornamento di questa DLL, ad dirsi, in un ipotetico MFC 3,1, la DLL verrebbe *`MFC31.DLL`* invece denominata. Anche in questo caso, se si modifica il codice sorgente MFC per produrre una versione personalizzata della DLL MFC, usare un nome diverso (e preferibilmente uno senza "MFC" nel nome).

## <a name="see-also"></a>Vedi anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)

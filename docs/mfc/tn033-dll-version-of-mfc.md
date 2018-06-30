---
title: 'TN033: Versione DLL di MFC | Documenti Microsoft'
ms.custom: ''
ms.date: 06/28/2018
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.mfc.dll
dev_langs:
- C++
helpviewer_keywords:
- MFC DLLs [MFC], writing MFC extension DLLS
- AFXDLL library
- DLLs [MFC], MFC
- DLL version of MFC [MFC]
- TN033
ms.assetid: b6f1080b-b66b-4b1e-8fb1-926c5816392c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c47f7888c2801af4dae1a181e4eb836dde4feaaa
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37123006"
---
# <a name="tn033-dll-version-of-mfc"></a>TN033: versione DLL di MFC

In questa nota viene descritto come è possibile utilizzare il MFCxx. dll e MFCxxD. dll (dove x è il numero di versione MFC) librerie a collegamento dinamico condivise con applicazioni MFC e DLL di estensione MFC. Per ulteriori informazioni sulle DLL regolari MFC, vedere [utilizzo di MFC come parte di una DLL](../mfc/tn011-using-mfc-as-part-of-a-dll.md).

In questa nota tecnica vengono illustrati tre aspetti delle DLL. Le ultime due sono per gli utenti più avanzati:

- [Come si compila una DLL di estensione MFC](#_mfcnotes_how_to_write_an_mfc_extension_dll)

- [Come si compila un'applicazione MFC che utilizza la versione DLL di MFC](#_mfcnotes_writing_an_application_that_uses_the_dll_version)

- [Modalità di condivisione delle librerie a collegamento dinamico MFC vengono implementati](#_mfcnotes_how_the_mfc30.dll_is_implemented)

Se si è interessati alla creazione di una DLL tramite MFC che può essere usato con le applicazioni non MFC (si tratta di una DLL regolare MFC), fare riferimento a [Nota tecnica 11](../mfc/tn011-using-mfc-as-part-of-a-dll.md).

## <a name="overview-of-mfcxxdll-support-terminology-and-files"></a>Panoramica del supporto MFCxx. dll: la terminologia e i file

**DLL regolare MFC**: utilizzare una DLL regolare MFC per creare una DLL autonoma utilizzando alcune delle classi MFC. Interfacce attraverso il limite dell'App/DLL sono interfacce "C" e l'applicazione client non deve essere un'applicazione MFC.

Si tratta della versione del supporto DLL in MFC 1.0 è supportata. Viene descritto in [Nota tecnica 11](../mfc/tn011-using-mfc-as-part-of-a-dll.md) e l'esempio di concetti avanzati MFC [DLLScreenCap](../visual-cpp-samples.md).

> [!NOTE]
> A partire da Visual C++ versione 4.0, il termine **USRDLL** è obsoleta ed è stata sostituita da una DLL MFC regolare che collega in modo statico a MFC. È anche possibile compilare una normale DLL MFC collegata in modo dinamico a MFC.

MFC 3.0 (e versioni successive) supporta DLL regolari MFC con tutte le nuove funzionalità incluse le classi OLE e il Database.

**AFXDLL**: questo è detta anche la versione delle librerie MFC condivisa. Questo è il nuovo supporto DLL aggiunto MFC 2.0. La stessa libreria MFC è un numero di DLL (descritte di seguito) e un'applicazione client o una DLL collegata in modo dinamico le DLL che lo richiede. Interfacce attraverso il limite dell'applicazione o DLL sono C + + interfacce delle classi MFC. L'applicazione client deve essere un'applicazione MFC. Sono supportate tutte le funzionalità di MFC 3.0 (eccezione: UNICODE non è supportata per le classi di database).

> [!NOTE]
> A partire da Visual C++ versione 4.0, questo tipo di DLL è considerato una "DLL di estensione."

In questa nota utilizzerà MFCxx. dll per fare riferimento all'intero set di DLL MFC, che include:

- Debug: MFCxxD. dll (combinati) e MFCSxxD.LIB (statico).

- Versione: MFCxx. dll (combinati) e MFCSxx.LIB (statico).

- Unicode Debug: MFCxxUD.DLL (combinati) e MFCSxxD.LIB (statico).

- Versione Unicode: MFCxxU.DLL (combinati) e MFCSxxU.LIB (statico).

> [!NOTE]
> MFCSxx [U] [D]. LIB sono utilizzate combinazione con l'operazione MFC DLL condivise. Queste librerie contengono codice che deve essere collegato staticamente all'applicazione o DLL.

Un'applicazione include collegamenti ad le librerie di importazione corrispondente:

- Eseguire il debug: MFCxxD.LIB

- Versione: MFCxx.LIB

- Debug Unicode: MFCxxUD.LIB

- Versione Unicode: MFCxxU.LIB

Una "DLL di estensione MFC" è un file DLL compilata in base MFCxx. dll (e/o di altri MFC DLL condivise). In questo caso l'architettura dei componenti MFC interviene. Se si deriva una classe utile da una classe MFC o compilare toolkit MFC simile a un altro, è possibile inserirlo in una DLL. Che DLL utilizza MFCxx. dll, come l'applicazione client ultimate. Ciò consente foglia riutilizzabili classi, classi base riutilizzabili e le classi documento/visualizzazione riutilizzabili.

## <a name="pros-and-cons"></a>I vantaggi e svantaggi

Motivo per cui si deve essere usata la versione condivisa di MFC

- Utilizzo della libreria condivisa può comportare le applicazioni più piccole (un'applicazione minimo che utilizza la maggior parte della libreria MFC è minore di 10 KB).

- La versione condivisa di MFC supporta le DLL di estensione MFC e DLL regolari MFC.

- Compilazione di un'applicazione che utilizza le librerie MFC condivise è più veloce rispetto alla creazione di un'applicazione MFC collegata in modo statico perché non è necessario collegare la libreria MFC se stesso. Ciò vale soprattutto nei **DEBUG** compilazioni in cui il linker deve comprimere le informazioni di debug, ovvero mediante il collegamento con una DLL che già contiene le informazioni di debug, è meno informazioni di debug per compattare all'interno dell'applicazione.

Perché è non consigliabile utilizzare la versione di MFC condivisa:

- Un'applicazione che utilizza la libreria condivisa di spedizione richiede che si effettua la spedizione MFCxx (e altri) libreria con il programma. MFCxx. dll può essere ridistribuito gratuitamente, ad esempio tutte le DLL, ma è comunque necessario installare la DLL nel programma di installazione. Inoltre, è necessario spedire MSVCRTxx.DLL, che contiene la libreria di runtime C che viene utilizzata sia per il programma e le DLL MFC.

##  <a name="_mfcnotes_how_to_write_an_mfc_extension_dll"></a> Come scrivere una DLL di estensione MFC

Una DLL di estensione MFC è una DLL che contiene classi e funzioni scritte per arricchire le funzionalità delle classi MFC. Una DLL di estensione MFC Usa le DLL MFC condivisa nello stesso modo che un'applicazione utilizza, con alcune considerazioni aggiuntive:

- Il processo di compilazione è simile alla compilazione di un'applicazione che utilizza le librerie MFC condivise con alcuni ulteriore opzioni del compilatore e del linker.

- Non dispone di una DLL di estensione MFC un `CWinApp`-classe derivata.

- Una DLL di estensione MFC deve fornire una speciale `DllMain`. La creazione guidata applicazione fornisce un `DllMain` funzione che è possibile modificare.

- Una DLL di estensione MFC in genere fornirà una routine di inizializzazione per creare una `CDynLinkLibrary` se l'estensione MFC DLL si desidera esportare `CRuntimeClass`es o risorse per l'applicazione. Una classe derivata di `CDynLinkLibrary` può essere utilizzata se i dati per ogni applicazione devono essere gestiti dalla DLL di estensione MFC.

Queste considerazioni sono descritti in dettaglio più avanti. È necessario inoltre fare riferimento all'esempio di concetti avanzati MFC [DLLHUSK](../visual-cpp-samples.md) poiché viene illustrato:

- Compilazione di un'applicazione mediante le librerie condivise. (DLLHUSK. File EXE è un'applicazione MFC che collega in modo dinamico alle librerie MFC anche altre DLL).

- Compilazione di una DLL di estensione MFC. (Si noti, ad esempio i flag speciali `_AFXEXT` che vengono utilizzate nella compilazione di una DLL di estensione MFC)

- Due esempi di DLL estensione MFC. Uno viene illustrata la struttura di base di una DLL di estensione MFC con le esportazioni limitate (TESTDLL1) e altri illustrato nell'esportazione di un'interfaccia di classe per intero (TESTDLL2).

L'applicazione client e le DLL di estensione MFC devono utilizzare la stessa versione di MFCxx. dll. È necessario seguire la convenzione di DLL MFC e fornire un debug e di vendita al dettaglio (/Release) versione della DLL di estensione MFC. In tal modo i programmi client per compilare le versioni di debug e di vendita al dettaglio delle applicazioni e collegarli con il debug appropriato o una versione definitiva di tutte le DLL.

> [!NOTE]
>  Poiché C++ nome alterazione ed esportare i problemi, l'elenco di esportazione da DLL estensione MFC potrebbe essere diverso tra le DLL e versioni di debug e finale della stessa DLL per le diverse piattaforme. Vendita al dettaglio MFCxx. dll è circa 2000 esportato i punti di ingresso; il debug MFCxxD. dll è circa 3000 esportato i punti di ingresso.

### <a name="quick-note-on-memory-management"></a>Nota la gestione della memoria

La sezione "Gestione della memoria," verso la fine di questa nota tecnica viene descritta l'implementazione di MFCxx con la versione condivisa di MFC. Le informazioni necessarie implementare semplicemente un'estensione MFC che DLL è descritta di seguito.

MFCxx. dll e tutte le DLL di estensione MFC caricate nello spazio degli indirizzi di un'applicazione client utilizzerà l'allocatore di memoria stesso, il caricamento delle risorse e gli altri stati "globali" MFC come se fossero nella stessa applicazione. Questo è importante perché le librerie di DLL non MFC e DLL regolari MFC che il collegamento statico a MFC non l'esatto opposto e avere ogni allocazione DLL fuori il proprio pool di memoria.

Se una DLL di estensione MFC alloca la memoria, che la memoria può combinare liberamente con qualsiasi altro oggetto allocato dall'applicazione. Inoltre, se si blocca un'applicazione che utilizza le librerie MFC condivise, la protezione del sistema operativo manterrà l'integrità di qualsiasi altra applicazione MFC che condivide la DLL.

Allo stesso modo altri stati MFC "globali", ad esempio il file eseguibile corrente per caricare le risorse, vengono condivisi tra l'applicazione client e tutte le DLL di estensione MFC, nonché MFCxx. DLL stessa.

### <a name="building-an-mfc-extension-dll"></a>La creazione di una DLL di estensione MFC

È possibile utilizzare la creazione guidata applicazione per creare un progetto DLL estensione MFC e verrà automaticamente generato il compilatore appropriato e le impostazioni del linker. Era inoltre generare un `DllMain` funzione che è possibile modificare.

Se si converte un progetto esistente in una DLL di estensione MFC, iniziare con le regole standard per la compilazione di un'applicazione utilizzando la versione condivisa di MFC, quindi eseguire le operazioni seguenti:

- Aggiungere **/D_AFXEXT** ai flag del compilatore. Nella finestra di dialogo proprietà del progetto, selezionare il nodo C/C++. Quindi selezionare la categoria per il preprocessore. Aggiungere `_AFXEXT` e il campo di definire le macro, separando ciascuno degli elementi con un punto e virgola.

- Rimuovere il **/Gy** opzione del compilatore. Nella finestra di dialogo proprietà del progetto, selezionare il nodo C/C++. Quindi selezionare la categoria di generazione del codice. Verificare che l'opzione "Abilita il collegamento a livello di funzione" non è abilitato. Ciò rende più semplice esportare classi perché il linker non rimuoverà funzioni senza riferimenti. Se il progetto originale viene utilizzato per compilare una normale DLL MFC collegamento statico a MFC, modifica il **/MT [d]** dell'opzione del compilatore **/MD [d]**.

- Compilare una libreria di esportazione con la **/DLL** opzione al collegamento. Questo verrà impostato quando si crea una nuova destinazione, libreria a collegamento dinamico Win32 che specifica come il tipo di destinazione.

### <a name="changing-your-header-files"></a>Modifica i file di intestazione

L'obiettivo di una DLL di estensione MFC è solitamente esportare alcune funzionalità comuni per uno o più applicazioni che possono utilizzare tale funzionalità. Ciò si riduce alla esportazione di classi e funzioni globali disponibili per le applicazioni client.

Per eseguire questa operazione è necessario assicurarsi che tutte le funzioni membro viene contrassegnato come importare o esportare come appropriato. Ciò richiede che le dichiarazioni speciali: `__declspec(dllexport)` e `__declspec(dllimport)`. Quando le classi vengono utilizzate dalle applicazioni client, si desidera possano essere dichiarati come `__declspec(dllimport)`. Quando viene compilato l'estensione MFC DLL stessa, deve essere dichiarati come `__declspec(dllexport)`. Inoltre, le funzioni devono essere effettivamente esportate, in modo che i programmi client associare ad essi in fase di caricamento.

Per esportare l'intera classe, utilizzare `AFX_EXT_CLASS` nella definizione della classe. Questa macro viene definita dal framework come `__declspec(dllexport)` quando `_AFXDLL` e `_AFXEXT` viene definito, ma viene definito come `__declspec(dllimport)` quando `_AFXEXT` non è definito. `_AFXEXT` come descritto in precedenza, viene definita solo quando si compila la DLL di estensione MFC. Ad esempio:

```cpp
class AFX_EXT_CLASS CExampleExport : public CObject
{ /* ... class definition ... */ };
```

### <a name="not-exporting-the-entire-class"></a>Non esportare l'intera classe

In alcuni casi è possibile esportare solo i singoli membri necessari della classe. Ad esempio, se si sta esportando un `CDialog`-derivata, si potrebbe essere necessario solo esportare il costruttore e il `DoModal` chiamare. È possibile esportare questi membri tramite la DLL. File DEF, ma è anche possibile usare `AFX_EXT_CLASS` in modo molto simile nei singoli membri è necessario esportare.

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

Quando si esegue questa operazione, è possibile eseguire un problema perché non si siano esportando tutti i membri della classe. Il problema è in modo che funzionano di macro MFC. Molte delle macro di supporto di MFC effettivamente dichiarare o definire membri dati. Di conseguenza, questi membri dati saranno inoltre necessario essere esportate dalla DLL di.

DECLARE_DYNAMIC (macro), ad esempio, è definito come indicato di seguito quando si compila una DLL di estensione MFC:

```cpp
#define DECLARE_DYNAMIC(class_name) \
protected: \
    static CRuntimeClass* PASCAL _GetBaseClass(); \
    public: \
    static AFX_DATA CRuntimeClass class##class_name; \
    virtual CRuntimeClass* GetRuntimeClass() const; \

```

La riga che inizia con "statici `AFX_DATA`" dichiara un oggetto statico all'interno della classe. Per esportare correttamente questa classe e accedere alle informazioni di runtime da un client. EXE, è necessario esportare questo oggetto statico. Poiché l'oggetto statico viene dichiarato con il modificatore `AFX_DATA`, è sufficiente definire `AFX_DATA` essere `__declspec(dllexport)` quando si compila la DLL e definirlo come `__declspec(dllimport)` quando si compila il file eseguibile del client.

Come illustrato in precedenza, `AFX_EXT_CLASS` è già definito in questo modo. È necessario ridefinire `AFX_DATA` corrispondere al `AFX_EXT_CLASS` intorno alla definizione della classe.

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

MFC utilizza sempre il `AFX_DATA` simbolo per elementi di dati viene definita all'interno delle macro, pertanto questa tecnica funziona per tutti gli scenari di questo tipo. Ad esempio, funzionerà per DECLARE_MESSAGE_MAP.

> [!NOTE]
> Se si sta esportando l'intera classe anziché i membri selezionati della classe, i membri dati statici vengono automaticamente esportati.

È possibile utilizzare la stessa tecnica per l'esportazione automatica di `CArchive` operatore di estrazione per le classi che utilizzano le macro DECLARE_SERIAL e IMPLEMENT_SERIAL. Per esportare l'operatore di archivio, che raggruppano le dichiarazioni di classe (che si trova nel. File H) con il codice seguente:

```cpp
#undef AFX_API
#define AFX_API AFX_EXT_CLASS

/* your class declarations here */

#undef AFX_API
#define AFX_API
```

### <a name="limitations-of-afxext"></a>Limitazioni di AFXEXT

È possibile utilizzare il _**AFXEXT** simbolo del preprocessore per l'estensione MFC DLL fino a quando non si dispone di più livelli di DLL di estensione MFC. Se si dispone di MFC DLL di estensione che chiamano o derivano dalle classi MFC un'estensione personalizzata le DLL, che quindi derivano dalle classi MFC, è necessario utilizzare il proprio simbolo del preprocessore per evitare ambiguità.

Il problema è che in Win32, è necessario dichiarare in modo esplicito tutti i dati come `__declspec(dllexport)` se è possibile esportare da una DLL e `__declspec(dllimport)` se deve essere importato da una DLL. Quando si definisce `_AFXEXT`, le intestazioni MFC assicurarsi che `AFX_EXT_CLASS` sia definito correttamente.

Quando si dispone di più livelli, un simbolo, ad esempio `AFX_EXT_CLASS` non è sufficiente, poiché una DLL di estensione MFC può essere esportare nuove classi, nonché importare altre classi da un'altra DLL di estensione MFC. Per risolvere questo problema, utilizzare un simbolo del preprocessore speciale che indica che si compila la DLL piuttosto che utilizzare il file DLL. Si supponga, ad esempio, due DLL di estensione MFC e DLL, DLL. Ognuna di esse Esporta alcune classi nella h e h, rispettivamente. B. dll utilizza le classi dalla DLL. I file di intestazione avrà un aspetto simile al seguente:

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

DLL viene compilata con **/DA_IMPL** e DLL viene compilata con **/DB_IMPL**. Utilizzando simboli distinti per ogni DLL, CExampleB viene esportato e CExampleA viene importato quando si compila una DLL. CExampleA viene esportato quando si compila una DLL e importato quando viene utilizzato dalla DLL (o un altro client).

Questo tipo di sovrapposizione non può essere eseguito quando si utilizza l'elemento predefinito `AFX_EXT_CLASS` e `_AFXEXT` simboli del preprocessore. La tecnica sopra descritta risolve questo problema in modo non diversamente da quanto accade che il meccanismo di MFC Usa quando si compila la DLL di estensione OLE, il Database e MFC di rete.

### <a name="not-exporting-the-entire-class"></a>Non esportare l'intera classe

Anche in questo caso è necessario prestare particolare attenzione quando non si esporta un'intera classe. È necessario assicurarsi che gli elementi di dati necessari create dalle macro MFC vengono esportati correttamente. Questa operazione può essere eseguita definendo nuovamente `AFX_DATA` macro della classe specifica. Questa operazione deve essere eseguita ogni volta che si sta esportando non l'intera classe.

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

Di seguito è esattamente il codice che è necessario inserire nel file di origine principale per la DLL di estensione MFC. Deve disporre di una volta lo standard include. Si noti che quando si usa la creazione guidata applicazione per creare file di avvio per una DLL di estensione MFC, fornisce un `DllMain` automaticamente.

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

La chiamata a `AfxInitExtensionModule` acquisisce le classi di runtime moduli (`CRuntimeClass` strutture), nonché le object factory (`COleObjectFactory` oggetti) per l'utilizzo in seguito quando la `CDynLinkLibrary` oggetto viene creato. La chiamata (facoltativa) per `AfxTermExtensionModule` consente MFC per eseguire la pulizia DLL di estensione MFC quando ogni processo si disconnette (situazione che si verifica quando il processo viene chiuso o quando la DLL viene scaricata in seguito a un `FreeLibrary` chiamare) dalla DLL di estensione MFC. Poiché la maggior parte delle estensioni MFC DLL non sono caricate in modo dinamico (in genere, questi elementi sono collegati tramite le librerie di importazione), la chiamata a `AfxTermExtensionModule` non è in genere necessario.

Se l'applicazione carica e libera le DLL di estensione MFC in modo dinamico, assicurarsi di chiamare `AfxTermExtensionModule` come illustrato in precedenza. È inoltre necessario assicurarsi di utilizzare `AfxLoadLibrary` e `AfxFreeLibrary` (anziché funzioni Win32 `LoadLibrary` e `FreeLibrary`) se l'applicazione usa più thread o se viene caricato in modo dinamico una DLL di estensione MFC. Utilizzo `AfxLoadLibrary` e `AfxFreeLibrary` si assicura che il codice di avvio e di chiusura che viene eseguito quando la DLL di estensione MFC viene caricato e scaricato non danneggiare lo stato complessivo di MFC.

Il file di intestazione AFXDLLX. H contiene definizioni speciali per le strutture utilizzate nelle DLL di estensione MFC, ad esempio la definizione `AFX_EXTENSION_MODULE` e `CDynLinkLibrary`.

Globale *extensionDLL* deve essere dichiarato come illustrato. A differenza delle versioni di MFC a 16 bit, è possibile allocare la memoria e chiamare le funzioni MFC durante questo periodo, poiché il MFCxx. dll è completamente inizializzato al momento il `DllMain` viene chiamato.

### <a name="sharing-resources-and-classes"></a>La condivisione delle risorse e le classi

DLL di estensione MFC semplice necessario esportare solo alcune funzioni di larghezza di banda ridotta per l'applicazione client e nient'altro. Altre DLL con utilizzo intensivo dell'interfaccia utente potrebbe essere necessario esportare le risorse e le classi C++ per l'applicazione client.

Esportazione di risorse viene eseguita tramite un elenco di risorse. In ogni applicazione è un elenco collegato singolarmente di `CDynLinkLibrary` oggetti. Quando si cerca una risorsa, la maggior parte delle implementazioni MFC standard che caricano le risorse cerca innanzitutto nel modulo della risorsa corrente (`AfxGetResourceHandle`) e se lo trova non Walker l'elenco di `CDynLinkLibrary` oggetti tenta di caricare la risorsa richiesta.

La creazione dinamica di oggetti C++ assegnato un nome di classe C++ è simile. Il meccanismo di deserializzazione di oggetti MFC deve disporre di tutti i `CRuntimeClass` gli oggetti registrati in modo che è possibile ricostruire creando dinamicamente C++ oggetto del tipo richiesto in base a ciò che è stato archiviato in precedenza.

Se si desidera che l'applicazione client per usare le classi nella DLL di estensione MFC che sono `DECLARE_SERIAL`, quindi è necessario esportare le classi per essere visibile all'applicazione client. Questa operazione viene anche eseguita scorrendo la `CDynLinkLibrary` elenco.

Nel caso dell'esempio di concetti avanzati MFC [DLLHUSK](../visual-cpp-samples.md), l'elenco simile alla seguente:

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

MFCxx. dll è generalmente l'ultimo la risorsa e un elenco di classi. Questo file include tutte le risorse MFC standard, incluse le stringhe di messaggio di richiesta per tutti gli ID di comando standard. Inserimento nella fase finale dell'elenco consente le DLL e l'applicazione client di non usare una propria copia delle risorse MFC standard, ma al si basano su risorse condivise MFCxx invece.

Unione delle risorse e i nomi delle classi di tutte le DLL nello spazio dei nomi dell'applicazione client con lo svantaggio consiste nel fatto che è necessario prestare attenzione quali ID o nomi che scelto. È possibile naturalmente disabilitare questa funzionalità esportando non sia le risorse o `CDynLinkLibrary` oggetto all'applicazione client. Il [DLLHUSK](../visual-cpp-samples.md) esempio gestisce lo spazio dei nomi risorsa condivisa utilizzando più file di intestazione. Vedere [Nota tecnica 35](../mfc/tn035-using-multiple-resource-files-and-header-files-with-visual-cpp.md) per altri suggerimenti sull'utilizzo dei file di risorsa condivisa.

### <a name="initializing-the-dll"></a>Inizializzazione di DLL

Come indicato in precedenza, è possibile creare un `CDynLinkLibrary` oggetto per esportare le classi e le risorse all'applicazione client. È necessario fornire un punto di ingresso esportato per inizializzare la DLL. Come minimo, si tratta di una routine void che non accetta argomenti e non restituisce nulla, ma può essere liberamente.

Ogni applicazione client che utilizza la DLL deve chiamare la routine di inizializzazione, se si utilizza questo approccio. È anche possibile allocare ciò `CDynLinkLibrary` oggetto del `DllMain` subito dopo la chiamata `AfxInitExtensionModule`.

La routine di inizializzazione necessario creare un `CDynLinkLibrary` oggetto nell'heap dell'applicazione corrente, collegata le informazioni di DLL di estensione MFC. Questa operazione può essere eseguita con gli elementi seguenti:

```cpp
extern "C" extern void WINAPI InitXxxDLL()
{
    new CDynLinkLibrary(extensionDLL);
}
```

Il nome di una routine, *InitXxxDLL* in questo esempio, è possibile assegnare qualsiasi. Non è necessario essere **extern "C"**, ma tale scelta rende più semplice gestire l'elenco di esportazione.

> [!NOTE]
> Se si utilizza la DLL di estensione MFC da una normale DLL MFC, è necessario esportare questa funzione di inizializzazione. Questa funzione deve essere chiamata rispetto ai normali DLL MFC prima di usare le risorse o classi DLL estensione MFC.

### <a name="exporting-entries"></a>Esportazione di voci

Il semplice per esportare le classi consiste nell'usare `__declspec(dllimport)` e `__declspec(dllexport)` su ogni classe e funzione globale che si desidera esportare. Questo rende molto più semplice, ma è meno efficace rispetto a ogni punto di ingresso (descritta di seguito) rappresentata dalla denominazione poiché si dispone di un controllo minore sui quali funzioni vengono esportate e non è possibile esportare le funzioni di base al valore ordinale. TESTDLL1 e TESTDLL2 utilizzare questo metodo per esportare le voci relative.

Un metodo più efficiente (e il metodo usato dal MFCxx. dll) consiste nell'esportare manualmente ogni voce ogni voce di assegnazione di nomi di. File DEF. Poiché è in corso esportazione selettive esportazioni da DLL (ovvero, non tutti gli elementi), è necessario decidere quali interfacce specifici che si desidera esportare. Questa condizione è difficile perché è necessario specificare i nomi alterati al linker sotto forma di voci di. File DEF. Non esportare tutte le classi C++, a meno che non si devono necessariamente avere un collegamento simbolico per esso.

Se si è provato esportazione C++ classi con una. Prima, si consiglia di sviluppare uno strumento per generare automaticamente l'elenco di file DEF. Questa operazione può essere eseguita tramite un processo di collegamento in due fasi. Collegare la DLL di una volta con alcuna esportazione e consentire al linker di generare una. File di mapping. Il file con estensione File di mappa può essere utilizzato per generare un elenco di funzioni che devono essere esportati, pertanto con alcuni ridisposizione, e può essere utilizzato per generare le voci di esportazione per il. File DEF. Elenco di esportazione per MFCxx. dll e OLE e le DLL di estensione Database MFC, diverse migliaia di numero, è stato generato con questo tipo di processo (anche se non è completamente automatico e richiede alcune mano ottimizzazione ogni volta in un po' di tempo).

### <a name="cwinapp-vs-cdynlinklibrary"></a>CWinApp vs. CDynLinkLibrary

Una DLL di estensione MFC non dispone di un `CWinApp`-oggetto propri derivato; in alternativa, è necessario collaborare con il `CWinApp`-oggetto dell'applicazione client derivato. Ciò significa che l'applicazione client possiede il message pump principale, il ciclo inattivo e così via.

Se la DLL di estensione MFC deve mantenere dati aggiuntivi per ogni applicazione, è possibile derivare una nuova classe da `CDynLinkLibrary` e crearla in InitXxxDLL routine sopra descritti. Durante l'esecuzione, la DLL può cercare elenco dell'applicazione corrente di `CDynLinkLibrary` oggetti da trovare quello più DLL di estensione MFC specifica.

### <a name="using-resources-in-your-dll-implementation"></a>Utilizzo delle risorse nell'implementazione DLL

Come indicato in precedenza, il carico di risorse predefinito descrive in dettaglio l'elenco di `CDynLinkLibrary` oggetti Cerca il primo file EXE o DLL contenente la risorsa richiesta. Tutte le API di MFC, nonché tutto il codice interno Usa `AfxFindResourceHandle` per esaminare l'elenco di risorse per individuare qualsiasi risorsa, indipendentemente da dove possono trovarsi.

Se si desidera caricare solo le risorse da una posizione specifica, usare le API `AfxGetResourceHandle` e `AfxSetResourceHandle` per salvare l'handle precedente e impostare il nuovo handle. Prestare attenzione a ripristinare l'handle di risorsa precedente prima di tornare all'applicazione client. L'esempio TESTDLL2 Usa questo approccio per il caricamento esplicito di un menu.

Scorrere l'elenco delle offre gli svantaggi che è leggermente più lenta e richiede la gestione degli intervalli di ID di risorsa. Offre il vantaggio che un'applicazione client che si collega a diverse DLL di estensione MFC è possibile utilizzare qualsiasi risorsa fornita dalla DLL senza dover specificare l'handle dell'istanza DLL. `AfxFindResourceHandle` è un'API utilizzata per scorrere l'elenco di risorse per cercare una corrispondenza specificata. Accetta il nome e il tipo di una risorsa e restituisce l'handle di risorsa in cui è stato trovato prima (o NULL).

##  <a name="_mfcnotes_writing_an_application_that_uses_the_dll_version"></a> Scrittura di un'applicazione che utilizza la versione DLL

### <a name="application-requirements"></a>Requisiti dell'applicazione

Un'applicazione che utilizza la versione condivisa di MFC è necessario seguire alcune semplici regole:

- Deve avere un `CWinApp` dell'oggetto e seguire le regole standard per un message pump.

- Deve essere compilato con un set di flag del compilatore obbligatorio (vedere sotto).

- È necessario collegarsi alle librerie di importazione MFCxx. Impostando il flag del compilatore necessari, le intestazioni MFC determinano in fase di collegamento libreria in cui l'applicazione deve collegarsi a.

- Per eseguire il file eseguibile, MFCxx. dll deve essere nel percorso o nella directory di sistema Windows.

### <a name="building-with-the-development-environment"></a>Compilazione con l'ambiente di sviluppo

Se si utilizza il makefile interno con la maggior parte delle impostazioni predefinite standard, è possibile modificare con facilità il progetto per compilare la versione DLL.

Il passaggio seguente si presuppone che un'applicazione MFC correttamente funzionante collegata con NAFXCWD. LIB (per il debug) e NAFXCW. LIB (per attivazione singola) e si desidera convertire in modo da utilizzare la versione della libreria MFC condivisa. Si esegue l'ambiente di Visual C++ e di un file di progetto interna.

1. Nel **progetti** menu, fare clic su **proprietà**. Nel **generali** pagina **impostazioni predefinite progetto**, impostare Microsoft Foundation Classes **Usa MFC in una DLL condivisa** (MFCxx(d).dll).

### <a name="building-with-nmake"></a>Compilazione con NMAKE

Se si utilizza la funzionalità di makefile esterni di Visual C++ o utilizza NMAKE direttamente, è necessario modificare il makefile per il supporto del compilatore e delle opzioni del linker

Flag del compilatore obbligatori:

- **/ /MD /D_AFXDLL**  
  **/ /D_AFXDLL**

Le intestazioni MFC standard necessario questo simbolo da definire:

- **/MD** l'applicazione deve utilizzare la versione DLL della libreria di runtime C

Tutti gli altri flag del compilatore seguono le impostazioni predefinite MFC (ad esempio, debug per il debug).

Modificare l'elenco del linker delle librerie. Modifica NAFXCWD. LIB per MFCxxD.LIB e modificare NAFXCW. LIB di MFCxx.LIB. Sostituire LIBC. LIB con MSVCRT. LIB. Come con qualsiasi altra libreria MFC, è importante che risieda MFCxxD.LIB **prima di** tutte le librerie di runtime C.

Facoltativamente, aggiungere **/D_AFXDLL** per le opzioni del compilatore di risorse di vendita al dettaglio e di debug (quella effettivamente compila le risorse con **/R**). In questo modo l'eseguibile finale più piccoli condividendo le risorse presenti nelle DLL di MFC.

Dopo aver apportato queste modifiche, è necessario una ricompilazione completa.

### <a name="building-the-samples"></a>Compilazione degli esempi di

La maggior parte dei programmi di esempio MFC può essere compilata da Visual C++ o da un MAKEFILE NMAKE compatibile condiviso dalla riga di comando.

Per convertire qualsiasi di tali campioni da utilizzare MFCxx. dll, è possibile caricare il. MAK del file in Visual C++ e impostare le opzioni di progetto come descritto in precedenza. Se si utilizza la compilazione NMAKE, è possibile specificare "AFXDLL = 1" NMAKE riga di comando e che rappresentano il fondamento nell'esempio che usa le librerie MFC condivise.

L'esempio di concetti avanzati MFC [DLLHUSK](../visual-cpp-samples.md) viene compilato con la versione DLL di MFC. In questo esempio non solo viene illustrato come compilare un'applicazione collegata con MFCxx. dll, ma illustra anche altre funzionalità dell'opzione di creazione di pacchetti di DLL MFC, ad esempio le DLL di estensione MFC descritto più avanti in questa nota tecnica.

### <a name="packaging-notes"></a>Note sulla creazione di pacchetti

La versione delle DLL (MFCxx [U]. DLL) sono liberamente ridistribuibili. La versione di debug delle DLL non sono ridistribuita gratuitamente e deve essere utilizzato solo durante lo sviluppo dell'applicazione.

Le DLL di debug vengono forniti con le informazioni di debug. Tramite il debugger di Visual C++, è possibile tracciare l'esecuzione dell'applicazione, nonché la DLL. Le DLL di rilascio (MFCxx [U]. DLL) non contengono informazioni di debug.

Se si personalizzano o si ricompila le DLL, quindi è necessario chiamarli qualcosa diverso dal file "MFCxx" The MFC SRC MFCDLL. MAK descrive le opzioni di compilazione e contiene la logica per la ridenominazione della DLL. Rinominare i file è necessaria, poiché queste DLL sono potenzialmente condivisi da numerose applicazioni MFC. Con la versione personalizzata della sostituzione DLL MFC quelli installati nel sistema è possibile interrompere un'altra applicazione MFC con le DLL MFC condivisa.

Si consiglia di non ricompilare le DLL di MFC.

##  <a name="_mfcnotes_how_the_mfc30.dll_is_implemented"></a> Modalità di implementazione di MFCxx. dll

Nella sezione seguente illustra il modo in cui viene implementata la DLL MFC (MFCxx. dll e MFCxxD. dll). Comprendere che i dettagli di seguito non sono importante se si desidera eseguire è utilizzare la DLL MFC con l'applicazione. Qui i dettagli non sono essenziali per comprendere come scrivere una DLL di estensione MFC, tuttavia sapendo questa implementazione può possibile scrivere la propria DLL.

### <a name="implementation-overview"></a>Panoramica dell'implementazione

DLL MFC è realmente un caso speciale di una DLL di estensione MFC, come descritto in precedenza. Dispone un numero molto elevato di esportazioni per un numero elevato di classi. Esistono alcuni altri fattori nelle DLL MFC che lo rendono ancora più particolari rispetto a una DLL di estensione MFC regolare.

### <a name="win32-does-most-of-the-work"></a>Win32 esegue la maggior parte del lavoro

La versione a 16 bit di MFC è necessario un numero di tecniche particolari, inclusi i dati per ogni app nel segmento di stack, segmenti speciali creati da codice 80x86 assembly, contesti di eccezione per ogni processo e altre tecniche. Win32 supporta direttamente i dati per ogni processo in una DLL, che sia quella desiderata la maggior parte dei casi. Per la maggior parte MFCxx. dll è semplicemente NAFXCW. LIB inclusa in una DLL. Se esamina il codice sorgente MFC, sono disponibili poche AFXDLL #ifdef, poiché esistono pochissimi casi speciali che devono essere apportate. I casi speciali che vi sono specificamente per affrontare Win32 su Windows 3.1 (noto anche come Win32s). Win32s non supporto per ogni processo DLL dati direttamente pertanto è necessario utilizzare l'archiviazione thread-local (TLS) le API Win32 per ottenere i dati locali processo DLL MFC.

### <a name="impact-on-library-sources-additional-files"></a>Impatto su origini di libreria, i file aggiuntivi

L'impatto del **AFXDLL** versione nelle intestazioni e origini di libreria di classe MFC di normale è relativamente minore. È presente un file di versione speciale (AFXV_DLL. H), nonché un file di intestazione aggiuntivi (AFXDLL_. H) incluso da AFXWIN principale. Intestazione H. AFXDLL_. Intestazione H include il `CDynLinkLibrary` classe e altri dettagli di implementazione di entrambi `_AFXDLL` applicazioni e DLL di estensione MFC. AFXDLLX. Intestazione H viene fornito per la creazione di DLL estensione MFC (vedere sopra per informazioni dettagliate).

Le origini regolari alla libreria MFC in MFC SRC hanno altro codice condizionale nel `_AFXDLL` #ifdef. Un file di origine aggiuntivi (DLLINIT. CPP) contiene il codice di inizializzazione di DLL aggiuntivo e gli altri passaggi fondamentali per la versione condivisa di MFC.

Per compilare la versione condivisa di MFC, vengono forniti i file aggiuntivi. (Vedere di seguito per informazioni dettagliate su come compilare la DLL.)

- Due. DEF (file) vengono utilizzati per l'esportazione i punti di ingresso DLL MFC per il debug (MFCxxD.DEF) e (MFCxx.DEF) la versione della DLL.

- Un oggetto. File RC (MFCDLL. RC) contiene tutte le risorse MFC standard e una risorsa VERSIONINFO per la DLL.

- A. File CLW (MFCDLL. CLW) viene fornita per consentire l'esplorazione della MFC classi usando ClassWizard. Nota: questa funzionalità non è specifica per la versione DLL di MFC.

### <a name="memory-management"></a>Gestione della memoria

Un'applicazione che utilizza MFCxx. dll viene utilizzato un allocatore di memoria comune fornito da MSVCRTxx.DLL, la DLL di runtime C condivisa. L'applicazione, le DLL di estensione MFC e nonché DLL MFC utilizzano l'allocatore di memoria condivisa. Utilizzando una DLL condivisa per l'allocazione di memoria, le DLL MFC possono allocare memoria che viene liberata in un secondo momento dall'applicazione o viceversa. Poiché la DLL sia l'applicazione deve usare l'allocatore stesso, eseguire l'override di C++ globali **operatore new** oppure **operatore delete**. Le stesse regole si applicano al resto delle routine di allocazione di memoria di runtime C (ad esempio **malloc**, **realloc**, **libero**e altri).

### <a name="ordinals-and-class-declspecdllexport-and-dll-naming"></a>Numeri ordinali e classe dllexport e DLL di denominazione

Non si utilizzano le `class` **dllexport** funzionalità del compilatore C++. Al contrario, un elenco di esportazioni è incluso con le origini di libreria di classe (MFCxx.DEF e MFCxxD.DEF). Vengono esportati solo questi selezionare set di punti di ingresso (funzioni e dati). Altri simboli, ad esempio MFC implementazione privata funzioni o classi, non vengono esportate tutte le esportazioni vengono effettuate dall'ordinale senza un nome di stringa nella tabella che si trovano o non residenti nome.

Utilizzo `class` **dllexport** potrebbe essere un'alternativa valida per la creazione di DLL di dimensioni ridotte, ma nel caso di una DLL di grandi dimensioni, ad esempio MFC, il valore predefinito esportazione meccanismo con efficienza e la capacità dei limiti.

Ciò significa che tutte le novità che è possibile creare un pacchetto una grande quantità di funzionalità nella versione MFCxx. dll che è solo circa 800 KB senza compromettere la quantità esecuzione o velocità di caricamento. MFCxx. dll sarebbe stata 100 KB di dimensioni maggiori questa tecnica non fosse stata usata. Ciò consente inoltre possibile aggiungere punti di ingresso aggiuntivi alla fine del. File DEF per consentire il controllo delle versioni semplice senza compromettere l'efficienza di velocità e dimensioni di esportazione di base al valore ordinale. Le revisioni di versione principale nella libreria di classi MFC modificherà il nome della libreria. Vale a dire, MFC30. DLL si trovi le DLL ridistribuibili contenente la versione 3.0 della libreria di classi MFC. Un aggiornamento di questa DLL, ad esempio, in un ipotetico 3.1 di MFC, la DLL verrebbe denominata MFC31. DLL invece. Nuovamente, se si modifica il codice sorgente MFC per produrre una versione personalizzata di DLL MFC, utilizzare un nome diverso (e preferibilmente senza "MFC" nel nome).

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)  
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)  

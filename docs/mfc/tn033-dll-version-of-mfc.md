---
title: 'TN033: Versione DLL di MFC | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ba51ca465bec2a6400106071fcba94d36ad100e2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="tn033-dll-version-of-mfc"></a>TN033: versione DLL di MFC
Questa nota viene descritto come è possibile utilizzare il condivise MFCxx.DLL e MFCxxD.DLL (dove x è il numero di versione MFC) librerie a collegamento dinamico con applicazioni MFC e DLL di estensione MFC. Per ulteriori informazioni sulle DLL di MFC regolari, vedere [utilizzo di MFC come parte di una DLL](../mfc/tn011-using-mfc-as-part-of-a-dll.md).  
  
 Questa nota tecnica vengono illustrati tre aspetti delle DLL. Gli ultimi due sono per gli utenti più avanzati:  
  
- [Come si compila una DLL di estensione MFC](#_mfcnotes_how_to_write_an_mfc_extension_dll)  
  
- [Come si compila un'applicazione MFC che utilizza la versione DLL di MFC](#_mfcnotes_writing_an_application_that_uses_the_dll_version)  
  
- [Modalità di condivisione delle librerie a collegamento dinamico MFC vengono implementate.](#_mfcnotes_how_the_mfc30.dll_is_implemented)  
  
 Se si è interessati alla creazione di una DLL tramite MFC che può essere utilizzato con applicazioni non MFC (DLL regolare MFC è detta), fare riferimento a [Nota tecnica 11](../mfc/tn011-using-mfc-as-part-of-a-dll.md).  
  
## <a name="overview-of-mfcxxdll-support-terminology-and-files"></a>Panoramica del supporto MFCxx.DLL: terminologia e i file  
 **DLL MFC regolare**: utilizzare DLL regolare MFC per creare una DLL autonoma utilizzando alcune delle classi MFC. Interfacce attraverso il limite dell'applicazione o DLL sono interfacce "C" e l'applicazione client non deve essere un'applicazione MFC.  
  
 Si tratta della versione del supporto DLL in MFC 1.0 è supportata. Viene descritto in [Nota tecnica 11](../mfc/tn011-using-mfc-as-part-of-a-dll.md) e l'esempio di concetti avanzati MFC [DLLScreenCap](../visual-cpp-samples.md).  
  
> [!NOTE]
>  A partire da Visual C++ versione 4.0, il termine **USRDLL** è obsoleto ed è stata sostituita da una DLL MFC regolare collegata a MFC in modo statico. È anche possibile compilare una normale DLL MFC collegata a MFC in modo dinamico.  
  
 MFC 3.0 (e versioni successive) supporta le DLL regolari MFC con tutte le nuove funzionalità incluse le classi OLE e il Database.  
  
 **AFXDLL**: questo è detta anche la versione delle librerie MFC condivisa. Questo è il nuovo supporto DLL aggiunto MFC 2.0. Un'applicazione client o una DLL collegata in modo dinamico le DLL che richiede la stessa libreria MFC è in un numero di DLL (descritte di seguito). Le interfacce attraverso il limite dell'applicazione o DLL sono C + + interfacce delle classi MFC. L'applicazione client deve essere un'applicazione MFC. Supporta tutte le funzionalità di MFC 3.0 (eccezione: UNICODE non è supportata per le classi di database).  
  
> [!NOTE]
>  A partire da Visual C++ versione 4.0, questo tipo di DLL viene considerato una "DLL di estensione."  
  
 Questa nota utilizzerà MFCxx.DLL per fare riferimento all'intero set di DLL MFC, che include:  
  
-   Debug: MFCxxD.DLL (combinata) e MFCSxxD.LIB (statico).  
  
-   Versione: MFCxx.DLL (combinata) e MFCSxx.LIB (statico).  
  
-   Unicode Debug: MFCxxUD.DLL (combinata) e MFCSxxD.LIB (statico).  
  
-   Versione Unicode: MFCxxU.DLL (combinata) e MFCSxxU.LIB (statico).  
  
> [!NOTE]
>  Il MFCSxx [U] [D]. LIB sono utilizzate combinazione con MFC DLL condivise. Queste librerie contengono codice che deve essere collegato staticamente all'applicazione o DLL.  
  
 Un'applicazione collegamenti a librerie di importazione corrispondente:  
  
-   Eseguire il debug: MFCxxD.LIB  
  
-   Versione: MFCxx.LIB  
  
-   Debug Unicode: MFCxxUD.LIB  
  
-   Versione Unicode: MFCxxU.LIB  
  
 Una "DLL di estensione MFC" è una DLL compilata su MFCxx.DLL (e/o di altri MFC DLL condivise). In questo caso l'architettura dei componenti MFC interviene. Se si deriva una classe utile da una classe MFC o compilare un altro tipo MFC toolkit, è possibile inserirlo in una DLL. Che la DLL utilizza MFCxx.DLL, come l'applicazione client ultimate. In tal modo le classi riutilizzabili foglia, classi base riutilizzabili e classi documento/visualizzazione riutilizzabili.  
  
## <a name="pros-and-cons"></a>I vantaggi e svantaggi  
 Perché è necessario utilizzare la versione condivisa di MFC  
  
-   Utilizzo della libreria condivisa può comportare nelle applicazioni più piccole (un'applicazione minimo che utilizza la maggior parte della libreria MFC è minore di 10 KB).  
  
-   La versione condivisa di MFC supporta DLL di estensione MFC e le DLL regolari MFC.  
  
-   Compilazione di un'applicazione che utilizza le librerie MFC condivise è più veloce rispetto alla creazione di un'applicazione MFC collegata in modo statico perché non è necessario collegare MFC. Ciò è particolarmente vero in **DEBUG** compilazioni in cui il linker deve comprimere le informazioni di debug, ovvero mediante il collegamento a una DLL che già contiene le informazioni di debug, è meno informazioni di debug per compattare all'interno dell'applicazione.  
  
 Perché è non consigliabile utilizzare la versione di MFC condivisa:  
  
-   Distribuzione di un'applicazione che utilizza la libreria condivisa richiede che si effettua la spedizione di MFCxx.DLL (e altri) libreria con il programma. MFCxx.DLL può essere ridistribuito gratuitamente come numero di DLL, ma è comunque necessario installare la DLL nel programma di installazione. Inoltre, è necessario fornire il MSVCRTxx.DLL, che contiene la libreria di runtime C che viene utilizzata sia per il programma e DLL MFC.  
  
##  <a name="_mfcnotes_how_to_write_an_mfc_extension_dll"></a>Come scrivere una DLL di estensione MFC  
 Una DLL di estensione MFC è una DLL che contiene classi e funzioni scritte per arricchire le funzionalità delle classi MFC. Una DLL di estensione MFC utilizza la DLL MFC condivisa nello stesso modo che un'applicazione utilizza, con alcune considerazioni aggiuntive:  
  
-   Il processo di compilazione è simile alla creazione di un'applicazione che utilizza le librerie MFC condivise con alcune altro opzioni del compilatore e del linker.  
  
-   Non dispone di una DLL di estensione MFC un `CWinApp`-classe derivata.  
  
-   Una DLL di estensione MFC deve fornire una speciale `DllMain`. La creazione guidata applicazione fornisce un `DllMain` funzione che è possibile modificare.  
  
-   Una DLL di estensione MFC in genere fornirà una routine di inizializzazione per creare un **CDynLinkLibrary** se l'estensione MFC DLL si desidera esportare `CRuntimeClass`es o risorse per l'applicazione. Una classe derivata di **CDynLinkLibrary** può essere utilizzato se conservare i dati per ogni applicazione dalla DLL di estensione MFC.  
  
 Queste considerazioni sono descritti in dettaglio più avanti. È necessario inoltre fare riferimento all'esempio di concetti avanzati MFC [DLLHUSK](../visual-cpp-samples.md) poiché viene illustrato:  
  
-   Compilazione di un'applicazione mediante le librerie condivise. (DLLHUSK. EXE è un'applicazione MFC collegata in modo dinamico alle librerie MFC anche altre DLL).  
  
-   Compilazione di una DLL di estensione MFC. (Si noti il flag speciali, ad esempio `_AFXEXT` che vengono utilizzate nella compilazione di una DLL di estensione MFC)  
  
-   Due esempi di DLL di estensione MFC. Uno viene illustrata la struttura di base di una DLL di estensione MFC con le esportazioni limitate (TESTDLL1) e altri illustrato nell'esportazione di un'interfaccia di classe per intero (TESTDLL2).  
  
 L'applicazione client e le DLL di estensione MFC è necessario utilizzare la stessa versione di MFCxx.DLL. È necessario seguire la convenzione di DLL MFC e fornire un debug e di vendita al dettaglio (/Release) versione della DLL di estensione MFC. In tal modo i programmi client per compilare le versioni di debug e di vendita al dettaglio delle applicazioni e collegarli con il debug appropriato o una versione definitiva di tutte le DLL.  
  
> [!NOTE]
>  Poiché C++ nome alterazione ed esportare i problemi, è possibile che l'elenco di esportazione da una DLL di estensione MFC potrebbe essere diverso tra le DLL e versioni di debug e finale della stessa DLL per le diverse piattaforme. Vendita al dettaglio MFCxx.DLL è circa 2000 esportato punti di ingresso; debug MFCxxD.DLL è circa 3000 esportato punti di ingresso.  
  
### <a name="quick-note-on-memory-management"></a>Nota la gestione della memoria  
 La sezione "Gestione della memoria," vicino alla fine di questa nota tecnica, descritta l'implementazione del MFCxx.DLL con la versione condivisa di MFC. Le informazioni necessarie implementare solo un'estensione MFC che DLL è descritto di seguito.  
  
 MFCxx.DLL e tutte le DLL di estensione MFC caricate nello spazio degli indirizzi di un'applicazione client utilizzerà l'allocatore di memoria stesso, il caricamento delle risorse e gli altri stati "globali" MFC come se fossero nella stessa applicazione. Questo è importante perché librerie DLL non MFC e DLL di MFC regolari collegate a MFC in modo statico l'esatto opposto di eseguire in modo che ogni allocazione DLL fuori il proprio pool di memoria.  
  
 Se una DLL di estensione MFC alloca memoria, che la memoria può combinare liberamente con qualsiasi altro oggetto allocato di applicazione. Inoltre, se si blocca un'applicazione che utilizza le librerie MFC condivise, la protezione del sistema operativo manterrà l'integrità di qualsiasi altra applicazione MFC che condivide la DLL.  
  
 Allo stesso modo altri stati MFC "globali", ad esempio il file eseguibile corrente per caricare le risorse, vengono condivisi tra l'applicazione client e tutte le DLL di estensione MFC nonché MFCxx.DLL stesso.  
  
### <a name="building-an-mfc-extension-dll"></a>La creazione di una DLL di estensione MFC  
 È possibile utilizzare la creazione guidata applicazione per creare un progetto DLL estensione MFC e verrà automaticamente generato il compilatore appropriato e le impostazioni del linker. Era inoltre generare un `DllMain` funzione che è possibile modificare.  
  
 Se si converte un progetto esistente in una DLL di estensione MFC, iniziare con le regole standard per la creazione di un'applicazione utilizzando la versione condivisa di MFC, quindi eseguire le operazioni seguenti:  
  
-   Aggiungere **/D_AFXEXT** per i flag del compilatore. Nella finestra di dialogo proprietà del progetto, selezionare il nodo C/C++. Quindi selezionare la categoria per il preprocessore. Aggiungere `_AFXEXT` al campo, definire macro separando ciascuno degli elementi con un punto e virgola.  
  
-   Rimuovere il **/Gy** opzione del compilatore. Nella finestra di dialogo proprietà del progetto, selezionare il nodo C/C++. Quindi selezionare la categoria di generazione del codice. Verificare che l'opzione "Abilita il collegamento a livello di funzione" non è abilitato. Questo rende più semplice esportare classi perché il linker non rimuoverà le funzioni senza riferimenti. Se il progetto originale viene utilizzato per compilare una normale DLL MFC collegato in modo statico a MFC, modifica il **/MT [d]** dell'opzione del compilatore **/MD [d]**.  
  
-   Compilare una libreria di esportazione con il **/DLL** opzione al collegamento. Questo verrà impostato quando si crea una nuova destinazione, specificando il tipo di destinazione di libreria a collegamento dinamico Win32.  
  
### <a name="changing-your-header-files"></a>Modifica i file di intestazione  
 L'obiettivo di una DLL di estensione MFC è in genere di esportare alcune funzionalità comuni in una o più applicazioni che è possono utilizzare tale funzionalità. Questo riduce per l'esportazione di classi e funzioni globali che sono disponibili per le applicazioni client.  
  
 Per eseguire questa operazione è necessario assicurarsi che tutte le funzioni membro viene contrassegnato come importare o esportare come appropriato. Ciò richiede che le dichiarazioni speciali: **dllexport** e **declspec**. Quando le classi vengono utilizzate dalle applicazioni client, si desidera possano essere dichiarati come **declspec**. Quando viene creata la DLL di estensione MFC, deve essere dichiarati come **dllexport**. Inoltre, le funzioni devono essere effettivamente esportate, in modo che i programmi client l'associazione a tali in fase di caricamento.  
  
 Per esportare l'intera classe, utilizzare **AFX_EXT_CLASS** nella definizione della classe. Questa macro viene definita dal framework come **dllexport** quando **AFXDLL** e `_AFXEXT` viene definito, ma viene definito come **declspec** quando `_AFXEXT` non è definito. `_AFXEXT`come descritto in precedenza, viene definita solo quando si compila la DLL di estensione MFC. Ad esempio:  
  
```  
class AFX_EXT_CLASS CExampleExport : public CObject  
{ ... class definition ... };  
```  
  
### <a name="not-exporting-the-entire-class"></a>Non esportare l'intera classe  
 Può talvolta si desidera esportare solo i membri della classe necessari singoli. Ad esempio, se si sta esportando un `CDialog`-classe derivata solo potrebbe essere necessario esportare il costruttore e `DoModal` chiamare. È possibile esportare questi membri tramite la DLL. File DEF, ma è anche possibile usare **AFX_EXT_CLASS** in modo molto simile ai singoli membri è necessario esportare.  
  
 Ad esempio:  
  
```  
class CExampleDialog : public CDialog  
{  
public:  
    AFX_EXT_CLASS CExampleDialog();
AFX_EXT_CLASS int DoModal();
*// rest of class definition  
 .  
 .  
 .  
};  
```  
  
 Quando si esegue questa operazione, è possibile eseguire un problema perché non è più l'esportazione di tutti i membri della classe. Il problema è in modo che funzionano macro MFC. Molte delle macro di supporto di MFC effettivamente dichiarare o definire membri dati. Di conseguenza, questi membri dati saranno inoltre necessario essere esportate dalla DLL di.  
  
 Ad esempio, il `DECLARE_DYNAMIC` macro viene definita come indicato di seguito quando si compila una DLL di estensione MFC:  
  
```  
#define DECLARE_DYNAMIC(class_name) \  
protected: \  
    static CRuntimeClass* PASCAL _GetBaseClass();

\  
    public: \  
    static AFX_DATA CRuntimeClass class##class_name; \  
    virtual CRuntimeClass* GetRuntimeClass() const;

\  
```  
  
 La riga che inizia con "statico `AFX_DATA`" dichiara un oggetto all'interno della classe statico. Per esportare correttamente questa classe e accedere alle informazioni di runtime da un client. EXE, è necessario esportare questo oggetto statico. Poiché l'oggetto statico viene dichiarato con il modificatore `AFX_DATA`, è necessario definire `AFX_DATA` da **dllexport** durante la compilazione della DLL e definirlo come **declspec** quando si compila il file eseguibile del client.  
  
 Come illustrato in precedenza, **AFX_EXT_CLASS** è già definito in questo modo. È necessario definire nuovamente `AFX_DATA` per essere lo stesso **AFX_EXT_CLASS** intorno alla definizione della classe.  
  
 Ad esempio:  
  
```  
#undef  AFX_DATA  
#define AFX_DATA AFX_EXT_CLASS  
class CExampleView : public CView  
{  
    DECLARE_DYNAMIC() *// ... class definition ...  
};  
#undef  AFX_DATA  
#define AFX_DATA  
```  
  
 MFC utilizza sempre il `AFX_DATA` simbolo sugli elementi di dati viene definito all'interno delle macro, pertanto questa tecnica funziona per tutti gli scenari di questo tipo. Ad esempio, funzionerà per `DECLARE_MESSAGE_MAP`.  
  
> [!NOTE]
>  Se si sta esportando l'intera classe anziché selezionato i membri della classe, i membri dati statici vengono automaticamente esportati.  
  
 È possibile utilizzare la stessa tecnica per l'esportazione automatica di `CArchive` operatore di estrazione per le classi che utilizzano il `DECLARE_SERIAL` e `IMPLEMENT_SERIAL` macro. Esportare l'operatore di archiviazione facendo precedere le dichiarazioni di classe (all'interno di. File H) con il codice seguente:  
  
```  
#undef AFX_API  
#define AFX_API AFX_EXT_CLASS  
 
<your class declarations here>  
 
#undef AFX_API  
#define AFX_API  
```  
  
### <a name="limitations-of-afxext"></a>Limitazioni di AFXEXT  
 È possibile utilizzare il _**AFXEXT** simbolo del preprocessore per le DLL, purché non si dispone più livelli di estensione MFC DLL di estensione MFC. Se si dispone di estensione MFC DLL che chiamano o derivano dalle classi nel propria MFC DLL di estensione, quindi dalla quale derivare le classi MFC, è necessario utilizzare il proprio simbolo del preprocessore per evitare ambiguità.  
  
 Il problema è che in Win32, è necessario dichiarare in modo esplicito i dati come **dllexport** se è possibile esportare da una DLL, e **declspec** se deve essere importato da una DLL. Quando si definisce `_AFXEXT`, le intestazioni MFC assicurarsi che **AFX_EXT_CLASS** sia definito correttamente.  
  
 Quando si dispone più livelli, un simbolo, ad esempio **AFX_EXT_CLASS** non è sufficiente, poiché una DLL di estensione MFC può essere esportare nuove classi, nonché importare altre classi da un'altra DLL di estensione MFC. Per risolvere questo problema, utilizzare un simbolo del preprocessore speciale che indica che si compila la DLL o utilizzando la DLL. Si supponga, ad esempio, due DLL di estensione MFC, dll e DLL. Ognuno di essi Esporta alcune classi nella h e h, rispettivamente. B. dll utilizza le classi di DLL. I file di intestazione avrà un aspetto simile al seguente:  
  
```  
/* A.H */  
#ifdef A_IMPL  
 #define CLASS_DECL_A   __declspec(dllexport)  
#else  
 #define CLASS_DECL_A   __declspec(dllimport)  
#endif  
 
class CLASS_DECL_A CExampleA : public CObject  
{ ... class definition ... };  
 
/* B.H */  
#ifdef B_IMPL  
 #define CLASS_DECL_B   __declspec(dllexport)  
#else  
 #define CLASS_DECL_B   __declspec(dllimport)  
#endif  
 
class CLASS_DECL_B CExampleB : public CExampleA  
{ ... class definition .. };  
```  
  
 DLL viene compilata con **/D A_IMPL** e DLL viene compilata con **/D B_IMPL**. Utilizzando simboli distinti per ogni DLL, CExampleB viene esportato e CExampleA viene importato quando si compila una DLL. CExampleA viene esportato quando si compila una DLL e importato quando viene utilizzato dalla DLL (o un altro client).  
  
 Questo tipo di disposizione non può essere eseguito quando si utilizza l'elemento predefinito **AFX_EXT_CLASS** e `_AFXEXT` simboli del preprocessore. La tecnica sopra descritta risolve questo problema in modo diversamente da quanto accade non che viene utilizzato il meccanismo di MFC quando si compila la DLL di estensione OLE, il Database e MFC di rete.  
  
### <a name="not-exporting-the-entire-class"></a>Non esportare l'intera classe  
 Nuovamente, è necessario prestare particolare attenzione quando non si esporta un'intera classe. È necessario assicurarsi che gli elementi dati necessari creati dalle macro MFC vengano esportati correttamente. Questa operazione può essere eseguita definendo nuovamente **AFX_DATA** macro della classe specifica. Questa operazione deve essere eseguita ogni volta che si sta esportando non l'intera classe.  
  
 Ad esempio:  
  
```  
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
*//class definition   
 .  
 .  
 .  
};  
 
#undef AFX_DATA  
#define AFX_DATA  
```  
  
### <a name="dllmain"></a>DllMain  
 Di seguito è esattamente il codice che è necessario inserire nel file di origine principale per la DLL di estensione MFC. Deve disporre di seguito include lo standard. Si noti che quando si utilizza la creazione guidata applicazione per creare il file di avvio per una DLL di estensione MFC, fornisce un `DllMain` automaticamente.  
  
```  
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
  
 La chiamata a `AfxInitExtensionModule` acquisisce le classi di runtime moduli (`CRuntimeClass` strutture) nonché le object factory (`COleObjectFactory` oggetti) per l'utilizzo in seguito quando la **CDynLinkLibrary** viene creato l'oggetto. (Facoltativo) chiamare a `AfxTermExtensionModule` consente MFC per eseguire la pulizia DLL di estensione MFC quando ogni processo si disconnette (situazione che si verifica quando il processo viene chiuso o quando la DLL viene scaricata come risultato di un **FreeLibrary** chiamare) dalla DLL di estensione MFC . Poiché la maggior parte di estensione MFC DLL non sono caricate in modo dinamico (in genere, questi elementi sono collegati tramite le librerie di importazione), la chiamata a `AfxTermExtensionModule` non è in genere necessario.  
  
 Se l'applicazione carica e libera le DLL di estensione MFC in modo dinamico, assicurarsi di chiamare `AfxTermExtensionModule` come illustrato in precedenza. È inoltre necessario assicurarsi di utilizzare `AfxLoadLibrary` e `AfxFreeLibrary` (anziché funzioni Win32 **LoadLibrary** e **FreeLibrary**) se l'applicazione usa più thread o se viene caricato in modo dinamico un MFC DLL di estensione. Utilizzando `AfxLoadLibrary` e `AfxFreeLibrary` assicura che il codice di avvio e di chiusura che viene eseguito quando la DLL di estensione MFC viene caricato e scaricato non danneggiare lo stato globale di MFC.  
  
 Il file di intestazione AFXDLLX. H contiene definizioni speciali per le strutture utilizzate nelle DLL di estensione MFC, ad esempio la definizione per `AFX_EXTENSION_MODULE` e **CDynLinkLibrary**.  
  
 Globale *extensionDLL* deve essere dichiarato come illustrato. A differenza delle versioni di MFC a 16 bit, è possibile allocare la memoria e chiamare le funzioni MFC durante questo periodo, poiché il MFCxx.DLL è completamente inizializzato al momento il `DllMain` viene chiamato.  
  
### <a name="sharing-resources-and-classes"></a>La condivisione delle risorse e le classi  
 DLL di estensione MFC semplice necessario esportare solo alcune funzioni di larghezza di banda ridotta per l'applicazione client e nient'altro. Altre DLL con utilizzo intensivo di interfaccia utente potrebbe essere necessario esportare le risorse e le classi C++ per l'applicazione client.  
  
 Esportazione di risorse viene eseguita tramite un elenco di risorse. In ogni applicazione è un elenco collegato singolarmente di **CDynLinkLibrary** oggetti. Quando si cerca una risorsa, la maggior parte delle implementazioni MFC standard che caricano le risorse cerca innanzitutto nel modulo della risorsa corrente (`AfxGetResourceHandle`) non trovato percorso e l'elenco di **CDynLinkLibrary** oggetti durante il caricamento di risorsa richiesta.  
  
 La creazione dinamica di oggetti C++ assegnato un nome di classe C++ è simile. Il meccanismo di deserializzazione di oggetti MFC deve disporre di tutti i `CRuntimeClass` gli oggetti registrati in modo che è possibile ricostruire mediante la creazione dinamica di oggetti C++ del tipo richiesto in base a ciò che è stato memorizzato in precedenza.  
  
 Se si desidera che l'applicazione client per usare le classi nella DLL di estensione MFC che sono `DECLARE_SERIAL`, sarà necessario esportare le classi per essere visibile all'applicazione client. Ciò avviene anche scorrendo la **CDynLinkLibrary** elenco.  
  
 Nel caso dell'esempio di concetti avanzati MFC [DLLHUSK](../visual-cpp-samples.md), l'elenco ha un aspetto simile:  
  
```  
head ->   DLLHUSK.EXE   - or -   DLLHUSK.EXE  
 |      |  
    TESTDLL2.DLL TESTDLL2.DLL  
 |      |  
    TESTDLL1.DLL TESTDLL1.DLL  
 |      |  
 |      |  
    MFC90D.DLL MFC90.DLL  
```  
  
 Il MFCxx.DLL è generalmente l'ultimo la risorsa e un elenco di classi. Questo file include tutte le risorse MFC standard, tra cui le stringhe di richiesta per tutti gli ID di comando standard. Se viene posizionato alla fine dell'elenco consente DLL e l'applicazione client di non usare una propria copia di risorse MFC standard, ma al si basano su risorse condivise il MFCxx.DLL invece.  
  
 Unione delle risorse e i nomi delle classi di tutte le DLL nello spazio dei nomi dell'applicazione client è lo svantaggio consiste nel fatto che è necessario prestare attenzione quali ID o nomi che scelto. È possibile naturalmente disabilitare questa funzionalità tramite l'esportazione non sia le risorse o **CDynLinkLibrary** oggetto all'applicazione client. Il [DLLHUSK](../visual-cpp-samples.md) esempio gestisce lo spazio dei nomi di risorsa condivisa utilizzando più file di intestazione. Vedere [Nota tecnica 35](../mfc/tn035-using-multiple-resource-files-and-header-files-with-visual-cpp.md) per altri suggerimenti sull'utilizzo dei file di risorsa condivisa.  
  
### <a name="initializing-the-dll"></a>Inizializzazione di DLL  
 Come indicato in precedenza, è possibile creare un **CDynLinkLibrary** oggetto per esportare le classi e le risorse all'applicazione client. È necessario fornire un punto di ingresso esportato per inizializzare la DLL. Come minimo, si tratta di una routine void che non accetta argomenti e non restituisce nulla, ma può essere liberamente.  
  
 Ogni applicazione client che utilizza la DLL è necessario chiamare la routine di inizializzazione, se si utilizza questo approccio. È anche possibile allocare questo **CDynLinkLibrary** oggetto del `DllMain` solo dopo la chiamata `AfxInitExtensionModule`.  
  
 La routine di inizializzazione necessario creare un **CDynLinkLibrary** oggetto nell'heap dell'applicazione corrente, collegata alle informazioni di DLL di estensione MFC. Questa operazione può essere eseguita con gli elementi seguenti:  
  
```  
extern "C" extern void WINAPI InitXxxDLL()  
{  
    new CDynLinkLibrary(extensionDLL);

}  
```  
  
 Il nome di una routine, *InitXxxDLL* in questo esempio, è possibile immettere le informazioni desiderate. Non è necessario essere `extern "C"`, ma tale scelta rende più semplice gestire l'elenco di esportazione.  
  
> [!NOTE]
>  Se si utilizza la DLL di estensione MFC da una normale DLL MFC, è necessario esportare questa funzione di inizializzazione. Questa funzione deve essere chiamata prima di utilizzare le risorse o classi DLL estensione MFC rispetto ai normali DLL MFC.  
  
### <a name="exporting-entries"></a>Esportazione di voci  
 La più semplice per esportare le classi consiste nell'utilizzare **declspec** e **dllexport** su ogni classe e funzione globale da esportare. Questo rende molto più semplice, ma è meno efficace rispetto alla denominazione ogni punto di ingresso (descritta di seguito), poiché si dispone di un controllo minore sui quali funzioni vengono esportate e non è possibile esportare le funzioni per ordinale. TESTDLL1 e TESTDLL2 utilizzare questo metodo per esportare le voci relative.  
  
 Un metodo più efficiente (e il metodo utilizzato da MFCxx.DLL) consiste nell'esportare manualmente ogni voce assegnando ogni voce di. File DEF. Poiché è stiamo esportazione selettive esportazioni da DLL (ovvero, non tutti), è necessario decidere quali interfacce specifici che si desidera esportare. Questa condizione è difficile perché è necessario specificare i nomi alterati al linker sotto forma di voci di. File DEF. Non esportare tutte le classi C++, a meno che non si necessita di un collegamento simbolico per tale.  
  
 Se si è tentato l'esportazione di C++ classi con una. Prima di, è possibile sviluppare uno strumento per generare automaticamente l'elenco di file DEF. Questa operazione può essere eseguita tramite un processo di collegamento in due fasi. Collegare la DLL di una volta con alcuna esportazione e consentire al linker di generare una. File di mapping. Il file con estensione File di mappa può essere utilizzato per generare un elenco di funzioni che devono essere esportati, con alcune ridisposizione, può essere utilizzato per generare le voci di esportazione per il. File DEF. Elenco di esportazione per MFCxx.DLL e OLE e le DLL di estensione Database MFC, diverse migliaia di numero, è stato generato con questo tipo di processo (anche se non è completamente automatico e richiede alcune mano ottimizzazione ogni volta in un po' di tempo).  
  
### <a name="cwinapp-vs-cdynlinklibrary"></a>CWinApp vs. CDynLinkLibrary  
 Non dispone di una DLL di estensione MFC un `CWinApp`-oggetto propri derivato; invece è necessario collaborare con il `CWinApp`-oggetto dell'applicazione client derivato. Ciò significa che l'applicazione client possiede il message pump principale, il ciclo inattivo e così via.  
  
 Se la DLL di estensione MFC deve mantenere dati aggiuntivi per ogni applicazione, è possibile derivare una nuova classe da **CDynLinkLibrary** e crearla nel InitXxxDLL routine sopra descritti. Quando si esegue, la DLL può cercare elenco dell'applicazione corrente di **CDynLinkLibrary** oggetti da trovare quello più DLL di estensione MFC specifica.  
  
### <a name="using-resources-in-your-dll-implementation"></a>Utilizzo delle risorse nell'implementazione di DLL  
 Come indicato in precedenza, il carico di risorse predefinito assiste l'elenco di **CDynLinkLibrary** oggetti per il primo file EXE o DLL contenente la risorsa richiesta. Tutte le API di MFC, nonché tutto il codice interno Usa `AfxFindResourceHandle` per esaminare l'elenco di risorse per individuare qualsiasi risorsa, indipendentemente da dove possono trovarsi.  
  
 Se si desidera caricare solo le risorse da una posizione specifica, usare le API `AfxGetResourceHandle` e `AfxSetResourceHandle` per salvare l'handle precedente e impostare il nuovo handle. Prestare attenzione a ripristinare l'handle di risorsa precedente prima di tornare all'applicazione client. L'esempio TESTDLL2 utilizza questo approccio per caricamento esplicito di un menu.  
  
 Scorrere l'elenco presenta gli svantaggi che è leggermente più lenta e richiede la gestione degli intervalli di ID di risorsa. Offre il vantaggio che un'applicazione client che si collega a diverse DLL di estensione MFC è possibile utilizzare qualsiasi risorsa fornita dalla DLL senza dover specificare l'handle di istanza DLL. `AfxFindResourceHandle`è un'API utilizzata per scorrere l'elenco di risorse per cercare una corrispondenza specificata. Accetta il nome e il tipo di una risorsa e restituisce l'handle di risorsa in cui è stato rilevato prima (o NULL).  
  
##  <a name="_mfcnotes_writing_an_application_that_uses_the_dll_version"></a>Scrittura di un'applicazione che utilizza la versione DLL  
  
### <a name="application-requirements"></a>Requisiti dell'applicazione  
 Un'applicazione che utilizza la versione di MFC condivisa è necessario seguire alcune semplici regole:  
  
-   Deve avere un `CWinApp` dell'oggetto e seguire le regole standard per un message pump.  
  
-   Deve essere compilato con un set di flag del compilatore obbligatorio (vedere sotto).  
  
-   È necessario collegarsi alle librerie di importazione MFCxx. Impostando i flag del compilatore necessari, le intestazioni MFC determinano in fase di collegamento libreria in cui l'applicazione deve collegarsi a.  
  
-   Per eseguire il file eseguibile, MFCxx.DLL deve essere nel percorso o nella directory di sistema di Windows.  
  
### <a name="building-with-the-development-environment"></a>Compilazione con l'ambiente di sviluppo  
 Se si utilizza il file di progetto interna con la maggior parte delle impostazioni predefinite standard, è possibile modificare facilmente il progetto per compilare la versione DLL.  
  
 Il passaggio seguente si presuppone che un'applicazione MFC correttamente funzionante collegata con NAFXCWD. LIB (per il debug) e NAFXCW. LIB (per attivazione singola) e si desidera convertire in modo che utilizzi la versione della libreria MFC condivisa. Si esegue l'ambiente di Visual C++ e di un file di progetto interna.  
  
1.  Nel **progetti** menu, fare clic su **proprietà**. Nel **generale** pagina **impostazioni predefinite progetto**, impostare Microsoft Foundation Classes **Usa MFC in una DLL condivisa** (MFCxx(d).dll).  
  
### <a name="building-with-nmake"></a>Compilazione di NMAKE  
 Se si utilizza la funzionalità di makefile esterni di Visual C++ o si utilizza direttamente NMAKE, è necessario modificare il makefile per il supporto del compilatore e le opzioni del linker  
  
 Richiesta flag del compilatore:  
  
 **/ /MD /D_AFXDLL**  
 **/ /D_AFXDLL**  
  
 Le intestazioni standard di MFC è necessario questo simbolo da definire:  
  
 **/MD**  
 L'applicazione deve utilizzare la versione DLL della libreria di runtime C  
  
 Tutti gli altri flag del compilatore seguire i valori predefiniti MFC (ad esempio, debug per il debug).  
  
 Modificare l'elenco del linker delle librerie. Modifica NAFXCWD. LIB per MFCxxD.LIB e modificare NAFXCW. LIB di MFCxx.LIB. Sostituire LIBC. LIB con MSVCRT. LIB. Come con qualsiasi altra libreria MFC, è importante che si trova MFCxxD.LIB **prima** tutte le librerie di runtime C.  
  
 Facoltativamente, aggiungere **/D_AFXDLL** per la distribuzione e debug opzioni del compilatore di risorse (quella effettivamente compila le risorse con **/R**). In questo modo l'eseguibile finale più piccoli condividendo le risorse presenti in una DLL MFC.  
  
 Dopo aver apportato queste modifiche, è necessario una ricompilazione completa.  
  
### <a name="building-the-samples"></a>Compilazione degli esempi di  
 La maggior parte dei programmi di esempio MFC può essere compilata da Visual C++ o da un MAKEFILE NMAKE compatibile condiviso dalla riga di comando.  
  
 Per convertire qualsiasi di questi esempi da usare MFCxx.DLL, è possibile caricare il. MAK del file in Visual C++ e impostare le opzioni di progetto, come descritto in precedenza. Se si utilizza la compilazione NMAKE, è possibile specificare "AFXDLL = 1" in NMAKE riga di comando e che verrà compilato il codice di esempio tramite le librerie MFC condivise.  
  
 L'esempio di concetti avanzati MFC [DLLHUSK](../visual-cpp-samples.md) viene compilato con la versione DLL di MFC. In questo esempio non solo viene illustrato come compilare un'applicazione collegata con MFCxx.DLL, ma illustra anche altre funzionalità dell'opzione di creazione di pacchetti di DLL MFC, ad esempio le DLL di estensione MFC descritto più avanti in questa nota tecnica.  
  
### <a name="packaging-notes"></a>Note sulla creazione di pacchetti  
 La versione finale delle DLL (MFCxx [U]. DLL) sono liberamente ridistribuibili. La versione di debug delle DLL non sono può essere ridistribuita gratuitamente e deve essere utilizzato solo durante lo sviluppo dell'applicazione.  
  
 Le DLL di debug vengono fornite informazioni di debug. Tramite il debugger di Visual C++, è possibile tracciare l'esecuzione dell'applicazione, nonché la DLL. Le DLL di versione (MFCxx [U]. DLL) non contengono informazioni di debug.  
  
 Se si personalizzano o si ricompila le DLL, quindi è necessario chiamare in un elemento diverso dal file "MFCxx" di MFC SRC MFCDLL. MAK vengono descritte le opzioni di compilazione e contiene la logica per la ridenominazione della DLL. Rinominare i file è necessaria, poiché queste DLL sono potenzialmente condivisi da numerose applicazioni MFC. Con la versione personalizzata di sostituire la DLL MFC quelli installati nel sistema è possibile interrompere un'altra applicazione MFC con le DLL MFC condivisa.  
  
 Si consiglia di non ricompilare le DLL di MFC.  
  
##  <a name="_mfcnotes_how_the_mfc30.dll_is_implemented"></a>La modalità di implementazione di MFCxx.DLL  
 Nella sezione seguente descrive come viene implementata la DLL MFC (MFCxx.DLL e MFCxxD.DLL). Comprendere che i dettagli di seguito non sono importante se si desidera eseguire è utilizzare la DLL di MFC con l'applicazione. I dettagli di seguito non sono essenziali per comprendere come scrivere una DLL di estensione MFC, ma la comprensione di questa implementazione può consentono di scrivere la propria DLL.  
  
### <a name="implementation-overview"></a>Panoramica dell'implementazione  
 DLL MFC è effettivamente un caso speciale di una DLL di estensione MFC, come descritto in precedenza. Include un numero molto elevato di esportazioni per un numero elevato di classi. Esistono alcuni altri fattori nelle DLL MFC che rendono ancora più speciali di una DLL di estensione MFC regolare.  
  
### <a name="win32-does-most-of-the-work"></a>Win32 esegue la maggior parte del lavoro  
 La versione a 16 bit di MFC è necessario un numero di tecniche particolari, inclusi i dati per ogni applicazione nel segmento di stack, segmenti speciali creati da codice 80x86 assembly, i contesti di eccezione per ogni processo e altre tecniche. Win32 supporta direttamente per elaborare i dati in una DLL, ovvero la maggior parte del tempo desiderato. Per la maggior parte MFCxx.DLL è semplicemente NAFXCW. LIB inclusa in una DLL. Se si esamina il codice sorgente MFC, sono disponibili poche AFXDLL #ifdef, poiché sono presenti pochi casi speciali che devono essere apportate. I casi speciali che vi sono specificamente per affrontare Win32 su Windows 3.1 (noto anche come Win32s). Win32s non supporto per ogni processo DLL i dati direttamente alla DLL MFC pertanto è necessario utilizzare l'archiviazione locale di thread (TLS) API Win32 per ottenere i dati di processo locale.  
  
### <a name="impact-on-library-sources-additional-files"></a>Impatto su origini di libreria, i file aggiuntivi  
 L'impatto del **AFXDLL** versione nelle intestazioni e origini di libreria di classe MFC di normale è relativamente minore. È presente un file di versione speciale (AFXV_DLL. H), nonché un file di intestazione aggiuntivi (AFXDLL_. H) per il principale AFXWIN incluso. Intestazione H. Il AFXDLL_. Intestazione H include la **CDynLinkLibrary** classe e altri dettagli di implementazione di entrambi **AFXDLL** applicazioni e DLL di estensione MFC. Il AFXDLLX. Intestazione H viene fornito per la creazione di DLL di estensione MFC (vedere in precedenza per i dettagli).  
  
 Le origini regolari alla libreria MFC in MFC SRC hanno altro codice condizionale nel **AFXDLL** #ifdef. Un file di origine aggiuntivi (DLLINIT. CPP) contiene il codice di inizializzazione di DLL aggiuntivo e altre glue per la versione condivisa di MFC.  
  
 Per compilare la versione condivisa di MFC, vengono forniti i file aggiuntivi. (Vedere di seguito per informazioni dettagliate su come compilare la DLL.)  
  
-   Due. DEF (file) vengono utilizzati per esportare i punti di ingresso DLL MFC per il debug (MFCxxD.DEF) e (MFCxx.DEF) la versione della DLL.  
  
-   Un oggetto. File RC (MFCDLL. RC) contiene tutte le risorse MFC standard e una risorsa VERSIONINFO per la DLL.  
  
-   A. File CLW (MFCDLL. CLW) viene fornita per consentire l'esplorazione di MFC ClassWizard utilizzando le classi. Nota: questa funzionalità non è specifica per la versione DLL di MFC.  
  
### <a name="memory-management"></a>Gestione della memoria  
 Un'applicazione utilizzando MFCxx.DLL utilizza un allocatore di memoria comune fornito da MSVCRTxx.DLL, la DLL di runtime C condivisa. L'applicazione, le DLL di estensione MFC e anche come DLL MFC utilizzano l'allocatore di memoria condivisa. Utilizzando una DLL condivisa per l'allocazione della memoria, le DLL MFC possibile allocare memoria in un secondo momento dall'applicazione o viceversa. Poiché l'applicazione e la DLL devono utilizzare l'allocatore stesso, eseguire l'override di C++ globale `operator new` o `operator delete`. Le stesse regole si applicano al resto delle routine di allocazione di memoria di runtime C (ad esempio `malloc`, `realloc`, **libero**e altri).  
  
### <a name="ordinals-and-class-declspecdllexport-and-dll-naming"></a>Numeri ordinali e classe dllexport e DLL di denominazione  
 Non vengono usati il `class` **dllexport** funzionalità del compilatore C++. Al contrario, un elenco di esportazioni è incluso con le origini di libreria di classe (MFCxx.DEF e MFCxxD.DEF). Vengono esportati solo questi selezionare set di punti di ingresso (funzioni e dati). Altri simboli, ad esempio MFC implementazione privata funzioni o classi, non vengono esportate tutte le esportazioni vengono effettuate dall'ordinale senza un nome di stringa nella tabella nome residenti o non residenti.  
  
 Utilizzando `class` **dllexport** potrebbe essere un'alternativa valida per la creazione di DLL di dimensioni ridotte, ma nel caso di una DLL di grandi dimensioni come MFC, il valore predefinito di esportazione meccanismo con efficienza e la capacità dei limiti.  
  
 Ciò significa tutte è che è possibile creare un pacchetto una grande quantità di funzionalità nella versione MFCxx.DLL che è solo circa 800 KB senza compromettere la quantità di esecuzione o velocità di caricamento. MFCxx.DLL sarebbe stata maggiore di 100 KB questa tecnica non fosse stata utilizzata. Questo rende possibile l'aggiunta di punti di ingresso aggiuntivi alla fine del. File DEF per consentire il controllo delle versioni semplice senza compromettere l'efficienza di velocità e dimensioni di esportazione per ordinale. Le revisioni di versione principale nella libreria di classi MFC verranno modificato il nome della libreria. Vale a dire MFC30. DLL è la DLL ridistribuibile che contiene la versione 3.0 della libreria di classi MFC. Un aggiornamento di questa DLL, ad esempio, in un ipotetico 3.1 di MFC, la DLL verrebbe denominata MFC31. DLL invece. Se si modifica il codice sorgente MFC per produrre una versione personalizzata di DLL MFC, usare nuovamente un nome diverso (e preferibilmente senza "MFC" nel nome).  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)


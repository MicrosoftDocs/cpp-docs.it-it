---
title: "TN033: versione DLL di MFC | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.dll"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AFXDLL (libreria)"
  - "versione DLL di MFC [C++]"
  - "DLL [C++], MFC"
  - "DLL MFC [C++], scrittura di DLL di estensione"
  - "TN033"
ms.assetid: b6f1080b-b66b-4b1e-8fb1-926c5816392c
caps.latest.revision: 13
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# TN033: versione DLL di MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questa nota viene illustrato come utilizzare le librerie a collegamento dinamico condivise di MFCxxD.DLL e dove x rappresenta il numero di versione di MFC\) con le applicazioni MFC e le DLL di estensione.  Per ulteriori informazioni sulle DLL regolari, vedere [Utilizzo di MFC come parte di una DLL](../mfc/tn011-using-mfc-as-part-of-a-dll.md).  
  
 Questa nota tecnica vengono descritti tre aspetti delle DLL.  Gli ultimi due sono per gli utenti più avanzati:  
  
-   [Come si compila una DLL di estensione MFC](#_mfcnotes_how_to_write_an_mfc_extension_dll)  
  
-   [La compilazione di un'applicazione MFC che utilizza la versione DLL di MFC](#_mfcnotes_writing_an_application_that_uses_the_dll_version)  
  
-   [Come le librerie a collegamento dinamico condivise MFC vengono implementate](#_mfcnotes_how_the_mfc30.dll_is_implemented)  
  
 Se si è interessati nella compilazione di una DLL utilizzando MFC che può essere utilizzato con MFC non applications \(questo è noto come DLL regolare\), fare riferimento a [Nota tecnica 11](../mfc/tn011-using-mfc-as-part-of-a-dll.md).  
  
## Cenni preliminari sul supporto di x: Terminologia e file  
 **DLL regolare**: Utilizzare una DLL regolare per compilare una DLL autonomo utilizzando alcune classi MFC.  Le interfacce attraverso il limite di App\/DLL sono interfacce "C" e l'applicazione client non sia un'applicazione MFC.  
  
 L'esempio è la versione del supporto della DLL di supporto in MFC 1,0.  Viene descritto in [Nota tecnica 11](../mfc/tn011-using-mfc-as-part-of-a-dll.md) e i concetti avanzati MFC vengono fornite [DLLScreenCap](../top/visual-cpp-samples.md).  
  
> [!NOTE]
>  A partire da Visual C\+\+ versione 4,0, il termine **USRDLL** è deprecato ed è stato sostituito da una DLL regolare collegata a MFC in modo statico.  È inoltre possibile compilare una DLL regolare collegata a MFC.  
  
 MFC 3,0 \(e\) su supporta le DLL regolari con qualsiasi nuova funzionalità incluse OLE e le classi di database.  
  
 **AFXDLL**: Ciò viene definita anche la versione condivisa delle librerie MFC.  Si tratta del nuovo supporto di DLL aggiunto in MFC 2,0.  La libreria MFC stessa è in alcune DLL \(descritti di seguito\) e un'applicazione client o una DLL collegata in modo dinamico le DLL necessarie.  Le interfacce attraverso il limite di application\/DLL sono interfacce della classe di C\+\+\/MFC.  L'applicazione client DEVE essere un'applicazione MFC.  Questo supporta tutte le funzionalità di MFC 3,0 \(exception: UNICODE non è supportato per le classi di database\).  
  
> [!NOTE]
>  A partire da Visual C\+\+ versione 4,0, questo tipo di DLL è denominato "una DLL di estensione."  
  
 Questa nota utilizzerà questo file per fare riferimento all'intero insieme di DLL MFC, tra cui:  
  
-   Debug: MFCxxD.DLL \(combinato\) e MFCSxxD.LIB \(statico\).  
  
-   Versione: MFCxx.DLL \(combinato\) e MFCSxx.LIB \(statico\).  
  
-   Debug Unicode: MFCxxUD.DLL \(combinato\) e MFCSxxD.LIB \(statico\).  
  
-   Versione Unicode: MFCxxU.DLL \(combinato\) e MFCSxxU.LIB \(statico\).  
  
> [!NOTE]
>  Le librerie di MFCSxx\[U\] \[D\].LIB vengono utilizzate insieme alle DLL condivise MFC.  Queste librerie contengono il codice che deve essere collegato staticamente all'applicazione o DLL.  
  
 Si collega alle librerie di importazione corrispondenti:  
  
-   Debug: MFCxxD.LIB  
  
-   Versione: MFCxx.LIB  
  
-   Debug Unicode: MFCxxUD.LIB  
  
-   Versione Unicode: MFCxxU.LIB  
  
 "Una DLL di estensione MFC" è una DLL compilata su x \(e\/o gli altri DLL condivisa MFC\).  Qui l'architettura componente MFC vengono fornite di calci viene avviato.  Se si deriva una classe utile per una classe MFC, o si compila un altro kit di tipo MFC, è possibile posizionarlo in una DLL.  Che utilizza la DLL MFCxx.DLL, a differenza dell'applicazione client finale.  Questo consente alle classi riutilizzabili foglia, le classi di base e riutilizzabili classi riutilizzabili documento\/visualizzazione.  
  
## Pro e contro  
 Poiché è necessario utilizzare la versione condivisa di MFC?  
  
-   Utilizzo della libreria condivisa può causare lievi più piccole applicazioni \(un'applicazione minima che utilizza più delle librerie MFC è inferiore a 10K\).  
  
-   La versione condivisa delle DLL e le DLL regolari di estensione di MFC supporta MFC.  
  
-   Compilare un'applicazione che utilizza le librerie MFC condivise è più veloce rispetto a quella di un'applicazione MFC collegata in modo statico poiché non occorre collegare la libreria MFC.  Soprattutto nelle build di **DEBUG** in cui il linker deve comprimere le informazioni di debug \- collegamento a una DLL che già contiene le informazioni di debug, si avranno meno informazioni di debug da includere in un'applicazione.  
  
 Poiché non è necessario utilizzare la versione condivisa di MFC:  
  
-   Fornire un'applicazione che utilizza la libreria condivisa è necessario fornire la libreria e altri \(dove x\) con il programma.  MFCxx.DLL è liberamente ridistribuibili il numero di DLL, ma è comunque necessario installare la DLL nel programma di installazione.  Inoltre, è necessario fornire il MSVCRTxx.DLL, che contiene la libreria di runtime utilizzata sia dal programma che dalle DLL MFC.  
  
##  <a name="_mfcnotes_how_to_write_an_mfc_extension_dll"></a> Come scrivere una DLL di estensione MFC  
 Una DLL di estensione MFC è una DLL che contiene le classi e le funzioni scritte per abbellire la funzionalità delle classi MFC.  Una DLL di estensione MFC utilizza le DLL MFC condivise allo stesso modo in cui un'applicazione utilizza, con alcune considerazioni aggiuntive:  
  
-   Il processo di compilazione è simile alla compilazione di un'applicazione che utilizza le librerie MFC condivise con gli altri compilatore aggiuntivo e opzioni del linker.  
  
-   Una DLL di estensione MFC non ha `CWinApp`\- classe derivata.  
  
-   Una DLL di estensione MFC deve fornire `DllMain`speciale.  AppWizard fornisce una funzione di `DllMain` modificabile.  
  
-   Una DLL di estensione MFC in genere fornirà una procedura di inizializzazione per creare **CDynLinkLibrary** se la DLL di estensione desidera esportare `CRuntimeClass` es o risorse all'applicazione.  Una classe derivata di **CDynLinkLibrary** può essere utilizzata se i dati di ciascuna applicazione devono essere gestiti dalla DLL di estensione.  
  
 Queste considerazioni sono descritte in dettaglio di seguito.  È inoltre necessario fare riferimento all'esempio [In DLLHUSK](../top/visual-cpp-samples.md) di concetti avanzati poiché MFC seguente:  
  
-   Compilare un'applicazione utilizzando le librerie condivise. \(DLLHUSK.EXE è un'applicazione MFC collegata alle librerie MFC nonché a altre DLL\).  
  
-   Compilare una DLL di estensione MFC. \(Si noti che i flag speciali come `_AFXEXT` in costruzione utilizzata una DLL di estensione\)  
  
-   Due esempi di DLL di estensione MFC.  Viene illustrata la struttura di base di una DLL di estensione MFC con le esportazioni limitate \(TESTDLL1\) e l'altro viene illustrato che esporta un'intera interfaccia della classe \(TESTDLL2\).  
  
 Sia l'applicazione client che tutte le DLL di estensione devono utilizzare la stessa versione di questo file.  È necessario seguire la convenzione della DLL MFC e associare al debug della versione finale \(\/release\) della DLL di estensione.  In questo modo i programmi client di compilare sia il debug della vendita al dettaglio le versioni delle applicazioni e collegarle con il debug appropriato oppure la versione finale delle DLL.  
  
> [!NOTE]
>  Poiché i problemi dell'esportazione e C\+\+, l'elenco di esportazione da una DLL di estensione possono essere differenti nella versione finale e quella di debug versioni dello stesso DLL e DLL per piattaforme diverse.  La versione finale MFCxx.DLL ha circa 2000 punti di ingresso esportati; il debug MFCxxD.DLL ha circa 3000 punti di ingresso esportati.  
  
### Nota rapida sulla gestione della memoria  
 La sezione relativa gestione della memoria," verso la fine di questa nota tecnica, descritta l'implementazione di questo file con la versione condivisa di MFC.  Le informazioni che è necessario conoscere per implementare solo una DLL di estensione sono descritte qui.  
  
 MFCxx.DLL e tutte le DLL di estensione caricate nello spazio degli indirizzi di un'applicazione client utilizzeranno lo stesso allocatore di memoria, il caricamento delle risorse e altri stati globali "" MFC come se fossero nella stessa applicazione.  Ciò è significativo poiché le librerie e le DLL regolari DLL non MFC collegate a MFC fare esattamente opposto e ciascuna DLL che alloca dal proprio pool di memoria.  
  
 Se una DLL di estensione alloca memoria, la memoria può liberamente mescolarsi con qualsiasi altro oggetto allocato dall'applicazione.  Inoltre, se un'applicazione che utilizza le librerie MFC condivise si arresta in modo anomalo, la sicurezza del sistema operativo gestirà l'integrità di qualsiasi altra applicazione MFC che condivide la DLL.  
  
 Analogamente altri stati globali "" mfc, ad esempio il file eseguibile corrente per caricare le risorse, vengono condivisi tra l'applicazione client e tutte le DLL di estensione MFC nonché MFCxx.DLL stessa.  
  
### Compilare una DLL di estensione  
 È possibile utilizzare AppWizard per creare un progetto DLL di estensione MFC e generato automaticamente le impostazioni appropriate del compilatore e del linker.  Non viene generata una funzione di `DllMain` modificabile.  
  
 Se si converte un progetto esistente in una dll di estensione MFC, l'avvio con le regole standard per compilare un'applicazione utilizzando la versione condivisa di MFC, quindi esegue le operazioni seguenti:  
  
-   Aggiungere **\/D\_AFXEXT** ai flag del compilatore.  Nella finestra di dialogo proprietà progetto, selezionare il nodo C\/C\+\+.  Selezionare la categoria del preprocessore.  Aggiungere `_AFXEXT` alle macro di definizione campo, separando ogni elemento con punti e virgola.  
  
-   Rimuovere l'opzione del compilatore di **\/Gy**.  Nella finestra di dialogo proprietà progetto, selezionare il nodo C\/C\+\+.  Selezionare la categoria di generazione codice.  Verificare che abilita "di" l'opzione di collegamento a livello di funzione non è abilitato.  Ciò faciliterà esportare le classi poiché il linker non rimuoverà le funzioni senza riferimenti.  Se il progetto originale viene utilizzato compilare una DLL regolare collegata a MFC, modificare l'opzione del compilatore di **\/MT\[d\]** a **\/MD\[d\]**.  
  
-   Compila una libreria di esportazione con l'opzione **\/DLL** LINK.  Verrà impostata quando si crea un nuovo di destinazione, specificando la libreria a collegamento dinamico Win32 come tipo di destinazione.  
  
### Modificare i file di intestazione  
 L'obiettivo di una DLL di estensione è in genere di esportare alcune funzionalità comuni a una o più applicazioni che possono utilizzare tale funzione.  Ciò si ridurre a esportare le classi e le funzioni globali disponibili per le applicazioni client.  
  
 A tale scopo è necessario assicurarsi che tutte le funzioni membro sia contrassegnata come l'importazione o esportazione in base alle proprie esigenze.  Ciò richiede dichiarazioni speciali: **\_\_declspec\(dllexport\)** e **\_\_declspec\(dllimport\)**.  Quando le classi utilizzate dalle applicazioni client, devono per indicare come **\_\_declspec\(dllimport\)**.  Quando la DLL di estensione stesso viene compilato, devono essere dichiarate come **\_\_declspec\(dllexport\)**.  Inoltre, le funzioni devono essere effettivamente esportate, in modo che i programmi client si esegue l'associazione a relativi al momento del caricamento.  
  
 Per esportare l'intera classe, utilizzare **AFX\_EXT\_CLASS** nella definizione di classe.  Questa macro viene definita dal framework come **\_\_declspec\(dllexport\)** quando **\_AFXDLL** e `_AFXEXT` è definito, ma viene definita come **\_\_declspec\(dllimport\)** quando `_AFXEXT` non è definito.  `_AFXEXT` come descritto in precedenza, viene definito solo quando si compila la DLL di estensione.  Di seguito è riportato un esempio.  
  
```  
class AFX_EXT_CLASS CExampleExport : public CObject  
{ ... class definition ... };  
```  
  
### Esportazione di porzioni di classi  
 È talvolta necessario esportare soltanto i singoli membri obbligatori della classe.  Se si esporta, ad esempio, una classe derivata da `CDialog`, può essere sufficiente esportare il costruttore e la chiamata `DoModal`.  È possibile esportare questi membri utilizzando il file di .DEF della DLL, ma è anche possibile utilizzare **AFX\_EXT\_CLASS** modo molto simile a quello sui singoli membri da esportare.  
  
 Di seguito è riportato un esempio.  
  
```  
class CExampleDialog : public CDialog  
{  
public:  
   AFX_EXT_CLASS CExampleDialog();  
   AFX_EXT_CLASS int DoModal();  
   // rest of class definition  
   .  
   .  
   .  
};  
```  
  
 In questo caso, è possibile che si verifichino in un problema aggiuntivo perché non si esportano tutti i membri della classe.  Il problema ingombra di lavoro di macro MFC.  Molte macro di supporto MFC dichiarano o definiscono in realtà membri dati.  Di conseguenza, questi membri dati anche devono essere esportati dalla DLL.  
  
 La macro `DECLARE_DYNAMIC`, ad esempio, viene definita nel modo seguente quando si compila una DLL di estensione:  
  
```  
#define DECLARE_DYNAMIC(class_name) \  
protected: \  
   static CRuntimeClass* PASCAL _GetBaseClass(); \  
   public: \  
   static AFX_DATA CRuntimeClass class##class_name; \  
   virtual CRuntimeClass* GetRuntimeClass() const; \  
```  
  
 La riga che inizia `AFX_DATA`"static" sta dichiarando un oggetto static all'interno della classe.  Per esportare correttamente questa classe e accedere alle informazioni di runtime di un PROGETTO client, è necessario esportare questo oggetto statico.  Poiché l'oggetto static viene dichiarato con il modificatore `AFX_DATA`, è sufficiente definire `AFX_DATA` come **\_\_declspec\(dllexport\)** quando si compila la DLL e come **\_\_declspec\(dllimport\)** quando si compila l'eseguibile client.  
  
 Come descritto in precedenza, **AFX\_EXT\_CLASS** è già definito in questo modo.  È sufficiente ridefinire `AFX_DATA` per essere uguale a **AFX\_EXT\_CLASS** intorno alla definizione di classe.  
  
 Di seguito è riportato un esempio.  
  
```  
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
  
 MFC utilizza sempre Il simbolo di `AFX_DATA` sugli elementi di dati che definisce all'interno delle macro, questa tecnica può essere utilizzata per tutti gli scenari di questo tipo.  Ad esempio, può essere utilizzata per `DECLARE_MESSAGE_MAP`.  
  
> [!NOTE]
>  Se si esporta l'intera classe anziché alcuni membri di essa, i membri dati statici vengono esportati automaticamente.  
  
 È possibile utilizzare la stessa tecnica automaticamente per esportare l'operatore di estrazione di `CArchive` per le classi che utilizzano le macro di `IMPLEMENT_SERIAL` e di `DECLARE_SERIAL`.  Esportare operator archivio l'accesso le dichiarazioni di classe \(trovano in. File H\) con il codice seguente:  
  
```  
#undef AFX_API  
#define AFX_API AFX_EXT_CLASS  
  
<your class declarations here>  
  
#undef AFX_API  
#define AFX_API  
```  
  
### Limitazioni di \_AFXEXT  
 È possibile utilizzare il simbolo del preprocessore di**AFXEXT** di \_per le DLL di estensione purché non siano presenti più livelli di DLL di estensione.  Se si hanno DLL di estensione che chiamano o derivano da classi nelle relative DLL di estensione, derivando quindi dalle classi MFC, è necessario utilizzare il proprio simbolo del preprocessore per evitare ambiguità.  
  
 Il problema è dato dal fatto che in Win32 è necessario dichiarare i dati in modo esplicito come **\_\_declspec\(dllexport\)** se devono essere esportati da una DLL e come **\_\_declspec\(dllimport\)** se devono essere importati da una DLL.  Quando si definisce `_AFXEXT`, le intestazioni MFC assicurano la corretta definizione di **AFX\_EXT\_CLASS**.  
  
 Quando sono presenti più livelli, un simbolo come **AFX\_EXT\_CLASS** non è sufficiente, come DLL di estensione può esportare nuove classi o importare altre classi da un'altra DLL di estensione.  Per gestire questo problema, utilizzare uno speciale simbolo del preprocessore per indicare che si compila la DLL o utilizzando la DLL.  Ad esempio, si immaginino due DLL di estensione, A.DLL e B.DLL.  Esportano entrambe alcune classi in A.H e in B.H, rispettivamente.  B.DLL utilizza le classi di A.DLL.  I file di intestazione potrebbero essere analoghi al seguente:  
  
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
  
 Quando A.DLL viene compilato, viene compilato con **\/D A\_IMPL** e B.DLL quando viene compilato, viene compilato con **\/D B\_IMPL**.  Utilizzando simboli distinti per ogni DLL, CExampleB viene esportato mentre CExampleA viene importato durante la compilazione B.DLL.  CExampleA viene esportato durante la compilazione A.DLL e importato quando viene utilizzato da B.DLL \(o da un altro client\).  
  
 Questo tipo di livello non può essere realizzato quando si utilizzano **AFX\_EXT\_CLASS** e i simboli del preprocessore incorporati di `_AFXEXT`.  La tecnica sopra descritta risolve il problema in modo non dissimile dal meccanismo utilizzato da MFC nella compilazione i relativi DLL di estensione OLE, database e della rete.  
  
### Esportazione di porzioni di classi  
 Nuovamente, è necessario prendere molta attenzione quando si esportano porzioni di classi.  È necessario assicurarsi che gli elementi di dati necessari creati dalle macro MFC vengono esportati correttamente.  Questa operazione può essere eseguita la ridefinizione **AFX\_DATA** alla macro specifica delle classi.  Eseguire questa operazione ogni volta che non si esporta l'intera classe.  
  
 Di seguito è riportato un esempio.  
  
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
   //class definition   
   .  
   .  
   .  
};  
  
#undef AFX_DATA  
#define AFX_DATA  
```  
  
### DllMain  
 Ecco il codice esatta è necessario inserire nel file di origine principale per la DLL di estensione.  Deve presentarsi dopo lo standard include.  Si noti che quando si utilizza AppWizard per creare i file iniziali per una DLL di estensione, fornisce `DllMain` automaticamente.  
  
```  
#include "afxdllx.h"  
  
static AFX_EXTENSION_MODULE extensionDLL;  
  
extern "C" int APIENTRY   
DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID)  
{  
   if (dwReason == DLL_PROCESS_ATTACH)  
   {  
      // Extension DLL one-time initialization   
      if (!AfxInitExtensionModule(  
             extensionDLL, hInstance))  
         return 0;  
  
      // TODO: perform other initialization tasks here  
   }  
   else if (dwReason == DLL_PROCESS_DETACH)  
   {  
      // Extension DLL per-process termination  
      AfxTermExtensionModule(extensionDLL);  
  
          // TODO: perform other cleanup tasks here  
   }  
   return 1;   // ok  
}  
```  
  
 La chiamata a `AfxInitExtensionModule` acquisisce le classi di runtime dei moduli \(strutture di`CRuntimeClass` \) nonché le object factory \(oggetti di`COleObjectFactory` \) da utilizzare in un secondo momento quando l'oggetto di **CDynLinkLibrary** viene creato.  La chiamata \(facoltativo\) in `AfxTermExtensionModule` concede a MFC nella pulizia la DLL di estensione quando ogni processo rimuove \(che si verifica quando viene chiuso, o quando la DLL viene scaricata in seguito a una chiamata di **FreeLibrary** \) dalla DLL di estensione.  Poiché la maggior parte delle DLL di estensione non vengono caricati dinamicamente in genere, vengono collegati tramite le relative librerie di importazione\), la chiamata a `AfxTermExtensionModule` non è in genere necessaria.  
  
 Se l'applicazione carica dinamicamente e libera DLL di estensione, assicurarsi di chiamare `AfxTermExtensionModule` come illustrato in precedenza.  Anche accertarsi di utilizzare `AfxLoadLibrary` e `AfxFreeLibrary` \(anziché le funzioni Win32 **LoadLibrary** e **FreeLibrary**\) se l'applicazione utilizza più thread o se viene caricata in modo dinamico una DLL di estensione.  Utilizzando `AfxLoadLibrary` e di `AfxFreeLibrary` assicura che nel codice di avvio e eseguito quando la DLL di estensione viene caricato e scaricato non danneggi lo stato complessivo di MFC.  
  
 Il file di intestazione AFXDLLX.H contiene definizioni speciali per le strutture utilizzate nelle DLL di estensione, come la definizione per `AFX_EXTENSION_MODULE` e **CDynLinkLibrary**.  
  
 *Il extensionDLL* globale deve essere dichiarato come indicato.  A differenza della versione a 16 bit di MFC, è possibile allocare memoria e chiamare le funzioni MFC in questo periodo, poiché MFCxx.DLL è completamente inizializzato prima del `DllMain` venga chiamato.  
  
### Condivisione di risorse e classi  
 Le DLL di estensione MFC semplici devono unicamente esportare alcune funzioni a larghezza di banda limitata all'applicazione client e nothing di più.  Più DLL complessi dell'interfaccia utente possono risultare utile esportare le risorse e le classi C\+\+ all'applicazione client.  
  
 L'esportazione delle risorse viene effettuata tramite un elenco di risorse.  In ogni applicazione è singolarmente un elenco collegato di oggetti di **CDynLinkLibrary**.  Nella ricerca di una risorsa, la maggior parte delle implementazioni MFC standard che caricano le risorse cerca innanzitutto il modulo di risorse corrente \(`AfxGetResourceHandle`\) e se non trovata la verifica che l'elenco di **CDynLinkLibrary** oggetti tentare di caricare la risorsa richiesta.  
  
 La creazione dinamica di oggetti C\+\+ fornite il nome della classe c\+\+ è simile.  Il meccanismo di deserializzazione degli oggetti MFC deve disporre di tutti gli oggetti di `CRuntimeClass` registrati in modo da effettuare la ricostruzione mediante la creazione dinamica di oggetti C\+\+ del tipo richiesto in base a quanto memorizzato in precedenza.  
  
 Se l'applicazione client di utilizzare le classi nella DLL di estensione che sono `DECLARE_SERIAL`, è necessario esportare le classi per essere visibile all'applicazione client.  Questa operazione viene eseguita la consultazione dell'elenco di **CDynLinkLibrary**.  
  
 Nel caso dei concetti avanzati MFC sono [In DLLHUSK](../top/visual-cpp-samples.md), l'elenco è simile al seguente:  
  
```  
head ->   DLLHUSK.EXE   - or -   DLLHUSK.EXE  
               |                      |  
          TESTDLL2.DLL           TESTDLL2.DLL  
               |                      |  
          TESTDLL1.DLL           TESTDLL1.DLL  
               |                      |  
               |                      |  
            MFC90D.DLL            MFC90.DLL  
```  
  
 MFCxx.DLL è in genere l'ultimo file nell'elenco di classi e risorse.  Questo file include tutte le risorse MFC standard, incluse le stringhe di richiesta per tutti gli ID di comando standard.  Posizionandolo inizio alla fine dell'elenco consente le DLL e l'applicazione client non avere la propria copia delle risorse MFC standard, ma basarsi sulle risorse condivise in questo file.  
  
 L'unione delle risorse e i nomi di classe di tutte le DLL nello spazio dei nomi dell'applicazione client presenta l'inconveniente che è necessario prestare attenzione affinché ID o dei nomi scelta.  È possibile disabilitare questa funzionalità non è necessario esportare le risorse o un oggetto di **CDynLinkLibrary** all'applicazione client.  Nell'esempio [DLLHUSK](../top/visual-cpp-samples.md) viene illustrata la gestione dello spazio dei nomi di risorse condiviso mediante più file di intestazione.  Vedere [Nota tecnica 35](../mfc/tn035-using-multiple-resource-files-and-header-files-with-visual-cpp.md) per ulteriori suggerimenti sull'utilizzo dei file di risorse condivisi.  
  
### Inizializzare la DLL  
 Come accennato in precedenza, in genere sarà opportuno creare un oggetto di **CDynLinkLibrary** per esportare le risorse e classi all'applicazione client.  È necessario fornire un punto di ingresso esportato per inizializzare la DLL.  Come minimo, si tratta di una routine void che non accetta argomenti e non restituisce nothing, ma può essere qualsiasi nome.  
  
 Ogni applicazione client che intenda utilizzare la DLL deve chiamare la routine di inizializzazione, se si utilizza questo approccio.  È inoltre possibile allocare questo oggetto di **CDynLinkLibrary** nel `DllMain` immediatamente dopo la chiamata `AfxInitExtensionModule`.  
  
 La procedura di inizializzazione deve creare un oggetto di **CDynLinkLibrary** nell'heap dell'applicazione corrente, cablata fino alle informazioni di DLL di estensione.  Questa operazione può essere eseguita con quanto segue:  
  
```  
extern "C" extern void WINAPI InitXxxDLL()  
{  
   new CDynLinkLibrary(extensionDLL);  
}  
```  
  
 Il nome della routine, *InitXxxDLL* in questo esempio, può essere qualsiasi elemento desiderati.  Non deve essere `extern "C"`, ma tale operazione rende l'elenco di esportazione più facile da gestire.  
  
> [!NOTE]
>  Se si utilizza la DLL di estensione da una DLL regolare, è necessario esportare questa funzione di inizializzazione.  Questa funzione deve essere chiamata dalla DLL regolare prima di utilizzare eventuali classi o risorse di DLL di estensione.  
  
### Esportazione delle voci  
 La modalità semplice per esportare le classi è utilizzare **\_\_declspec\(dllimport\)** e **\_\_declspec\(dllexport\)** su ogni classe e funzione globale che si desidera esportare.  In questo modo la rende molto più semplice, ma è meno efficiente di denominazione ogni punto di ingresso \(illustrato di seguito\) poiché è meno controllo sulle funzioni esportate e non è possibile esportare funzioni per ordinale.  TESTDLL1 e TESTDLL2 utilizzano questo metodo per esportare i relativi elementi.  
  
 Un metodo più efficace \(e il metodo utilizzato da x\) è di esportare manualmente ogni voce denominazione ogni voce nel file DEF.  In quanto si esportano le esportazioni selettive dal file DLL \(ovvero non tutti\), è necessario decidere quali interfacce di particolare si desidera esportare.  È difficile poiché è necessario specificare i nomi modificati al linker sotto forma di voci nel file DEF.  Non esportare alcune classi C\+\+ a meno che non sia effettivamente necessario disporre di un collegamento per token.  
  
 Se si è cercato esportare le classi C\+\+ con un file def prima, è possibile sviluppare uno strumento per compilare questo elenco viene automaticamente.  Questa operazione può essere eseguita tramite un processo di collegamento in due fasi.  Collegare una volta la DLL senza le esportazioni e che consenta al linker genera un file di .MAP.  Il file di .MAP può essere utilizzato per generare un elenco di funzioni che devono essere esportati, pertanto con un determinato riordinare, può essere utilizzato per generare le voci di ESPORTAZIONE per il file def.  L'elenco esporta per x e OLE e le relative DLL di estensione per database, diverse migliaia di numero, è stato compilato con tale processo \(anche se non è stato completamente automatico e non richiede una certa mano che ottimizza ogni parte consistente\).  
  
### CWinApp e CDynLinkLibrary  
 Una DLL di estensione MFC non ha `CWinApp`\- oggetto derivato specifici; deve invece utilizzare `CWinApp`\- oggetto derivato dell'applicazione client.  Ciò significa che l'applicazione client possiede il message pump principale, il ciclo inattivo e così via.  
  
 Se la DLL di estensione MFC deve gestire dati aggiuntivi per ciascuna applicazione, è possibile derivare una nuova classe da **CDynLinkLibrary** e crearla nella routine di InitXxxDLL descrivere in precedenza.  Durante l'esecuzione, la DLL può cercare nell'elenco di oggetti **CDynLinkLibrary** dell'applicazione corrente quello relativo alla DLL di estensione specifica.  
  
### Utilizzo di risorse nell'implementazione di DLL  
 Come accennato in precedenza, il caricamento predefinito delle risorse consente l'elenco degli oggetti di **CDynLinkLibrary** a cercare il primo file EXE o DLL che dispone di implementare richiesto.  Tutte le API di MFC nonché tutti gli utilizzi `AfxFindResourceHandle` del codice interno scorrere l'elenco delle risorse per cercare qualsiasi risorsa, ovunque possa trovarsi.  
  
 Se si desidera caricare solo le risorse da una posizione specifica, utilizzare le API `AfxGetResourceHandle` e `AfxSetResourceHandle` per salvare l'handle precedente e impostare quello nuovo.  Assicurarsi di ripristinare l'handle di risorsa precedente prima di tornare all'applicazione client.  L'esempio TESTDLL2 utilizza questo approccio consente di eseguire in modo esplicito il carico del menu.  
  
 La consultazione dell'elenco è un'operazione lenta e richiede la gestione degli intervalli di ID delle risorse.  Offre il vantaggio che un'applicazione client che si collega a diverse DLL di estensione può utilizzare una qualsiasi risorsa fornita dalla DLL senza dover specificare l'handle di istanza della DLL.  `AfxFindResourceHandle` è un'API utilizzata per scorrere l'elenco di risorse allo scopo di individuare una data corrispondenza.  Utilizza il nome e il tipo di una risorsa e restituisce l'handle della risorsa nella posizione in cui viene trovato la prima volta oppure il valore NULL.  
  
##  <a name="_mfcnotes_writing_an_application_that_uses_the_dll_version"></a> Scrive un'applicazione che utilizza la versione DLL  
  
### Requisiti dell'applicazione  
 Un'applicazione che utilizza la versione condivisa di MFC deve rispettare alcune semplici regole:  
  
-   Deve avere un oggetto di `CWinApp` e seguire le regole standard per un message pump.  
  
-   Deve essere compilato con un set di flag di associazione del compilatore \(vedere di seguito\).  
  
-   Deve collegarsi alle librerie di importazione .lib.  Impostare i flag di associazione del compilatore, le intestazioni MFC determinano in fase di collegamento cui la libreria l'applicazione deve collegarsi.  
  
-   Per eseguire il file eseguibile, questo file deve essere presente nel percorso o nella directory di sistema di Windows.  
  
### Compilazione con l'ambiente di sviluppo  
 Se si utilizza un makefile interne con la maggior parte delle impostazioni predefinite standard, è possibile modificare facilmente il progetto per compilare la versione della DLL.  
  
 Il passaggio successivo si presume che sia un'applicazione MFC correttamente funzionanti collegata con NAFXCWD.LIB \(per il debug\) e NAFXCW.LIB ad esempio finale\) e si desidera convertire in modo da utilizzare la versione condivisa della libreria MFC.  Si sta eseguendo l'ambiente di Visual C\+\+ e si dispone di un file di progetto interno.  
  
1.  Dal menu di **Progetti**, fare clic su **Proprietà**.  Nella pagina di **Generale** in **Impostazioni predefinite progetto**, impostare le classi MFC \(Microsoft Foundation Class\) a **Usa MFC in una DLL condivisa** \(MFCxx \(d\) con estensione dll\).  
  
### Compilazione con NMAKE  
 Se si utilizza la funzionalità esterna di makefile di Visual C\+\+, se si utilizza NMAKE direttamente, sarà necessario modificare il makefile per supportare il compilatore e le opzioni del linker  
  
 Flag di associazione del compilatore:  
  
 **\/D\_AFXDLL \/MD**  
 **\/D\_AFXDLL**  
  
 Le intestazioni MFC standard devono questo simbolo essere definite:  
  
 **\/MD**  
 L'applicazione deve utilizzare la versione DLL della libreria di runtime del linguaggio C  
  
 Tutti gli altri flag del compilatore seguono le impostazioni predefinite MFC, ad esempio \_DEBUG per il debug.  
  
 Modificare l'elenco del linker delle librerie.  Modificare NAFXCWD.LIB a MFCxxD.LIB e modificare NAFXCW.LIB a MFCxx.LIB.  Sostituire LIBC.LIB con MSVCRT.LIB.  Come con qualsiasi altra libreria MFC è importante che MFCxxD.LIB è posizionato **before** tutte le librerie di runtime c.  
  
 Facoltativamente aggiungere **\/D\_AFXDLL** sia alla versione finale del debug delle opzioni del compilatore di risorse \(quella che effettivamente compilano le risorse con **\/R**\).  In questo modo il più piccolo eseguibile finale condivisione delle risorse presenti nelle DLL MFC.  
  
 Una ricompilazione completa è richiesta dopo che tali modifiche.  
  
### Compilare gli esempi  
 La maggior parte dei programmi di esempio MFC possono essere compilati da Visual C\+\+ o da MAKEFILE NMAKE\- compatibili condivise dalla riga di comando.  
  
 Per convertire uno di questi esempi per utilizzare questo file, è possibile caricare il file di .MAK in Visual C\+\+ e impostare le opzioni del progetto come descritto in precedenza.  Se si utilizza la compilazione di NMAKE, è possibile specificare "AFXDLL\=1" nella riga di comando di NMAKE e che compilerà l'esempio utilizzando le librerie MFC condivise.  
  
 L'esempio [In DLLHUSK](../top/visual-cpp-samples.md) di concetti avanzati MFC viene compilato con la versione DLL di MFC.  Questo esempio non solo illustrato come compilare un'applicazione collegata con x, ma viene illustrato anche altre funzionalità della DLL MFC che assembla l'opzione come DLL di estensione MFC descritti più avanti nella nota tecnica.  
  
### Comprimere le note  
 La versione finale delle DLL \(MFCxx\[U\].DLL\) non deve ridistribuibile.  La versione di debug delle DLL non è liberamente ridistribuibili e deve essere utilizzata solo durante lo sviluppo dell'applicazione.  
  
 Debug di DLL vengono fornite informazioni di debug.  Utilizzando il debugger di Visual C\+\+, è possibile tracciare l'esecuzione dell'applicazione nonché della DLL.  Le DLL della versione \(MFCxx\[U\].DLL\) non contengono informazioni di debug.  
  
 Se personalizzate o ricompilare le DLL, è necessario chiamarli da un'etichetta diversa da "di" MFCxx che il file MFCDLL.MAK MFC SRC descritte le opzioni di compilazione e che contiene la logica per rinominare la DLL.  Rinominare i file necessario, poiché queste DLL potenzialmente condivisi da più applicazioni MFC.  Trasformare una versione personalizzata delle DLL MFC sostituire quelli installati nel sistema può danneggiare un'altra applicazione MFC l'utilizzo di DLL MFC condivise.  
  
 Ricompila le DLL MFC non è consigliata.  
  
##  <a name="_mfcnotes_how_the_mfc30.dll_is_implemented"></a> Come MFCxx.DLL è implementato  
 La seguente sezione viene descritto come DLL MFC \(MFCxx.DLL e MFCxxD.DLL\) viene implementato.  La conoscenza dei dettagli di seguito non è importante se si desidera solo è utilizzare la DLL MFC con l'applicazione.  I dettagli di seguito non sono indispensabili per comprendere come scrivere una DLL di estensione MFC, ma comprendere meglio questa implementazione consente di scrivere un proprio DLL.  
  
### Cenni preliminari sull'implementazione  
 La DLL MFC in realtà è un caso speciale di una DLL di estensione MFC come descritto in precedenza.  Dispone di un grandissimo numero di esportazioni per numerose classi.  Esistono alcune operazioni aggiuntive che viene pianificata nella DLL MFC che gli rendono ancora più speciale che una DLL regolare di estensione.  
  
### In Win32 esegue la maggior parte del lavoro  
 La versione a 16 bit di MFC è necessario diverse tecniche speciali inclusi i dati di ciascuna applicazione nel segmento dello stack, i segmenti speciali creati dall'assembly un 80x86, sui contesti delle eccezioni per processo e altre tecniche.  In Win32 supporta direttamente i dati a livello di singolo processo in una DLL, che è quello che si desidera la maggior parte dei casi.  In genere questo file è semplicemente NAFXCW.LIB compresso in una DLL.  Se si esamina il codice sorgente di MFC, si trova il simbolo \_AFXDLL poche \#ifdef, poiché esistono pochi casi speciali che devono essere trattati.  I casi speciali che sono presenti in particolare di gestione di Win32 in Windows 3.1 \(altrimenti nota come Win32.  I Win32 non supporta direttamente i dati della DLL a livello di singolo processo in modo dalla DLL MFC deve utilizzare l'archiviazione locale di thread \(TLS\) API Win32 per ottenere i dati locali del processo.  
  
### Impatto sulle origini della libreria, file aggiuntivi  
 L'impatto della versione di **\_AFXDLL** sulle origini e le intestazioni normali libreria di classi MFC è relativamente secondario.  Esiste un file speciale della versione \(AFXV\_DLL.H\) nonché un file di intestazione aggiuntivo \(AFXDLL\_.H\) incluso nell'intestazione principale di AFXWIN.H.  L'intestazione di AFXDLL\_.H includa la classe di **CDynLinkLibrary** e altri dettagli di implementazione sia di applicazioni di **\_AFXDLL** di DLL di estensione MFC.  L'intestazione di AFXDLLX.H viene fornita per compilare DLL di estensione MFC \(vedere la sezione precedente per i dettagli\).  
  
 Le origini normali alla libreria MFC in MFC SRC dispone di un codice condizionale aggiuntivo in \#ifdef di **\_AFXDLL**.  Un file di origine aggiuntivo \(DLLINIT.CPP\) contiene il codice di inizializzazione di DLL e l'altra colla per la versione condivisa di MFC.  
  
 Per compilare la versione condivisa di MFC, i file aggiuntivi vengono forniti. \(Vedere di seguito per informazioni dettagliate su come compilare la DLL.\)  
  
-   Due file def vengono utilizzati per l'esportazione di punti di ingresso DLL MFC per le versioni di debug \(MFCxxD.DEF\) e della versione \(MFCxx.DEF\) della DLL.  
  
-   Un file RC \(MFCDLL.RC\) contiene tutte le risorse MFC standard e una risorsa VERSIONINFO della DLL.  
  
-   Un file di .CLW \(MFCDLL.CLW\) viene fornita per consentire esplorare le classi MFC utilizzando ClassWizard.  Nota: questa funzionalità non è specifico della versione DLL di MFC.  
  
### Gestione della memoria  
 Un'applicazione utilizzando questo file viene utilizzato un allocatore di memoria ordinaria fornito da MSVCRTxx.DLL, la DLL condivisa di runtime.  L'applicazione, tutte le DLL di estensione e buono come le DLL MFC utilizza questo stesso allocatore di memoria condivisa.  Utilizzando una DLL condivisa per l'allocazione della memoria, le DLL MFC possono allocare memoria che successivamente viene liberata dall'applicazione o viceversa.  Poiché sia l'applicazione e la DLL devono utilizzare lo stesso allocatore, non è necessario eseguire l'override di C\+\+ `operator new` globale o `operator delete`.  Le stesse regole vengono applicate al resto delle routine di allocazione di memoria di runtime C \(come `malloc`, `realloc`, **free** e altre\).  
  
### Ordinali e della classe \_\_declspec \(dllexport\) e denominare di DLL  
 Non utilizzare la funzionalità di `class`**\_\_declspec\(dllexport\)** del compilatore C\+\+.  Al contrario, un elenco di esportazione è incluso nelle origini libreria di classi \(MFCxx.DEF e MFCxxD.DEF\).  Questo set più ristretto di punti di ingresso \(funzioni e dati\) viene esportato solo.  Altri simboli, quali le funzioni o classi private di implementazione MFC, non vengono esportati tutte le esportazioni vengono eseguiti tramite ordinale senza nome della stringa nella tabella dei nomi residente o non residente.  
  
 Utilizzando `class` **\_\_declspec\(dllexport\)** può essere una valida alternativa per compilare più piccoli DLL, ma in caso di grande come DLL MFC, il meccanismo di esportazione predefinito ha limiti della capacità e di efficienza.  
  
 Cosa questo qualsiasi mezzo che è possibile comprimere un gran numero di funzionalità nella versione MFCxx.DLL che è solo circa 800 KB senza compromettere molta esecuzione o caricare la velocità.  MFCxx.DLL sarebbe stato più grande grazie a questa tecnica non è stato utilizzato.  Consente inoltre di aggiungere punti di ingresso aggiuntivi alla fine del file def per consentire il controllo delle versioni semplice senza compromettere l'efficienza di dimensione e della velocità di esportazione tramite ordinale.  Le revisioni di versione principale nella libreria di classi MFC modificheranno il nome della libreria.  Ovvero MFC30.DLL è la DLL ridistribuibile che contiene la versione 3,0 della libreria di classi MFC.  Un aggiornamento di questa DLL ad esempio in un ipotetico MFC 3,1, la DLL viene assegnato MFC31.DLL invece.  , Se si modifica il codice sorgente di MFC per produrre una versione personalizzata della DLL MFC, utilizzare di nuovo un nome differente \(possibilmente e uno senza MFC "in" nome\).  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)
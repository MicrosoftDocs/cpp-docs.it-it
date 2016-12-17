---
title: "Procedura: utilizzare codice C++ esistente in un&#39;app della piattaforma UWP (Universal Windows Platform) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 87e5818c-3081-42f3-a30d-3dca2cf0645c
caps.latest.revision: 5
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: utilizzare codice C++ esistente in un&#39;app della piattaforma UWP (Universal Windows Platform)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento vengono fornite una descrizione e le procedure per l'importazione di librerie C\+\+ \(DLL e librerie statiche\) nella piattaforma UWP \(Universal Windows Platform\), che è una parte essenziale della creazione di un livello di interfaccia utente di Windows 10 che funziona con il codice C\+\+ Win32 classico esistente o con il codice standard, C\+\+ multipiattaforma.  Esistono diversi modi per utilizzare il codice C\+\+ esistente in un'app Windows universale.  
  
 Le app UWP vengono eseguite in un ambiente protetto e, di conseguenza, molte chiamate API Win32, COM e CRT che potrebbero compromettere la sicurezza della piattaforma non sono consentite.  Il compilatore è in grado di rilevare tali chiamate e generare un errore se viene utilizzata l'opzione \/ZW.  È possibile utilizzare il Kit di certificazione app nell'applicazione per rilevare il codice che chiama le API non consentite.  Vedere [Uso del kit di certificazione app Windows](https://msdn.microsoft.com/library/windows/apps/hh694081.aspx).  
  
 Se il codice sorgente è disponibile per la libreria, è possibile eliminare le chiamate API non consentite.  Per informazioni dettagliate, incluso un elenco di API che sono consentite o vietate, vedere [Win32 e COM per app di Windows Runtime e app UWP \(Universal Windows Platform\)](https://msdn.microsoft.com/library/windows/apps/br205762.aspx) e [Funzioni CRT non supportate con \/ZW](https://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  Sono disponibili alcune alternative in [Alternative alle API Windows per app di Windows Runtime e app UWP](https://msdn.microsoft.com/library/windows/apps/hh464945.aspx).  
  
 Se si tenta di aggiungere un riferimento da un progetto Universal Windows a una libreria desktop classica, viene visualizzato un messaggio di errore che indica che la libreria non è compatibile.  Nel caso di una libreria statica, è possibile collegare la libreria semplicemente aggiungendo la libreria \(file .lib\) all'input del linker, proprio come si farebbe con un'applicazione Win32.  Per le librerie in cui è disponibile solo un binario, questa è l'unica opzione.  Una libreria statica è collegata al file eseguibile dell'app, ma una DLL Win32 utilizzata in un'app UWP deve essere inserita nel pacchetto dell'app includendola nel progetto e contrassegnandola come Contenuto.  Per caricare una DLL Win32 in un'app UWP, è inoltre necessario chiamare [LoadPackagedLibrary](https://msdn.microsoft.com/library/windows/desktop/hh447159.aspx) anziché LoadLibrary o LoadLibraryEx.  
  
 Se si dispone di codice sorgente della DLL o della libreria statica, è possibile ricompilare con \/ZW come con un progetto UWP.  In tal caso, è possibile aggiungere un riferimento utilizzando Esplora soluzioni e utilizzarlo nelle app UWP C\+\+.  Nel caso di una DLL, ci si collega alla libreria di esportazione.  
  
 Per esporre la funzionalità ai chiamanti in altre lingue, è possibile convertire la libreria in un componente Windows Runtime.  I componenti Windows Runtime differiscono dalle normali DLL perché includono metadati sotto forma di file con estensione winmd che descrivono il contenuto nel modo richiesto dai consumer di .NET e JavaScript.  Per esporre elementi API in altri linguaggi, è possibile aggiungere costrutti C\+\+\/CX come, ad esempio, classi di riferimento e renderli pubblici oppure utilizzare la [Libreria di modelli di Windows Runtime C\+\+ \(WRL\)](../windows/windows-runtime-cpp-template-library-wrl.md).  
  
 La discussione precedente non è valida in caso di componenti COM che devono essere gestiti in modo diverso.  Se si dispone di un server COM in un file EXE o in una DLL, è possibile utilizzarlo in un progetto Universal Windows purché venga inserito in un pacchetto come [componente COM senza registrazione](https://msdn.microsoft.com/library/dd408052.aspx), aggiunto al progetto come file di contenuto e ne venga creata un'istanza tramite [CoCreateInstanceFromApp](https://msdn.microsoft.com/library/windows/apps/hh404137.aspx).  Vedere [Utilizzo di DLL senza COM in un progetto C\+\+ di Windows Store](http://blogs.msdn.com/b/win8devsupport/archive/2013/05/20/using-free-com-dll-in-windows-store-c-project.aspx).  
  
 Se si dispone di una libreria COM esistente che si desidera trasferire in Universal Windows Platform, è possibile convertirla in un componente Windows Runtime utilizzando la [Libreria di modelli di Windows Runtime C\+\+ \(WRL\)](../windows/windows-runtime-cpp-template-library-wrl.md).  WRL non supporta tutte le funzionalità di ATL e OLE, pertanto la fattibilità di una porta dipende da quanto il codice COM dipende dalle funzionalità COM, ATL e OLE richieste dal componente.  
  
 Si tratta di vari metodi in cui è possibile utilizzare il codice C\+\+ esistente in progetti di Universal Windows Platform.  Alcuni metodi non richiedono che il codice venga ricompilato con le estensioni del componente \(C\+\+\/CX\) abilitate \(ovvero, l'opzione \/ZW\), mentre altri sì, pertanto se si desidera conservare il codice in C\+\+ standard o preservare un ambiente di compilazione Win32 classico per una parte del codice, è possibile farlo, con opzioni di architettura appropriate.  Ad esempio, tutto il codice contenente interfaccia utente e tipi di Universal Windows Platform che devono essere esposti a chiamanti C\#, Visual Basic e JavaScript dovrebbe trovarsi nei progetti dell'app Windows e del componente Windows Runtime.  Il codice che deve essere utilizzato solo nel codice C\+\+ \(tra cui C\+\+\/CX\), può trovarsi in un progetto che compila con l'opzione \/WX o in un progetto C\+\+ standard.  È possibile utilizzare codice solo binario collegandolo sotto forma di libreria statica o all'interno di un pacchetto con app come contenuto e caricato in una DLL solo se non utilizza API proibite.  
  
 Indipendentemente da quale di questi scenari di sviluppo viene scelto, è necessario considerare una serie di definizioni di macro che è possibile utilizzare nel codice per poter compilare il codice in modo condizionale, sia nella versione desktop classica Win32 che in Universal Windows Platform.  
  
```cpp  
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP)  
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PHONE_APP)  
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)  
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)  
```  
  
 Queste istruzioni rispettivamente si applicano alle app di Windows Store, Windows Phone Store, a entrambe o a nessuna delle due \(solo desktop Win32 classico\).  Queste macro sono disponibili solo in Windows SDK 8.1 e versioni successive, pertanto se il codice deve essere compilato con le versioni precedenti di Windows SDK o per altre piattaforme diverse da Windows, è necessario prendere in considerazione il fatto che nessuna di queste venga definita.  
  
 Questo argomento contiene le seguenti procedure.  
  
1.  [Utilizzo di DLL Win32 in un'app UWP](#BK_Win32DLL)  
  
2.  [Utilizzo di una libreria statica C++ nativa in un'app UWP](#BK_StaticLib)  
  
3.  [Trasferimento di una libreria C++ in un componente Windows Runtime](#BK_WinRTComponent)  
  
##  <a name="BK_Win32DLL"></a> Utilizzo di DLL Win32 in un'app UWP  
 Per una migliore protezione e affidabilità, le app Universal Windows vengono eseguite in un ambiente di runtime con restrizioni. Per questo motivo, non è possibile semplicemente utilizzare qualsiasi DLL nativa in un'applicazione desktop Windows classica.  Se si dispone di codice sorgente per una DLL, è possibile trasferire il codice in modo da poterlo utilizzare in UWP.  È innanzitutto necessario modificare alcune impostazioni di progetto e i metadati del file di progetto per identificare il progetto come progetto UWP.  È necessario compilare il codice della libreria utilizzando l'opzione \/ZW, che abilita C\+\+\/CX.  Alcune chiamate API non sono consentite nelle app UWP a causa di più severi controlli associati a tale ambiente.  Vedere [Win32 e COM per Windows Runtime App e Windows Universal App per piattaforme \(UWP\)](https://msdn.microsoft.com/library/windows/apps/br205757.aspx).  
  
 La procedura seguente si applica al caso in cui si dispone di una DLL nativa che espone le funzioni tramite dllexport.  
  
#### Alla porta di una DLL nativa per UWP senza creare un nuovo progetto  
  
1.  Se si dispone di una DLL nativa che consente di esportare funzioni tramite dllexport, è possibile chiamare tali funzioni da un'app UWP ricompilando DLL come progetto UWP.  Ad esempio, supponiamo di avere una DLL che esporta un paio di classi e i relativi metodi, con il codice nel file di intestazione seguente:  
  
    ```  
    // giraffe.h  
    #pragma once  
  
    #ifdef _DLL  
    #define GIRAFFE_API __declspec(dllexport)  
    #else  
    #define GIRAFFE_API   
    #endif  
  
    GIRAFFE_API int giraffeFunction();  
  
    class Giraffe  
    {  
    int id;  
        Giraffe(int id_in);  
    friend class GiraffeFactory;  
  
    public:  
    GIRAFFE_API int GetID();  
    };  
  
    class GiraffeFactory  
    {  
    static int nextID;  
  
    public:  
    GIRAFFE_API GiraffeFactory();  
    GIRAFFE_API static int GetNextID();  
    GIRAFFE_API static Giraffe* Create();  
    };  
    ```  
  
     Aggiungere al file il codice seguente:  
  
    ```  
    // giraffe.cpp  
    #include "stdafx.h"  
    #include "giraffe.h"  
  
    Giraffe::Giraffe(int id_in) : id(id_in)  
    {  
    }  
  
    int Giraffe::GetID()  
    {  
    return id;  
    }  
  
    int GiraffeFactory::nextID = 0;  
  
    GiraffeFactory::GiraffeFactory()  
    {  
    nextID = 0;  
    }  
  
    int GiraffeFactory::GetNextID()  
    {  
    return nextID;  
    }  
  
    Giraffe* GiraffeFactory::Create()  
    {  
    return new Giraffe(nextID++);  
    }  
  
    int giraffeFunction();  
    ```  
  
     Tutto il resto del progetto \(stdafx. h, DllMain. cpp\) fa parte del modello di progetto Win32 standard.  Se si desidera proseguire, ma non si desidera utilizzare una DLL ancora con questi passaggi, provare a creare un progetto Win32, selezionare la DLL nella procedura guidata progetto e quindi aggiungere un giraffe.cpp della file giraffe.h e il codice del file di intestazione e copiare il contenuto dal codice in questo passaggio nei file appropriati.  
  
     Il codice definisce la macro GIRAFFE\_API che si risolve in dllexport quando viene definito DLL \(ovvero, quando il progetto viene compilato come DLL\).  
  
2.  Aprire le proprietà del progetto per il progetto DLL e impostare la configurazione **tutte le configurazioni**.  
  
3.  Nelle proprietà del progetto in **C\/C\+\+**, **Generale** impostare **utilizzano Windows Runtime estensione** a **Sì \(\/ZW\)**.  In questo modo le estensioni del componente \(C \+ \+ CX\).  
  
4.  In **Esplora soluzioni** selezionare il nodo del progetto, aprire il menu di scelta rapida e s scegliere **Scarica progetto**.  Quindi, aprire il menu di scelta rapida sul nodo del progetto scaricato e scegliere di modificare il file di progetto.  Individuare l'elemento WindowsTargetPlatformVersion e sostituirlo con gli elementi seguenti.  
  
    ```xml  
    <AppContainerApplication>true</AppContainerApplication>  
    <ApplicationType>Windows Store</ApplicationType>  
    <WindowsTargetPlatformVersion>10.0.10156.0</WindowsTargetPlatformVersion>  
    <WindowsTargetPlatformMinVersion>10.0.10156.0</WindowsTargetPlatformMinVersion>  
    <ApplicationTypeRevision>10.0</ApplicationTypeRevision>  
    ```  
  
     Chiudere il file con estensione vcxproj, aprire nuovamente il menu di scelta rapida e scegliere **Ricarica progetto**.  
  
     Esplora ora identifica il progetto come progetto di Windows universali.  
  
5.  Assicurarsi che il nome del file di intestazione precompilato sia corretto.  Nella sezione Intestazioni precompilate, modificare il file di intestazione precompilato da pch.h a stdafx.h.  In caso contrario, visualizzato il seguente errore.  
  
  **istruzione '\#include' specificata con l'opzione della riga di comando \/Yc%s non trovata nel file di origine**     Il problema è che i progetti Windows universali utilizzano una convenzione di denominazione diversa per il file di intestazione precompilato.  
  
6.  Compilare il progetto.  È possibile visualizzare alcuni errori relativi alle opzioni della riga di comando incompatibili.  Ad esempio, utilizzati di frequente opzione Abilita ricompilazione minima \(o Gm\) è impostata per impostazione predefinita in molti progetti C\+\+ e non è compatibile con \/ZW.  
  
     Alcune funzioni non sono disponibili quando si esegue la compilazione per la piattaforma Windows universale.  Verranno visualizzati errori del compilatore relativi a eventuali problemi.  I relativi fino a quando non si dispone di una compilazione pulita.  
  
7.  Per utilizzare la DLL in un'applicazione UWP nella stessa soluzione, aprire il menu di scelta rapida del nodo del progetto UWP e scegliere **aggiungere, fare riferimento a**.  
  
     In **progetti, la soluzione**, selezionare la casella di controllo accanto al progetto di DLL e scegliere il **OK** pulsante.  
  
8.  Includere i file di intestazione della libreria nel file PCH UWP dell'applicazione.  
  
    ```  
    #include "..\MyNativeDLL\giraffe.h"  
    ```  
  
9. Aggiungere il codice come di consueto nel progetto UWP per richiamare le funzioni e creare tipi dalla DLL.  
  
    ```  
    MainPage::MainPage()  
    {  
    InitializeComponent();  
    GiraffeFactory gf;  
    Giraffe* g = gf.Create();  
    int id = g->GetID();  
    }  
  
    ```  
  
##  <a name="BK_StaticLib"></a> Utilizzo di una libreria statica C\+\+ nativa in un'app UWP  
 È possibile utilizzare una libreria statica C\+\+ nativa in un progetto UWP, ma esistono alcune restrizioni e limitazioni da tenere presenti.  Iniziare leggendo questo [argomento](https://msdn.microsoft.com/library/hh771041.aspx) sulle librerie statiche in C \+\+\/CX.  È possibile accedere al codice nativo nella libreria statica dall'app UWP, ma non è consigliabile creare tipi di riferimento pubblici nelle librerie statiche.  Se si compila una libreria statica con l'opzione \/ZW, Gestione librerie \(in realtà il linker in formato non riconoscibile\) invia un avviso:  
  
```  
LNK4264: archiving object file compiled with /ZW into a static library; note that when authoring Windows Runtime types it is not recommended to link with a static library that contains Windows Runtime metadata  
```  
  
 Tuttavia, è possibile utilizzare una libreria statica in UWP senza ricompilarla con \/ZW.  Non sarà possibile dichiarare i tipi di riferimento o utilizzare i costrutti C\+\+\/CX, ma se lo scopo è semplicemente quello di utilizzare la libreria di codice nativo, è possibile farlo attenendosi alla procedura seguente.  
  
#### Per utilizzare una libreria statica C\+\+ nativa in un progetto UWP  
  
1.  Nelle proprietà del progetto per il progetto UWP, nella sezione Linker, aggiungere il percorso alla libreria nella proprietà Input.  Ad esempio, per una libreria del progetto che inserisce l'output in *SolutionFolder*\\\\Debug\\MyNativeLibrary\\MyNativeLibrary.lib, aggiungere il percorso relativo `Debug\MyNativeLibrary\MyNativeLibrary.lib`.  
  
2.  Aggiungere un'istruzione di inclusione per associare il file di intestazione a pch.h nel progetto UWP e iniziare ad aggiungere codice che utilizza la libreria.  
  
    ```  
    #include "..\MyNativeLibrary\giraffe.h"  
    ```  
  
     Non aggiungere un riferimento nel nodo **Riferimenti** in **Esplora soluzioni**.  Tale meccanismo funziona solo per i componenti Windows Runtime.  
  
##  <a name="BK_WinRTComponent"></a> Trasferimento di una libreria C\+\+ in un componente Windows Runtime  
 Se si desidera utilizzare le API native in una libreria statica da un'app UWP e si dispone del codice sorgente per la libreria nativa, è possibile trasferire il codice in un componente Windows Runtime.  Non sarà più una libreria statica, ma una DLL.  È possibile utilizzarla in qualsiasi app UWP C\+\+ ma, a differenza del libreria statica, è possibile aggiungere tipi di riferimento e altri costrutti C\+\+\/CX disponibili per i client in qualsiasi codice di app UWP, indipendentemente dal linguaggio.  Pertanto, è possibile accedere a questi tipi da C\#, Visual Basic o JavaScript.  La procedura di base consiste nel creare un progetto di componente Windows Runtime, copiarvi il codice per la libreria statica e risolvere gli eventuali errori causati dallo spostamento di codice da una compilazione C\+\+ standard a una compilazione \/ZW.  
  
#### Per trasferire una libreria C\+\+ in un componente Windows Runtime  
  
1.  Creare un progetto del componente Windows Runtime  
  
2.  Chiudere il progetto.  
  
3.  In Esplora File di Windows, individuare il progetto.  Per impostazione predefinita, Visual Studio utilizza la cartella Visual Studio 2015\\Projects nella cartella Documenti.  Individuare il progetto della libreria C\+\+ che contiene il codice che si desidera trasferire.  Copiare i file di origine \(file di intestazione, file di codice e altre risorse, incluse le sottodirectory\) dal progetto della libreria C\+\+ e incollarli nella cartella del progetto, assicurandosi di mantenere la stessa struttura di cartelle.  
  
4.  Riaprire il progetto del componente Windows Runtime e aprire il menu di scelta rapida del nodo del progetto in **Esplora soluzioni**, quindi scegliere **Aggiungi, Elemento esistente**.  
  
5.  Selezionare tutti i file da aggiungere dal progetto originale e scegliere OK.  Se necessario, ripetere la procedura per le sottocartelle.  
  
6.  È possibile ora avere codice duplicato.  Se si dispone di più intestazioni precompilate \(ad esempio, stdafx.h e pch.h\), sceglierne una da mantenere.  Copiare il codice necessario, ad esempio le istruzioni include, in quella che si sta mantenendo.  Eliminare quindi l'altra e, nelle proprietà del progetto, in **Intestazioni precompilate**, assicurarsi che il nome del file di intestazione sia corretto.  
  
     Se è stato modificato il file da utilizzare come intestazione precompilata, assicurarsi che le opzioni di intestazione precompilata siano corrette per ogni file.  Selezionare, a turno, ogni file con estensione cpp, aprire la finestra delle proprietà e assicurarsi che tutte siano impostate su **Utilizza \(\/Yu\)**, fatta eccezione per l'intestazione precompilata desiderata, che deve essere impostata su **Crea \(\/Yc\)**.  
  
7.  Compilare il progetto e risolvere eventuali errori.  Questi errori potrebbero essere causati dall'utilizzo dell'opzione \/ZW o potrebbero essere causati da una nuova versione di Windows SDK oppure potrebbero riflettere dipendenze come, ad esempio, file di intestazione da cui dipende la libreria o differenze nelle impostazioni del progetto tra il progetto precedente e quello nuovo.  
  
8.  Aggiungere tipi di riferimento pubblici al progetto o convertire i tipi comuni in tipi di riferimento per esporre i punti di ingresso nella funzionalità che si desidera chiamare dalle app UWP.  
  
9. Testare il componente aggiungendovi un riferimento da un progetto dell'app UWP e aggiungere codice per chiamare le API pubbliche create.  
  
## Vedere anche  
 [Porting alla piattaforma Windows Universal](../porting/porting-to-the-universal-windows-platform-cpp.md)
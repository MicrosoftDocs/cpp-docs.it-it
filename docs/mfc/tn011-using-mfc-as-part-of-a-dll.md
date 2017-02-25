---
title: "TN011: utilizzo di MFC come parte di una DLL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
  - "_USRDLL (simbolo)"
  - "DLL [C++], collegamento"
  - "DLL MFC [C++], collegamento di DLL normali a MFC"
  - "TN011"
  - "USRDLL, opzioni del compilatore"
ms.assetid: 76753e9c-59dc-40f6-b6a7-f6bb9a7c4190
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 16
---
# TN011: utilizzo di MFC come parte di una DLL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questa nota vengono illustrate le DLL regolari, che consentono di utilizzare la libreria MFC come parte di una libreria a collegamento dinamico \(DLL\) di windows.  Si presuppone la conoscenza delle DLL di windows e come compilarli.  Per informazioni sulle DLL di estensione MFC, con cui è possibile creare estensioni alla libreria MFC, vedere [Versione DLL di MFC](../mfc/tn033-dll-version-of-mfc.md).  
  
## Interfacce DLL  
 Le DLL regolari l'utilizzo delle interfacce tra l'applicazione e la DLL vengono specificati nelle funzioni di tipo c o in classi in modo esplicito esportate.  Le interfacce classe MFC non è possibile esportare.  
  
 Se fosse una DLL che un'applicazione desidera utilizzare MFC, entrambi fanno il collegamento una scelta da utilizzare la versione condivisa delle librerie MFC in modo statico o a una copia delle librerie.  L'applicazione e la DLL sono entrambi utilizzare una delle versioni standard della libreria MFC.  
  
 Le DLL regolari verificano diversi vantaggi:  
  
-   L'applicazione che utilizza la DLL non deve utilizzare MFC e non deve essere un'applicazione Visual C\+\+.  
  
-   Con le DLL regolari collegate a MFC, le dimensioni della DLL dipende esclusivamente dalle routine runtime C e MFC utilizzate e collegate.  
  
-   Con le DLL regolari collegate a MFC in modo dinamico, un miglioramento in memoria di utilizzare la versione condivisa di MFC possono essere significativi.  Tuttavia, è necessario distribuire le DLL, MFC*\<version\>*DLL e il Msvvcrt condivisi*\<version\>*dll, con la DLL.  
  
-   La progettazione di DLL è indipendente da quali classi vengono implementate.  La progettazione di DLL esporta solo alle API desiderato.  Pertanto, se le modifiche di implementazione, le DLL regolari sono ancora valide.  
  
-   Con le DLL regolari collegate a MFC, se la DLL e l'applicazione utilizza MFC, non esistono problemi con l'applicazione di una versione diversa di MFC che la DLL o viceversa.  Poiché la libreria MFC collegata in modo statico in ogni DLL o EXE, non esiste una domanda relativa alla versione è stato.  
  
## Limitazioni di API  
 Alcune funzionalità MFC non si applica alla versione DLL, a causa delle limitazioni tecniche o poiché questi servizi vengono generalmente forniti dall'applicazione.  Con la versione corrente di MFC, l'unica funzione che non è applicabile è `CWinApp::SetDialogBkColor`.  
  
## Compilare la DLL  
 Quando si compilano le DLL regolari collegate a MFC, i simboli `_USRDLL` e a `_WINDLL` deve essere definita.  Il codice di DLL devono essere compilate con le seguenti opzioni del compilatore:  
  
-   **\/D\_WINDLL** implica la compilazione di una DLL  
  
-   **\/D\_USRDLL** specificare deve compilare una DLL regolare  
  
 È inoltre necessario definire questi simboli e utilizzare queste opzioni del compilatore quando si compila le DLL regolari collegate a MFC in modo dinamico.  Inoltre, il simbolo `_AFXDLL` deve essere definito e il codice della DLL deve essere compilato con:  
  
-   **\/D\_AFXDLL** specifica che si compila una DLL regolare collegata a MFC  
  
 Le interfacce \(API\) tra l'applicazione e la DLL devono esplicitamente possibile esportare.  È consigliabile definire le interfacce per essere il più breve e alla larghezza di banda si utilizza solo interfacce C se possibile.  Le interfacce dirette C sono più facili da gestire le classi più complesse di C\+\+.  
  
 Inserire le API in un'intestazione separata che può essere inclusa da file C\+\+ che C.  Vedere l'intestazione ScreenCap.h nell'esempio [DLLScreenCap](../top/visual-cpp-samples.md) di concetti avanzati MFC per un esempio.  Per esportare le funzioni, forniscale nella sezione di `EXPORTS` del file di definizione di modulo \(.DEF\) o importare `__declspec(dllexport)` nelle definizioni di funzione.  Utilizzare `__declspec(dllimport)` per importare queste funzioni nel client eseguibile.  
  
 È necessario aggiungere la macro di `AFX_MANAGE_STATE` all'inizio di tutte le funzioni esportate dalle DLL regolari collegate a MFC in modo dinamico.  Questa macro imposta lo stato del modulo corrente su quello della DLL.  Per utilizzare questa macro, aggiungere la seguente riga di codice all'inizio delle funzioni esportate dalla DLL:  
  
 `AFX_MANAGE_STATE(AfxGetStaticModuleState( ))`  
  
## WinMain \-\> DllMain  
 La libreria MFC definisce il punto di ingresso standard Win32 `DllMain` che inizializza l'oggetto derivato [CWinApp](../mfc/reference/cwinapp-class.md) come in una normale applicazione MFC.  Inserire tutto il codice di inizializzazione specifico della DLL in metodo di [InitInstance](../Topic/CWinApp::InitInstance.md) come in una normale applicazione MFC.  
  
 Tenere presente che il meccanismo [CWinApp::Run](../Topic/CWinApp::Run.md) non è applicabile a una DLL, poiché l'applicazione possiede il message pump principale.  Se la DLL visualizzare finestre di dialogo non modali o dispone di una propria finestra cornice principale, il message pump principale dell'applicazione deve chiamare una routine esportata che chiama [CWinApp::PreTranslateMessage](../Topic/CWinApp::PreTranslateMessage.md).  
  
 Vedere l'esempio DLLScreenCap per utilizzare questa funzione.  
  
 La funzione di `DllMain` che MFC fornisce chiamerà il metodo di [CWinApp::ExitInstance](../Topic/CWinApp::ExitInstance.md) della classe derivata da `CWinApp` prima che la DLL venga scaricata.  
  
## Collegare la DLL  
 Con le DLL regolari collegate a MFC, è necessario collegare la DLL con Nafxcwd.lib o Nafxcw.lib e con la versione di runtime C denominate Libcmt.lib.  Queste librerie vengono precompilati e possono essere installate specificandole quando si esegue l'installazione di Visual C\+\+.  
  
## Codice di esempio  
 Vedere il programma di esempio DLLScreenCap di concetti avanzati MFC per un esempio completo.  Alcune considerazioni interessanti notare in questo esempio sono le seguenti:  
  
-   I flag del compilatore della DLL e quelli dell'applicazione sono diversi.  
  
-   Le righe del collegamento e i file def della DLL e quelli dell'applicazione sono diversi.  
  
-   L'applicazione che utilizza la DLL non deve essere in C\+\+.  
  
-   L'interfaccia tra l'applicazione e la DLL è un'api che viene utilizzato da C o da C\+\+ e viene esportato con DLLScreenCap.def.  
  
 Nell'esempio seguente viene illustrato un'api definito in una DLL regolare collegata a MFC in modo statico.  In questo esempio, la dichiarazione è contenuta in un blocco di `extern "C" { }` per gli utenti C\+\+.  Questa operazione presenta diversi vantaggi.  Innanzitutto, rende i API di DLL utilizzabili dalle applicazioni client non c\+\+.  In secondo luogo, riduce l'overhead della DLL poiché l'imposizione del nome C\+\+ non verrà applicata al nome esportato.  Infine, semplifica l'aggiunta in modo esplicito a un file def \(per l'esportazione tramite ordinale\) senza preoccuparsi per l'imposizione del nome.  
  
```  
#ifdef __cplusplus  
extern "C" {  
#endif  /* __cplusplus */  
  
struct TracerData  
{  
    BOOL    bEnabled;  
    UINT    flags;  
};  
  
BOOL PromptTraceFlags(TracerData FAR* lpData);  
  
#ifdef __cplusplus  
}  
#endif  
```  
  
 Le strutture utilizzate dall'API non sono derivate dalle classi MFC e definite nell'intestazione dell'API.  In tal modo la complessità dell'interfaccia tra la DLL e l'applicazione e rende la DLL utilizzabile dai programmi C.  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)
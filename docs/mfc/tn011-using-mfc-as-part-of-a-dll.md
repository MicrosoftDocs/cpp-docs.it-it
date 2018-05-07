---
title: 'TN011: Utilizzo di MFC come parte di una DLL | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.mfc.dll
dev_langs:
- C++
helpviewer_keywords:
- _USRDLL symbol
- USRDLLs, compiler switches
- TN011
- DLLs [MFC], linking
- MFC DLLs [MFC], linking regular MFC DLLs to MFC
ms.assetid: 76753e9c-59dc-40f6-b6a7-f6bb9a7c4190
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0dcaa0aaf903787549cc91ffd19a34aa4aa066bd
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="tn011-using-mfc-as-part-of-a-dll"></a>TN011: utilizzo di MFC come parte di una DLL
Questa nota descrive le DLL MFC regolari, che consentono di utilizzare la libreria MFC come parte di una libreria di collegamento dinamico (DLL) di Windows. Si presuppone che si ha familiarità con le DLL di Windows e su come crearle. Per informazioni sulle DLL di estensione MFC, con cui è possibile creare estensioni per la libreria MFC, di vedere [versione DLL di MFC](../mfc/tn033-dll-version-of-mfc.md).  
  
## <a name="dll-interfaces"></a>Interfacce DLL  
 le DLL regolari MFC si presuppone interfacce tra l'applicazione e il file DLL vengono specificate in funzioni di tipo C o classi esportate in modo esplicito. Le interfacce di classe MFC non possono essere esportate.  
  
 Se una DLL sia un'applicazione desidera utilizzare MFC, sia possibile scegliere in modo che utilizzi la versione delle librerie MFC condivisa o per il collegamento statico a una copia delle librerie. L'applicazione e DLL possono entrambi utilizzano una delle versioni della libreria MFC standard.  
  
 le DLL regolari MFC offrono numerosi vantaggi:  
  
-   L'applicazione che utilizza la DLL non è necessario utilizzare MFC e non deve essere un'applicazione Visual C++.  
  
-   Con le DLL MFC regolari collegate in modo statico a MFC, le dimensioni della DLL dipendono dal solo le routine di runtime C e MFC che vengono utilizzate e collegate.  
  
-   Con le DLL MFC regolari collegate a MFC in modo dinamico, il risparmio di spazio in memoria, utilizzo della versione di MFC condivisa può essere significativo. Tuttavia, è necessario distribuire le DLL condivise, Mfc*\<versione >*. dll e Msvvcrt*\<versione >*. dll, con la DLL.  
  
-   La progettazione DLL è indipendente dalla modalità di implementazione delle classi. Il progetto DLL esporta solo le API che si desidera. Di conseguenza, se viene modificata l'implementazione, le DLL regolari MFC siano ancora valide.  
  
-   Con le DLL regolare MFC che il collegamento statico a MFC, se le DLL e l'applicazione utilizza MFC, non siano presenti problemi con l'applicazione che richiede una versione diversa di MFC, la DLL o viceversa. Poiché la libreria MFC è collegata staticamente in ogni file DLL o EXE, non vi è alcuna domanda sulla versione cui si dispone.  
  
## <a name="api-limitations"></a>Limitazioni dell'API  
 Alcune funzionalità MFC non si applica alla versione DLL, a causa di problemi tecnici o perché tali servizi sono in genere forniti dall'applicazione. Con la versione corrente di MFC, è l'unica funzione che non è applicabile `CWinApp::SetDialogBkColor`.  
  
## <a name="building-your-dll"></a>Generazione della DLL  
 Durante la compilazione di DLL di MFC regolari collegate in modo statico a MFC, i simboli `_USRDLL` e `_WINDLL` deve essere definita. Il codice della DLL deve essere compilato anche con le opzioni del compilatore seguenti:  
  
- **/ D_WINDLL** indica la compilazione per una DLL  
  
- **/ D_USRDLL** specifica si compila una DLL regolare MFC  
  
 È inoltre necessario definire questi simboli e utilizzare queste opzioni del compilatore quando si compila una DLL MFC regolari collegate a MFC in modo dinamico. Inoltre, il simbolo `_AFXDLL` deve essere definito e il codice della DLL deve essere compilato con:  
  
- **/ /D_AFXDLL** specifica che si compila una DLL MFC regolare collegata in modo dinamico a MFC  
  
 Le interfacce (API) tra l'applicazione e la DLL devono essere esportate in modo esplicito. È consigliabile definire le interfacce di larghezza di banda ridotta e, se possibile, utilizzare solo le interfacce di C. Interfacce di C dirette sono più semplici da gestire rispetto alle classi C++ più complesse.  
  
 Posizionare le API in un'intestazione separata che può essere incluso dal file C e C++. Vedere l'intestazione ScreenCap.h nell'esempio di concetti avanzati MFC [DLLScreenCap](../visual-cpp-samples.md) per un esempio. Per esportare le funzioni, immetterli nel `EXPORTS` sezione del file di definizione del modulo (. DEF) o includere `__declspec(dllexport)` alle definizioni di funzione. Utilizzare `__declspec(dllimport)` per importare il file eseguibile del client di queste funzioni.  
  
 È necessario aggiungere il `AFX_MANAGE_STATE` (macro) all'inizio di tutte le funzioni esportate dalle DLL MFC regolari collegate a MFC in modo dinamico. Questa macro imposta lo stato del modulo corrente con quella per la DLL. Per utilizzare questa macro, aggiungere la riga di codice seguente all'inizio delle funzioni esportate dalla DLL:  
  
 `AFX_MANAGE_STATE(AfxGetStaticModuleState( ))`  
  
## <a name="winmain---dllmain"></a>WinMain -> DllMain  
 La libreria MFC definisce Win32 standard `DllMain` punto di ingresso che inizializza il [CWinApp](../mfc/reference/cwinapp-class.md) derivato come in una tipica applicazione MFC. Inserire tutti l'inizializzazione di DLL specifiche nel [InitInstance](../mfc/reference/cwinapp-class.md#initinstance) metodo come una tipica applicazione MFC.  
  
 Si noti che il [CWinApp:: Run](../mfc/reference/cwinapp-class.md#run) meccanismo non viene applicata a una DLL, perché l'applicazione possiede il message pump principale. Se la DLL vengono visualizzate le finestre di dialogo non modali o dispone di un proprio una finestra cornice principale, message pump principale dell'applicazione deve chiamare una routine esportata dalla DLL che chiama [CWinApp:: PreTranslateMessage](../mfc/reference/cwinapp-class.md#pretranslatemessage).  
  
 Vedere l'esempio DLLScreenCap per l'utilizzo di questa funzione.  
  
 Il `DllMain` funzione che MFC fornisce chiamerà il [CWinApp:: ExitInstance](../mfc/reference/cwinapp-class.md#exitinstance) metodo della classe che deriva da `CWinApp` prima dello scaricamento di DLL.  
  
## <a name="linking-your-dll"></a>Il collegamento della DLL  
 Con le DLL MFC regolari collegate a MFC in modo statico, è necessario collegare la DLL con NAFXCW.lib o NAFXCWD.lib e con la versione di runtime C denominati Libcmt.lib. Queste librerie sono predefinite e possono essere installate specificandoli quando si esegue l'installazione di Visual C++.  
  
## <a name="sample-code"></a>Codice di esempio  
 Vedere l'esempio di concetti avanzati MFC DLLScreenCap di programma per un esempio completo. Di seguito sono riportati i diversi aspetti interessanti da osservare in questo esempio:  
  
-   I flag del compilatore della DLL e quelli dell'applicazione sono diversi.  
  
-   Le linee di collegamento e. DEF (file) per la DLL e quelli per l'applicazione sono diversi.  
  
-   Non è necessario che l'applicazione che utilizza la DLL in C++.  
  
-   L'interfaccia tra l'applicazione e la DLL è un'API utilizzabile da C o C++, che viene esportata con DLLScreenCap.def.  
  
 Nell'esempio seguente viene illustrata un'API che è definita in una normale DLL MFC collegata a MFC in modo statico. In questo esempio, la dichiarazione è incluso in un `extern "C" { }` blocco per gli utenti di C++. Ciò offre diversi vantaggi. In primo luogo, rende le DLL di API utilizzabili dalle applicazioni client non C++. In secondo luogo, riduce l'overhead della DLL in quanto la modifica dei nomi C++ non verrà applicata al nome esportato. Infine, lo rende più semplice aggiungere in modo esplicito una. Senza doversi preoccupare di alterazione del nome del file DEF (per l'esportazione tramite ordinale).  
  
```  
#ifdef __cplusplus  
extern "C" {  
#endif  /* __cplusplus */  
 
struct TracerData  
{  
    BOOL bEnabled;  
    UINT flags;  
};  
 
BOOL PromptTraceFlags(TracerData FAR* lpData);

 
#ifdef __cplusplus  
}  
#endif  
```  
  
 Le strutture utilizzate dall'API non sono derivate dalle classi MFC e vengono definite nell'intestazione di API. Questo riduce la complessità dell'interfaccia tra la DLL e l'applicazione e la DLL utilizzabile da programmi C.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)


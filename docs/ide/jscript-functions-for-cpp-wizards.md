---
title: "Funzioni JScript per procedure guidate C++ | Microsoft Docs"
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
helpviewer_keywords: 
  - "metodi Jscript per procedure guidate"
  - "metodi Jscript per procedure guidate, creazione di procedure guidate C++"
ms.assetid: f3046c56-cf67-4aaa-919e-8c066bfb6760
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Funzioni JScript per procedure guidate C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

|||  
|-|-|  
|[AddATLSupportToProject](../ide/addatlsupporttoproject.md)|Aggiunge il supporto ATL a un progetto MFC.|  
|[AddCoclassFromFile](../ide/addcoclassfromfile.md)|Esegue il rendering e inserisce nel file IDL del progetto un file modello contenente una coclasse.|  
|[AddCommonConfig](../ide/addcommonconfig.md)|Aggiunge le configurazioni predefinite al progetto.|  
|[AddFilesToProject](../ide/addfilestoproject.md)|Aggiunge tutti i file al progetto in base all'elenco presente nel file Templates.inf.|  
|[AddInterfaceFromFile](../ide/addinterfacefromfile.md)|Esegue il rendering e inserisce nel file IDL del progetto un file modello contenente un'interfaccia.|  
|[CanAddATLClass](../ide/canaddatlclass.md)|Chiamata durante la procedura guidata per verificare se il progetto è compatibile con le creazioni guidate codice da eseguire, ovvero se è possibile utilizzare una classe ATL nel progetto.<br /><br /> Durante la procedura guidata questa funzione viene chiamata quando il parametro PREPROCESS\_FUNCTION si trova nel [file vsz del controllo del progetto](../ide/dot-vsz-file-project-control.md) e consente di verificare se il [Visual C\+\+ Code Model](http://msdn.microsoft.com/it-it/dd6452c2-1054-44a1-b0eb-639a94a1216b) è disponibile.  Se il modello di codice non è disponibile, la funzione segnalerà un errore e restituirà **false**.|  
|[CanAddClass](../ide/canaddclass.md)|Durante la procedura guidata questa funzione viene chiamata quando il parametro PREPROCESS\_FUNCTION si trova nel file vsz del controllo del progetto<br /><br /> e consente di verificare se l'oggetto Modello codice di Visual C\+\+ è disponibile.  Se il modello di codice non è disponibile, la funzione segnalerà un errore e restituirà **false**.|  
|[CanAddMFCClass](../ide/canaddmfcclass.md)|Chiamata durante la procedura guidata per verificare se il progetto è compatibile con la Creazione guidata codice da eseguire, ovvero se è possibile utilizzare una classe MFC nel progetto.<br /><br /> Durante la procedura guidata questa funzione viene chiamata quando il parametro PREPROCESS\_FUNCTION si trova nel file vsz del controllo del progetto e consente di verificare se il Modello codice di Visual C\+\+ è disponibile.  Se il modello di codice non è disponibile, la funzione segnalerà un errore e restituirà **false**.|  
|[CanAddNonAttributed](../ide/canaddnonattributed.md)|Indica se il progetto supporta oggetti ATL con e senza attributi.|  
|[CanUseFileName](../ide/canusefilename.md)|Verifica se è presente un file.  In caso positivo durante la procedura guidata verrà chiesto all'utente di unire il codice da aggiungere al file esistente.|  
|[ConvertProjectToAttributed](../ide/convertprojecttoattributed.md)|Converte un progetto ATL in un progetto con attributi.|  
|[CreateInfFile](../ide/createinffile.md)|Crea il file Templates.inf.|  
|[CreateProject](../ide/createproject.md)|Crea un progetto C\+\+.|  
|[CreateSafeName](../ide/createsafename.md)|Genera un nome descrittivo C\+\+.|  
|[DeleteFile](../ide/deletefile.md)|Elimina il file specificato.|  
|[DoesIncludeExist](../ide/doesincludeexist.md)|Indica se in un file è presente un'istruzione `#include`.|  
|[GetCodeForDllCanUnloadNow](../ide/getcodefordllcanunloadnow.md)|Recupera il codice necessario per scaricare la DLL.|  
|[GetCodeForDllGetClassObject](../ide/getcodefordllgetclassobject.md)|Recupera il codice per l'oggetto di classe DLL.|  
|[GetCodeForDllRegisterServer](../ide/getcodefordllregisterserver.md)|Recupera il codice per la registrazione di un server.|  
|[GetCodeForDllUnregisterServer](../ide/getcodefordllunregisterserver.md)|Recupera il codice per l'annullamento della registrazione di un server.|  
|[GetCodeForExitInstance](../ide/getcodeforexitinstance.md)|Funzione di supporto per visualizzare il testo di `ExitInstance`.|  
|[GetCodeForInitInstance](../ide/getcodeforinitinstance.md)|Funzione di supporto per visualizzare il testo di [InitInstance](../Topic/CWinApp::InitInstance.md).|  
|[GetExportPragmas](../ide/getexportpragmas.md)|Recupera i pragma per l'esportazione delle funzioni.|  
|[GetInterfaceClasses](../ide/getinterfaceclasses.md)|Restituisce l'oggetto `VCCodeClass` associato a un'interfaccia.|  
|[GetInterfaceType](../ide/getinterfacetype.md)|Restituisce il tipo di interfaccia, quale personalizzata, duale, dispatch, oleautomation.|  
|[GetMaxID](../ide/getmaxid.md)|Restituisce il `dispid` più alto dai membri di questa interfaccia e di tutte le relative basi.|  
|[GetMemberfunction](../ide/getmemberfunction.md)|Restituisce un oggetto funzione basato su un determinato nome.|  
|[GetProjectFile](../ide/getprojectfile.md)|Restituisce il nome file dei tipi di file per progetto \(RC, IDL e così via\).|  
|[GetProjectPath](../ide/getprojectpath.md)|Restituisce il percorso della directory del progetto.|  
|[GetRuntimeErrorDesc](../ide/getruntimeerrordesc.md)|Restituisce una descrizione del tipo di eccezione.|  
|[GetUniqueFileName](../ide/getuniquefilename.md)|Restituisce un nome file univoco.|  
|[IncludeCodeElementDeclaration](../ide/includecodeelementdeclaration.md)|Aggiunge l'istruzione di inclusione a `strInFile`, compresa l'intestazione in cui viene implementata `strCodeElemName`, qualora un'intestazione del genere venga trovata nel progetto.|  
|[InsertIntoFunction](../ide/insertintofunction.md)|Funzione di supporto chiamata in `AddATLSupportToProject` per inserire del codice in `InitInstance`.|  
|[IsATLProject](../ide/isatlproject.md)|Indica se il progetto è basato su ATL.|  
|[IsAttributedProject](../ide/isattributedproject.md)|Indica se un progetto ha attributi.|  
|[IsMFCProject](../ide/ismfcproject.md)|Verifica se un progetto è basato su MFC.|  
|[LineBeginsWith](../ide/linebeginswith.md)|Funzione di supporto chiamata in `InsertIntoFunction` per determinare se una riga inizia con una determinata stringa|  
|[OffsetToLineNumber](../ide/offsettolinenumber.md)|Trova il numero di riga relativo a una determinata posizione in un codice funzione.|  
|[OnWizFinish](../ide/onwizfinish.md)|Chiamata dallo script HTML della procedura guidata quando l'utente sceglie **Fine**.  Chiama il metodo **Finish** del controllo della procedura guidata.|  
|[RenderAddTemplate](../ide/renderaddtemplate.md)|Esegue il rendering di un file modello e, facoltativamente, lo aggiunge al progetto.|  
|[SetCommonPchSettings](../ide/setcommonpchsettings.md)|Imposta l'intestazione precompilata per il progetto.|  
|[SetErrorInfo](../ide/seterrorinfo.md)|Fornisce informazioni sugli errori.|  
|[SetFilters](../ide/setfilters.md)|Aggiunge filtri di origine, di inclusione e di risorsa per le cartelle del progetto.|  
|[SetMergeProxySymbol](../ide/setmergeproxysymbol.md)|Chiamata nella procedura guidata per aggiungere il simbolo \_MERGE\_PROXYSTUB, se necessario.|  
|[SetNoPchSettings](../ide/setnopchsettings.md)|Imposta le proprietà di configurazione del progetto quando non viene utilizzata alcuna intestazione precompilata.|  
  
## Vedere anche  
 [Personalizzazione delle procedure guidate C\+\+ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)
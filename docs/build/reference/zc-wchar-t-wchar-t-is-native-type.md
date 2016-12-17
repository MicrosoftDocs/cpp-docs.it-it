---
title: "/Zc:wchar_t (Tipo nativo wchar_t) | Microsoft Docs"
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
  - "VC.Project.VCCLWCECompilerTool.TreatWChar_tAsBuiltInType"
  - "VC.Project.VCCLCompilerTool.TreatWChar_tAsBuiltInType"
  - "/Zc:wchar_t"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Zc (opzioni del compilatore) [C++]"
  - "Conformità (opzioni del compilatore)"
  - "wchar_t (tipo)"
  - "Zc (opzioni del compilatore) [C++]"
  - "-Zc (opzioni del compilatore) [C++]"
ms.assetid: b0de5a84-da72-4e5a-9a4e-541099f939e0
caps.latest.revision: 18
caps.handback.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /Zc:wchar_t (Tipo nativo wchar_t)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Analizzare `wchar_t` come tipo predefinito in base allo standard C\+\+.  L'opzione **\/Zc:wchar\_t** è abilitata per impostazione predefinita.  
  
## Sintassi  
  
```  
/Zc:wchar_t[-]  
```  
  
## Note  
 Se l'opzione **\/Zc:wchar\_t** è abilitata, viene eseguito il mapping di `wchar_t` al tipo nativo specifico di Microsoft `__wchar_t`.  Se viene specificato il tipo **\/Zc:wchar\_t\-** \(con un segno meno\), viene eseguito il mapping di `wchar_t` a `typedef` per `unsigned short`.  In Visual C\+\+ 6.0 e versioni precedenti, `wchar_t` non è implementato come tipo predefinito, ma è dichiarato in wchar.h come `typedef` per `unsigned short`. Il tipo **\/Zc:wchar\_t\-** non è consigliato perché lo standard C\+\+ richiede che `wchar_t` sia un tipo predefinito.  L'uso della versione `typedef` può causare problemi di portabilità.  Se si esegue l'aggiornamento da versioni precedenti di Visual C\+\+ e si verifica l'errore del compilatore [C2664](../../error-messages/compiler-errors-2/compiler-error-c2664.md) perché il codice sta cercando di convertire in modo implicito `wchar_t` in `unsigned short`, è consigliabile modificare il codice per risolvere l'errore, anziché impostare **\/Zc:wchar\_t\-**.  
  
 Microsoft implementa `wchar_t` come valore unsigned a due byte.  Per altre informazioni su `wchar_t`, vedere [Intervalli dei tipi di dati](../../cpp/data-type-ranges.md) e [Tipi fondamentali](../../cpp/fundamental-types-cpp.md).  
  
 Se si scrive codice che deve interagire con codice precedente che usa ancora la versione `typedef` di `wchar_t`, è possibile fornire overload per entrambe le variazioni `__wchar_t` e `unsigned short` di `wchar_t`, in modo che il codice possa essere collegato con codice compilato con **\/Zc:wchar\_t** o con codice compilato senza di esso.  In caso contrario, è necessario fornire due diverse build della libreria, una con **\/Zc:wchar\_t** abilitato e l'altra no.  Anche in questo caso, è consigliabile compilare codice precedente usando lo stesso compilatore usato per compilare quello nuovo.  Non combinare mai file binari compilati con compilatori diversi.  
  
 Quando si specifica **\/Zc:wchar\_t**, vengono definiti i simboli **\_WCHAR\_T\_DEFINED** e **\_NATIVE\_WCHAR\_T\_DEFINED**.  Per altre informazioni, vedere [Macro predefinite](../../preprocessor/predefined-macros.md).  
  
 Se il codice usa funzioni globali COM del compilatore, perché **\/Zc:wchar\_t** è ora abilitato per impostazione predefinita, è consigliabile modificare i riferimenti espliciti a comsupp.lib, dal [pragma comment](../../preprocessor/comment-c-cpp.md) o sulla riga di comando, a comsuppw.lib o a comsuppwd.lib.  Se è necessario eseguire la compilazione con **\/Zc:wchar\_t\-**, usare comsupp.lib. Se si include il file di intestazione comdef.h, la libreria corretta viene specificata automaticamente.  Per informazioni sul supporto COM del compilatore, vedere [Supporto COM del compilatore](../../cpp/compiler-com-support.md).  
  
 Il tipo `wchar_t` non è supportato quando si compila codice C.  Per altre informazioni sui problemi di conformità con Visual C\+\+, vedere [Comportamento non standard](../../cpp/nonstandard-behavior.md).  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).  
  
2.  Nel riquadro sinistro espandere **Proprietà di configurazione**, **C\/C\+\+**, quindi selezionare **Lingua**.  
  
3.  Modificare la proprietà **Considera wchar\_t come tipo predefinito**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.TreatWChar_tAsBuiltInType%2A>.  
  
## Vedere anche  
 [\/Zc \(Conformità\)](../../build/reference/zc-conformance.md)
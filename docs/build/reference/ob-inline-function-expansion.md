---
title: "/Ob (Espansione funzioni inline) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLWCECompilerTool.InlineFunctionExpansion"
  - "VC.Project.VCCLCompilerTool.InlineFunctionExpansion"
  - "/ob"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Ob (opzione del compilatore) [C++]"
  - "/Ob0 (opzione del compilatore) [C++]"
  - "/Ob1 (opzione del compilatore) [C++]"
  - "/Ob2 (opzione del compilatore) [C++]"
  - "Funzioni appropriate (opzione del compilatore) [C++]"
  - "disable (opzione del compilatore) [C++]"
  - "espansione inline, opzione del compilatore"
  - "funzioni inline, espansione di funzioni (opzione del compilatore) [C++]"
  - "Ob (opzione del compilatore) [C++]"
  - "-Ob (opzione del compilatore) [C++]"
  - "Ob0 (opzione del compilatore) [C++]"
  - "-Ob0 (opzione del compilatore) [C++]"
  - "Ob1 (opzione del compilatore) [C++]"
  - "-Ob1 (opzione del compilatore) [C++]"
  - "Ob2 (opzione del compilatore) [C++]"
  - "-Ob2 (opzione del compilatore) [C++]"
  - "only __inline (opzione del compilatore) [C++]"
ms.assetid: f134e6df-e939-4980-a01d-47425dbc562a
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# /Ob (Espansione funzioni inline)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Controlla l'espansione inline delle funzioni.  
  
## Sintassi  
  
```  
/Ob{0|1|2}  
```  
  
## Argomenti  
 **0**  
 Disabilita le espansioni inline.  Per impostazione predefinita, l'espansione viene eseguita a discrezione del compilatore e viene spesso definita *auto\-inlining*.  
  
 **1**  
 Permette l'espansione solo delle funzioni contrassegnate come [inline](../../misc/inline-inline-forceinline.md), [\_\_inline](../../misc/inline-inline-forceinline.md) o [\_\_forceinline](../../misc/inline-inline-forceinline.md) oppure in una funzione membro C\+\+ definita in una dichiarazione di classe.  
  
 **2**  
 Il valore predefinito.  Consente l'espansione delle funzioni contrassegnate come `inline`, `__inline`, o `__forceinline` e di qualsiasi altra funzione scelta dal compilatore.  
  
 **\/Ob2** è attivo quando si usa [\/O1, \/O2 \(Riduci dimensione, Ottimizza velocità\)](../../build/reference/o1-o2-minimize-size-maximize-speed.md) o [\/Ox \(Ottimizzazione completa\)](../../build/reference/ox-full-optimization.md).  
  
 Questa opzione richiede l'abilitazione delle ottimizzazioni mediante **\/O1**, **\/O2**, **\/Ox** o **\/Og**.  
  
## Note  
 Il compilatore considera come suggerimenti le opzioni di espansione inline e le parole chiave.  Non vi è alcuna garanzia che una funzione verrà espansa inline.  È possibile disabilitare le espansioni inline, ma non è possibile forzare il compilatore ad applicare l'inline a una funzione specifica, anche quando si usa la parola chiave `__forceinline`.  
  
 È possibile usare la direttiva `#pragma` [auto\_inline](../../preprocessor/auto-inline.md) per escludere funzioni dalla considerazione come candidati per l'espansione inline.  Vedere anche la direttiva `#pragma` [intrinsic](../../preprocessor/intrinsic.md).  
  
> [!NOTE]
>  Le informazioni raccolte durante le esecuzioni di test di profilatura sostituiscono le ottimizzazioni che verrebbero altrimenti applicate se si specifica **\/Ob**, **\/Os** o **\/Ot**.  Per altre informazioni, vedere [Ottimizzazioni guidate da profilo \(PGO\)](../../build/reference/profile-guided-optimizations.md).  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per altre informazioni, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).  
  
2.  Espandere **Proprietà di configurazione**, **C\/C\+\+** e selezionare **Ottimizzazione**.  
  
3.  Modificare la proprietà **Espansione funzioni inline**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.InlineFunctionExpansion%2A>.  
  
## Vedere anche  
 [Opzioni \/O \(Ottimizza codice\)](../../build/reference/o-options-optimize-code.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
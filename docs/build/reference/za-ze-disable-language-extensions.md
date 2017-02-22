---
title: "/Za, /Ze (Disabilita estensioni linguaggio) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLWCECompilerTool.DisableLanguageExtensions"
  - "/za"
  - "/ze"
  - "VC.Project.VCCLCompilerTool.DisableLanguageExtensions"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Za (opzione del compilatore) [C++]"
  - "/Ze (opzione del compilatore) [C++]"
  - "Disabilita estensioni linguaggio (opzione del compilatore)"
  - "abilitazione delle estensioni del linguaggio"
  - "estensioni del linguaggio"
  - "estensioni del linguaggio, disabilitazione nel compilatore"
  - "Za (opzione del compilatore) [C++]"
  - "-Za (opzione del compilatore) [C++]"
  - "Ze (opzione del compilatore) [C++]"
  - "-Ze (opzione del compilatore) [C++]"
ms.assetid: 65e49258-7161-4289-a176-7c5c0656b1a2
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# /Za, /Ze (Disabilita estensioni linguaggio)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'opzione del compilatore **\/Za** genera un errore per costrutti di linguaggio che non sono compatibili con ANSI C o ANSI C\+\+.  L'opzione del compilatore **\/Ze**, che rappresenta l'impostazione predefinita, attiva le estensioni Microsoft.  
  
## Sintassi  
  
```  
/Za  
/Ze  
```  
  
## Note  
  
> [!NOTE]
>  L'opzione **\/Ze** è deprecata.  Per ulteriori informazioni, vedere [Deprecated Compiler Options in Visual C\+\+ 2005](http://msdn.microsoft.com/it-it/aa59fce3-50b8-4f66-9aeb-ce09a7a84cce).  
  
 Il compilatore [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] offre diverse funzionalità oltre a quelle specificate negli standard ANSI C o ANSI C\+\+.  Tali funzionalità sono note come estensioni Microsoft a C e C\+\+.  Queste estensioni sono disponibili quando viene specificata l'opzione **\/Ze**, ma non quando viene specificata l'opzione **\/Za**.  Per ulteriori informazioni, vedere [Estensioni Microsoft a C e C\+\+](../../build/reference/microsoft-extensions-to-c-and-cpp.md).  
  
 Disabilitare le estensioni di linguaggio se si intende portare il proprio programma in altri ambienti.  Il compilatore considera le parole chiave estese come semplici identificatori, disabilita le altre estensioni Microsoft e definisce automaticamente la macro predefinita `__STDC__` per i programmi C.  
  
 Le altre opzioni del compilatore utilizzate con **\/Za** non garantiscono la conformità con gli standard ANSI.  Ad esempio, **\/Za** e [\/fp \(Specifica il comportamento della virgola mobile\)](../../build/reference/fp-specify-floating-point-behavior.md) possono generare un comportamento imprevisto.  
  
 Per informazioni su come ottenere un comportamento standard con **\/Za**, vedere l'opzione del compilatore [\/Zc](../../build/reference/zc-conformance.md).  
  
 Per ulteriori informazioni sui problemi di conformità con [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)], vedere [Problemi di conformità e compatibilità in Visual C\+\+](../../misc/compatibility-and-compliance-issues-in-visual-cpp.md).  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Linguaggio**.  
  
4.  Modificare la proprietà **Disabilita estensioni linguaggio**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.DisableLanguageExtensions%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
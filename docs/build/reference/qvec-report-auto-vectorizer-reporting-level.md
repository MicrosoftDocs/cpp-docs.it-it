---
title: "/Qvec-report (livello di segnalazione vettorizzazione automatica) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 4778c9a3-0692-4085-9b05-1bfeadf4c74a
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# /Qvec-report (livello di segnalazione vettorizzazione automatica)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Attiva la funzionalità di creazione rapporti del compilatore [Auto\-Vectorizer](../../parallel/auto-parallelization-and-auto-vectorization.md) e specifica il livello di informazione dei messaggi di output durante la compilazione.  
  
## Sintassi  
  
```  
/Qvec-report:{1}{2}  
```  
  
## Note  
 **\/Qvec\-report:1**  
 Restituisce un messaggio informativo per i cicli che sono vettorizzati.  
  
 **\/Qvec\-report:2**  
 Restituisce un messaggio informativo per i cicli che sono vettorizzati e cicli for che non sono vettorizzati, insieme a un codice motivo.  
  
 Per ulteriori informazioni sui codici motivo e i messaggi, vedere [Messaggi di vettorizzazione e parallelizzazione](../../error-messages/tool-errors/vectorizer-and-parallelizer-messages.md).  
  
### Impostare l'opzione del compilatore \/Qvec\-report in Visual Studio  
  
1.  In **Esplora soluzioni** aprire il menu di scelta rapida per il progetto e scegliere **Proprietà**.  
  
2.  Nella finestra di dialogo **Pagine delle proprietà**, in **C\/C\+\+**, selezionare **Riga di comando**.  
  
3.  Nella casella **Opzioni aggiuntive**, immettere `/Qvec-report:1` o `/Qvec-report:2`.  
  
### Impostare l'opzione del compilatore \/Qvec\-report a livello di codice  
  
-   Utilizzare l'esempio di codice in <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Opzioni \/Q \(Operazioni di basso livello\)](../../build/reference/q-options-low-level-operations.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Programmazione parallela nel codice nativo](http://go.microsoft.com/fwlink/?LinkId=263662)
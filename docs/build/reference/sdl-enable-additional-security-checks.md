---
title: "/sdl (Abilita ulteriori controlli di sicurezza) | Microsoft Docs"
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
  - "VC.Project.VCCLCompilerTool.SDLCheck"
dev_langs: 
  - "C++"
ms.assetid: 3dcf86a0-3169-4240-9f29-e04a9f535826
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /sdl (Abilita ulteriori controlli di sicurezza)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Aggiunge i controlli consigliati di Security Development Lifecycle \(SDL\).  Questi controlli includono altri avvisi relativi alla sicurezza come errori e funzionalità aggiuntive per la generazione di codice sicuro.  
  
## Sintassi  
  
```  
/sdl[-]  
```  
  
## Note  
 **\/sdl** abilita un superset dei controlli di sicurezza di base disponibili in [\/GS](../../build/reference/gs-buffer-security-check.md) ed ignora **\/GS\-**.  Per impostazione predefinita, l'opzione **\/sdl** è disattivata.  **\/sdl\-** disabilita i controlli di sicurezza aggiuntivi.  
  
## Controlli in fase di compilazione  
 **\/sdl** abilita questi avvisi come errori:  
  
|Avviso abilitato da \/sdl|Opzione della riga di comando equivalente|Descrizione|  
|-------------------------------|-----------------------------------------------|-----------------|  
|[C4146](../../error-messages/compiler-warnings/compiler-warning-level-2-c4146.md)|\/we4146|Un operatore di sottrazione unario viene applicato a un tipo unsigned, restituendo un risultato unsigned.|  
|[C4308](../../error-messages/compiler-warnings/compiler-warning-level-2-c4308.md)|\/we4308|Una costante integrale negativa convertita in un tipo unsigned, restituendo un risultato forse privo di significato.|  
|[C4532](../../error-messages/compiler-warnings/compiler-warning-level-1-c4532.md)|\/we4532|L'utilizzo delle parole chiave `continue`, `break` o `goto` in un blocco `__finally`\/`finally` genera un comportamento indefinito in caso di terminazione anomala.|  
|[C4533](../../error-messages/compiler-warnings/compiler-warning-level-1-c4533.md)|\/we4533|Il codice che inizializza una variabile non verrà eseguito.|  
|[C4700](../../error-messages/compiler-warnings/compiler-warning-level-1-and-level-4-c4700.md)|\/we4700|Utilizzo di una variabile locale non inizializzata.|  
|[C4703](../../error-messages/compiler-warnings/compiler-warning-level-4-c4703.md)|\/we4703|Utilizzo di una variabile locale puntatore potenzialmente non inizializzata.|  
|[C4789](../../error-messages/compiler-warnings/compiler-warning-level-1-c4789.md)|\/we4789|Sovraccarico del buffer quando vengono utilizzate le funzioni specifiche di runtime del linguaggio C \(CRT\).|  
|[C4995](../../error-messages/compiler-warnings/compiler-warning-level-3-c4995.md)|\/we4995|Utilizzo di una funzione contrassegnata con il pragma [deprecated](../../preprocessor/deprecated-c-cpp.md).|  
|[C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md)|\/we4996|Utilizzo di una funzione contrassegnata come [deprecated](../../cpp/deprecated-cpp.md).|  
  
## Controlli runtime  
 Quando è abilitato **\/sdl**, il compilatore genera codice per eseguire questi controlli in fase di esecuzione:  
  
-   Attiva la modalità strict del rilevamento del sovraccarico del buffer in fase di esecuzione **\/GS**, equivalente alla compilazione con `#pragma strict_gs_check(push, on)`.  
  
-   Esegue una pulizia del puntatore limitata.  In espressioni che non includono dereferenziazioni e nei tipi che non dispongono di un distruttore definito dall'utente, i riferimenti del puntatore vengono impostati su un indirizzo non valido in seguito ad una chiamata a `delete`.  Questo consente di prevenire il riutilizzo di riferimenti del puntatore non aggiornati.  
  
-   Esegue l'inizializzazione dei membri della classe.  Inizializza automaticamente tutti i membri della classe a zero in fase di creazione di oggetti, prima che venga eseguito il costruttore.  Questo consente di evitare l'utilizzo di dati non inizializzati associati ai membri della classe che il costruttore non inizializza in modo esplicito.  
  
## Note  
 Per altre informazioni, vedere [Avvisi, \/sdl e miglioramento del rilevamento della variabile non inizializzata](http://go.microsoft.com/fwlink/p/?LinkId=331012).  
  
#### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Selezionare la cartella **C\/C\+\+**.  
  
3.  Nella pagina **Generale**, selezionare l'opzione dall'elenco a discesa **Controlli SDL**.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
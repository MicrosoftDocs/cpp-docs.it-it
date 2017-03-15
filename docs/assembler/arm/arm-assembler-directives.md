---
title: "ARM Assembler Directives | Microsoft Docs"
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
ms.assetid: 9cfa8896-ec10-4e77-855a-3135c40d7d2a
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# ARM Assembler Directives
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Per la maggior parte assembler del ARM di Microsoft utilizza il linguaggio assembly ARM che è documentato nel capitolo 7 del [Guida di strumenti assembler ARM](http://go.microsoft.com/fwlink/?LinkId=246102).  Tuttavia, l'implementazione Microsoft di alcune direttive di assembly differiscono dalle direttive di assembly ARM.  In questo articolo vengono illustrate le differenze.  
  
## Implementazioni di Microsoft di direttive Assembly ARM  
 AREA  
 L'assembler ARM Microsoft supporta questi attributi AREA: allineare, codice, CODEALIGN, dati, NOINIT, READONLY, READWRITE, THUMB, ARM.  
  
 Tutto eccetto la casella di scorrimento e ARM funzionano esattamente come documentato nel [Guida di strumenti assembler ARM](http://go.microsoft.com/fwlink/?LinkId=246102).  
  
 In assembler del ARM Microsoft THUMB indica che una sezione di codice contiene codice Thumb ed è il valore predefinito per le sezioni di codice.  ARM indica che la sezione contiene codice ARM.  
  
 ATTR  
 Non supportato.  
  
 ORGANIZZAZIONE16  
 Non supportato poiché implica sintassi Thumb pre\-doppio monitor, che non consente di assembler del ARM di Microsoft.  Utilizzare invece la direttiva di THUMB con sintassi doppio monitor.  
  
 COMUNI  
 Specifica di un allineamento per l'area comune non è supportata.  
  
 DCDO  
 Non supportato.  
  
 DN, QN, SN  
 Specifica di un tipo o una corsia sull'alias di registro non è supportata.  
  
 VOCE  
 Non supportato.  
  
 EQU  
 Specifica di un tipo di simbolo definito non è supportata.  
  
 ESPORTAZIONE e GLOBAL  
 ```  
  
EXPORTsym {[type]}  
  
```  
  
 `sym`è il simbolo da esportare.  `[type]`, se specificato, può essere rappresentato da `[DATA]` per indicare che il simbolo punta a dati o `[FUNC]` per indicare che il simbolo punta al codice.  
  
 GLOBALE è un sinonimo per l'esportazione.  
  
 EXPORTAS  
 Non supportato.  
  
 FRAME  
 Non supportato.  
  
 Process e funzione  
 Sebbene la sintassi di assembly supporta la specifica di un personalizzato convenzione di chiamata su procedure elencando i registri sono Salva chiamante e quelli che sono chiamato\-Salva l'assembler ARM di Microsoft accetta la sintassi ma ignora gli elenchi di registro.  Le informazioni di debug sono prodotto dall'assembler supportano solo la convenzione di chiamata predefinita.  
  
 IMPORTAZIONE ed EXTERN  
 ```  
  
IMPORT sym{, WEAK alias{, TYPE t}}  
  
```  
  
 `sym`è il nome del simbolo da importare.  
  
 Se debole `alias` è specificato, indica che `sym` è un debole esterno.  Se non viene trovata alcuna definizione per esso in fase di collegamento, quindi associare tutti i riferimenti a essa invece `alias`.  
  
 Se tipo  `t` è specificato, quindi `t` indica il modo in cui il linker deve tentare di risolvere `sym`.  Questi valori per `t` sono possibili:   
1\-Non si esegue una ricerca di raccolta di`sym`   
2, Eseguire una ricerca di raccolta di`sym`   
3\-`sym` è un alias per `alias` \(predefinito\)  
  
 EXTERN è sinonimo di importazione, a eccezione di quelli `sym` viene importato solo se sono presenti i riferimenti dell'assembly corrente.  
  
 MACRO  
 Non è supportato l'utilizzo di una variabile per contenere il codice di condizione di una macro.  Valori predefiniti per le macro di parametri non sono supportati.  
  
 NOFP  
 Non supportato.  
  
 OPT, TTL, SUBT  
 Non supportata perché l'assembler ARM Microsoft non produce le inserzioni.  
  
 PRESERVE8  
 Non supportato.  
  
 RILOCAZIONE  
 `RELOC n`solo seguire un'istruzione o una direttiva di definizione dei dati.  Non vi è alcun "simbolo anonimo" che può essere riposizionato.  
  
 È NECESSARIO  
 Non supportato.  
  
 REQUIRE8  
 Non supportato.  
  
 THUMBX  
 Non è supportato perché l'assembler ARM Microsoft non supporta il set di istruzioni 2EE Thumb.  
  
## Vedere anche  
 [ARM Assembler Command\-Line Reference](../../assembler/arm/arm-assembler-command-line-reference.md)   
 [ARM Assembler Diagnostic Messages](../../assembler/arm/arm-assembler-diagnostic-messages.md)
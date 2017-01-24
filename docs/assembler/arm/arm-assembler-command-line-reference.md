---
title: "ARM Assembler Command-Line Reference | Microsoft Docs"
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
ms.assetid: f7b89478-1ab5-4995-8cde-a805f0462c45
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# ARM Assembler Command-Line Reference
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo articolo fornisce informazioni della riga di comando per l'assembler ARM Microsoft  *armasm*, che compila il linguaggio assembly ARMv7 Thumb nell'implementazione Microsoft dell'oggetto File Format \(COFF\) comune.  Codice di formato COFF con codice oggetto prodotta dall'assembler ARM o dal compilatore C, con le librerie di oggetti che vengono creati per la gestione di librerie è possibile collegare il linker.  
  
## Sintassi  
  
```  
armasm [[options]] sourcefile objectfile  
```  
  
```  
armasm [[options]] -o objectfile sourcefile  
```  
  
#### Parametri  
 `options`  
 \-errori`filename`  
 Reindirizzare i messaggi di errore e avviso per `filename`.  
  
 \-i`dir[;dir]`  
 Aggiungere la directory specificata per il percorso di ricerca.  
  
 \-definire in anticipo`directive`  
 Consente di specificare una direttiva SETA, SETL o insiemi di predefinire un simbolo.  Esempio: **armasm.exe \-predefine "COUNT SETA 150" source.asm**.  Per ulteriori informazioni, vedere la [Guida di strumenti assembler ARM](http://go.microsoft.com/fwlink/?LinkId=246102).  
  
 nowarn\-  
 Disattivare tutti i messaggi di avviso.  
  
 \-Ignora`warning`  
 Disattivare l'avviso specificato.  Per i valori possibili, vedere la sezione sugli avvisi.  
  
 \-Guida in linea  
 Consente di stampare il messaggio della Guida della riga di comando.  
  
 \-computer`machine`  
 Consente di specificare il tipo di computer nell'intestazione PE.  I valori possibili per `machine` sono:   
**ARM**\-Imposta il tipo di computer per IMAGE\_FILE\_MACHINE\_ARMNT.  Questa è l'impostazione predefinita.   
**THUMB**\-Imposta il tipo di computer per IMAGE\_FILE\_MACHINE\_THUMB.  
  
 \-oldit  
 Generare lo stile ARMv7 IT blocchi.  Per impostazione predefinita, compatibile con ARMv8 IT blocchi vengono generati.  
  
 \-tramite`filename`  
 Leggere gli argomenti della riga di comando aggiuntivi da `filename`.  
  
 \-16  
 Assemblate la sorgente come istruzioni Thumb a 16 bit.  Questa è l'impostazione predefinita.  
  
 \-32  
 Assemblate la sorgente come istruzioni ARM a 32 bit.  
  
 \-g  
 Generare informazioni di debug.  
  
 \-\/errorreport:`option`  
 Consente di specificare come interno assembler gli errori vengono segnalati a Microsoft.  I valori possibili per `option` sono:   
**none**\-Non inviare rapporti.   
**prompt**— Richiede all'utente di inviare immediatamente rapporti.   
**queue**— Richiede all'utente di inviare report al successivo accesso di amministratore.  Questa è l'impostazione predefinita.   
**send**\-Invia automaticamente rapporti.  
  
 `sourcefile`  
 Il nome del file di origine.  
  
 `objectfile`  
 Il nome del file oggetto \(output\).  
  
 Nell'esempio riportato di seguito viene illustrato come utilizzare armasm in uno scenario tipico.  Innanzitutto, utilizzare armasm per creare un file di origine \(ASM\) del linguaggio assembly per un file oggetto \(obj\).  Quindi, utilizzare il compilatore c della riga di comando CL per la compilazione di un file di origine \(c\) e specificare anche l'opzione del linker per collegare il file di oggetto del ARM.  
  
 **armasm myasmcode.asm \-o myasmcode.obj**  
  
 **cl myccode.c \/link myasmcode.obj**  
  
## Vedere anche  
 [ARM Assembler Diagnostic Messages](../../assembler/arm/arm-assembler-diagnostic-messages.md)   
 [ARM Assembler Directives](../../assembler/arm/arm-assembler-directives.md)
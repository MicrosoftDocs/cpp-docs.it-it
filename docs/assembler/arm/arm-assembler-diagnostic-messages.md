---
title: "ARM Assembler Diagnostic Messages | Microsoft Docs"
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
ms.assetid: 52b38267-6023-4bdc-a0ef-863362f48eec
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# ARM Assembler Diagnostic Messages
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'assembler Microsoft ARM \(*armasm*\) genera errori e avvisi di diagnostici quando li rileva.  In questo articolo vengono descritti i messaggi comunemente riscontrati.  
  
## Sintassi  
  
```  
  
filename(lineno) : [error|warning] Anum: message  
```  
  
## Messaggi di diagnostica  
  
### Errori  
 A2193: l'istruzione genera un comportamento imprevisto  
 L'architettura ARM non garantisce che cosa accade quando l'istruzione viene eseguita.  Per informazioni dettagliate sulle modalità ben definite di questa istruzione, consultare la [Manuale di riferimento di architettura ARM](http://go.microsoft.com/fwlink/?LinkId=246464).  
  
```  
  
ADD r0, r8, pc         ; A2193: this instruction generates unpredictable behavior  
  
```  
  
 A2196: istruzione non può essere codificato nei 16 bit  
 L'istruzione specificata non può essere codificato come un'istruzione di Thumb a 16 bit.  Specificare un'istruzione a 32 bit o riorganizzare il codice per portare l'etichetta di destinazione nell'intervallo di un'istruzione a 16 bit.  
  
 L'assembler tenti codificare un ramo di 16 bit e non con questo errore, anche se un ramo a 32 bit è codificabili in modo protetto.  È possibile risolvere questo problema utilizzando il `.W` identificatore di contrassegnare in modo esplicito la diramazione a 32 bit.  
  
```  
  
  ADD.N r0, r1, r2      ; A2196: instruction cannot be encoded in 16 bits  
  
  B.W label             ; OK  
  B.N label             ; A2196: instruction cannot be encoded in 16 bits  
  SPACE 10000  
label  
  
```  
  
 A2202: Sintassi dell'istruzione di Pre\-doppio monitor non consentito nella regione THUMB  
 Il codice Thumb deve utilizzare la sintassi del linguaggio Assembler di Unified \(Consenti\).  La sintassi precedente non viene accettata.  
  
```  
  
ADDEQS r0, r1         ; A2202: Pre-UAL instruction syntax not allowed in THUMB region  
ADDSEQ r0, r1         ; OK  
  
```  
  
 A2513: Rotazione deve essere pari  
 In modalità a doppio ramo, è disponibile una sintassi alternativa per la specifica di costanti.  Invece di scrivere `#<const>`, è possibile scrivere `#<byte>,#<rot>`, che rappresenta il valore costante ottenuto ruotando il valore `<byte>` a destra da `<rot>`.  Quando si utilizza questa sintassi, è necessario rendere il valore di `<rot>` anche.  
  
```  
  
MOV r0, #4, #2       ; OK  
MOV r0, #4, #1       ; A2513: Rotation must be even  
  
```  
  
 A2557: Numero errato di byte da scrivere nuovamente  
 La struttura al NEON, caricare e memorizzare le istruzioni \(`VLDn`, `VSTn`\), non vi è una sintassi alternativa per la specifica di writeback per il Registro di base.  Anziché inserire un punto esclamativo \(\!\) dopo l'indirizzo, è possibile specificare un valore immediato che indica l'offset da aggiungere al registro base.  Se si utilizza questa sintassi, è necessario specificare il numero esatto di byte che sono stati caricati o memorizzati dall'istruzione.  
  
```  
  
VLD1.8 {d0-d3}, [r0]!         ; OK  
VLD1.8 {d0-d3}, [r0], #32     ; OK  
VLD1.8 {d0-d3}, [r0], #100    ; A2557: Incorrect number of bytes to write back  
  
```  
  
### Avvisi  
 A4228: Valore di allineamento supera allineamento AREA; allineamento non è garantito  
 L'allineamento specificato in un `ALIGN` presente direttiva è maggiore di allineamento racchiude `AREA`.  Di conseguenza, l'assembler non garantisce che il `ALIGN` sarà effettiva della direttiva.  
  
 Per risolvere il problema, è possibile specificare il `AREA` direttiva un `ALIGN` attributo è uguale o maggiore di allineamento desiderato.  
  
```  
  
AREA |.myarea1|  
ALIGN 8           ; A4228: Alignment value exceeds AREA alignment; alignment not guaranteed  
  
AREA |.myarea2|,ALIGN=3  
ALIGN 8           ; OK  
  
```  
  
 A4508: Utilizzo di questa costante ruotata è obsoleto  
 In modalità a doppio ramo, è disponibile una sintassi alternativa per la specifica di costanti.  Invece di scrivere `#<const>`, è possibile scrivere `#<byte>,#<rot>`, che rappresenta il valore costante ottenuto ruotando il valore `<byte>` a destra da `<rot>`.  In alcuni contesti, ARM è sostituita l'utilizzo di queste costanti ruotate.  In questi casi, utilizzare il basic `#<const>` sintassi alternativa.  
  
```  
  
ANDS r0, r0, #1                ; OK  
ANDS r0, r0, #4, #2            ; A4508: Use of this rotated constant is deprecated  
  
```  
  
 A4509: Questa forma di istruzione condizionale è obsoleto  
 Questa forma di istruzione condizionale è stata sostituita dal ARM nell'architettura di ARMv8.  Si consiglia di modificare il codice per l'utilizzo di diramazioni condizionali.  Per visualizzare le istruzioni condizionali sono ancora supportate, consultare la [Manuale di riferimento di architettura ARM](http://go.microsoft.com/fwlink/?LinkId=246464).  
  
 Questo avviso non viene emesso quando il  `- oldit` viene utilizzata l'opzione della riga di comando.  
  
```  
  
ADDEQ r0, r1, r8              ; A4509: This form of conditional instruction is deprecated  
  
```  
  
## Vedere anche  
 [ARM Assembler Command\-Line Reference](../../assembler/arm/arm-assembler-command-line-reference.md)   
 [ARM Assembler Directives](../../assembler/arm/arm-assembler-directives.md)
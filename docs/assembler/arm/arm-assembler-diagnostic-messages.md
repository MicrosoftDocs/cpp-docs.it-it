---
title: Messaggi di diagnostica Assembler ARM | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
ms.assetid: 52b38267-6023-4bdc-a0ef-863362f48eec
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 54dca3a864ca34107314ad33725793297fd93e4a
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="arm-assembler-diagnostic-messages"></a>Messaggi di diagnostica assembler ARM
L'assembler ARM Microsoft (*armasm*) genera errori e avvisi di diagnostica quando vengono rilevati. In questo articolo descrive i messaggi più frequente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
filename(lineno) : [error|warning] Anum: message  
```  
  
## <a name="diagnostic-messages"></a>Messaggi di diagnostica  
  
### <a name="errors"></a>Errori  
 A2193: l'istruzione genera un comportamento imprevedibile  
 L'architettura ARM non garantisce che cosa avviene quando l'istruzione viene eseguita.  Per informazioni dettagliate sulle forme ben definite di questa istruzione, consultare il [manuale di riferimento di architettura ARM](http://go.microsoft.com/fwlink/p/?linkid=246464).  
  
```  
  
ADD r0, r8, pc         ; A2193: this instruction generates unpredictable behavior  
  
```  
  
 A2196: istruzione non può essere codificato nei 16 bit  
 L'istruzione specificata non può essere codificato come istruzione di cursore a 16 bit.  Specificare un'istruzione di 32 bit o riordinare il codice per rendere l'etichetta di destinazione dell'intervallo di un'istruzione a 16 bit.  
  
 L'assembler può tentare di codificare un ramo a 16 bit e non riuscire con l'errore, anche se un branch a 32 bit è codificabili. È possibile risolvere questo problema utilizzando il `.W` identificatore contrassegnare in modo esplicito il ramo a 32 bit.  
  
```  
  
  ADD.N r0, r1, r2      ; A2196: instruction cannot be encoded in 16 bits  
  
  B.W label             ; OK  
  B.N label             ; A2196: instruction cannot be encoded in 16 bits  
  SPACE 10000  
label  
  
```  
  
 A2202: Sintassi dell'istruzione Pre-UAL non consentita nella regione THUMB  
 Codice Thumb deve utilizzare la sintassi unificata Assembler Language (UAL).  La sintassi precedente non viene accettata  
  
```  
  
ADDEQS r0, r1         ; A2202: Pre-UAL instruction syntax not allowed in THUMB region  
ADDSEQ r0, r1         ; OK  
  
```  
  
 A2513: Rotazione deve essere un numero pari  
 In modalità ARM, è una sintassi alternativa per la specifica di costanti.  Anziché scrivere `#<const>`, è possibile scrivere `#<byte>,#<rot>`, che rappresenta il valore costante che consente di ottenere il valore di rotazione `<byte>` verso destra di `<rot>`.  Quando si utilizza questa sintassi, è necessario stabilire il valore di `<rot>` anche.  
  
```  
  
MOV r0, #4, #2       ; OK  
MOV r0, #4, #1       ; A2513: Rotation must be even  
  
```  
  
 A2557: Numero di byte da scrivere nuovamente errato  
 In base alla struttura NEON caricare e archiviare le istruzioni (`VLDn`, `VSTn`), è una sintassi alternativa per la specifica di writeback per la registrazione di base.  Anziché inserire un punto esclamativo (!) dopo l'indirizzo, è possibile specificare un valore immediato che indica l'offset da aggiungere al Registro di base.  Se si utilizza questa sintassi, è necessario specificare il numero esatto di byte che sono stati caricati o memorizzati dall'istruzione.  
  
```  
  
VLD1.8 {d0-d3}, [r0]!         ; OK  
VLD1.8 {d0-d3}, [r0], #32     ; OK  
VLD1.8 {d0-d3}, [r0], #100    ; A2557: Incorrect number of bytes to write back  
  
```  
  
### <a name="warnings"></a>Avvisi  
 A4228: Valore di allineamento maggiore allineamento AREA; allineamento non garantita  
 L'allineamento specificato in un `ALIGN` direttiva è maggiore rispetto all'allineamento di inclusione `AREA`.  Di conseguenza, l'assembler non garantisce che il `ALIGN` direttiva verrà rispettata.  
  
 Per risolvere questo problema, è possibile specificare nel `AREA` direttiva un `ALIGN` attributo che è uguale o maggiore rispetto all'allineamento desiderato.  
  
```  
  
AREA |.myarea1|  
ALIGN 8           ; A4228: Alignment value exceeds AREA alignment; alignment not guaranteed  
  
AREA |.myarea2|,ALIGN=3  
ALIGN 8           ; OK  
  
```  
  
 A4508: Utilizzo di questa costante ruotata è deprecato  
 In modalità ARM, è una sintassi alternativa per la specifica di costanti.  Anziché scrivere `#<const>`, è possibile scrivere `#<byte>,#<rot>`, che rappresenta il valore costante che consente di ottenere il valore di rotazione `<byte>` verso destra di `<rot>`.  In alcuni contesti, ARM è deprecato l'utilizzo di queste costanti ruotate. In questi casi, utilizzare gli elementi di base `#<const>` sintassi alternativa.  
  
```  
  
ANDS r0, r0, #1                ; OK  
ANDS r0, r0, #4, #2            ; A4508: Use of this rotated constant is deprecated  
  
```  
  
 A4509: Questo modulo dell'istruzione condizionale è deprecato  
 Questa forma di istruzione condizionale è stata deprecata da ARM nell'architettura di ARMv8. Si consiglia di modificare il codice per l'utilizzo di rami condizionali. Per visualizzare le istruzioni condizionali sono ancora supportate, consultare il [manuale di riferimento di architettura ARM](http://go.microsoft.com/fwlink/p/?linkid=246464).  
  
 Questo avviso non è generato quando il `-oldit` viene utilizzata l'opzione della riga di comando.  
  
```  
  
ADDEQ r0, r1, r8              ; A4509: This form of conditional instruction is deprecated  
  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento della riga di comando di Assembler ARM](../../assembler/arm/arm-assembler-command-line-reference.md)   
 [Direttive assembly ARM](../../assembler/arm/arm-assembler-directives.md)
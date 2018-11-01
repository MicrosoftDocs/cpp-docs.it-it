---
title: Messaggi di diagnostica Assembler ARM
ms.date: 08/30/2018
f1_keywords:
- A2193
- A2196
- A2202
- A2513
- A2557
- A4228
- A4508
- A4509
helpviewer_keywords:
- A2193
- A2196
- A2202
- A2513
- A2557
- A4228
- A4508
- A4509
ms.assetid: 52b38267-6023-4bdc-a0ef-863362f48eec
ms.openlocfilehash: 867ef50065c6ed63a4da6d37523bd5a1f3cbadba
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50601682"
---
# <a name="arm-assembler-diagnostic-messages"></a>Messaggi di diagnostica Assembler ARM

L'assembler ARM Microsoft (*armasm*) genera errori e avvisi di diagnostica quando li rileva. Questo articolo descrive i messaggi più comunemente riscontrati.

## <a name="syntax"></a>Sintassi

> <em>nome file</em>**(**<em>numero di riga</em>**):** \[ **errore**|**avviso** ] **Oggetto**<em>numero</em>**:** *messaggio*

## <a name="diagnostic-messages---errors"></a>Messaggi di diagnostica - errori

> A2193: tale istruzione genera un comportamento imprevedibile

L'architettura ARM non è possibile garantire che cosa accade quando l'istruzione viene eseguita.  Per informazioni dettagliate sulle forme ben definite di questa istruzione, visitare il [manuale di riferimento di architettura ARM](http://go.microsoft.com/fwlink/p/?linkid=246464).

```asm
    ADD r0, r8, pc         ; A2193: this instruction generates unpredictable behavior
```

> A2196: istruzione non può essere codificata nei 16 bit

L'istruzione specificata non può essere codificato come un'istruzione di controllo Thumb di 16 bit.  Specificare un'istruzione di 32 bit o riordinare il codice per portare l'etichetta di destinazione nell'intervallo di un'istruzione a 16 bit.

L'assembler potrebbe provare a codificare un ramo in 16 bit e non riuscire con l'errore, anche se un branch a 32 bit è codificabili. È possibile risolvere questo problema usando il `.W` identificatore contrassegnare in modo esplicito il ramo a 32 bit.

```asm
    ADD.N r0, r1, r2      ; A2196: instruction cannot be encoded in 16 bits

    B.W label             ; OK
    B.N label             ; A2196: instruction cannot be encoded in 16 bits
    SPACE 10000
label
```

> A2202: Sintassi dell'istruzione Pre-UAL non consentita nell'area di controllo THUMB

Codice Thumb deve usare la sintassi unificata dell'Assembler del linguaggio (UAL).  La sintassi precedente non viene più accettata

```asm
    ADDEQS r0, r1         ; A2202: Pre-UAL instruction syntax not allowed in THUMB region
    ADDSEQ r0, r1         ; OK
```

> A2513: Rotazione deve essere un numero pari

In modalità ARM, è una sintassi alternativa per la specifica di costanti.  Invece di scrivere `#<const>`, è possibile scrivere `#<byte>,#<rot>`, che rappresenta il valore costante che viene ottenuto mediante il valore di rotazione `<byte>` verso destra di `<rot>`.  Quando si usa questa sintassi, è necessario creare il valore di `<rot>` anche.

```asm
    MOV r0, #4, #2       ; OK
    MOV r0, #4, #1       ; A2513: Rotation must be even
```

> A2557: Numero di byte da scrivere nuovamente errato

In base alla struttura NEON caricare e archiviare le istruzioni (`VLDn`, `VSTn`), è una sintassi alternativa per la specifica di writeback per la registrazione di base.  Anziché inserire un punto esclamativo (!) dopo l'indirizzo, è possibile specificare un valore immediato che indica l'offset da aggiungere alla base registrate.  Se si utilizza questa sintassi, è necessario specificare il numero esatto di byte che sono stati caricati o memorizzati dall'istruzione.

```asm
    VLD1.8 {d0-d3}, [r0]!         ; OK
    VLD1.8 {d0-d3}, [r0], #32     ; OK
    VLD1.8 {d0-d3}, [r0], #100    ; A2557: Incorrect number of bytes to write back
```

## <a name="diagnostic-messages---warnings"></a>Messaggi di diagnostica - avvisi

> A4228: Valore di allineamento maggiore allineamento AREA; allineamento non garantita

L'allineamento specificato in un' `ALIGN` direttiva è maggiore di quella l'allineamento dell'inclusione `AREA`.  Di conseguenza, l'assembler non può garantire che il `ALIGN` direttiva verrà rispettata.

Per risolvere questo problema, è possibile specificare per il `AREA` direttiva un `ALIGN` attributo che è uguale o maggiore dell'allineamento desiderato.

```asm
AREA |.myarea1|
ALIGN 8           ; A4228: Alignment value exceeds AREA alignment; alignment not guaranteed

AREA |.myarea2|,ALIGN=3
ALIGN 8           ; OK
```

> A4508: Utilizzo di questa costante ruotata è deprecato

In modalità ARM, è una sintassi alternativa per la specifica di costanti.  Invece di scrivere `#<const>`, è possibile scrivere `#<byte>,#<rot>`, che rappresenta il valore costante che viene ottenuto mediante il valore di rotazione `<byte>` verso destra di `<rot>`.  In alcuni contesti, ARM è deprecato l'uso di queste costanti ruotate. In questi casi, usare il basic `#<const>` sintassi alternativa.

```asm
    ANDS r0, r0, #1                ; OK
    ANDS r0, r0, #4, #2            ; A4508: Use of this rotated constant is deprecated
```

> A4509: Questo modulo dell'istruzione condizionale è deprecato

Questa forma dell'istruzione condizionale è stata deprecata da ARM nell'architettura di ARMv8. È consigliabile modificare il codice per usare i rami condizionali. Per visualizzare le istruzioni condizionali sono ancora supportate, consultare il [manuale di riferimento di architettura ARM](http://go.microsoft.com/fwlink/p/?linkid=246464).

Questo avviso non è generato quando il **- oldit** viene utilizzata l'opzione della riga di comando.

```asm
    ADDEQ r0, r1, r8              ; A4509: This form of conditional instruction is deprecated
```

## <a name="see-also"></a>Vedere anche

[Riferimenti alla riga di comando dell'assembler ARM](../../assembler/arm/arm-assembler-command-line-reference.md)<br/>
[Direttive assembly ARM](../../assembler/arm/arm-assembler-directives.md)<br/>

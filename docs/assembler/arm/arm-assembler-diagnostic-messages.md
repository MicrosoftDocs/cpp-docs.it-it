---
description: "Altre informazioni su: messaggi di diagnostica dell'assembler ARM"
title: Messaggi di diagnostica assembler ARM
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
ms.openlocfilehash: 91e4640c161cbb58522c3680ae5decdb4cc1e992
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97118199"
---
# <a name="arm-assembler-diagnostic-messages"></a>Messaggi di diagnostica assembler ARM

L'assembler ARM Microsoft (*armaso*) genera avvisi ed errori diagnostici quando li rileva. Questo articolo descrive i messaggi rilevati più di frequente.

## <a name="syntax"></a>Sintassi

> <em>filename</em>**(**<em>numero di riga</em>**):** \[ **errore** | **warning**] <em>numero</em>**:** *Message*

## <a name="diagnostic-messages---errors"></a>Messaggi di diagnostica-errori

> A2193: questa istruzione genera un comportamento imprevedibile

L'architettura ARM non può garantire ciò che accade quando viene eseguita l'istruzione.  Per informazioni dettagliate sulle forme ben definite di questa istruzione, vedere il manuale di riferimento per l' [architettura ARM](https://go.microsoft.com/fwlink/p/?linkid=246464).

```asm
    ADD r0, r8, pc         ; A2193: this instruction generates unpredictable behavior
```

> A2196: l'istruzione non può essere codificata in 16 bit

L'istruzione specificata non può essere codificata come istruzione Thumb a 16 bit.  Specificare un'istruzione a 32 bit oppure ridisporre il codice per portare l'etichetta di destinazione nell'intervallo di un'istruzione a 16 bit.

L'assembler può tentare di codificare un ramo in 16 bit e non riesce con questo errore, anche se un ramo a 32 bit è encodable. È possibile risolvere questo problema usando l' `.W` identificatore per contrassegnare in modo esplicito il ramo come 32 bit.

```asm
    ADD.N r0, r1, r2      ; A2196: instruction cannot be encoded in 16 bits

    B.W label             ; OK
    B.N label             ; A2196: instruction cannot be encoded in 16 bits
    SPACE 10000
label
```

> A2202: la sintassi dell'istruzione pre-registrazione accesso utenti non è consentita nell'area THUMB

Il codice Thumb deve usare la sintassi Unified Assembler Language (registrazione accesso utenti).  La sintassi precedente non è più accettata

```asm
    ADDEQS r0, r1         ; A2202: Pre-UAL instruction syntax not allowed in THUMB region
    ADDSEQ r0, r1         ; OK
```

> A2513: la rotazione deve essere pari

In modalità ARM esiste una sintassi alternativa per specificare le costanti.  Anziché scrivere `#<const>` , è possibile scrivere `#<byte>,#<rot>` , che rappresenta il valore costante ottenuto ruotando il valore `<byte>` a destra di `<rot>` .  Quando si usa questa sintassi, è necessario rendere anche il valore di `<rot>` .

```asm
    MOV r0, #4, #2       ; OK
    MOV r0, #4, #1       ; A2513: Rotation must be even
```

> A2557: numero non corretto di byte da scrivere

Per le istruzioni relative al caricamento e all'archiviazione della struttura NEON ( `VLDn` , `VSTn` ), esiste una sintassi alternativa per specificare il writeback per il registro di base.  Invece di inserire un punto esclamativo (!) dopo l'indirizzo, è possibile specificare un valore immediato che indica l'offset da aggiungere al registro di base.  Se si utilizza questa sintassi, è necessario specificare il numero esatto di byte caricati o archiviati dall'istruzione.

```asm
    VLD1.8 {d0-d3}, [r0]!         ; OK
    VLD1.8 {d0-d3}, [r0], #32     ; OK
    VLD1.8 {d0-d3}, [r0], #100    ; A2557: Incorrect number of bytes to write back
```

## <a name="diagnostic-messages---warnings"></a>Messaggi di diagnostica-avvisi

> A4228: il valore di allineamento supera l'allineamento dell'AREA; allineamento non garantito

L'allineamento specificato in una `ALIGN` direttiva è maggiore dell'allineamento dell'oggetto che lo contiene `AREA` .  Di conseguenza, l'assembler non è in grado di garantire che la `ALIGN` direttiva verrà rispettata.

Per risolvere questo problema, è possibile specificare sulla `AREA` direttiva un `ALIGN` attributo uguale o maggiore dell'allineamento desiderato.

```asm
AREA |.myarea1|
ALIGN 8           ; A4228: Alignment value exceeds AREA alignment; alignment not guaranteed

AREA |.myarea2|,ALIGN=3
ALIGN 8           ; OK
```

> A4508: l'uso di questa costante ruotata è deprecato

In modalità ARM esiste una sintassi alternativa per specificare le costanti.  Anziché scrivere `#<const>` , è possibile scrivere `#<byte>,#<rot>` , che rappresenta il valore costante ottenuto ruotando il valore `<byte>` a destra di `<rot>` .  In alcuni contesti, ARM ha deprecato l'uso di queste costanti ruotate. In questi casi, usare invece la `#<const>` sintassi di base.

```asm
    ANDS r0, r0, #1                ; OK
    ANDS r0, r0, #4, #2            ; A4508: Use of this rotated constant is deprecated
```

> A4509: questa forma di istruzione condizionale è deprecata

Questa forma di istruzione condizionale è stata deprecata da ARM nell'architettura ARMv8. Si consiglia di modificare il codice in modo da usare i rami condizionali. Per informazioni sulle istruzioni condizionali ancora supportate, vedere il [Manuale di riferimento per l'architettura ARM](https://go.microsoft.com/fwlink/p/?linkid=246464).

Questo avviso non viene generato quando si usa l'opzione della riga di comando **-oldiet** .

```asm
    ADDEQ r0, r1, r8              ; A4509: This form of conditional instruction is deprecated
```

## <a name="see-also"></a>Vedi anche

[Riferimento Command-Line assembler ARM](../../assembler/arm/arm-assembler-command-line-reference.md)<br/>
[Direttive assembler ARM](../../assembler/arm/arm-assembler-directives.md)<br/>

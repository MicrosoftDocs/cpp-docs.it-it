---
title: Riferimento a operatori MASM | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- MASM (Microsoft Macro Assembler), operators reference
- operators [MASM]
ms.assetid: c069cab7-d6b0-4f82-a6ce-0ca3fc7e6428
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5c9f5beb0e3525de6df88e44248410810502962e
ms.sourcegitcommit: 4cbde5d164d681204c4011dc95a921d75292f423
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/19/2018
ms.locfileid: "49459153"
---
# <a name="masm-operators-reference"></a>Riferimento a operatori MASM

## <a name="arithmetic"></a>operazioni aritmetiche

||||
|-|-|-|
|[* (moltiplicazione)](operator-multiply.md)|[+ (addizione)](operator-add.md)|[-(sottrazione o negazione)](operator-subtract-2.md)|
|[. (campo)](operator-dot.md)|[/ (divisione)](operator-subtract-1.md)|[&#91;&#93;(indice)](operator-brackets.md)|
|[MOD (resto)](operator-mod.md)|||

## <a name="control-flow"></a>Flusso di controllo

||||
|-|-|-|
|[\! (not logico di runtime)](operator-logical-not-masm-run-time.md)|[\!= (runtime non uguale)](operator-not-equal-masm.md)|[&#124;&#124;(runtime logico o)](operator-logical-or.md)|
|[& & (runtime logico e)](operator-logical-and-masm-run-time.md)|[< (runtime di minore di)](operator-less-than-masm-run-time.md)|[\<= (runtime minore o uguale)](operator-less-or-equal-masm-run-time.md)|
|[= = (runtime di uguale)](operator-equal-masm-run-time.md)|[> (runtime di maggiore di)](operator-greater-than-masm-run-time.md)|[> = (runtime di maggiore o uguale)](operator-greater-or-equal-masm-run-time.md)|
|[& (runtime di bit per bit e)](operator-bitwise-and.md)|||
|[CARRY? (runtime carry test)](operator-carry-q.md)|[OVERFLOW? (fase di esecuzione test di overflow)](operator-overflow-q.md)|[PARITY? (test parità di runtime)](operator-parity-q.md)|
|[L'ACCESSO? (runtime sign test)](operator-sign-q.md)|[ZERO? (runtime zero test)](operator-zero-q.md)||

## <a name="logical-and-shift"></a>Logico- and -Shift

||||
|-|-|-|
|[E (OR bit per bit e)](operator-and.md)|[NON (not bit per bit)](operator-not.md)|[OR (OR bit per bit o)](operator-or.md)|
|[SHL (shift bit a sinistra)](operator-shl.md)|[SHR (spostare i bit a destra)](operator-shr.md)|[XOR (OR esclusivo o)](operator-xor.md)|

## <a name="macro"></a>Macro

||||
|-|-|-|
|[\! (valore letterale carattere)](operator-logical-not-masm.md)|[% (considerata come testo)](operator-percent.md)||
|[;; (considerare come commento)](operator-semicolons.md)|[&lt; &gt; (considerare come un valore letterale)](operator-literal.md)|[& & (sostituire con valore di parametro)](operator-logical-and-masm.md)|

## <a name="miscellaneous"></a>Varie

||||
|-|-|-|
|[' ' (trattare come stringa)](operator-single-quote.md)|["" (trattare come stringa)](operator-double-quote.md)||
|: (definizione di etichetta locale)|:: (registrazione di segmento e offset)|:: (definizione di etichetta globale)|
|[; (considerare come commento)](operator-semicolon.md)|[DUP (dichiarazione ripetuta)](operator-dup.md)||

## <a name="record"></a>Record

|||
|-|-|
|[MASCHERA (get record o campo maschera di bit)](operator-mask.md)|[WIDTH (larghezza record o campo get)](operator-width.md)|

## <a name="relational"></a>Relazionale

||||
|-|-|-|
|[EQ (uguale)](operator-eq.md)|[GE (maggiore o uguale)](operator-ge.md)|[GT (maggiore di)](operator-gt.md)|
|[LE (minore o uguale)](operator-le.md)|[LT (minore di)](operator-lt.md)|[NE (non uguale)](operator-ne.md)|

## <a name="segment"></a>Segmento

|||
|-|-|
|[: (override del segmento)](operator-colon.md)|:: (registrazione di segmento e offset)|
|[IMAGEREL (offset relativo dell'immagine)](operator-imagerel.md)|[LROFFSET (caricatore risolto offset)](operator-lroffset.md)|
|[OFFSET (offset relativo segmento)](operator-offset.md)|[SECTIONREL (offset relativo di sezione)](operator-sectionrel.md)|
|[SEG (get segmento)](operator-seg.md)||

## <a name="type"></a>Tipo

||||
|-|-|-|
|[ALTA (8 bit superiori di 16 bit più bassa)](operator-high.md)|[HIGH32 (32 bit alti di 64 bit)](operator-high32.md)|[HIGHWORD (16 bit superiori di 32 bit più bassa)](operator-highword.md)|
|[LUNGHEZZA (numero di elementi nella matrice)](operator-length.md)|[LENGTHOF (numero di elementi nella matrice)](operator-lengthof.md)|[BASSO (8 bit inferiori)](operator-low.md)|
|[LOW32 (32 bit bassi)](operator-low32.md)|[LOWWORD (minimo 16 bit)](operator-lowword.md)|[OPATTR (informazioni sul tipo di argomento a get)](operator-opattr.md)|
|[PTR (puntatore a o come tipo)](operator-ptr.md)|[SHORT (tipo di etichetta breve segno)](operator-short.md)|[DIMENSIONE (dimensione del tipo o variabile)](operator-size.md)|
|[SIZEOF (dimensioni del tipo o variabile)](operator-sizeof.md)|[Questo (posizione corrente)](operator-this.md)|[TIPO (get espressione)](operator-type.md)|
|[. TIPO (informazioni sul tipo di argomento a get)](operator-dot-type.md)|||

## <a name="see-also"></a>Vedere anche

[Riferimento a Microsoft Macro Assembler](microsoft-macro-assembler-reference.md)<br/>

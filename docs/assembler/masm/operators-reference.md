---
title: Guida di riferimento agli operatori MASM
ms.date: 12/17/2019
helpviewer_keywords:
- MASM (Microsoft Macro Assembler), operators reference
- operators [MASM]
ms.assetid: c069cab7-d6b0-4f82-a6ce-0ca3fc7e6428
ms.openlocfilehash: c0059ab1b0204b79e040d18bd5aa88145775ebcd
ms.sourcegitcommit: 0781c69b22797c41630601a176b9ea541be4f2a3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75318761"
---
# <a name="masm-operators-reference"></a>Guida di riferimento agli operatori MASM

## <a name="arithmetic"></a>Operazioni aritmetiche

||||
|-|-|-|
|[* (moltiplicazione)](operator-multiply.md)|[+ (Aggiungi)](operator-add.md)|[-(sottrazione o negazione)](operator-subtract-2.md)|
|[. campo](operator-dot.md)|[/(divisione)](operator-subtract-1.md)|[&#91;&#93; (index)](operator-brackets.md)|
|[MOD (resto)](operator-mod.md)|||

## <a name="control-flow"></a>Flusso di controllo

||||
|-|-|-|
|[\! (NOT logico Runtime)](operator-logical-not-masm-run-time.md)|[\!= (Runtime non uguale)](operator-not-equal-masm.md)|[&#124;&#124;(OR logico Runtime)](operator-logical-or.md)|
|[& & (and logico Runtime)](operator-logical-and-masm-run-time.md)|[< (Runtime minore di)](operator-less-than-masm-run-time.md)|[\<= (Runtime minore o uguale a)](operator-less-or-equal-masm-run-time.md)|
|[= = (Runtime uguale)](operator-equal-masm-run-time.md)|[> (Runtime maggiore di)](operator-greater-than-masm-run-time.md)|[> = (Runtime maggiore o uguale a)](operator-greater-or-equal-masm-run-time.md)|
|[& (and bit per bit Runtime)](operator-bitwise-and.md)|||
|[PORTARE? (eseguire il test di Runtime)](operator-carry-q.md)|[OVERFLOW? (test di overflow Runtime)](operator-overflow-q.md)|[PARITÀ? (test di parità Runtime)](operator-parity-q.md)|
|[Sign? (test del segno di Runtime)](operator-sign-q.md)|[ZERO? (test di runtime zero)](operator-zero-q.md)||

## <a name="logical-and-shift"></a>Logical e Shift

||||
|-|-|-|
|[AND (and bit per bit)](operator-and.md)|[NOT (not bit per bit)](operator-not.md)|[OR (OR bit per bit)](operator-or.md)|
|[SHL (spostamento BITS a sinistra)](operator-shl.md)|[SHR (sposta bit a destra)](operator-shr.md)|[XOR (OR esclusivo bit per bit)](operator-xor.md)|

## <a name="macro"></a>Macro

||||
|-|-|-|
|[\! (valore letterale carattere)](operator-logical-not-masm.md)|[% (considera come testo)](operator-percent.md)||
|[;; (considera come commento)](operator-semicolons.md)|[&lt; &gt; (considera come un valore letterale)](operator-literal.md)|[& & (valore del parametro sostitutivo)](operator-logical-and-masm.md)|

## <a name="miscellaneous"></a>Varie

||||
|-|-|-|
|['' (considera come stringa)](operator-single-quote.md)|["" (considera come stringa)](operator-double-quote.md)||
|: (definizione dell'etichetta locale)|:: (registra segmento e offset)|:: (definizione etichetta globale)|
|[; (considera come commento)](operator-semicolon.md)|[DUP (dichiarazione di ripetizione)](operator-dup.md)||

## <a name="record"></a>Record

|||
|-|-|
|[MASK (Ottiene la maschera di maschera (Get record o Field)](operator-mask.md)|[WIDTH (Ottiene la larghezza del record o del campo)](operator-width.md)|

## <a name="relational"></a>Relazionale

||||
|-|-|-|
|[EQ (uguale a)](operator-eq.md)|[GE (maggiore o uguale)](operator-ge.md)|[GT (maggiore di)](operator-gt.md)|
|[LE (minore o uguale)](operator-le.md)|[LT (minore di)](operator-lt.md)|[NE (non uguale)](operator-ne.md)|

## <a name="segment"></a>Segment

|||
|-|-|
|[: (override del segmento)](operator-colon.md)|:: (registra segmento e offset)|
|[IMAGEREL (offset relativo immagine)](operator-imagerel.md)|[LROFFSET (offset risolto caricatore)](operator-lroffset.md)|
|[OFFSET (offset relativo del segmento)](operator-offset.md)|[SECTIONREL (offset relativo sezione)](operator-sectionrel.md)|
|[SEG (Get Segment)](operator-seg.md)||

## <a name="type"></a>Tipo di

||||
|-|-|-|
|[ALTA (8 bit elevati dei 16 bit più bassi)](operator-high.md)|[HIGH32 (alta 32 bit di 64 bit)](operator-high32.md)|[HIGHWORD (alta 16 bit dei 32 bit più bassi)](operator-highword.md)|
|[LENGTH (numero di elementi nella matrice)](operator-length.md)|[LENGTHOF (numero di elementi nella matrice)](operator-lengthof.md)|[BASSA (8 bit bassi)](operator-low.md)|
|[LOW32 (basso 32 bit)](operator-low32.md)|[LOWWORD (bassa 16 bit)](operator-lowword.md)|[OPATTR (Ottiene informazioni sul tipo di argomento)](operator-opattr.md)|
|[PTR (puntatore a o come tipo)](operator-ptr.md)|[SHORT (contrassegna il tipo short label)](operator-short.md)|[DIMENSIONI (dimensioni di tipo o variabile)](operator-size.md)|
|[SIZEOF (dimensione di tipo o variabile)](operator-sizeof.md)|[Questo (percorso corrente)](operator-this.md)|[TYPE (Ottiene il tipo di espressione)](operator-type.md)|
|[. TIPO (ottenere informazioni sul tipo di argomento)](operator-dot-type.md)|||

## <a name="see-also"></a>Vedere anche

Guida di [riferimento a Microsoft Macro Assembler](microsoft-macro-assembler-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)

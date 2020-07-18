---
title: Guida di riferimento agli operatori MASM
ms.date: 07/15/2020
helpviewer_keywords:
- MASM (Microsoft Macro Assembler), operators reference
- operators [MASM]
ms.assetid: c069cab7-d6b0-4f82-a6ce-0ca3fc7e6428
ms.openlocfilehash: c29b173a1dcf29c297e41f136044599fbd5218a5
ms.sourcegitcommit: e15b46ea7888dbdd7e0bb47da76aeed680c3c1f3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/17/2020
ms.locfileid: "86446463"
---
# <a name="masm-operators-reference"></a>Guida di riferimento agli operatori MASM

## <a name="arithmetic"></a>Aritmetico

:::row:::
   :::column span="":::
      [`*`moltiplicare](operator-multiply.md)<br/>[`+`aggiungere](operator-add.md)<br/>[`-`(sottrazione o negazione)](operator-subtract-2.md)
   :::column-end:::
   :::column span="":::
      [`.`campo](operator-dot.md)<br/>[`/`dividere](operator-subtract-1.md)
   :::column-end:::
   :::column span="":::
      [`[]`Indice](operator-brackets.md)<br/>[`MOD`resto](operator-mod.md)
   :::column-end:::
:::row-end:::

## <a name="control-flow"></a>Flusso di controllo

:::row:::
   :::column span="":::
      [`!`(NOT logico Runtime)](operator-logical-not-masm-run-time.md)<br/>[`!=`(Runtime non uguale)](operator-not-equal-masm.md)<br/>[`||`(OR logico Runtime)](operator-logical-or.md)<br/>[`&&`(and logico Runtime)](operator-logical-and-masm-run-time.md)<br/>[`<`(Runtime minore di)](operator-less-than-masm-run-time.md)
   :::column-end:::
   :::column span="":::
      [`<=`(Runtime minore o uguale a)](operator-less-or-equal-masm-run-time.md)<br/>[`==`(Runtime uguale)](operator-equal-masm-run-time.md)<br/>[`>`(Runtime maggiore di)](operator-greater-than-masm-run-time.md)<br/>[`>=`(Runtime maggiore o uguale a)](operator-greater-or-equal-masm-run-time.md)<br/>[`&`(and bit per bit Runtime)](operator-bitwise-and.md)
   :::column-end:::
   :::column span="":::
      [`CARRY?`(eseguire il test di Runtime)](operator-carry-q.md)<br/>[`OVERFLOW?`(test di overflow Runtime)](operator-overflow-q.md)<br/>[`PARITY?`(test di parità Runtime)](operator-parity-q.md)<br/>[`SIGN?`(test del segno di Runtime)](operator-sign-q.md)<br/>[`ZERO?`(test di runtime zero)](operator-zero-q.md)
   :::column-end:::
:::row-end:::

## <a name="logical-and-shift"></a>Logical e Shift

:::row:::
   :::column span="":::
      [`AND`(and bit per bit)](operator-and.md)<br/>[`NOT`(not bit per bit)](operator-not.md)
   :::column-end:::
   :::column span="":::
      [`OR`(OR bit per bit)](operator-or.md)<br/>[`SHL`(sposta BITS a sinistra)](operator-shl.md)
   :::column-end:::
   :::column span="":::
      [`SHR`(sposta bit a destra)](operator-shr.md)<br/>[`XOR`(OR esclusivo bit per bit)](operator-xor.md)
   :::column-end:::
:::row-end:::

## <a name="macro"></a>Macro

:::row:::
   :::column span="":::
      [`!`(valore letterale carattere)](operator-logical-not-masm.md)<br/>[`%`(considera come testo)](operator-percent.md)
   :::column-end:::
   :::column span="":::
      [`;;`(considera come commento)](operator-semicolons.md)<br/>[`< >`(considera come un valore letterale)](operator-literal.md)
   :::column-end:::
   :::column span="":::
      [`& &`(valore del parametro sostitutivo)](operator-logical-and-masm.md)
   :::column-end:::
:::row-end:::

## <a name="miscellaneous"></a>Varie

:::row:::
   :::column span="":::
      [`' '`(considera come stringa)](operator-single-quote.md)<br/>[`" "`(considera come stringa)](operator-double-quote.md)<br/>`:`(definizione dell'etichetta locale)
   :::column-end:::
   :::column span="":::
      `::`(registra segmento e offset)<br/>`::`(definizione etichetta globale)
   :::column-end:::
   :::column span="":::
      [`;`(considera come commento)](operator-semicolon.md)<br/>[`DUP`(Ripeti dichiarazione)](operator-dup.md)
   :::column-end:::
:::row-end:::

## <a name="record"></a>Record

:::row:::
   :::column span="":::
      [`MASK`(Ottiene la maschera di maschera di record o campi)](operator-mask.md)
   :::column-end:::
   :::column span="2":::
      [`WIDTH`(ottenere la larghezza del record o del campo)](operator-width.md)
   :::column-end:::
:::row-end:::

## <a name="relational"></a>Relazionale

:::row:::
   :::column span="":::
      [`EQ`uguale](operator-eq.md)<br/>[`GE`(maggiore o uguale a)](operator-ge.md)
   :::column-end:::
   :::column span="":::
      [`GT`(maggiore di)](operator-gt.md)<br/>[`LE`(minore o uguale a)](operator-le.md)
   :::column-end:::
   :::column span="":::
      [`LT`(minore di)](operator-lt.md)<br/>[`NE`(diverso da)](operator-ne.md)
   :::column-end:::
:::row-end:::

## <a name="segment"></a>Segment

:::row:::
   :::column span="":::
      [`:`(sostituzione del segmento)](operator-colon.md)<br/>`::`(registra segmento e offset)<br/>[`IMAGEREL`(offset relativo immagine)](operator-imagerel.md)
   :::column-end:::
   :::column span="":::
      [`LROFFSET`(offset risolto caricatore)](operator-lroffset.md)<br/>[`OFFSET`(offset relativo segmento)](operator-offset.md)
   :::column-end:::
   :::column span="":::
      [`SECTIONREL`(offset relativo sezione)](operator-sectionrel.md)<br/>[`SEG`(Ottieni segmento)](operator-seg.md)
   :::column-end:::
:::row-end:::

## <a name="type"></a>Tipo

:::row:::
   :::column span="":::
      [`HIGH`(8 bit elevati dei 16 bit più bassi)](operator-high.md)<br/>[`HIGH32`(alta 32 bit di 64 bit)](operator-high32.md)<br/>[`HIGHWORD`(alta 16 bit dei 32 bit più bassi)](operator-highword.md)<br/>[`LENGTH`(numero di elementi nella matrice)](operator-length.md)<br/>[`LENGTHOF`(numero di elementi nella matrice)](operator-lengthof.md)<br/>[`LOW`(bassa 8 bit)](operator-low.md)
   :::column-end:::
   :::column span="":::
      [`LOW32`(basso 32 bit)](operator-low32.md)<br/>[`LOWWORD`(bassa 16 bit)](operator-lowword.md)<br/>[`OPATTR`(ottenere informazioni sul tipo di argomento)](operator-opattr.md)<br/>[`PTR`(puntatore a o come tipo)](operator-ptr.md)<br/>[`SHORT`(contrassegnare il tipo di etichetta breve)](operator-short.md)
   :::column-end:::
   :::column span="":::
      [`SIZE`(dimensione del tipo o della variabile)](operator-size.md)<br/>[`SIZEOF`(dimensione del tipo o della variabile)](operator-sizeof.md)<br/>[`THIS`(posizione corrente)](operator-this.md)<br/>[`TYPE`(Ottiene il tipo di espressione)](operator-type.md)<br/>[`.TYPE`(ottenere informazioni sul tipo di argomento)](operator-dot-type.md)
   :::column-end:::
:::row-end:::

## <a name="see-also"></a>Vedere anche

[Guida di riferimento a Microsoft Macro Assembler](microsoft-macro-assembler-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)

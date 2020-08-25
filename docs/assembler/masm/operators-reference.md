---
title: Guida di riferimento agli operatori MASM
ms.date: 07/15/2020
helpviewer_keywords:
- MASM (Microsoft Macro Assembler), operators reference
- operators [MASM]
ms.assetid: c069cab7-d6b0-4f82-a6ce-0ca3fc7e6428
ms.openlocfilehash: db79473f5d4264b869eeac334fa7957cfe553364
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88830943"
---
# <a name="masm-operators-reference"></a>Guida di riferimento agli operatori MASM

## <a name="arithmetic"></a>Aritmetico

:::row:::
   :::column span="":::
      [`*` moltiplicare](operator-multiply.md)\
      [`+` aggiungere](operator-add.md)\
      [`-` (sottrazione o negazione)](operator-subtract-2.md)
   :::column-end:::
   :::column span="":::
      [`.` campo](operator-dot.md)\
      [`/` dividere](operator-subtract-1.md)
   :::column-end:::
   :::column span="":::
      [`[]` Indice](operator-brackets.md)\
      [`MOD` resto](operator-mod.md)
   :::column-end:::
:::row-end:::

## <a name="control-flow"></a>Flusso di controllo

:::row:::
   :::column span="":::
      [`!` (NOT logico Runtime)](operator-logical-not-masm-run-time.md)\
      [`!=` (Runtime non uguale)](operator-not-equal-masm.md)\
      [`||` (OR logico Runtime)](operator-logical-or.md)\
      [`&&` (and logico Runtime)](operator-logical-and-masm-run-time.md)\
      [`<` (Runtime minore di)](operator-less-than-masm-run-time.md)
   :::column-end:::
   :::column span="":::
      [`<=` (Runtime minore o uguale a)](operator-less-or-equal-masm-run-time.md)\
      [`==` (Runtime uguale)](operator-equal-masm-run-time.md)\
      [`>` (Runtime maggiore di)](operator-greater-than-masm-run-time.md)\
      [`>=` (Runtime maggiore o uguale a)](operator-greater-or-equal-masm-run-time.md)\
      [`&` (and bit per bit Runtime)](operator-bitwise-and.md)
   :::column-end:::
   :::column span="":::
      [`CARRY?` (eseguire il test di Runtime)](operator-carry-q.md)\
      [`OVERFLOW?` (test di overflow Runtime)](operator-overflow-q.md)\
      [`PARITY?` (test di parità Runtime)](operator-parity-q.md)\
      [`SIGN?` (test del segno di Runtime)](operator-sign-q.md)\
      [`ZERO?` (test di runtime zero)](operator-zero-q.md)
   :::column-end:::
:::row-end:::

## <a name="logical-and-shift"></a>Logical e Shift

:::row:::
   :::column span="":::
      [`AND` (and bit per bit)](operator-and.md)\
      [`NOT` (not bit per bit)](operator-not.md)
   :::column-end:::
   :::column span="":::
      [`OR` (OR bit per bit)](operator-or.md)\
      [`SHL` (sposta BITS a sinistra)](operator-shl.md)
   :::column-end:::
   :::column span="":::
      [`SHR` (sposta bit a destra)](operator-shr.md)\
      [`XOR` (OR esclusivo bit per bit)](operator-xor.md)
   :::column-end:::
:::row-end:::

## <a name="macro"></a>Macro

:::row:::
   :::column span="":::
      [`!` (valore letterale carattere)](operator-logical-not-masm.md)\
      [`%` (considera come testo)](operator-percent.md)
   :::column-end:::
   :::column span="":::
      [`;;` (considera come commento)](operator-semicolons.md)\
      [`< >` (considera come un valore letterale)](operator-literal.md)
   :::column-end:::
   :::column span="":::
      [`& &` (valore del parametro sostitutivo)](operator-logical-and-masm.md)
   :::column-end:::
:::row-end:::

## <a name="miscellaneous"></a>Varie

:::row:::
   :::column span="":::
      [`' '` (considera come stringa)](operator-single-quote.md)\
      [`" "` (considera come stringa)](operator-double-quote.md)\
      `:` (definizione dell'etichetta locale)
   :::column-end:::
   :::column span="":::
      `::` (registra segmento e offset) \
      `::` (definizione etichetta globale)
   :::column-end:::
   :::column span="":::
      [`;` (considera come commento)](operator-semicolon.md)\
      [`DUP` (Ripeti dichiarazione)](operator-dup.md)
   :::column-end:::
:::row-end:::

## <a name="record"></a>Record

:::row:::
   :::column span="":::
      [`MASK` (Ottiene la maschera di maschera di record o campi)](operator-mask.md)
   :::column-end:::
   :::column span="2":::
      [`WIDTH` (ottenere la larghezza del record o del campo)](operator-width.md)
   :::column-end:::
:::row-end:::

## <a name="relational"></a>Relazionale

:::row:::
   :::column span="":::
      [`EQ` uguale](operator-eq.md)\
      [`GE` (maggiore o uguale a)](operator-ge.md)
   :::column-end:::
   :::column span="":::
      [`GT` (maggiore di)](operator-gt.md)\
      [`LE` (minore o uguale a)](operator-le.md)
   :::column-end:::
   :::column span="":::
      [`LT` (minore di)](operator-lt.md)\
      [`NE` (diverso da)](operator-ne.md)
   :::column-end:::
:::row-end:::

## <a name="segment"></a>Segment

:::row:::
   :::column span="":::
      [`:` (sostituzione del segmento)](operator-colon.md)\
      `::` (registra segmento e offset) \
      [`IMAGEREL` (offset relativo immagine)](operator-imagerel.md)
   :::column-end:::
   :::column span="":::
      [`LROFFSET` (offset risolto caricatore)](operator-lroffset.md)\
      [`OFFSET` (offset relativo segmento)](operator-offset.md)
   :::column-end:::
   :::column span="":::
      [`SECTIONREL` (offset relativo sezione)](operator-sectionrel.md)\
      [`SEG` (Ottieni segmento)](operator-seg.md)
   :::column-end:::
:::row-end:::

## <a name="type"></a>Tipo

:::row:::
   :::column span="":::
      [`HIGH` (8 bit elevati dei 16 bit più bassi)](operator-high.md)\
      [`HIGH32` (alta 32 bit di 64 bit)](operator-high32.md)\
      [`HIGHWORD` (alta 16 bit dei 32 bit più bassi)](operator-highword.md)\
      [`LENGTH` (numero di elementi nella matrice)](operator-length.md)\
      [`LENGTHOF` (numero di elementi nella matrice)](operator-lengthof.md)\
      [`LOW` (bassa 8 bit)](operator-low.md)
   :::column-end:::
   :::column span="":::
      [`LOW32` (basso 32 bit)](operator-low32.md)\
      [`LOWWORD` (bassa 16 bit)](operator-lowword.md)\
      [`OPATTR` (ottenere informazioni sul tipo di argomento)](operator-opattr.md)\
      [`PTR` (puntatore a o come tipo)](operator-ptr.md)\
      [`SHORT` (contrassegnare il tipo di etichetta breve)](operator-short.md)
   :::column-end:::
   :::column span="":::
      [`SIZE` (dimensione del tipo o della variabile)](operator-size.md)\
      [`SIZEOF` (dimensione del tipo o della variabile)](operator-sizeof.md)\
      [`THIS` (posizione corrente)](operator-this.md)\
      [`TYPE` (Ottiene il tipo di espressione)](operator-type.md)\
      [`.TYPE` (ottenere informazioni sul tipo di argomento)](operator-dot-type.md)
   :::column-end:::
:::row-end:::

## <a name="see-also"></a>Vedere anche

[Guida di riferimento a Microsoft Macro Assembler](microsoft-macro-assembler-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)

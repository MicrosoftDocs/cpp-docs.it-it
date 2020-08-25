---
title: OPTION (MASM)
ms.date: 07/15/2020
f1_keywords:
- option
helpviewer_keywords:
- OPTION directive
ms.assetid: 8e10dabd-e36f-4586-ab01-ada96736b0bd
ms.openlocfilehash: 3d5bef52106b38487d1a2be248cff274f39e009c
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88830839"
---
# <a name="option"></a>OPTION

Abilita e Disabilita le funzionalità dell'assembler.

## <a name="syntax"></a>Sintassi

> **`OPTION`***elenco di opzioni*

## <a name="remarks"></a>Osservazioni

Le opzioni disponibili includono:

:::row:::
   :::column span="":::
      **`CASEMAP`**\
      **`DOTNAME`**\
      **`NODOTNAME`**\
      **`EMULATOR`**\
      **`NOEMULATOR`**\
      **`EPILOGUE`**\
      **`EXPR16`**
   :::column-end:::
   :::column span="":::
      **`EXPR32`**\
      **`LANGUAGE`**\
      **`LJMP`**\
      **`NOLJMP`**\
      **`M510`**\
      **`NOM510`**\
      **`NOKEYWORD`**
   :::column-end:::
   :::column span="":::
      **`NOSIGNEXTEND`**\
      **`OFFSET`**\
      **`OLDMACROS`**\
      **`NOOLDMACROS`**\
      **`OLDSTRUCTS`**\
      **`NOOLDSTRUCTS`**\
      **`PROC`**
   :::column-end:::
   :::column span="":::
      **`PROLOGUE`**\
      **`READONLY`**\
      **`NOREADONLY`**\
      **`SCOPED`**\
      **`NOSCOPED`**\
      **`SEGMENT`**\
      **`SETIF2`**
   :::column-end:::
:::row-end:::

La sintassi per Language è **`OPTION LANGUAGE:`** _`x`_ , dove *`x`* è uno tra **`C`** ,,, **`SYSCALL`** **`STDCALL`** **`PASCAL`** , **`FORTRAN`** o **`BASIC`** . **`SYSCALL`**, **`PASCAL`** , **`FORTRAN`** e **`BASIC`** non sono supportati con [`.MODEL`](dot-model.md) **`FLAT`** .

## <a name="see-also"></a>Vedere anche

[Guida di riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)

---
title: ALIAS (MASM)
ms.date: 12/17/2019
f1_keywords:
- Alias
helpviewer_keywords:
- ALIAS directive
ms.assetid: d9725c49-58de-41da-ab01-b06a56cf5cf2
ms.openlocfilehash: 5aef169c5632e74722438c63718ce5b783a8da09
ms.sourcegitcommit: 0781c69b22797c41630601a176b9ea541be4f2a3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75316603"
---
# <a name="alias"></a>ALIAS

La direttiva **alias** crea un nome alternativo per una funzione.  In questo modo è possibile creare più nomi per una funzione o creare librerie che consentono al linker (LINK. exe) di eseguire il mapping di una funzione precedente a una nuova funzione.

## <a name="syntax"></a>Sintassi

> **Alias \<** _alias_ **> = \<** _nome effettivo_ **>**

#### <a name="parameters"></a>Parametri

*nome effettivo*\
Nome effettivo della funzione o della routine.  Sono necessarie le parentesi angolari.

\ *alias*
Nome alternativo o alias.  Sono necessarie le parentesi angolari.

## <a name="see-also"></a>Vedere anche

[Riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)

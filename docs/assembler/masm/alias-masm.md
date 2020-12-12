---
description: 'Altre informazioni su: ALIAS'
title: ALIAS (MASM)
ms.date: 12/17/2019
f1_keywords:
- Alias
helpviewer_keywords:
- ALIAS directive
ms.assetid: d9725c49-58de-41da-ab01-b06a56cf5cf2
ms.openlocfilehash: 7d5072cec8ef56f3dd2202617b3274c958a25d66
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97121758"
---
# <a name="alias"></a>ALIAS

La direttiva **alias** crea un nome alternativo per una funzione.  In questo modo è possibile creare più nomi per una funzione o creare librerie che consentono al linker (LINK.exe) di eseguire il mapping di una funzione precedente a una nuova funzione.

## <a name="syntax"></a>Sintassi

> **ALIAS \<**_alias_**> = \<**_actual-name_**>**

#### <a name="parameters"></a>Parametri

*nome effettivo*\
Nome effettivo della funzione o della routine.  Sono necessarie le parentesi angolari.

*alias*\
Nome alternativo o alias.  Sono necessarie le parentesi angolari.

## <a name="see-also"></a>Vedi anche

[Guida di riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)

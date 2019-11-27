---
title: ALIAS (MASM)
ms.date: 08/30/2018
f1_keywords:
- Alias
helpviewer_keywords:
- ALIAS directive
ms.assetid: d9725c49-58de-41da-ab01-b06a56cf5cf2
ms.openlocfilehash: 274ac451005015b2693d8674673af574ec781bdc
ms.sourcegitcommit: 9ee5df398bfd30a42739632de3e165874cb675c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/22/2019
ms.locfileid: "74399286"
---
# <a name="alias-masm"></a>ALIAS (MASM)

La direttiva **alias** crea un nome alternativo per una funzione.  In questo modo è possibile creare più nomi per una funzione o creare librerie che consentono al linker (LINK. exe) di eseguire il mapping di una funzione precedente a una nuova funzione.

## <a name="syntax"></a>Sintassi

> **Alias \<** _alias_ **> = \<** _nome effettivo_ **>**

#### <a name="parameters"></a>Parametri

*nome effettivo*\
Nome effettivo della funzione o della routine.  Sono necessarie le parentesi angolari.

\ *alias*
Nome alternativo o alias.  Sono necessarie le parentesi angolari.

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)

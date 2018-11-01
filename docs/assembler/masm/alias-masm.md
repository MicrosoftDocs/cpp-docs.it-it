---
title: ALIAS (MASM)
ms.date: 08/30/2018
f1_keywords:
- Alias
helpviewer_keywords:
- ALIAS directive
ms.assetid: d9725c49-58de-41da-ab01-b06a56cf5cf2
ms.openlocfilehash: ab00092f410d34119e876db4562e6d0709743d79
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50483499"
---
# <a name="alias-masm"></a>ALIAS (MASM)

Il **ALIAS** direttiva crea un nome alternativo per una funzione.  Ciò consente di creare più nomi per una funzione, oppure crea librerie che consentono il linker (LINK.exe) eseguire il mapping di una funzione precedente a una nuova funzione.

## <a name="syntax"></a>Sintassi

> ALIAS \< *alias*> = \< *nome effettivo*>

#### <a name="parameters"></a>Parametri

*nome effettivo*<br/>
Il nome effettivo della funzione o procedura.  Sono necessarie le parentesi acute.

*alias*<br/>
Il nome alternativo o alias.  Sono necessarie le parentesi acute.

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>
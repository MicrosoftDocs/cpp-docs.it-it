---
title: ALIAS (MASM) | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- Alias
dev_langs:
- C++
helpviewer_keywords:
- ALIAS directive
ms.assetid: d9725c49-58de-41da-ab01-b06a56cf5cf2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c6a977d35040d8ca25cd3bd4ae4def233092b37a
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43691062"
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
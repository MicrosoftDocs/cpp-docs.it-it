---
title: Errore irreversibile U1099 di NMAKE | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- U1099
dev_langs:
- C++
helpviewer_keywords:
- U1099
ms.assetid: 6688a805-43e6-4247-a2d0-14be082f0b13
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f3ef75a1435d8c922087fcdd21d1941961bc82cd
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46113383"
---
# <a name="nmake-fatal-error-u1099"></a>Errore irreversibile U1099 di NMAKE 

overflow dello stack

Il file di progetto in fase di elaborazione era troppo complessa per l'allocazione dello stack corrente in NMAKE. NMAKE ha un'allocazione di 0x3000 (12 KB).

Per aumentare l'allocazione dello stack dell'errore, eseguire la [/stack editbin](../../build/reference/stack.md) utilità con un'opzione di stack più grande:

**EDITBIN /STACK:reserve NMAKE. FILE EXE**

in cui *riservare* è un numero maggiore di allocazione dello stack corrente in NMAKE.
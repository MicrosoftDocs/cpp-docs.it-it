---
title: 'Errore irreversibile U1099 di NMAKE '
ms.date: 11/04/2016
f1_keywords:
- U1099
helpviewer_keywords:
- U1099
ms.assetid: 6688a805-43e6-4247-a2d0-14be082f0b13
ms.openlocfilehash: 395f25d8d27bc5e9b6132c87390c8c3bc19b6cc4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62298243"
---
# <a name="nmake-fatal-error-u1099"></a>Errore irreversibile U1099 di NMAKE 

overflow dello stack

Il file di progetto in fase di elaborazione era troppo complessa per l'allocazione dello stack corrente in NMAKE. NMAKE ha un'allocazione di 0x3000 (12 KB).

Per aumentare l'allocazione dello stack dell'errore, eseguire la [/stack editbin](../../build/reference/stack.md) utilità con un'opzione di stack più grande:

**EDITBIN /STACK:reserve NMAKE. FILE EXE**

in cui *riservare* è un numero maggiore di allocazione dello stack corrente in NMAKE.
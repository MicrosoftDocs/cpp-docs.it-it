---
title: Errore irreversibile U1099 di NMAKE
ms.date: 11/04/2016
f1_keywords:
- U1099
helpviewer_keywords:
- U1099
ms.assetid: 6688a805-43e6-4247-a2d0-14be082f0b13
ms.openlocfilehash: c963180059a48d9aa0b09103df1ed54f82b8a2f1
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80193394"
---
# <a name="nmake-fatal-error-u1099"></a>Errore irreversibile U1099 di NMAKE

overflow dello stack

Il makefile elaborato è troppo complesso per l'allocazione dello stack corrente in NMAKE. Per NMAKE è stata allocata un'allocazione di 0x3000 (12K).

Per aumentare l'allocazione dello stack di NMAKE, eseguire l'utilità [editbin)/stack](../../build/reference/stack.md) con un'opzione dello stack più grande:

**EDITBIN)/STACK: reserve NMAKE. EXE**

dove *Reserve* è un numero maggiore dell'allocazione dello stack corrente in NMAKE.

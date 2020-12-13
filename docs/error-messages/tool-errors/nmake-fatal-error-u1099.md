---
description: 'Altre informazioni su: errore irreversibile U1099 di NMAKE'
title: 'Errore irreversibile U1099 di NMAKE '
ms.date: 11/04/2016
f1_keywords:
- U1099
helpviewer_keywords:
- U1099
ms.assetid: 6688a805-43e6-4247-a2d0-14be082f0b13
ms.openlocfilehash: 8044010cf967e4fe27b2235968022023d66ae1c3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97345316"
---
# <a name="nmake-fatal-error-u1099"></a>Errore irreversibile U1099 di NMAKE 

overflow dello stack

Il makefile elaborato è troppo complesso per l'allocazione dello stack corrente in NMAKE. Per NMAKE è stata allocata un'allocazione di 0x3000 (12K).

Per aumentare l'allocazione dello stack di NMAKE, eseguire l'utilità [editbin)/stack](../../build/reference/stack.md) con un'opzione dello stack più grande:

**EDITBIN)/STACK: riserva NMAKE.EXE**

dove *Reserve* è un numero maggiore dell'allocazione dello stack corrente in NMAKE.

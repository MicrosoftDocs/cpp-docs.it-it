---
description: 'Altre informazioni su: errore irreversibile C1383'
title: Errore irreversibile C1383
ms.date: 11/04/2016
f1_keywords:
- C1383
helpviewer_keywords:
- C1383
ms.assetid: ca224d14-d687-4fd6-80c2-8b82f28924ea
ms.openlocfilehash: df20ac07cb3a6c94ff04b42b48ce23f168bb78c9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97276504"
---
# <a name="fatal-error-c1383"></a>Errore irreversibile C1383

l'opzione del compilatore /GL è incompatibile con la versione installata di Common Language Runtime

L'errore C1383 si verifica quando si usa una versione precedente di Common Language Runtime con un compilatore più recente e durante la compilazione con **/clr** e **/GL.**

Per risolvere l'errore, non usare **/GL** con **/clr** o installare la versione di Common Language Runtime fornita con il compilatore.

Per altre informazioni, vedere [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md) e [/GL (Whole Program Optimization)](../../build/reference/gl-whole-program-optimization.md).

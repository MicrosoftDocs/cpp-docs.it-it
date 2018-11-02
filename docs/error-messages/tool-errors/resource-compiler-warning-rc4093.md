---
title: Avviso del compilatore di risorse RC4093
ms.date: 11/04/2016
f1_keywords:
- RC4093
helpviewer_keywords:
- RC4093
ms.assetid: 3c61b4a4-b418-465b-a4fd-cb1ff0adb8dd
ms.openlocfilehash: 23bf436e6e8338f89bc576564181c84715028332
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50541882"
---
# <a name="resource-compiler-warning-rc4093"></a>Avviso del compilatore di risorse RC4093

senza caratteri escape nuova riga nella costante carattere nel codice inattivo

L'espressione costante di un `#if`, `#elif`, **#ifdef**, o **#ifndef** direttiva del preprocessore valutata a zero, rendendo il codice che segue è inattivo. All'interno del codice inattivo, viene visualizzato un carattere di nuova riga all'interno di un set di virgolette singole o doppie.

Tutto il testo fino a quando non è stata considerata le virgolette doppie successiva all'interno di una costante carattere.
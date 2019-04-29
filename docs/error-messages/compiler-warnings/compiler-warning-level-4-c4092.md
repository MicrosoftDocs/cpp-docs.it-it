---
title: Compilatore avviso (livello 4) C4092
ms.date: 11/04/2016
f1_keywords:
- C4092
helpviewer_keywords:
- C4092
ms.assetid: 396ae826-a892-4327-bd66-f4762376d72b
ms.openlocfilehash: a6949586cf3faa00aafed37a72e58c1b80266cf5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62401384"
---
# <a name="compiler-warning-level-4-c4092"></a>Compilatore avviso (livello 4) C4092

sizeof restituisce 'unsigned long'

L'operando del `sizeof` operatore era molto grande, pertanto `sizeof` restituito un valore unsigned **lungo**. Questo avviso viene generato in estensioni Microsoft ([/Ze](../../build/reference/za-ze-disable-language-extensions.md)). In compatibilità ANSI (/Za), il risultato viene troncato invece.
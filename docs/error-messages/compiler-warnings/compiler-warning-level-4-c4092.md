---
title: Compilatore avviso (livello 4) C4092 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4092
dev_langs:
- C++
helpviewer_keywords:
- C4092
ms.assetid: 396ae826-a892-4327-bd66-f4762376d72b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 84aa73120dabd261d54e764d1e0bfe8bc9c561a0
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46039614"
---
# <a name="compiler-warning-level-4-c4092"></a>Compilatore avviso (livello 4) C4092

sizeof restituisce 'unsigned long'

L'operando del `sizeof` operatore era molto grande, pertanto `sizeof` restituito un valore unsigned **lungo**. Questo avviso viene generato in estensioni Microsoft ([/Ze](../../build/reference/za-ze-disable-language-extensions.md)). In compatibilità ANSI (/Za), il risultato viene troncato invece.
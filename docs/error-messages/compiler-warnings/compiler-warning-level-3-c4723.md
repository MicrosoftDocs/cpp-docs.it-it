---
title: Compilatore avviso (livello 3) C4723 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4723
dev_langs:
- C++
helpviewer_keywords:
- C4723
ms.assetid: 07669d14-3fd8-4a43-94bc-b61c50e58460
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9ca6715e26705632dc3187cb6db7deed8636cd82
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46033147"
---
# <a name="compiler-warning-level-3-c4723"></a>Avviso del compilatore (livello 3) C4723

possibile divisione per 0

Il secondo operando in un'operazione di divisione restituito zero in fase di compilazione, generando risultati non definiti.

Questo avviso viene generato solo quando si usa [/Og](../../build/reference/og-global-optimizations.md) o un'opzione di ottimizzazione che include /Og.

Il compilatore potrebbe essere generata l'operando di zero.
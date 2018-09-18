---
title: Errore del compilatore C3744 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3744
dev_langs:
- C++
helpviewer_keywords:
- C3744
ms.assetid: a447d050-80d1-406a-9a6e-f15c527d717c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d644a621fc6d8e460e1b97e5baec360de8662365
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46063723"
---
# <a name="compiler-error-c3744"></a>Errore del compilatore C3744

unhook deve avere almeno 3 argomenti per gli eventi gestiti

Il [unhook](../../cpp/unhook.md) funzione deve accettare tre parametri quando utilizzata in un programma che viene compilato per le estensioni gestite per C++.

`__hook` e `__unhook` non sono compatibili con la programmazione /clr. Usare invece gli operatori + = e -=.

È raggiungibile tramite l'opzione del compilatore obsolete solo C3744 **/CLR: oldSyntax**.

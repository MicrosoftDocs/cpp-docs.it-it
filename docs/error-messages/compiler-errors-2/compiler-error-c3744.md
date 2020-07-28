---
title: Errore del compilatore C3744
ms.date: 11/04/2016
f1_keywords:
- C3744
helpviewer_keywords:
- C3744
ms.assetid: a447d050-80d1-406a-9a6e-f15c527d717c
ms.openlocfilehash: 8db81afc348434e9ea2f57c991962fb15dc6bf98
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87220158"
---
# <a name="compiler-error-c3744"></a>Errore del compilatore C3744

__unhook deve avere almeno 3 argomenti per gli eventi gestiti

La [`__unhook`](../../cpp/unhook.md) funzione deve assumere tre parametri quando viene usata in un programma compilato per estensioni gestite per C++.

**`__hook`** e **`__unhook`** non sono compatibili con la **`/clr`** programmazione. Usare invece gli operatori + = e-=.

C3744 è raggiungibile solo tramite l'opzione del compilatore obsoleta **`/clr:oldSyntax`** .

---
title: Errore del compilatore C3744
ms.date: 11/04/2016
f1_keywords:
- C3744
helpviewer_keywords:
- C3744
ms.assetid: a447d050-80d1-406a-9a6e-f15c527d717c
ms.openlocfilehash: 407ed4b30b55b63aa9bf36de9f8675a531d70534
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62227111"
---
# <a name="compiler-error-c3744"></a>Errore del compilatore C3744

unhook deve avere almeno 3 argomenti per gli eventi gestiti

Il [unhook](../../cpp/unhook.md) funzione deve accettare tre parametri quando utilizzata in un programma che viene compilato per le estensioni gestite per C++.

`__hook` e `__unhook` non sono compatibili con la programmazione /clr. Usare invece gli operatori + = e -=.

È raggiungibile tramite l'opzione del compilatore obsolete solo C3744 **/CLR: oldSyntax**.

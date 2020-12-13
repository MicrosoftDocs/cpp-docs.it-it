---
description: 'Altre informazioni su: errore del compilatore C3744'
title: Errore del compilatore C3744
ms.date: 11/04/2016
f1_keywords:
- C3744
helpviewer_keywords:
- C3744
ms.assetid: a447d050-80d1-406a-9a6e-f15c527d717c
ms.openlocfilehash: 6d8e9184db37f65fd73a85aaaa6c350303802216
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340229"
---
# <a name="compiler-error-c3744"></a>Errore del compilatore C3744

__unhook deve avere almeno 3 argomenti per gli eventi gestiti

La [`__unhook`](../../cpp/unhook.md) funzione deve assumere tre parametri quando viene usata in un programma compilato per estensioni gestite per C++.

**`__hook`** e **`__unhook`** non sono compatibili con la **`/clr`** programmazione. Usare invece gli operatori + = e-=.

C3744 è raggiungibile solo tramite l'opzione del compilatore obsoleta **`/clr:oldSyntax`** .

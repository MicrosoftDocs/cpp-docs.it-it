---
description: 'Altre informazioni su: avviso del compilatore (livello 3) C4278'
title: Avviso del compilatore (livello 3) C4278
ms.date: 08/27/2018
f1_keywords:
- C4278
helpviewer_keywords:
- C4278
ms.assetid: 4b6053fb-df62-4c04-b6c8-c011759557b8
ms.openlocfilehash: f7a53b54422e28f94096b91502651cb9355a244e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97344146"
---
# <a name="compiler-warning-level-3-c4278"></a>Avviso del compilatore (livello 3) C4278

> '*Identifier*': l'identificatore nella libreria dei tipi '*tlb*' è già una macro. Usa il qualificatore ' Rename '

Quando si utilizza [#import](../../preprocessor/hash-import-directive-cpp.md), un identificatore nella libreria dei tipi che si sta importando sta tentando di dichiarare un *identificatore* dell'identificatore. Tuttavia, questo è già un simbolo valido.

Usare l' `#import` attributo **Rename** per assegnare un alias al simbolo nella libreria dei tipi.

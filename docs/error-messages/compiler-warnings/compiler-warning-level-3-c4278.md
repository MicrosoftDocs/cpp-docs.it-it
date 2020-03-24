---
title: Avviso del compilatore (livello 3) C4278
ms.date: 08/27/2018
f1_keywords:
- C4278
helpviewer_keywords:
- C4278
ms.assetid: 4b6053fb-df62-4c04-b6c8-c011759557b8
ms.openlocfilehash: 7994ae05d6cb16b5ddc9775b1044de7f3a22d542
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80174232"
---
# <a name="compiler-warning-level-3-c4278"></a>Avviso del compilatore (livello 3) C4278

> '*Identifier*': l'identificatore nella libreria dei tipi '*tlb*' è già una macro. Usa il qualificatore ' Rename '

Quando si utilizza [#import](../../preprocessor/hash-import-directive-cpp.md), un identificatore nella libreria dei tipi che si sta importando sta tentando di dichiarare un *identificatore*dell'identificatore. Tuttavia, questo è già un simbolo valido.

Utilizzare l'attributo `#import` **Rename** per assegnare un alias al simbolo nella libreria dei tipi.

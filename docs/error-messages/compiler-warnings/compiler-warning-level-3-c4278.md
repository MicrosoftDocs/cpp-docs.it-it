---
title: Avviso del compilatore (livello 3) C4278
ms.date: 08/27/2018
f1_keywords:
- C4278
helpviewer_keywords:
- C4278
ms.assetid: 4b6053fb-df62-4c04-b6c8-c011759557b8
ms.openlocfilehash: 8c5c15105581602566116d3ed82b89a6337435c9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50627630"
---
# <a name="compiler-warning-level-3-c4278"></a>Avviso del compilatore (livello 3) C4278

> «*identifier*': identificatore nella libreria dei tipi '*tlb*' è già una macro; utilizzare il qualificatore 'rename'

Quando si usa [#import](../../preprocessor/hash-import-directive-cpp.md), un identificatore nella libreria dei tipi si importano sta tentando di dichiarare un identificatore *identificatore*. Tuttavia, ciò è già un simbolo valido.

Usare la `#import` **rinominare** attributo per assegnare un alias per il simbolo nella libreria dei tipi.
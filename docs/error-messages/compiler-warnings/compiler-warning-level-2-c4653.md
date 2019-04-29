---
title: Avviso del compilatore (livello 2) C4653
ms.date: 11/04/2016
f1_keywords:
- C4653
helpviewer_keywords:
- C4653
ms.assetid: 90ec3317-3d39-4b4c-bcd1-97e7c799e1b6
ms.openlocfilehash: 664b1b3ec732c323d0074310902890cdd6eca9a6
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62402411"
---
# <a name="compiler-warning-level-2-c4653"></a>Avviso del compilatore (livello 2) C4653

opzione del compilatore 'option' non è coerente con l'intestazione precompilata. opzione della riga di comando corrente ignorata

Un'opzione specificata con l'Usa intestazione precompilata ([/Yu](../../build/reference/yu-use-precompiled-header-file.md)) opzione non è coerente con le opzioni specificate quando è stato creato l'intestazione precompilata. Questa compilazione usata l'opzione specificata quando è stato creato l'intestazione precompilata.

Questo avviso può verificarsi quando un valore diverso per l'opzione di compressione delle strutture ([/Zp](../../build/reference/zp-struct-member-alignment.md)) è stato specificato durante la compilazione dell'intestazione precompilata.
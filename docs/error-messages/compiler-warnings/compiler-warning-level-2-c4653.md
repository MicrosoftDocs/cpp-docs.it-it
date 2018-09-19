---
title: Compilatore avviso (livello 2) C4653 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4653
dev_langs:
- C++
helpviewer_keywords:
- C4653
ms.assetid: 90ec3317-3d39-4b4c-bcd1-97e7c799e1b6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 376da24d4619eacc3e6b3defe8fdfc582800a898
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46045978"
---
# <a name="compiler-warning-level-2-c4653"></a>Avviso del compilatore (livello 2) C4653

opzione del compilatore 'option' non è coerente con l'intestazione precompilata. opzione della riga di comando corrente ignorata

Un'opzione specificata con l'Usa intestazione precompilata ([/Yu](../../build/reference/yu-use-precompiled-header-file.md)) opzione non è coerente con le opzioni specificate quando è stato creato l'intestazione precompilata. Questa compilazione usata l'opzione specificata quando è stato creato l'intestazione precompilata.

Questo avviso può verificarsi quando un valore diverso per l'opzione di compressione delle strutture ([/Zp](../../build/reference/zp-struct-member-alignment.md)) è stato specificato durante la compilazione dell'intestazione precompilata.
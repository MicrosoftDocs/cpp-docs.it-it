---
title: Strumenti del linker LNK4086 avviso | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4086
dev_langs:
- C++
helpviewer_keywords:
- LNK4086
ms.assetid: ea1eecbb-ba2c-41bb-9a4f-fa0808a4b92d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 21a2ee7660f0ad78d04f7edb191929296c8d47a9
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46079232"
---
# <a name="linker-tools-warning-lnk4086"></a>Avviso degli strumenti del linker LNK4086

punto di ingresso 'function' non è stdcall con 'numero' byte di argomenti; immagine non venga eseguita

Deve essere il punto di ingresso per una DLL `__stdcall`. Ricompilare la funzione con il [/Gz](../../build/reference/gd-gr-gv-gz-calling-convention.md) oppure specificare `__stdcall` o WINAPI quando si definisce la funzione.
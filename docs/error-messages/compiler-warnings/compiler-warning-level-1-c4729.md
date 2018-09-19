---
title: Compilatore avviso (livello 1) C4729 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4729
dev_langs:
- C++
helpviewer_keywords:
- C4729
ms.assetid: 36a0151f-f258-48d9-9444-ae6d41ff70a4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7d1f5b4fe452937ce74e56886a5214ff92f44af7
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46096080"
---
# <a name="compiler-warning-level-1-c4729"></a>Avviso del compilatore (livello 1) C4729

funzione troppo grande per avvisi basati su grafico del flusso

Questo avviso viene generato quando una funzione è troppo grande per essere compilata con il controllo affidabile per le situazioni in cui verrebbe generato un avviso. L'avviso viene generato solo quando viene usata l'opzione [/Od](../../build/reference/od-disable-debug.md) del compilatore.

Per risolvere il problema, suddividere la funzione in funzioni più piccole.
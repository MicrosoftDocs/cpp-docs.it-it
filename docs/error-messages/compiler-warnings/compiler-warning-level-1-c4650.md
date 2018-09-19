---
title: Del compilatore (livello 1) avviso C4650 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4650
dev_langs:
- C++
helpviewer_keywords:
- C4650
ms.assetid: 3190b3e3-dcd6-4846-939b-f900ab652b2a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d49b21452465f26d6e696f928c04c20dc0e33307
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46052895"
---
# <a name="compiler-warning-level-1-c4650"></a>Avviso del compilatore (livello 1) C4650

informazioni di debug non nell'intestazione precompilata. solo i simboli globali presenti l'intestazione saranno disponibili

Il file di intestazione precompilato non è stato compilato con informazioni sul debug simbolici di Microsoft.

Quando collegato, il file eseguibile o DLL alla raccolta risultante non includerà informazioni di debug per simboli locali contenuta nell'intestazione precompilata.

Questo avviso può essere evitato ricompilando il file di intestazione precompilata con il [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) opzione della riga di comando.
---
title: Avviso del compilatore (livello 1) C4650
ms.date: 11/04/2016
f1_keywords:
- C4650
helpviewer_keywords:
- C4650
ms.assetid: 3190b3e3-dcd6-4846-939b-f900ab652b2a
ms.openlocfilehash: ea3f1b6e792239692960e74c8360c6c3a1323815
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50536100"
---
# <a name="compiler-warning-level-1-c4650"></a>Avviso del compilatore (livello 1) C4650

informazioni di debug non nell'intestazione precompilata. solo i simboli globali presenti l'intestazione saranno disponibili

Il file di intestazione precompilato non è stato compilato con informazioni sul debug simbolici di Microsoft.

Quando collegato, il file eseguibile o DLL alla raccolta risultante non includerà informazioni di debug per simboli locali contenuta nell'intestazione precompilata.

Questo avviso può essere evitato ricompilando il file di intestazione precompilata con il [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) opzione della riga di comando.
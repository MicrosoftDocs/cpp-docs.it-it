---
title: Errore irreversibile del compilatore di risorse RC1120 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- RC1120
dev_langs:
- C++
helpviewer_keywords:
- RC1120
ms.assetid: 4e462931-e42e-42e3-8bfc-847677194286
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 62f28e381d4eac0bfd1f010ef3919452635a1b96
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46057002"
---
# <a name="resource-compiler-fatal-error-rc1120"></a>Errore irreversibile del compilatore di risorse RC1120

memoria esaurita del numero di byte necessari

Il compilatore di risorse ha esaurito la risorsa di archiviazione per gli elementi in essa contenuti in heap. In genere questo è il risultato della presenza di troppi simboli.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Aumentare lo spazio dei file di scambio di Windows. Per altre informazioni su come aumentare lo spazio file di scambio, vedere la memoria virtuale nella Guida di Windows.

1. Eliminare non necessari file di inclusione, in particolare non necessari `#define`prototipi di funzione e s.

1. Il file corrente suddiviso in due o più file e compilarle separatamente.

1. Rimuovere gli altri programmi o i driver che esegue il sistema, che potrebbe essere usando una quantità notevole di memoria.
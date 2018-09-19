---
title: Errore irreversibile C1002 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1002
dev_langs:
- C++
helpviewer_keywords:
- C1002
ms.assetid: bd6d274a-c7b4-43af-8bf2-23c5e442aa22
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 82f08255484b11f9f5d87fb67ac8ac7b401d4f6e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46044145"
---
# <a name="fatal-error-c1002"></a>Errore irreversibile C1002

Il compilatore ha esaurito lo spazio dell'heap durante il passaggio 2

Il compilatore ha esaurito lo spazio di memoria dinamica durante la seconda fase, probabilmente a causa di un programma con un numero eccessivo di simboli o le espressioni complesse.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Dividere il file di origine in diversi file più piccoli.

1. Suddividere le espressioni in più piccole sottoespressioni.

1. Rimuovere gli altri programmi o i driver che utilizzano memoria.
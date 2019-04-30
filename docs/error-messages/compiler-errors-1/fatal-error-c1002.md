---
title: Errore irreversibile C1002
ms.date: 11/04/2016
f1_keywords:
- C1002
helpviewer_keywords:
- C1002
ms.assetid: bd6d274a-c7b4-43af-8bf2-23c5e442aa22
ms.openlocfilehash: 0588da99994be547742cc530ba435002a2d73359
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64344817"
---
# <a name="fatal-error-c1002"></a>Errore irreversibile C1002

Il compilatore ha esaurito lo spazio dell'heap durante il passaggio 2

Il compilatore ha esaurito lo spazio di memoria dinamica durante la seconda fase, probabilmente a causa di un programma con un numero eccessivo di simboli o le espressioni complesse.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Dividere il file di origine in diversi file più piccoli.

1. Suddividere le espressioni in più piccole sottoespressioni.

1. Rimuovere gli altri programmi o i driver che utilizzano memoria.
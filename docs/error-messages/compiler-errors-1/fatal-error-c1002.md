---
description: 'Altre informazioni su: errore irreversibile C1002'
title: Errore irreversibile C1002
ms.date: 11/04/2016
f1_keywords:
- C1002
helpviewer_keywords:
- C1002
ms.assetid: bd6d274a-c7b4-43af-8bf2-23c5e442aa22
ms.openlocfilehash: edd4ffbd6ce4c8a7f70640619d8dc52775dd0195
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97262711"
---
# <a name="fatal-error-c1002"></a>Errore irreversibile C1002

Il compilatore ha esaurito lo spazio dell'heap durante il passaggio 2

Il compilatore ha esaurito lo spazio di memoria dinamico durante il secondo passaggio, probabilmente a causa di un programma con troppi simboli o espressioni complesse.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Dividere il file di origine in diversi file più piccoli.

1. Suddividere le espressioni in sottoespressioni più piccole.

1. Rimuovere altri programmi o driver che utilizzano la memoria.

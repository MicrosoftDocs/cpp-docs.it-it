---
title: Errore irreversibile C1002
ms.date: 11/04/2016
f1_keywords:
- C1002
helpviewer_keywords:
- C1002
ms.assetid: bd6d274a-c7b4-43af-8bf2-23c5e442aa22
ms.openlocfilehash: 78edf886f34665f996497abe323a0ea5d3800c2d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80204932"
---
# <a name="fatal-error-c1002"></a>Errore irreversibile C1002

Il compilatore ha esaurito lo spazio dell'heap durante il passaggio 2

Il compilatore ha esaurito lo spazio di memoria dinamico durante il secondo passaggio, probabilmente a causa di un programma con troppi simboli o espressioni complesse.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Dividere il file di origine in diversi file più piccoli.

1. Suddividere le espressioni in sottoespressioni più piccole.

1. Rimuovere altri programmi o driver che utilizzano la memoria.

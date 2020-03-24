---
title: Errore irreversibile U1051 di NMAKE
ms.date: 11/04/2016
f1_keywords:
- U1051
helpviewer_keywords:
- U1051
ms.assetid: fede5cd5-dac3-47b7-b86d-e1acfb78699f
ms.openlocfilehash: 9c6b939c97f993e42049677292374377d825d474
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80193680"
---
# <a name="nmake-fatal-error-u1051"></a>Errore irreversibile U1051 di NMAKE

memoria insufficiente

La memoria di NMAKE è esaurita, inclusa la memoria virtuale, perché il makefile è troppo grande o complesso.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Liberare spazio sul disco.

1. Aumentare le dimensioni del file di paging di Windows NT o il file di scambio di Windows.

1. Se viene usata solo una parte del makefile, suddividere il makefile in file separati o usare **. SE** le direttive di pre-elaborazione limitano la quantità che deve essere elaborata da NMAKE. Il **. SE** le direttive includono **! SE**, `!IFDEF`, **! IFNDEF**, **! ALTRIMENTI, se**, **! ALTRIMENTI** `IFDEF`e **! ALTRIMENTI** `IFNDEF`.

---
description: 'Altre informazioni su: errore irreversibile U1051 di NMAKE'
title: 'Errore irreversibile U1051 di NMAKE '
ms.date: 11/04/2016
f1_keywords:
- U1051
helpviewer_keywords:
- U1051
ms.assetid: fede5cd5-dac3-47b7-b86d-e1acfb78699f
ms.openlocfilehash: c7d465eaf34adb69e41f523006fb0740eea722ef
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97272110"
---
# <a name="nmake-fatal-error-u1051"></a>Errore irreversibile U1051 di NMAKE 

memoria insufficiente

La memoria di NMAKE è esaurita, inclusa la memoria virtuale, perché il makefile è troppo grande o complesso.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Liberare spazio sul disco.

1. Aumentare le dimensioni del file di paging di Windows NT o il file di scambio di Windows.

1. Se viene usata solo una parte del makefile, suddividere il makefile in file separati o usare **. SE** le direttive di pre-elaborazione limitano la quantità che deve essere elaborata da NMAKE. Il **. SE** le direttive includono **! SE**, `!IFDEF` , **! IFNDEF**, **! ALTRIMENTI, se**, **! ALTRIMENTI** `IFDEF` , **In caso contrario** `IFNDEF` .

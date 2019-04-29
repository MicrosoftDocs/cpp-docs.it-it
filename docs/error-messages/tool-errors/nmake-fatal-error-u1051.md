---
title: 'Errore irreversibile U1051 di NMAKE '
ms.date: 11/04/2016
f1_keywords:
- U1051
helpviewer_keywords:
- U1051
ms.assetid: fede5cd5-dac3-47b7-b86d-e1acfb78699f
ms.openlocfilehash: ddf1d262fb8dfc6e63b0bf5cc098b7b140539310
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62367200"
---
# <a name="nmake-fatal-error-u1051"></a>Errore irreversibile U1051 di NMAKE 

Memoria insufficiente

NMAKE ha esaurito la memoria, inclusa la memoria virtuale, perché il file di progetto è stato troppo grandi o complessi.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Liberare spazio su disco.

1. Aumentare le dimensioni del file di paging di Windows NT o il file di scambio di Windows.

1. Se solo parte del makefile è in uso, dividere il file di progetto in file separati o utilizzare **! Se** per limitare la quantità che deve elaborare NMAKE direttive di pre-elaborazione. Il **! IF** direttive includono **! IF**, `!IFDEF`, **! IFNDEF**, **! Se INVECE**, **! ELSE** `IFDEF`, e **! ELSE** `IFNDEF`.
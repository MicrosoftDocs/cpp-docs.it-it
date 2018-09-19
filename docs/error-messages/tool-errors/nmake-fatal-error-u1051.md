---
title: Errore irreversibile U1051 di NMAKE | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- U1051
dev_langs:
- C++
helpviewer_keywords:
- U1051
ms.assetid: fede5cd5-dac3-47b7-b86d-e1acfb78699f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d3d3a14b75a30aa22bcc9faafb97a218051bb080
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46045016"
---
# <a name="nmake-fatal-error-u1051"></a>Errore irreversibile U1051 di NMAKE 

Memoria insufficiente

NMAKE ha esaurito la memoria, inclusa la memoria virtuale, perché il file di progetto è stato troppo grandi o complessi.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Liberare spazio su disco.

1. Aumentare le dimensioni del file di paging di Windows NT o il file di scambio di Windows.

1. Se solo parte del makefile è in uso, dividere il file di progetto in file separati o utilizzare **! Se** per limitare la quantità che deve elaborare NMAKE direttive di pre-elaborazione. Il **! IF** direttive includono **! IF**, `!IFDEF`, **! IFNDEF**, **! Se INVECE**, **! ELSE** `IFDEF`, e **! ELSE** `IFNDEF`.
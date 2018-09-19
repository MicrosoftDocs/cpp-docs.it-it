---
title: Errore BK1517 di BSCMAKE | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- BK1517
dev_langs:
- C++
helpviewer_keywords:
- BK1517
ms.assetid: 24391f42-0a3e-40a9-9991-c8b9a6a7b1c7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 941773fbcf65a3b1c1a6041a1e7a067cfc286823
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46097055"
---
# <a name="bscmake-error-bk1517"></a>Errore BK1517 di BSCMAKE

file di origine per "sbrfile" compilato con /Yc e /Yu

Il file SBR fa riferimento a se stesso. Probabilmente è stato ricompilato con /Yu dopo aver compilato con /Yc. Reimpostare l'opzione del compilatore per il file di origine /Yc, quindi selezionare **ricompilare** per generare nuovi file SBR. Non esegue la ricompilazione del codice sorgente con /Yu.
---
title: Errore del compilatore C2585 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2585
dev_langs:
- C++
helpviewer_keywords:
- C2585
ms.assetid: 05bb1a9c-28fb-4a88-a1b5-aea85ebdee1c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7ec7b1e9c1e5e7894740cc80f9c030fa1ee26ec0
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46028844"
---
# <a name="compiler-error-c2585"></a>Errore del compilatore C2585

conversione esplicita in 'type' è ambigua

La conversione del tipo può produrre più risultati.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Conversione da un tipo di classe o struttura di base di ereditarietà multipla. Se il tipo eredita più volte la stessa classe di base, la funzione di conversione o un operatore deve usare la risoluzione dell'ambito (`::`) per specificare quali delle classi ereditate da usare durante la conversione.

1. Un costruttore e un operatore di conversione sono stati definiti apportare la stessa conversione.
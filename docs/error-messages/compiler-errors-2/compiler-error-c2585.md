---
title: Errore del compilatore C2585
ms.date: 11/04/2016
f1_keywords:
- C2585
helpviewer_keywords:
- C2585
ms.assetid: 05bb1a9c-28fb-4a88-a1b5-aea85ebdee1c
ms.openlocfilehash: 812ab15aacd1f6a215c6a5beb7781983859fe858
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62360502"
---
# <a name="compiler-error-c2585"></a>Errore del compilatore C2585

conversione esplicita in 'type' è ambigua

La conversione del tipo può produrre più risultati.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Conversione da un tipo di classe o struttura di base di ereditarietà multipla. Se il tipo eredita più volte la stessa classe di base, la funzione di conversione o un operatore deve usare la risoluzione dell'ambito (`::`) per specificare quali delle classi ereditate da usare durante la conversione.

1. Un costruttore e un operatore di conversione sono stati definiti apportare la stessa conversione.
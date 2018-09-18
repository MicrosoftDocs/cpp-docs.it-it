---
title: Errore del compilatore C2097 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2097
dev_langs:
- C++
helpviewer_keywords:
- C2097
ms.assetid: 7e5b2fd4-f61c-4b8a-b265-93e987a04bd3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2da955f5382a1ebacdb507a69ed02627b11462e5
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46021863"
---
# <a name="compiler-error-c2097"></a>Errore del compilatore C2097

inizializzazione non valida

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Inizializzazione di una variabile con un valore non costante.

1. Inizializzazione di un indirizzo con un indirizzo molto breve.

1. Inizializzazione di una struttura locale, unione o una matrice con un'espressione non costante durante la compilazione con **/Za**.

1. Inizializzazione con un'espressione contenente un operatore virgola.

1. Inizializzazione con un'espressione che è né una costante simbolica.
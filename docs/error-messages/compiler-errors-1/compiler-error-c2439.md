---
title: Errore del compilatore C2439 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2439
dev_langs:
- C++
helpviewer_keywords:
- C2439
ms.assetid: 3c5dbe5c-b7d3-4bb0-8619-92f6e280461e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 419bf7be45a1383135d0231cd059837e1fe62729
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46058412"
---
# <a name="compiler-error-c2439"></a>Errore del compilatore C2439

'identifier': Impossibile inizializzare il membro

Impossibile inizializzare una classe, struttura o membro di unione.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. È stato effettuato un tentativo di inizializzare una struttura o classe base indiretta.

1. È stato effettuato un tentativo di inizializzare un membro ereditato di una classe o struttura. Un membro ereditato deve essere inizializzato dal costruttore della classe o struttura.
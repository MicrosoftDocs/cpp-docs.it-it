---
title: Errore del compilatore C2439
ms.date: 11/04/2016
f1_keywords:
- C2439
helpviewer_keywords:
- C2439
ms.assetid: 3c5dbe5c-b7d3-4bb0-8619-92f6e280461e
ms.openlocfilehash: 99f3644869f6c5395684643f0e7802f3a01baa62
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80205361"
---
# <a name="compiler-error-c2439"></a>Errore del compilatore C2439

' Identifier ': Impossibile inizializzare il membro

Impossibile inizializzare una classe, una struttura o un membro di Unione.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolvere il problema, verificare le seguenti cause possibili:

1. Tentativo di inizializzare una struttura o una classe base indiretta.

1. Tentativo di inizializzare un membro ereditato di una classe o di una struttura. Un membro ereditato deve essere inizializzato dal costruttore della classe o della struttura.

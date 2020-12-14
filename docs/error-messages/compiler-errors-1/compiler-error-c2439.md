---
description: 'Altre informazioni su: errore del compilatore C2439'
title: Errore del compilatore C2439
ms.date: 11/04/2016
f1_keywords:
- C2439
helpviewer_keywords:
- C2439
ms.assetid: 3c5dbe5c-b7d3-4bb0-8619-92f6e280461e
ms.openlocfilehash: 6493fb634581646c20a8d856658fe728ae27364c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97189808"
---
# <a name="compiler-error-c2439"></a>Errore del compilatore C2439

' Identifier ': Impossibile inizializzare il membro

Impossibile inizializzare una classe, una struttura o un membro di Unione.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Tentativo di inizializzare una struttura o una classe base indiretta.

1. Tentativo di inizializzare un membro ereditato di una classe o di una struttura. Un membro ereditato deve essere inizializzato dal costruttore della classe o della struttura.

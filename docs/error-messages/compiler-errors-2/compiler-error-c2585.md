---
description: 'Altre informazioni su: errore del compilatore C2585'
title: Errore del compilatore C2585
ms.date: 11/04/2016
f1_keywords:
- C2585
helpviewer_keywords:
- C2585
ms.assetid: 05bb1a9c-28fb-4a88-a1b5-aea85ebdee1c
ms.openlocfilehash: 568e5db1ca160b9fd13596d4f94f646cb4cf0bdd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97177653"
---
# <a name="compiler-error-c2585"></a>Errore del compilatore C2585

la conversione esplicita in ' type ' è ambigua

La conversione del tipo può produrre più di un risultato.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Conversione da un tipo di classe o di struttura in base a più ereditarietà. Se il tipo eredita la stessa classe di base più di una volta, l'operatore o la funzione di conversione deve utilizzare la risoluzione dell'ambito ( `::` ) per specificare quali classi ereditate utilizzare nella conversione.

1. È stato definito un operatore di conversione e un costruttore che effettua la stessa conversione.

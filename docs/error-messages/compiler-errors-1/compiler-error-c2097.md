---
description: 'Altre informazioni su: errore del compilatore C2097'
title: Errore del compilatore C2097
ms.date: 11/04/2016
f1_keywords:
- C2097
helpviewer_keywords:
- C2097
ms.assetid: 7e5b2fd4-f61c-4b8a-b265-93e987a04bd3
ms.openlocfilehash: b9aa67f85ce9ba60a693500a2d7e3f69014cbba3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97278610"
---
# <a name="compiler-error-c2097"></a>Errore del compilatore C2097

inizializzazione non valida

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Inizializzazione di una variabile utilizzando un valore non costante.

1. Inizializzazione di un indirizzo breve con un indirizzo lungo.

1. Inizializzazione di una struttura, un'Unione o una matrice locale con un'espressione non costante durante la compilazione con **/za**.

1. Inizializzazione con un'espressione contenente un operatore virgola.

1. Inizializzazione con un'espressione che non è una costante né un simbolo.

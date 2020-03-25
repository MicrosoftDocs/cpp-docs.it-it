---
title: Errore del compilatore C2097
ms.date: 11/04/2016
f1_keywords:
- C2097
helpviewer_keywords:
- C2097
ms.assetid: 7e5b2fd4-f61c-4b8a-b265-93e987a04bd3
ms.openlocfilehash: cdb14aeef61d136a6992a05a72f382e589e88770
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80207495"
---
# <a name="compiler-error-c2097"></a>Errore del compilatore C2097

inizializzazione non valida

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolvere il problema, verificare le seguenti cause possibili:

1. Inizializzazione di una variabile utilizzando un valore non costante.

1. Inizializzazione di un indirizzo breve con un indirizzo lungo.

1. Inizializzazione di una struttura, un'Unione o una matrice locale con un'espressione non costante durante la compilazione con **/za**.

1. Inizializzazione con un'espressione contenente un operatore virgola.

1. Inizializzazione con un'espressione che non è una costante né un simbolo.

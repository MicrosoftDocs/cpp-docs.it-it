---
title: Errore del compilatore C2097
ms.date: 11/04/2016
f1_keywords:
- C2097
helpviewer_keywords:
- C2097
ms.assetid: 7e5b2fd4-f61c-4b8a-b265-93e987a04bd3
ms.openlocfilehash: 8b50221997dcf2fb60ee2b82ed630dd325a38145
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62377007"
---
# <a name="compiler-error-c2097"></a>Errore del compilatore C2097

inizializzazione non valida

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Inizializzazione di una variabile con un valore non costante.

1. Inizializzazione di un indirizzo con un indirizzo molto breve.

1. Inizializzazione di una struttura locale, unione o una matrice con un'espressione non costante durante la compilazione con **/Za**.

1. Inizializzazione con un'espressione contenente un operatore virgola.

1. Inizializzazione con un'espressione che è né una costante simbolica.
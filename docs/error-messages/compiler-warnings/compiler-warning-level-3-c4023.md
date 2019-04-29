---
title: Avviso del compilatore (livello 3) C4023
ms.date: 11/04/2016
f1_keywords:
- C4023
helpviewer_keywords:
- C4023
ms.assetid: 615d5374-d7c1-42eb-acfd-917c053270c8
ms.openlocfilehash: 4d433ff7d6b323fcb8508872d4e755f893a50f5c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62402359"
---
# <a name="compiler-warning-level-3-c4023"></a>Avviso del compilatore (livello 3) C4023

'symbol': puntatore based passato a funzione senza prototipo. Parametro number

Passando un puntatore based a una funzione senza prototipo il puntatore viene normalizzazione viene normalizzato, con risultati imprevisti.

Questo problema può essere risolto se si usano funzioni di prototipo che sono puntatori based passati.
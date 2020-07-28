---
title: Errore del compilatore C2129
ms.date: 11/04/2016
f1_keywords:
- C2129
helpviewer_keywords:
- C2129
ms.assetid: 21a8223e-1d22-4baa-9ca1-922b7f751dd0
ms.openlocfilehash: 9cf414200dcfad8ae617e16e111bd26b19a315a6
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87220431"
---
# <a name="compiler-error-c2129"></a>Errore del compilatore C2129

funzione statica ' Function ' dichiarata ma non definita

Viene eseguito un riferimento in diretta a una **`static`** funzione che non viene mai definita.

Una **`static`** funzione deve essere definita all'interno dell'ambito del file. Se la funzione è definita in un altro file, deve essere dichiarata **`extern`** .

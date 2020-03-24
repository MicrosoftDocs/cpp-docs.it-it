---
title: Errore del compilatore C2129
ms.date: 11/04/2016
f1_keywords:
- C2129
helpviewer_keywords:
- C2129
ms.assetid: 21a8223e-1d22-4baa-9ca1-922b7f751dd0
ms.openlocfilehash: a3e2268bfc5597668e8689d093a0c2bb7f18e037
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80207285"
---
# <a name="compiler-error-c2129"></a>Errore del compilatore C2129

funzione statica ' Function ' dichiarata ma non definita

Viene eseguito un riferimento in diretta a una funzione `static` che non viene mai definita.

È necessario definire una funzione `static` all'interno dell'ambito del file. Se la funzione è definita in un altro file, deve essere dichiarata `extern`.

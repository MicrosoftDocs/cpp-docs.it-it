---
title: Errore del compilatore C3398
ms.date: 11/04/2016
f1_keywords:
- C3398
helpviewer_keywords:
- C3398
ms.assetid: 26f8c8a4-526f-415b-8047-155c5cd4f180
ms.openlocfilehash: f76515d58f020b414e6b79a7737463af80bd2d07
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80200817"
---
# <a name="compiler-error-c3398"></a>Errore del compilatore C3398

'operator': non è possibile convertire da 'function_signature' a 'function_pointer'. L'espressione di origine deve essere un simbolo funzione

Quando la convenzione di chiamata [__clrcall](../../cpp/clrcall.md) non viene specificata durante la compilazione **/clr**, il compilatore genera due punti di ingresso (indirizzo) per ogni funzione, un punto di ingresso nativo e un punto di ingresso gestito.

Per impostazione predefinita il compilatore restituisce il punto di ingresso nativo, ma ci sono casi in cui è preferibile il punto di ingresso gestito (ad esempio quando si assegna l'indirizzo da un puntatore a funzione `__clrcall` ). Affinché il compilatore scelga in modo affidabile il punto di ingresso gestito in un'assegnazione, il lato destro deve essere un simbolo della funzione.

---
description: 'Altre informazioni su: errore del compilatore C3398'
title: Errore del compilatore C3398
ms.date: 11/04/2016
f1_keywords:
- C3398
helpviewer_keywords:
- C3398
ms.assetid: 26f8c8a4-526f-415b-8047-155c5cd4f180
ms.openlocfilehash: 024390ec03ad145f418f79d2db3228bd790a6de7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97321941"
---
# <a name="compiler-error-c3398"></a>Errore del compilatore C3398

'operator': non è possibile convertire da 'function_signature' a 'function_pointer'. L'espressione di origine deve essere un simbolo funzione

Quando la convenzione di chiamata [__clrcall](../../cpp/clrcall.md) non viene specificata durante la compilazione **/clr**, il compilatore genera due punti di ingresso (indirizzo) per ogni funzione, un punto di ingresso nativo e un punto di ingresso gestito.

Per impostazione predefinita il compilatore restituisce il punto di ingresso nativo, ma ci sono casi in cui è preferibile il punto di ingresso gestito (ad esempio quando si assegna l'indirizzo da un puntatore a funzione `__clrcall` ). Affinché il compilatore scelga in modo affidabile il punto di ingresso gestito in un'assegnazione, il lato destro deve essere un simbolo della funzione.

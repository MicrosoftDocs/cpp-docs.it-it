---
title: Errore del compilatore C2708
ms.date: 11/04/2016
f1_keywords:
- C2708
helpviewer_keywords:
- C2708
ms.assetid: d52d3088-1141-42f4-829c-74755a7fcc3a
ms.openlocfilehash: a1d3379a0da42c5aabd38cffbf6f6a3f340ef3b9
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80202371"
---
# <a name="compiler-error-c2708"></a>Errore del compilatore C2708

' Identifier ': la lunghezza in byte dei parametri effettivi differisce dalla chiamata o dal riferimento precedente

Una funzione [__stdcall](../../cpp/stdcall.md) deve essere preceduta da un prototipo. In caso contrario, il compilatore interpreta la prima chiamata alla funzione come prototipo e questo errore si verifica quando il compilatore rileva una chiamata che non corrisponde a.

Per correggere l'errore, aggiungere un prototipo di funzione.

---
description: 'Altre informazioni su: errore del compilatore C2708'
title: Errore del compilatore C2708
ms.date: 11/04/2016
f1_keywords:
- C2708
helpviewer_keywords:
- C2708
ms.assetid: d52d3088-1141-42f4-829c-74755a7fcc3a
ms.openlocfilehash: c965375c92c98a58a0fb6d0d51b3358e6b5798b5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97320870"
---
# <a name="compiler-error-c2708"></a>Errore del compilatore C2708

' Identifier ': la lunghezza in byte dei parametri effettivi differisce dalla chiamata o dal riferimento precedente

Una funzione [__stdcall](../../cpp/stdcall.md) deve essere preceduta da un prototipo. In caso contrario, il compilatore interpreta la prima chiamata alla funzione come prototipo e questo errore si verifica quando il compilatore rileva una chiamata che non corrisponde a.

Per correggere l'errore, aggiungere un prototipo di funzione.

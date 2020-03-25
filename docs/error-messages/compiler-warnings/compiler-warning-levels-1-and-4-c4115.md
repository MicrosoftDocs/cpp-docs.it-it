---
title: Avviso del compilatore (livelli 1 e 4) C4115
ms.date: 11/04/2016
f1_keywords:
- C4115
helpviewer_keywords:
- C4115
ms.assetid: f3f94e72-fc49-4d09-b3e7-23d68e61152f
ms.openlocfilehash: 7e39e8c837d94776a804da2bf38643b453edb949
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80198042"
---
# <a name="compiler-warning-levels-1-and-4-c4115"></a>Avviso del compilatore (livelli 1 e 4) C4115

'type': definizione di tipo denominato tra parentesi

Il simbolo specificato viene usato per definire una struttura, un'unione o un tipo enumerato all'interno di un'espressione con parentesi. L'ambito della definizione potrebbe essere imprevisto.

In una chiamata di funzione C, la definizione ha ambito globale. In una chiamata C++, la definizione ha lo stesso ambito della funzione chiamata.

L'avviso può anche essere generato da dichiaratori tra parentesi, ad esempio i prototipi, che non sono espressioni con parentesi.

L'avviso è di livello 1 con i programmi C++ e C compilati in compatibilità ANSI (/Za). Negli altri casi, è di livello 3.

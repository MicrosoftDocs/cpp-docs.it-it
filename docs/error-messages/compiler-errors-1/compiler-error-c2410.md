---
title: Errore del compilatore C2410
ms.date: 11/04/2016
f1_keywords:
- C2410
helpviewer_keywords:
- C2410
ms.assetid: b69b2de1-56f3-4ebc-8913-04ac57ffe8a1
ms.openlocfilehash: 7e6e07fb90827fb28fcdde2f723a36c4529a1868
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87225488"
---
# <a name="compiler-error-c2410"></a>Errore del compilatore C2410

' Identifier ': nome membro ambiguo in ' context '

L'identificatore è un membro di più di una struttura o di un'Unione in questo contesto.

Usare un identificatore di struttura o di Unione sull'operando che ha causato l'errore. Un identificatore di struttura o di Unione è un identificatore di tipo **`struct`** o **`union`** (un **`typedef`** nome o una variabile dello stesso tipo della struttura o dell'Unione a cui viene fatto riferimento). L'identificatore deve essere l'operando sinistro del primo operatore di selezione dei membri (.) per utilizzare l'operando.

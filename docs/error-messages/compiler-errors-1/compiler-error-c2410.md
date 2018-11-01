---
title: Errore del compilatore C2410
ms.date: 11/04/2016
f1_keywords:
- C2410
helpviewer_keywords:
- C2410
ms.assetid: b69b2de1-56f3-4ebc-8913-04ac57ffe8a1
ms.openlocfilehash: 8b01a2f7b9c55fb57c880df5033538f4e45f76b4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50643690"
---
# <a name="compiler-error-c2410"></a>Errore del compilatore C2410

'identifier': nome membro ambiguo in 'context'

L'identificatore è un membro di più di una struttura o unione in questo contesto.

Usare un identificatore di struttura o unione sull'operando che ha causato l'errore. Un identificatore di struttura o unione è un identificatore di tipo `struct` oppure `union` (un `typedef` nome o una variabile dello stesso tipo di struttura o unione viene fatto riferimento). L'identificatore deve essere l'operando sinistro dell'operatore di selezione dei membri (.) prima di utilizzare l'operando.
---
title: Errore del compilatore C2410 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2410
dev_langs:
- C++
helpviewer_keywords:
- C2410
ms.assetid: b69b2de1-56f3-4ebc-8913-04ac57ffe8a1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ba4c2b57bcae062ccf811e33cf1deaea45f83737
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46052452"
---
# <a name="compiler-error-c2410"></a>Errore del compilatore C2410

'identifier': nome membro ambiguo in 'context'

L'identificatore è un membro di più di una struttura o unione in questo contesto.

Usare un identificatore di struttura o unione sull'operando che ha causato l'errore. Un identificatore di struttura o unione è un identificatore di tipo `struct` oppure `union` (un `typedef` nome o una variabile dello stesso tipo di struttura o unione viene fatto riferimento). L'identificatore deve essere l'operando sinistro dell'operatore di selezione dei membri (.) prima di utilizzare l'operando.
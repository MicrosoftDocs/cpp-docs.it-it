---
title: Precedenza nelle regole di inferenza
ms.date: 11/04/2016
helpviewer_keywords:
- inference rules in NMAKE
- rules, inference
- precedence, inference rule
ms.assetid: 69e3dc02-0815-4c3a-b02b-1cb85fceaf24
ms.openlocfilehash: 99d92985b00f7c05f409b43009eb61cec6d6f1b1
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57413277"
---
# <a name="precedence-in-inference-rules"></a>Precedenza nelle regole di inferenza

Se è definita più volte una regola di inferenza, NMAKE Usa la definizione di precedenza più alta. L'elenco seguente mostra l'ordine di precedenza dalla più alta alla più bassa:

1. Una regola di inferenza dei tipi definita in un makefile. le definizioni più recenti hanno la precedenza.

1. Una regola di inferenza dei tipi definita in Tools; ini. le definizioni più recenti hanno la precedenza.

1. Una regola di inferenza predefinite.

## <a name="see-also"></a>Vedere anche

[Regole di inferenza](../build/inference-rules.md)

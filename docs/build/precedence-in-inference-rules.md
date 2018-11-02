---
title: Precedenza nelle regole di inferenza
ms.date: 11/04/2016
helpviewer_keywords:
- inference rules in NMAKE
- rules, inference
- precedence, inference rule
ms.assetid: 69e3dc02-0815-4c3a-b02b-1cb85fceaf24
ms.openlocfilehash: 30dee54c99115c076f7662bafb8aa22d97f234fa
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50548733"
---
# <a name="precedence-in-inference-rules"></a>Precedenza nelle regole di inferenza

Se è definita più volte una regola di inferenza, NMAKE Usa la definizione di precedenza più alta. L'elenco seguente mostra l'ordine di precedenza dalla più alta alla più bassa:

1. Una regola di inferenza dei tipi definita in un makefile. le definizioni più recenti hanno la precedenza.

1. Una regola di inferenza dei tipi definita in Tools; ini. le definizioni più recenti hanno la precedenza.

1. Una regola di inferenza predefinite.

## <a name="see-also"></a>Vedere anche

[Regole di inferenza](../build/inference-rules.md)
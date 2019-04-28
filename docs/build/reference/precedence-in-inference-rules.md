---
title: Precedenza nelle regole di inferenza
ms.date: 11/04/2016
helpviewer_keywords:
- inference rules in NMAKE
- rules, inference
- precedence, inference rule
ms.assetid: 69e3dc02-0815-4c3a-b02b-1cb85fceaf24
ms.openlocfilehash: ca24134fd1829ad3d97ca67b8c30aae3af4109ee
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62319681"
---
# <a name="precedence-in-inference-rules"></a>Precedenza nelle regole di inferenza

Se è definita più volte una regola di inferenza, NMAKE Usa la definizione di precedenza più alta. L'elenco seguente mostra l'ordine di precedenza dalla più alta alla più bassa:

1. Una regola di inferenza dei tipi definita in un makefile. le definizioni più recenti hanno la precedenza.

1. Una regola di inferenza dei tipi definita in Tools; ini. le definizioni più recenti hanno la precedenza.

1. Una regola di inferenza predefinite.

## <a name="see-also"></a>Vedere anche

[Regole di inferenza](inference-rules.md)

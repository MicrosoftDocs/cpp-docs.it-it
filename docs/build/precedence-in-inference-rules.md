---
title: Precedenza nelle regole di inferenza | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- inference rules in NMAKE
- rules, inference
- precedence, inference rule
ms.assetid: 69e3dc02-0815-4c3a-b02b-1cb85fceaf24
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b4f2e7ff55e935b7e425b552ba85f47f134c6b80
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45725231"
---
# <a name="precedence-in-inference-rules"></a>Precedenza nelle regole di inferenza

Se è definita più volte una regola di inferenza, NMAKE Usa la definizione di precedenza più alta. L'elenco seguente mostra l'ordine di precedenza dalla più alta alla più bassa:

1. Una regola di inferenza dei tipi definita in un makefile. le definizioni più recenti hanno la precedenza.

1. Una regola di inferenza dei tipi definita in Tools; ini. le definizioni più recenti hanno la precedenza.

1. Una regola di inferenza predefinite.

## <a name="see-also"></a>Vedere anche

[Regole di inferenza](../build/inference-rules.md)
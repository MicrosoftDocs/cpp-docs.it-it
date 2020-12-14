---
description: 'Altre informazioni su: precedenza nelle regole di inferenza'
title: Precedenza nelle regole di inferenza
ms.date: 11/04/2016
helpviewer_keywords:
- inference rules in NMAKE
- rules, inference
- precedence, inference rule
ms.assetid: 69e3dc02-0815-4c3a-b02b-1cb85fceaf24
ms.openlocfilehash: b56d01cce63aaaac92e011630e45bcf43e7fe0b3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97225908"
---
# <a name="precedence-in-inference-rules"></a>Precedenza nelle regole di inferenza

Se una regola di inferenza è definita in modo multiplo, NMAKE utilizza la definizione con precedenza più alta. L'elenco seguente mostra l'ordine di precedenza dal più alto al più basso:

1. Una regola di inferenza definita in un makefile; le definizioni successive hanno la precedenza.

1. Una regola di inferenza definita in Tools.ini; le definizioni successive hanno la precedenza.

1. Una regola di inferenza predefinita.

## <a name="see-also"></a>Vedi anche

[Regole di inferenza](inference-rules.md)

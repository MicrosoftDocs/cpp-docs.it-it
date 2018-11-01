---
title: 'Errore irreversibile U1070 di NMAKE '
ms.date: 11/04/2016
f1_keywords:
- U1070
helpviewer_keywords:
- U1070
ms.assetid: 8639fc39-b4b1-48f5-ac91-0e9fb61680fd
ms.openlocfilehash: 35bea47f6626dfe283a537d3d96340921c37f3f6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50484214"
---
# <a name="nmake-fatal-error-u1070"></a>Errore irreversibile U1070 di NMAKE 

ciclo nella definizione macro 'nomemacro'

Definizione di macro specificata è contenuta una macro la cui definizione è contenuta la macro specificata. Le definizioni di macro circolari non sono validi.

## <a name="example"></a>Esempio

Le seguenti definizioni di macro

```
ONE=$(TWO)
TWO=$(ONE)
```

generare l'errore seguente:

```
cycle in macro definition 'TWO'
```
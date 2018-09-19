---
title: Errore irreversibile U1070 di NMAKE | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- U1070
dev_langs:
- C++
helpviewer_keywords:
- U1070
ms.assetid: 8639fc39-b4b1-48f5-ac91-0e9fb61680fd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b6eb462e5c3c7e497cde55151bf92c62ffb2afcd
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46087019"
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
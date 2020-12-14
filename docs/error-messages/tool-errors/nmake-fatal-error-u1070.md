---
description: 'Altre informazioni su: errore irreversibile U1070 di NMAKE'
title: 'Errore irreversibile U1070 di NMAKE '
ms.date: 11/04/2016
f1_keywords:
- U1070
helpviewer_keywords:
- U1070
ms.assetid: 8639fc39-b4b1-48f5-ac91-0e9fb61680fd
ms.openlocfilehash: a3d0ee448062fec8a024501b0c08d5f0466d974b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97283524"
---
# <a name="nmake-fatal-error-u1070"></a>Errore irreversibile U1070 di NMAKE 

ciclo nella definizione macro ' macroname '

La definizione di macro specificata contiene una macro la cui definizione contiene la macro specificata. Le definizioni di macro circolari non sono valide.

## <a name="example"></a>Esempio

Le seguenti definizioni di macro

```
ONE=$(TWO)
TWO=$(ONE)
```

genera il seguente errore:

```
cycle in macro definition 'TWO'
```

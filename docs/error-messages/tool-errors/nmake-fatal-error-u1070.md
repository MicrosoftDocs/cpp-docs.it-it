---
title: Errore irreversibile U1070 di NMAKE
ms.date: 11/04/2016
f1_keywords:
- U1070
helpviewer_keywords:
- U1070
ms.assetid: 8639fc39-b4b1-48f5-ac91-0e9fb61680fd
ms.openlocfilehash: 008d49df3460cb7cf760e4b278db20da444555fe
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80182773"
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

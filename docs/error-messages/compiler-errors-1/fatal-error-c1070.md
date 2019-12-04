---
title: Errore irreversibile C1070
ms.date: 11/04/2016
f1_keywords:
- C1070
helpviewer_keywords:
- C1070
ms.assetid: 1058269a-5db6-4c23-a97f-b5269eb9188b
ms.openlocfilehash: 848c871049f498efc938ded4de11b4b8b6411976
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74747462"
---
# <a name="fatal-error-c1070"></a>Errore irreversibile C1070

coppia #if/#endif non corrispondente nel file 'filename'

Una direttiva `#if`, `#ifdef`o `#ifndef` non ha un oggetto `#endif`corrispondente.

L'esempio seguente genera l'errore C1070:

```cpp
// C1070.cpp
#define TEST

#ifdef TEST

#ifdef TEST
#endif
// C1070
```

Possibile soluzione:

```cpp
// C1070b.cpp
// compile with: /c
#define TEST

#ifdef TEST
#endif

#ifdef TEST
#endif
```

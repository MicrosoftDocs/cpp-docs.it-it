---
title: Errore del compilatore C3202
ms.date: 11/04/2016
f1_keywords:
- C3202
helpviewer_keywords:
- C3202
ms.assetid: 23528a0c-5493-4804-9789-cd3c38e49fb9
ms.openlocfilehash: 4c0ab49e94c2e4e001f394a3394935a8085cbddb
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74738726"
---
# <a name="compiler-error-c3202"></a>Errore del compilatore C3202

'arg name': argomento predefinito non valido per il parametro di modello 'parameter'. Previsto un modello di classe

È stato passato un argomento predefinito non valido per un parametro di modello.

L'esempio seguente genera l'errore C3202:

```cpp
// C3202.cpp
template<typename T>
class X
{
};

class Z
{
};

template<template<typename U> class T1 = Z, typename T2> // C3202
class Y
{
};
```

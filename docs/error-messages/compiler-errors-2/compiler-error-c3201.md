---
title: Errore del compilatore C3201
ms.date: 11/04/2016
f1_keywords:
- C3201
helpviewer_keywords:
- C3201
ms.assetid: ec19cd64-1789-40a3-b2db-dff2852b9d98
ms.openlocfilehash: 4da6616c59ea4b8a720c8e2dc9742e37a9939171
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74738765"
---
# <a name="compiler-error-c3201"></a>Errore del compilatore C3201

l'elenco dei parametri per il modello di classe 'template' non corrisponde all'elenco dei parametri di modello per il parametro di modello 'template'

Si è passato un modello di classe nell'argomento a un modello di classe che non accetta un parametro di modello oppure si è passato un numero non corrispondente di argomenti del modello per l'argomento del modello predefinito.

```cpp
// C3201.cpp
template<typename T1, typename T2>
class X1
{
};

template<template<typename T> class U = X1>   // C3201
class X2
{
};

template<template<typename T, typename V> class U = X1>   // OK
class X3
{
};
```

---
description: 'Altre informazioni su: nullptr'
title: nullptr
ms.date: 07/22/2020
f1_keywords:
- nullptr_cpp
helpviewer_keywords:
- nullptr keyword [C++]
ms.assetid: e9d80ea6-2506-4eb5-b47b-2349df085832
ms.openlocfilehash: 8d7eb3a578addc14b85c53c50ab81c6e5592d541
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97146152"
---
# <a name="nullptr"></a>nullptr

La **`nullptr`** parola chiave specifica una costante puntatore null di tipo `std::nullptr_t` , che è convertibile in qualsiasi tipo di puntatore non elaborato.  Sebbene sia possibile usare la parola chiave **`nullptr`** senza includere intestazioni, se il codice usa il tipo `std::nullptr_t` , è necessario definirlo includendo l'intestazione `<cstddef>` .

> [!NOTE]
> La **`nullptr`** parola chiave è definita anche in C++/CLI per le applicazioni di codice gestito e non è intercambiabile con la parola chiave C++ standard ISO. Se il codice può essere compilato usando l' [`/clr`](../build/reference/clr-common-language-runtime-compilation.md) opzione del compilatore, che è destinata al codice gestito, usare `__nullptr` in qualsiasi riga di codice in cui è necessario garantire che il compilatore usi l'interpretazione C++ nativa. Per ulteriori informazioni, vedere [ `nullptr` (c++/CLI e c++/CX)](../extensions/nullptr-cpp-component-extensions.md).

## <a name="remarks"></a>Commenti

Evitare `NULL` di utilizzare o zero ( `0` ) come costante puntatore null; **`nullptr`** è meno vulnerabile a un utilizzo improprio e funziona meglio nella maggior parte dei casi.  Ad esempio, assegnando `func(std::pair<const char *, double>)`, quindi chiamando `func(std::make_pair(NULL, 3.14))` genera un errore di compilazione.  La macro `NULL` si espande in `0` , in modo che la chiamata `std::make_pair(0, 3.14)` restituisca `std::pair<int, double>` , che non è convertibile `std::pair<const char *, double>` nel tipo di parametro in `func` .  `func(std::make_pair(nullptr, 3.14))` chiamante viene compilato correttamente perché `std::make_pair(nullptr, 3.14)` restituisce `std::pair<std::nullptr_t, double>`, che è convertibile in `std::pair<const char *, double>`.

## <a name="see-also"></a>Vedi anche

[Parole chiave](../cpp/keywords-cpp.md)<br/>
[`nullptr` (C++/CLI e C++/CX)](../extensions/nullptr-cpp-component-extensions.md)

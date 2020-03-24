---
title: nullptr
ms.date: 11/04/2016
f1_keywords:
- nullptr_cpp
helpviewer_keywords:
- nullptr keyword [C++]
ms.assetid: e9d80ea6-2506-4eb5-b47b-2349df085832
ms.openlocfilehash: 223f4c3e8c838698f9716e241543db405c9394af
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80177768"
---
# <a name="nullptr"></a>nullptr

Definisce una costante del puntatore null di tipo `std::nullptr_t`, che è convertibile in qualsiasi tipo di puntatore raw.  Sebbene sia possibile usare la parola chiave **nullptr** senza includere intestazioni, se il codice usa il tipo `std::nullptr_t`, è necessario definirlo includendo l'intestazione `<cstddef>`.

> [!NOTE]
>  La parola chiave **nullptr** è definita anche C++in/CLI per le applicazioni di codice gestito e non è interscambiabile con C++ la parola chiave standard ISO. Se il codice può essere compilato usando l'opzione del compilatore [/CLR](../build/reference/clr-common-language-runtime-compilation.md) , che ha come destinazione il codice gestito, usare `__nullptr` in qualsiasi riga di codice in cui è necessario garantire che il compilatore C++ usi l'interpretazione nativa. Per ulteriori informazioni, vedere [nullptr](../extensions/nullptr-cpp-component-extensions.md).

## <a name="remarks"></a>Osservazioni

Evitare di utilizzare NULL o zero (`0`) come costante puntatore null; **nullptr** è meno vulnerabile all'uso improprio e funziona meglio nella maggior parte dei casi.  Ad esempio, assegnando `func(std::pair<const char *, double>)`, quindi chiamando `func(std::make_pair(NULL, 3.14))` genera un errore di compilazione.  La macro NULL si espande in `0`, in modo che la chiamata `std::make_pair(0, 3.14)` restituisca `std::pair<int, double>`, che non è convertibile al tipo di parametro di func () `std::pair<const char *, double>`.  `func(std::make_pair(nullptr, 3.14))` chiamante viene compilato correttamente perché `std::make_pair(nullptr, 3.14)` restituisce `std::pair<std::nullptr_t, double>`, che è convertibile in `std::pair<const char *, double>`.

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)<br/>
[nullptr](../extensions/nullptr-cpp-component-extensions.md)(C++/CLI)

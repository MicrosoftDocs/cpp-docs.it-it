---
title: nullptr
ms.date: 11/04/2016
f1_keywords:
- nullptr_cpp
helpviewer_keywords:
- nullptr keyword [C++]
ms.assetid: e9d80ea6-2506-4eb5-b47b-2349df085832
ms.openlocfilehash: 51df20ea00e5dd77ab1fc1a2a01253b8f788ad0a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81358847"
---
# <a name="nullptr"></a>nullptr

Definisce una costante del puntatore null di tipo `std::nullptr_t`, che è convertibile in qualsiasi tipo di puntatore raw.  Sebbene sia possibile utilizzare la parola chiave **nullptr** senza `std::nullptr_t`includere alcuna intestazione, `<cstddef>`se il codice utilizza il tipo , è necessario definirla includendo l'intestazione .

> [!NOTE]
> La parola chiave **nullptr** è definita anche in C, c'è un'interfaccia di rete per le applicazioni di codice gestito e non è intercambiabile con la parola chiave ISO Standard di C. Se il codice può essere compilato utilizzando l'opzione del compilatore [/clr,](../build/reference/clr-common-language-runtime-compilation.md) che è destinata al codice gestito, utilizzare `__nullptr` in qualsiasi riga di codice in cui è necessario garantire che il compilatore utilizzi l'interpretazione nativa di C. Per ulteriori informazioni, vedere [nullptr](../extensions/nullptr-cpp-component-extensions.md).

## <a name="remarks"></a>Osservazioni

Evitare di utilizzare`0`NULL o zero ( ) come costante puntatore null; **nullptr** è meno vulnerabile all'uso improprio e funziona meglio nella maggior parte delle situazioni.  Ad esempio, assegnando `func(std::pair<const char *, double>)`, quindi chiamando `func(std::make_pair(NULL, 3.14))` genera un errore di compilazione.  La macro NULL si espande in `0`, in modo che la chiamata `std::make_pair(0, 3.14)` restituisca `std::pair<int, double>`, che non è convertibile al tipo di parametro di func () `std::pair<const char *, double>`.  `func(std::make_pair(nullptr, 3.14))` chiamante viene compilato correttamente perché `std::make_pair(nullptr, 3.14)` restituisce `std::pair<std::nullptr_t, double>`, che è convertibile in `std::pair<const char *, double>`.

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)<br/>
[nullptr](../extensions/nullptr-cpp-component-extensions.md)(C

---
description: 'Altre informazioni su: `chrono` valori letterali'
title: valori letterali chrono
f1_keywords:
- chrono/std::literals::chrono_literals
- std::literals::chrono_literals
- chrono_literals
ms.date: 01/15/2021
ms.openlocfilehash: 84540d111b33738c8bb1bcb4b43966e1c50682c0
ms.sourcegitcommit: 3d9cfde85df33002e3b3d7f3509ff6a8dc4c0a21
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/21/2021
ms.locfileid: "98667551"
---
# <a name="chrono-literals"></a>`chrono` valori letterali

(C++ 14) L' `<chrono>` intestazione definisce 12 [valori letterali definiti dall'utente](../cpp/user-defined-literals-cpp.md) che rappresentano le ore, i minuti, i secondi, i millisecondi, i microsecondi e i nanosecondi. Ogni valore letterale definito dall'utente presenta un integrale e un overload a virgola mobile. I valori letterali sono definiti nello `literals::chrono_literals` spazio dei nomi inline, introdotto automaticamente nell'ambito quando `std::chrono` è nell'ambito.

## <a name="syntax"></a>Sintassi

```cpp
inline namespace literals {
  inline namespace chrono_literals {
    // return integral hours
    constexpr chrono::hours operator"" h(unsigned long long Val);

    // return floating-point hours
    constexpr chrono::duration<double, ratio<3600>> operator"" h(long double Val);

    // return integral minutes
    constexpr chrono::minutes(operator"" min)(unsigned long long Val);

    // return floating-point minutes
    constexpr chrono::duration<double, ratio<60>>(operator"" min)(long double Val);

    // return integral seconds
    constexpr chrono::seconds operator"" s(unsigned long long Val);

    // return floating-point seconds
    constexpr chrono::duration<double> operator"" s(long double Val);

    // return integral milliseconds
    constexpr chrono::milliseconds operator"" ms(unsigned long long Val);

    // return floating-point milliseconds
    constexpr chrono::duration<double, milli> operator"" ms(long double Val);

    // return integral microseconds
    constexpr chrono::microseconds operator"" us(unsigned long long Val);

    // return floating-point microseconds
    inline constexpr chrono::duration<double, micro> operator"" us(long double Val);

    // return integral nanoseconds
    inline constexpr chrono::nanoseconds operator"" ns(unsigned long long Val);

    // return floating-point nanoseconds
    constexpr chrono::duration<double, nano> operator"" ns(long double Val);

  } // inline namespace chrono_literals
} // inline namespace literals
```

## <a name="return-value"></a>Valore restituito

I valori letterali che accettano un **`long long`** argomento restituiscono un valore o il tipo corrispondente. I valori letterali che accettano un argomento a virgola mobile restituiscono [`duration`](../standard-library/duration-class.md) .

## <a name="example"></a>Esempio

Negli esempi seguenti viene illustrato come utilizzare i `chrono` valori letterali.

```cpp
constexpr auto day = 24h;
constexpr auto week = 24h* 7;
constexpr auto my_duration_unit = 108ms;
```

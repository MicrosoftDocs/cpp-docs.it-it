---
title: Valori letterali chrono | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
dev_langs:
- C++
ms.assetid: 1a9e23b1-256f-4570-8226-5fa7364fb032
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1bac72d79692b4c559728db83747ce7b594be1a7
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="chrono-literals"></a>valori letterali chrono

(C++14) L'intestazione \<chrono> definisce 12 [valori letterali definiti dall'utente](../cpp/user-defined-literals-cpp.md) per facilitare l'uso di valori letterali che rappresentano le ore, i minuti, i secondi, i millisecondi, i microsecondi e i nanosecondi. Ogni valore letterale definito dall'utente presenta un integrale e un overload a virgola mobile. I valori letterali sono definiti nello spazio dei nomi inline literals::chrono_literals che viene inserito nell'ambito automaticamente quando std::chrono rientra nell'ambito.

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

}// inline namespace chrono_literals
}// inline namespace literals
```

## <a name="return-value"></a>Valore restituito

I valori letterali che accettano un argomento `long long` restituiscono un valore o il tipo corrispondente. I valori letterali che accettano un argomento a virgola mobile restituiscono una [durata](../standard-library/duration-class.md).

## <a name="example"></a>Esempio

Gli esempi seguenti mostrano come usare i valori letterali chrono.

```cpp
constexpr auto day = 24h;
constexpr auto week = 24h* 7;
constexpr auto my_duration_unit = 108ms;
```

## <a name="requirements"></a>Requisiti

**Intestazione**: \<chrono>

**Spazio dei nomi**: std::literals::chrono_literals

## <a name="see-also"></a>Vedere anche

[\<chrono>](../standard-library/chrono.md)<br/>

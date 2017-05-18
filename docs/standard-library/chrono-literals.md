---
title: Valori letterali chrono | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: 1a9e23b1-256f-4570-8226-5fa7364fb032
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: 493b622bf49ddd148e0877b15659e10646f46d4e
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="chrono-literals"></a>valori letterali chrono
(C++14) L'intestazione \<chrono> definisce 12 [valori letterali definiti dall'utente](../cpp/user-defined-literals-cpp.md) per facilitare l'uso di valori letterali che rappresentano le ore, i minuti, i secondi, i millisecondi, i microsecondi e i nanosecondi. Ogni valore letterale definito dall'utente presenta un integrale e un overload a virgola mobile. I valori letterali sono definiti nello spazio dei nomi inline literals::chrono_literals che viene inserito nell'ambito automaticamente quando std::chrono rientra nell'ambito.  
  
## <a name="syntax"></a>Sintassi  
  
```  
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
 [\<chrono>](../standard-library/chrono.md)



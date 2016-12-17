---
title: "valori letterali chrono | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 1a9e23b1-256f-4570-8226-5fa7364fb032
caps.latest.revision: 10
caps.handback.revision: 1
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# valori letterali chrono
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

\(C\+\+14\) L'intestazione \<chrono\> definisce 12 [valori letterali definiti dall'utente](../cpp/user-defined-literals-cpp.md) per facilitare l'uso di valori letterali che rappresentano le ore, i minuti, i secondi, i millisecondi, i microsecondi e i nanosecondi. Ogni valore letterale definito dall'utente presenta un integrale e un overload a virgola mobile. I valori letterali sono definiti nello spazio dei nomi inline literals::chrono\_literals che viene inserito nell'ambito automaticamente quando std::chrono rientra nell'ambito.  
  
## Sintassi  
  
```vb  
inline namespace literals {  
    inline namespace chrono_literals {  
  
        // return integral hours  
        constexpr chrono::hours operator "" h(unsigned long long Val);  
  
        // return floating-point hours  
        constexpr chrono::duration<double, ratio<3600> > operator "" h(long double Val);  
  
        // return integral minutes  
        constexpr chrono::minutes(operator "" min)(unsigned long long Val);  
  
        // return floating-point minutes  
        constexpr chrono::duration<double, ratio<60> >(operator "" min)(long double Val);  
  
        // return integral seconds  
        constexpr chrono::seconds operator "" s(unsigned long long Val);  
  
        // return floating-point seconds  
        constexpr chrono::duration<double> operator "" s(long double Val);  
  
        // return integral milliseconds  
        constexpr chrono::milliseconds operator "" ms(unsigned long long Val);  
  
         // return floating-point milliseconds  
        constexpr chrono::duration<double, milli> operator "" ms(long double Val);  
  
        // return integral microseconds      
        constexpr chrono::microseconds operator "" us(unsigned long long Val);  
  
        // return floating-point microseconds  
        inline constexpr chrono::duration<double, micro> operator "" us(long double Val);  
  
        // return integral nanoseconds  
        inline constexpr chrono::nanoseconds operator "" ns(unsigned long long Val);  
  
        // return floating-point nanoseconds  
        constexpr chrono::duration<double, nano> operator "" ns(long double Val);  
    }// inline namespace chrono_literals  
}// inline namespace literals  
```  
  
```c#  
  
```  
  
## Valore restituito  
 I valori letterali che accettano un argomento `long long` restituiscono un valore o il tipo corrispondente. I valori letterali che accettano un argomento a virgola mobile restituiscono una [durata](../standard-library/duration-class.md).  
  
## Note  
  
## Esempio  
 Gli esempi seguenti mostrano come usare i valori letterali chrono.  
  
```  
constexpr auto day = 24h;  
constexpr auto week = 24h * 7;  
constexpr auto my_duration_unit = 108ms;  
```  
  
## Requisiti  
 **Intestazione**: \<chrono\>  
  
 **Spazio dei nomi**: std::literals::chrono\_literals  
  
## Vedere anche  
 [\< chrono \>](../standard-library/chrono.md)
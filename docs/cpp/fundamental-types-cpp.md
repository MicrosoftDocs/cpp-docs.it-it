---
title: Tipi fondamentali (C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- __int128_cpp
- __wchar_t_cpp
- char_cpp
- double_cpp
- float_cpp
- int_cpp
- long_cpp
- long_double_cpp
- short_cpp
- signed_cpp
- unsigned_cpp
- unsigned_int_cpp
- wchar_t_cpp
dev_langs:
- C++
helpviewer_keywords:
- specifiers [C++], type
- float keyword [C++]
- char keyword [C++]
- __wchar_t keyword [C++]
- signed types [C++], summary of data types
- Integer data type [C++], C++ data types
- arithmetic operations [C++], types
- int data type
- unsigned types [C++], summary of data types
- short data type [C++]
- double data type [C++], summary of types
- long long keyword [C++]
- long double keyword [C++]
- unsigned types [C++]
- signed types [C++]
- void keyword [C++]
- storage [C++], basic type
- integral types, C++
- wchar_t keyword [C++]
- floating-point numbers [C++], C++ data types
- long keyword [C++]
- type specifiers [C++]
- integral types
- long keyword [C++], C++ data types
- storing types [C++]
- data types [C++], void
ms.assetid: 58b0106a-0406-4b74-a430-7cbd315c0f89
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8c24ee360f1c14aa9b355f45ec1c12877efa306c
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32417327"
---
# <a name="fundamental-types--c"></a>Tipi fondamentali (C++)
I tipi fondamentali in C++ sono suddivisi in tre categorie: integrali, a virgola mobile e void. I tipi integrali possono gestire numeri interi. I tipi a virgola mobile possono specificare i valori che possono contenere parti frazionarie.  
  
 I tipi [void](../cpp/void-cpp.md) descrivono un set di valori vuoto. Non è possibile specificare alcuna variabile di tipo `void` , in quanto queste variabili vengono principalmente usate per dichiarare funzioni che non restituiscono valori o puntatori generici a dati non tipizzati o tipizzati in modo arbitrario. Qualsiasi espressione può essere convertita in modo esplicito o può esserne eseguito il cast al tipo `void`. Tuttavia, l'uso di tali espressioni è limitato ai seguenti elementi:  
  
-   L'istruzione di un'espressione (per altre informazioni, vedere [Espressioni](../cpp/expressions-cpp.md)).  
  
-   L'operando sinistro dell'operatore virgola (per altre informazioni, vedere [Operatore virgola](../cpp/comma-operator.md) ).  
  
-   Il secondo o terzo operando dell'operatore condizionale (`? :`). (per altre informazioni, vedere [Espressioni con operatore condizionale](../cpp/conditional-operator-q.md) ).  
  
 La tabella seguente illustra le restrizioni relative alle dimensioni dei tipi. Queste restrizioni sono indipendenti dell'implementazione Microsoft.  
  
### <a name="fundamental-types-of-the-c-language"></a>Tipi fondamentali del linguaggio C++  
  
|Category|Tipo|Sommario|  
|--------------|----------|--------------|  
|Integrale|`char`|Il tipo `char` è un tipo integrale che generalmente contiene membri del set di caratteri di esecuzione di base, per impostazione predefinita in Microsoft C++ è ASCII.<br /><br /> Il compilatore C++ considera le variabili di tipo `char`, `signed` `char`e `unsigned` `char` come se avessero tipi differenti. Le variabili di tipo `char` vengono promosse a `int` come se fossero di tipo `signed` `char` per impostazione predefinita, a meno che non venga usata l'opzione di compilazione /J. In questo caso, sono considerate come tipo `unsigned` `char` e sono promosse a `int` senza estensione del segno.|  
||`bool`|Il tipo `bool` è un tipo integrale che può assumere uno dei due valori `true` o `false`. La relativa dimensione non è specificata.|  
||`short`|Il tipo `short` `int` (o semplicemente `short`) è un tipo integrale di dimensione maggiore o uguale alla dimensione del tipo `char`e di dimensione minore o uguale alla dimensione del tipo `int`.<br /><br /> Gli oggetti di tipo `short` possono essere dichiarati come `signed` `short` o come `unsigned short`. `Signed short` è un sinonimo di `short`.|  
||`int`|Il tipo `int` è un tipo integrale di dimensione maggiore o uguale alla dimensione del tipo `short` `int`e di dimensione minore o uguale alla dimensione del tipo `long`.<br /><br /> Gli oggetti di tipo `int` possono essere dichiarati come `signed` `int` o come `unsigned` `int`. `Signed` `int` è un sinonimo di `int`.|  
||`__int8`, `__int16`, `__int32`, `__int64`|Intero con dimensione `__int n`, dove `n` è la dimensione in bit della variabile di tipo intero. `__int8`, `__int16`, `__int32` e `__int64` sono parole chiave specifiche di Microsoft. Non tutti i tipi sono disponibili in tutte le architetture. `(__int128` non è supportata.)|  
||`long`|Il tipo `long` (o `long` `int`) è un tipo integrale che è maggiore o uguale alla dimensione del tipo `int`.<br /><br /> Gli oggetti di tipo `long` possono essere dichiarati come `signed` `long` o come `unsigned` `long`. `Signed` `long` è un sinonimo di `long`.|  
||`long` `long`|Di dimensione maggiore di un tipo `long`senza segno.<br /><br /> Gli oggetti di tipo `long long` possono essere dichiarati come `signed` `long long` o come `unsigned` `long long`. `signed` `long long` è un sinonimo di `long long`.|  
||`wchar_t`, `__wchar_t`|Una variabile di tipo `wchar_t` designa un tipo di carattere wide o multibyte. Per impostazione predefinita, `wchar_t` è un tipo nativo, ma è possibile usare [/Zc:wchar_t-](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) per rendere `wchar_t` un typedef per un tipo `unsigned short`. Il tipo `__wchar_t` è un sinonimo specifico di Microsoft per il tipo `wchar_t` nativo.<br /><br /> Usare il prefisso L prima di un valore letterale carattere o stringa per designare il tipo di carattere wide.|  
|A virgola mobile|`float`|Il tipo `float` è il tipo a virgola mobile più piccolo.|  
||`double`|Il tipo `double` è un tipo a virgola mobile che è maggiore o uguale a `float`, ma minore o uguale alla dimensione del tipo `long` `double`.<br /><br /> Specifico di Microsoft: la rappresentazione di `long double` e `double` è identica. Tuttavia, `long double` e `double` sono tipi distinti.|  
||`long double`|Il tipo `long` `double` è un tipo a virgola mobile maggiore o uguale al tipo `double`.|  
  
 **Sezione specifica Microsoft**  
  
 La tabella seguente riporta la quantità spazio di archiviazione richiesta per i tipi fondamentali di Microsoft C++.  
  
### <a name="sizes-of-fundamental-types"></a>Dimensioni dei tipi fondamentali  
  
|Tipo|Dimensione|  
|----------|----------|  
|`bool`, `char`, `unsigned char`, `signed char`, `__int8`|1 byte|  
|`__int16`, `short`, `unsigned short`, `wchar_t`, `__wchar_t`|2 byte|  
|`float`, `__int32`, `int`, `unsigned int`, `long`, `unsigned long`|4 byte|  
|`double`, `__int64`, `long double`, `long long`|8 byte|  
  
 **Fine sezione specifica Microsoft**  
  
 Per un riepilogo dell'intervallo di valori di ogni tipo, vedere [Intervalli dei tipi di dati](../cpp/data-type-ranges.md) .  
  
 Per altre informazioni sulla conversione dei tipi, vedere [Conversioni standard](../cpp/standard-conversions.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Intervalli dei tipi di dati](../cpp/data-type-ranges.md)
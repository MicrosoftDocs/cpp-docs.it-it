---
title: "Tipi fondamentali (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__wchar_t_cpp"
  - "long_double_cpp"
  - "unsigned"
  - "wchar_t_cpp"
  - "float_cpp"
  - "wchar_t"
  - "char"
  - "char_cpp"
  - "signed"
  - "__wchar_t"
  - "signed_cpp"
  - "short"
  - "double_cpp"
  - "int_cpp"
  - "long"
  - "__intn_cpp"
  - "short_cpp"
  - "double"
  - "unsigned_cpp"
  - "float"
  - "__intn"
  - "long_cpp"
  - "int"
  - "long_double"
  - "unsigned_int"
  - "__int8"
  - "__int8_cpp"
  - "__int16"
  - "__int16_cpp"
  - "__int32"
  - "__int32_cpp"
  - "__int64"
  - "__int64_cpp"
  - "__int128"
  - "__int128_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__wchar_t (parola chiave) [C++]"
  - "operazioni aritmetiche [C++], tipi"
  - "char (parola chiave) [C++]"
  - "tipi di dati [C++], void"
  - "double (tipo di dati), riepilogo di tipi"
  - "float (parola chiave) [C++]"
  - "numeri a virgola mobile, tipi di dati C++"
  - "tipo di dati int"
  - "Integer (tipo di dati), tipi di dati C++"
  - "tipi integrali"
  - "tipi integrali, C++"
  - "long double (parola chiave) [C++]"
  - "long (parola chiave) [C++]"
  - "long (parola chiave) [C++], tipi di dati C++"
  - "long long (parola chiave) [C++]"
  - "tipo di dati short"
  - "tipi signed [C++]"
  - "tipi signed [C++], riepilogo di tipi di dati"
  - "identificatori [C++], tipo"
  - "archiviazione [C++], tipo di base"
  - "archiviazione di tipi [C++]"
  - "identificatori di tipi [C++]"
  - "tipi unsigned [C++]"
  - "tipi unsigned [C++], riepilogo di tipi di dati"
  - "void (parola chiave) [C++]"
  - "wchar_t (parola chiave) [C++]"
ms.assetid: 58b0106a-0406-4b74-a430-7cbd315c0f89
caps.latest.revision: 19
caps.handback.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Tipi fondamentali (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I tipi fondamentali in C\+\+ sono suddivisi in tre categorie: integrali, a virgola mobile e void. I tipi integrali possono gestire numeri interi. I tipi a virgola mobile possono specificare i valori che possono contenere parti frazionarie.  
  
 I tipi [void](../cpp/void-cpp.md) descrivono un set di valori vuoto. Non è possibile specificare alcuna variabile di tipo `void`, in quanto queste variabili vengono principalmente usate per dichiarare funzioni che non restituiscono valori o puntatori generici a dati non tipizzati o tipizzati in modo arbitrario. Qualsiasi espressione può essere convertita in modo esplicito o può esserne eseguito il cast al tipo `void`. Tuttavia, l'uso di tali espressioni è limitato ai seguenti elementi:  
  
-   L'istruzione di un'espressione \(per altre informazioni, vedere [Espressioni](../cpp/expressions-cpp.md)\).  
  
-   L'operando sinistro dell'operatore virgola \(per altre informazioni, vedere [Operatore virgola](../cpp/comma-operator.md)\).  
  
-   Il secondo o il terzo operando dell'operatore condizionale \(`? :`\) \(per altre informazioni, vedere [Espressioni con operatore condizionale](../cpp/conditional-operator-q.md)\).  
  
 La tabella seguente illustra le restrizioni relative alle dimensioni dei tipi. Queste restrizioni sono indipendenti dell'implementazione Microsoft.  
  
### Tipi fondamentali del linguaggio C\+\+  
  
|Categoria|Tipo|Contenuto|  
|---------------|----------|---------------|  
|Integrale|`char`|Il tipo `char` è un tipo integrale che generalmente contiene membri del set di caratteri di esecuzione di base, per impostazione predefinita in Microsoft C\+\+ è ASCII.<br /><br /> Il compilatore C\+\+ considera le variabili di tipo `char`, `signed` `char` e `unsigned` `char` come se avessero tipi differenti. Le variabili di tipo `char` vengono promosse a `int` come se fossero di tipo `signed` `char` per impostazione predefinita, a meno che non venga usata l'opzione di compilazione \/J. In questo caso, sono considerate come tipo `unsigned` `char` e sono promosse a `int` senza estensione del segno.|  
||`bool`|Il tipo `bool` è un tipo integrale che può assumere uno dei due valori `true` o `false`. La relativa dimensione non è specificata.|  
||`short`|Il tipo `short` `int` \(o semplicemente `short`\) è un tipo integrale di dimensione maggiore o uguale alla dimensione del tipo `char` e di dimensione minore o uguale alla dimensione del tipo `int`.<br /><br /> Gli oggetti di tipo `short` possono essere dichiarati come `signed` `short` o come `unsigned short`.`Signed short` è un sinonimo di `short`.|  
||`int`|Il tipo `int` è un tipo integrale di dimensione maggiore o uguale alla dimensione del tipo `short` `int` e di dimensione minore o uguale alla dimensione del tipo `long`.<br /><br /> Gli oggetti di tipo `int` possono essere dichiarati come `signed` `int` o come `unsigned` `int`.`Signed` `int` è un sinonimo di `int`.|  
||`__int8`, `__int16`, `__int32`, `__int64`, `__int128`|Intero con dimensione `__int``n`, dove `n` è la dimensione in bit della variabile di tipo intero.`__int8`, `__int16`, `__int32`, `__int64` e `__int128` sono parole chiave specifiche di Microsoft. Non tutti i tipi sono disponibili in tutte le architetture.|  
||`long`|Il tipo `long` \(o `long` `int`\) è un tipo integrale che è maggiore o uguale alla dimensione del tipo `int`.<br /><br /> Gli oggetti di tipo `long` possono essere dichiarati come `signed` `long` o come `unsigned` `long`.`Signed` `long` è un sinonimo di `long`.|  
||`long` `long`|Di dimensione maggiore di un tipo `long` senza segno.<br /><br /> Gli oggetti di tipo `long long` possono essere dichiarati come `signed` `long long` o come `unsigned` `long long`.`Signed` `long long` è un sinonimo di `long long`.|  
||`wchar_t`, `__wchar_t`|Una variabile di tipo `wchar_t` designa un tipo di carattere wide o multibyte. Per impostazione predefinita, `wchar_t` è un tipo nativo, ma è possibile usare [\/Zc:wchar\_t\-](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) per rendere `wchar_t` un typedef per un tipo `unsigned short`. Il tipo `__wchar_t` è un sinonimo specifico di Microsoft per il tipo `wchar_t` nativo.<br /><br /> Usare il prefisso L prima di un valore letterale carattere o stringa per designare il tipo di carattere wide.|  
|A virgola mobile|`float`|Il tipo `float` è il tipo a virgola mobile più piccolo.|  
||`double`|Il tipo `double` è un tipo a virgola mobile che è maggiore o uguale a `float`, ma minore o uguale alla dimensione del tipo `long` `double`.<br /><br /> Specifico di Microsoft: la rappresentazione di `long double` e `double` è identica. Tuttavia, `long double` e `double` sono tipi distinti.|  
||`long double`|Il tipo `long` `double` è un tipo a virgola mobile maggiore o uguale al tipo `double`.|  
  
 **Sezione specifica Microsoft**  
  
 La tabella seguente riporta la quantità spazio di archiviazione richiesta per i tipi fondamentali di Microsoft C\+\+.  
  
### Dimensioni dei tipi fondamentali  
  
|Tipo|Dimensione|  
|----------|----------------|  
|`bool`, `char`, `unsigned char`, `signed char`, `__int8`|1 byte|  
|`__int16`, `short`, `unsigned short`, `wchar_t`, `__wchar_t`|2 byte|  
|`float`, `__int32`, `int`, `unsigned int`, `long`, `unsigned long`|4 byte|  
|`double`, `__int64`, `long double`, `long long`|8 byte|  
|`__int128`|16 byte|  
  
 **Fine sezione specifica Microsoft**  
  
 Per un riepilogo dell'intervallo di valori di ogni tipo, vedere [Intervalli dei tipi di dati](../cpp/data-type-ranges.md).  
  
 Per altre informazioni sulla conversione dei tipi, vedere [Conversioni standard](../cpp/standard-conversions.md).  
  
## Vedere anche  
 [Intervalli dei tipi di dati](../cpp/data-type-ranges.md)
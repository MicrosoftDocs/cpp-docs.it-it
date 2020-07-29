---
title: Tipi incorporati (C++)
ms.date: 07/22/2020
f1_keywords:
- __int128_cpp
- __wchar_t_cpp
- char_cpp
- char8_t_cpp
- char16_t_cpp
- char32_t_cpp
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
- long keyword [C++]
- storing types [C++]
- data types [C++], void
ms.assetid: 58b0106a-0406-4b74-a430-7cbd315c0f89
ms.openlocfilehash: 73486dd4d81fc91007f078ec5c509bcb963d2706
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87232274"
---
# <a name="built-in-types-c"></a>Tipi incorporati (C++)

I tipi incorporati (detti anche *tipi fondamentali*) sono specificati dallo standard del linguaggio C++ e sono incorporati nel compilatore. I tipi incorporati non sono definiti in alcun file di intestazione. I tipi incorporati sono divisi in tre categorie principali: *integrale*, a *virgola mobile*e *void*. I tipi integrali rappresentano numeri interi. I tipi a virgola mobile possono specificare valori che possono avere parti frazionarie. La maggior parte dei tipi incorporati vengono considerati tipi distinti dal compilatore. Tuttavia, alcuni tipi sono *sinonimi*o considerati tipi equivalenti dal compilatore.

## <a name="void-type"></a>Tipo void

Il [`void`](void-cpp.md) tipo descrive un set di valori vuoto. Non è possibile specificare alcuna variabile di tipo **`void`** . Il **`void`** tipo viene usato principalmente per dichiarare le funzioni che non restituiscono valori o per dichiarare puntatori generici a dati non tipizzati o arbitrariamente tipizzati. Qualsiasi espressione può essere convertita in modo esplicito o sottoposta a cast nel tipo **`void`** . Tuttavia, l'uso di tali espressioni è limitato ai seguenti elementi:

- L'istruzione di un'espressione Per ulteriori informazioni, vedere [espressioni](expressions-cpp.md).

- L'operando sinistro dell'operatore virgola Per ulteriori informazioni, vedere [operatore virgola](comma-operator.md).

- Il secondo o il terzo operando dell'operatore condizionale (`? :`) Per ulteriori informazioni, vedere [espressioni con l'operatore condizionale](conditional-operator-q.md).

## <a name="stdnullptr_t"></a>STD:: nullptr_t

La parola chiave **`nullptr`** è una costante puntatore null di tipo `std::nullptr_t` , che è convertibile in qualsiasi tipo di puntatore non elaborato. Per altre informazioni, vedere [`nullptr`](nullptr.md).

## <a name="boolean-type"></a>Tipo Boolean

Il [`bool`](bool-cpp.md) tipo può avere valori [`true`](../cpp/true-cpp.md) e [`false`](../cpp/false-cpp.md) . Le dimensioni del **`bool`** tipo sono specifiche dell'implementazione. Vedere [dimensioni dei tipi incorporati](#sizes-of-built-in-types) per i dettagli di implementazione specifici di Microsoft.

## <a name="character-types"></a>Tipi di carattere

Il **`char`** tipo è un tipo di rappresentazione dei caratteri che codifica in modo efficiente i membri del set di caratteri di esecuzione di base. Il compilatore C++ considera le variabili di tipo **`char`** , **`signed char`** e **`unsigned char`** come aventi tipi diversi.

**Specifico di Microsoft**: le variabili di tipo **`char`** vengono promosse a **`int`** come se fossero di tipo per **`signed char`** impostazione predefinita, a meno che non [`/J`](../build/reference/j-default-char-type-is-unsigned.md) venga utilizzata l'opzione di compilazione. In questo caso, vengono considerati come tipo **`unsigned char`** e vengono promossi a **`int`** senza estensione del segno.

Una variabile di tipo **`wchar_t`** è un tipo di carattere wide o multibyte. Usare il **`L`** prefisso prima di un carattere o un valore letterale stringa per specificare il tipo di carattere wide.

**Specifico di Microsoft**: per impostazione predefinita, **`wchar_t`** è un tipo nativo, ma è possibile usare [`/Zc:wchar_t-`](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) per creare **`wchar_t`** un typedef per **`unsigned short`** . Il **`__wchar_t`** tipo è un sinonimo specifico di Microsoft per il **`wchar_t`** tipo nativo.

Il **`char8_t`** tipo viene usato per la rappresentazione in caratteri UTF-8. Ha la stessa rappresentazione **`unsigned char`** di, ma viene considerato come un tipo distinto dal compilatore. Il **`char8_t`** tipo è nuovo in c++ 20. **Specifico di Microsoft**: l'utilizzo di **`char8_t`** richiede l' [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) opzione del compilatore.

Il **`char16_t`** tipo viene usato per la rappresentazione in caratteri UTF-16. Deve essere sufficientemente grande da rappresentare qualsiasi unità di codice UTF-16. Viene considerato come un tipo distinto dal compilatore.

Il **`char32_t`** tipo viene usato per la rappresentazione in caratteri UTF-32. Deve essere sufficientemente grande da rappresentare qualsiasi unità di codice UTF-32. Viene considerato come un tipo distinto dal compilatore.

## <a name="floating-point-types"></a>Tipi a virgola mobile

I tipi a virgola mobile usano una rappresentazione IEEE-754 per fornire un'approssimazione di valori frazionari in un'ampia gamma di grandezze. Nella tabella seguente sono elencati i tipi a virgola mobile in C++ e le restrizioni comparative sulle dimensioni dei tipi a virgola mobile. Queste restrizioni sono obbligatorie dallo standard C++ e sono indipendenti dall'implementazione Microsoft. La dimensione assoluta dei tipi a virgola mobile incorporati non è specificata nello standard.

| Type | Contenuto |
|--|--|
| **`float`** | **`float`** Il tipo è il tipo a virgola mobile più piccolo in C++. |
| **`double`** | **`double`** Il tipo è un tipo a virgola mobile che è maggiore o uguale al tipo **`float`** , ma minore o uguale alla dimensione del tipo **`long double`** . |
| **`long double`** | **`long double`** Il tipo è un tipo a virgola mobile che è maggiore o uguale al tipo **`double`** . |

**Specifico di Microsoft**: la rappresentazione di **`long double`** e **`double`** è identica. Tuttavia, **`long double`** e **`double`** vengono considerati tipi distinti dal compilatore. Il compilatore Microsoft C++ usa le rappresentazioni a virgola mobile IEEE-754 a 4 e 8 byte. Per altre informazioni, vedere [rappresentazione a virgola mobile IEEE](../build/ieee-floating-point-representation.md).

## <a name="integer-types"></a>Tipi integer

Il **`int`** tipo è il tipo Integer di base predefinito. Può rappresentare tutti i numeri interi su un intervallo specifico dell'implementazione.

Una rappresentazione con *segno* intero è un valore che può ospitare sia valori positivi che negativi. Viene usato per impostazione predefinita o quando la **`signed`** parola chiave Modifier è presente. La **`unsigned`** parola chiave Modifier specifica una rappresentazione senza *segno* che può conservare solo valori non negativi.

Un modificatore di dimensioni specifica la larghezza in bit della rappresentazione integer utilizzata. Il linguaggio supporta **`short`** i **`long`** **`long long`** modificatori, e. Un **`short`** tipo deve avere una larghezza di almeno 16 bit. Un **`long`** tipo deve avere una larghezza di almeno 32 bit. Un **`long long`** tipo deve avere una larghezza di almeno 64 bit. Lo standard specifica una relazione di dimensioni tra i tipi integrali:

`1 == sizeof(char) <= sizeof(short) <= sizeof(int) <= sizeof(long) <= sizeof(long long)`

Un'implementazione di deve mantenere i requisiti di dimensione minima e la relazione di dimensioni per ogni tipo. Tuttavia, le dimensioni effettive possono variare e variare tra le implementazioni. Vedere [dimensioni dei tipi incorporati](#sizes-of-built-in-types) per i dettagli di implementazione specifici di Microsoft.

La **`int`** parola chiave può essere omessa **`signed`** quando **`unsigned`** vengono specificati i modificatori di dimensione, o. I modificatori e il **`int`** tipo, se presenti, possono essere visualizzati in qualsiasi ordine. Ad esempio, **`short unsigned`** e **`unsigned int short`** fanno riferimento allo stesso tipo.

### <a name="integer-type-synonyms"></a>Sinonimi di tipo Integer

I seguenti gruppi di tipi sono considerati sinonimi dal compilatore:

- **`short`**, **`short int`**, **`signed short`**, **`signed short int`**

- **`unsigned short`**, **`unsigned short int`**

- **`int`**, **`signed`**, **`signed int`**

- **`unsigned`**, **`unsigned int`**

- **`long`**, **`long int`**, **`signed long`**, **`signed long int`**

- **`unsigned long`**, **`unsigned long int`**

- **`long long`**, **`long long int`**, **`signed long long`**, **`signed long long int`**

- **`unsigned long long`**, **`unsigned long long int`**

I tipi integer **specifici di Microsoft** includono i tipi di larghezza,, **`__int8`** e specifici **`__int16`** **`__int32`** **`__int64`** . Questi tipi possono usare i **`signed`** **`unsigned`** modificatori e. Il tipo **`__int8`** di dati è sinonimo del tipo **`char`** , **`__int16`** è sinonimo del tipo **`short`** , **`__int32`** è sinonimo del tipo **`int`** ed **`__int64`** è sinonimo del tipo **`long long`** .

## <a name="sizes-of-built-in-types"></a>Dimensioni dei tipi incorporati

Per la maggior parte dei tipi incorporati sono disponibili dimensioni definite dall'implementazione. La tabella seguente elenca la quantità di spazio di archiviazione necessaria per i tipi incorporati in Microsoft C++. In particolare, **`long`** è pari a 4 byte anche nei sistemi operativi a 64 bit.

| Type | Dimensione |
|--|--|
| **`bool`**, **`char`**, **`char8_t`**, **`unsigned char`**, **`signed char`**, **`__int8`** | 1 byte |
| **`char16_t`**, **`__int16`**, **`short`**, **`unsigned short`**, **`wchar_t`**, **`__wchar_t`** | 2 byte |
| **`char32_t`**, **`float`**, **`__int32`**, **`int`**, **`unsigned int`**, **`long`**, **`unsigned long`** | 4 byte |
| **`double`**, **`__int64`**, **`long double`**, **`long long`**, **`unsigned long long`** | 8 byte |

Per un riepilogo dell'intervallo di valori di ogni tipo, vedere [intervalli dei tipi di dati](data-type-ranges.md) .

Per ulteriori informazioni sulla conversione dei tipi, vedere [conversioni standard](standard-conversions.md).

## <a name="see-also"></a>Vedere anche

[Intervalli dei tipi di dati](data-type-ranges.md)

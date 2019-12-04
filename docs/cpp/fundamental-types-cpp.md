---
title: Tipi fondamentali (C++)
ms.date: 11/04/2016
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
ms.openlocfilehash: 99c30eeb942eb3ab57518cc63ce353cfeff0bec9
ms.sourcegitcommit: 8762a3f9b5476b4dee03f0ee8064ea606550986e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/04/2019
ms.locfileid: "74810552"
---
# <a name="fundamental-types--c"></a>Tipi fondamentali (C++)

I tipi fondamentali in C++ sono suddivisi in tre categorie: integrali, a virgola mobile e void. I tipi integrali possono gestire numeri interi. I tipi a virgola mobile possono specificare i valori che possono contenere parti frazionarie.

I tipi [void](../cpp/void-cpp.md) descrivono un set di valori vuoto. Non è possibile specificare alcuna variabile di tipo **void** . viene usata principalmente per dichiarare le funzioni che non restituiscono valori o per dichiarare puntatori generici a dati non tipizzati o tipizzati in modo arbitrario. Qualsiasi espressione può essere convertita in modo esplicito o sottoposta a cast nel tipo **void**. Tuttavia, l'uso di tali espressioni è limitato ai seguenti elementi:

- L'istruzione di un'espressione (per altre informazioni, vedere [Espressioni](../cpp/expressions-cpp.md)).

- L'operando sinistro dell'operatore virgola (per altre informazioni, vedere [Operatore virgola](../cpp/comma-operator.md) ).

- Il secondo o il terzo operando dell'operatore condizionale (`? :`) (per altre informazioni, vedere [Espressioni con operatore condizionale](../cpp/conditional-operator-q.md) ).

La tabella seguente illustra le restrizioni relative alle dimensioni dei tipi. Queste restrizioni sono indipendenti dell'implementazione Microsoft.

### <a name="fundamental-types-of-the-c-language"></a>Tipi fondamentali del linguaggio C++

|Category|Tipo di|Contenuto|
|--------------|----------|--------------|
|Integrale|**char**|Il tipo **char** è un tipo integrale che in genere contiene i membri del set di caratteri di esecuzione di base, per impostazione predefinita C++è ASCII in Microsoft.<br /><br /> Il C++ compilatore considera le variabili di tipo **char**, **signed char**e **unsigned char** come aventi tipi diversi. Le variabili di tipo **char** vengono promosse a **int** come se fossero di tipo **signed char** per impostazione predefinita, a meno che non venga utilizzata l'opzione di compilazione/J. In questo caso vengono considerati come tipo **unsigned char** e vengono promossi a **int** senza estensione Sign.|
||**bool**|Il tipo **bool** è un tipo integrale che può avere uno dei due valori **true** o **false**. La relativa dimensione non è specificata.|
||**short**|Il tipo **short int** (o semplicemente **short**) è un tipo integrale che è maggiore o uguale alla dimensione di tipo **char**e minore o uguale alla dimensione del tipo **int**.<br /><br /> Gli oggetti di tipo **short** possono essere dichiarati come **signed** short o **unsigned short**. **Signed short** è un sinonimo di **short**.|
||**int**|Il tipo **int** è un tipo integrale che è maggiore o uguale alla dimensione del tipo **short int**e minore o uguale alla dimensione del tipo **Long**.<br /><br /> Gli oggetti di tipo **int** possono essere dichiarati come **signed int** o **unsigned int**. **Signed int** è un sinonimo di **int**.|
||**__int8**, **__int16**, **__int32**, **__int64**|Intero con dimensione `__int n`, dove `n` è la dimensione in bit della variabile di tipo intero. **__int8**, **__int16**, **__int32** e **__int64** sono parole chiave specifiche di Microsoft. Non tutti i tipi sono disponibili in tutte le architetture. ( **__int128** non è supportato.)|
||**long**|Il tipo **Long** (o **long int**) è un tipo integrale che è maggiore o uguale alla dimensione del tipo **int**. (In Windows **Long** ha le stesse dimensioni di **int**.)<br /><br /> Gli oggetti di tipo **Long** possono essere dichiarati come **signed** Long o **unsigned long**. **Signed long** è un sinonimo di **Long**.|
||**long long**|Maggiore di un oggetto **Long**senza segno.<br /><br /> Gli oggetti di **tipo Long Long possono** essere dichiarati come **signed** Long Long o **unsigned**Long Long. **signed** Long Long è un sinonimo di Long **Long**.|
||**wchar_t**, **__wchar_t**|Una variabile di tipo **wchar_t** designa un tipo di carattere wide o multibyte. Per impostazione predefinita, **wchar_t** è un tipo nativo, ma è possibile usare [/Zc: wchar_t-](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) per rendere **wchar_t** un typedef per **short senza segno**. Il tipo di **__wchar_t** è un sinonimo specifico di Microsoft per il tipo di **wchar_t** nativo.<br /><br /> Usare il prefisso L prima di un valore letterale carattere o stringa per designare il tipo di carattere wide.|
|Virgola mobile|**float**|Il tipo **float** è il tipo a virgola mobile più piccolo.|
||**double**|Il tipo **Double** è un tipo a virgola mobile che è maggiore o uguale al tipo **float**, ma minore o uguale alla dimensione del tipo **long double**.<br /><br /> Specifico di Microsoft: la rappresentazione di **long double** e **Double** è identica. Tuttavia, **long double** e **Double** sono tipi distinti.|
||**long double**|Il tipo **long double** è un tipo a virgola mobile che è maggiore o uguale al tipo **Double**.|

**Sezione specifica Microsoft**

La tabella seguente riporta la quantità spazio di archiviazione richiesta per i tipi fondamentali di Microsoft C++.

### <a name="sizes-of-fundamental-types"></a>Dimensioni dei tipi fondamentali

|Tipo di|Dimensioni|
|----------|----------|
|**bool**, **char**, **unsigned char**, **signed char**, **__int8**|1 byte|
|**__int16**, **short**, **unsigned short**, **wchar_t**, **__wchar_t**|2 byte|
|**float**, **__int32**, **int**, **unsigned int**, **Long**, **unsigned long**|4 byte|
|**Double**, **__int64**, **long double**, **Long Long**|8 byte|

**Fine sezione specifica Microsoft**

Per un riepilogo dell'intervallo di valori di ogni tipo, vedere [Intervalli dei tipi di dati](../cpp/data-type-ranges.md) .

Per altre informazioni sulla conversione dei tipi, vedere [Conversioni standard](../cpp/standard-conversions.md).

## <a name="see-also"></a>Vedere anche

[Intervalli dei tipi di dati](../cpp/data-type-ranges.md)
---
title: Tipi fondamentali (C++) | Microsoft Docs
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
ms.openlocfilehash: 6a5bd344744de39e73cd389c5592ff6794eb47c7
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39405006"
---
# <a name="fundamental-types--c"></a>Tipi fondamentali (C++)
I tipi fondamentali in C++ sono suddivisi in tre categorie: integrali, a virgola mobile e void. I tipi integrali possono gestire numeri interi. I tipi a virgola mobile possono specificare i valori che possono contenere parti frazionarie.  
  
 I tipi [void](../cpp/void-cpp.md) descrivono un set di valori vuoto. Nessuna variabile di tipo **void** può essere specificato, viene usato principalmente per dichiarare le funzioni che non restituiscono valori o puntatori generici a non tipizzato o arbitrariamente dati tipizzati. Qualsiasi espressione può essere convertita o eseguire il cast al tipo in modo esplicito **void**. Tuttavia, l'uso di tali espressioni è limitato ai seguenti elementi:  
  
-   L'istruzione di un'espressione (per altre informazioni, vedere [Espressioni](../cpp/expressions-cpp.md)).  
  
-   L'operando sinistro dell'operatore virgola (per altre informazioni, vedere [Operatore virgola](../cpp/comma-operator.md) ).  
  
-   Il secondo o terzo operando dell'operatore condizionale (`? :`). (per altre informazioni, vedere [Espressioni con operatore condizionale](../cpp/conditional-operator-q.md) ).  
  
 La tabella seguente illustra le restrizioni relative alle dimensioni dei tipi. Queste restrizioni sono indipendenti dell'implementazione Microsoft.  
  
### <a name="fundamental-types-of-the-c-language"></a>Tipi fondamentali del linguaggio C++  
  
|Category|Tipo|Sommario|  
|--------------|----------|--------------|  
|Integrale|**char**|Tipo di **char** è un tipo integrale che generalmente contiene membri del set di caratteri di esecuzione di base, per impostazione predefinita, è ASCII in Microsoft C++.<br /><br /> Il compilatore C++ considera le variabili di tipo **char**, **char con segno**, e **unsigned char** come se avessero tipi differenti. Le variabili di tipo **char** vengono promossi **int** come se fossero di tipo **char con segno** per impostazione predefinita, a meno che non viene utilizzata l'opzione di compilazione /j. In questo caso, vengono considerate come tipo **unsigned char** e sono promosse a **int** senza l'estensione del segno.|  
||**bool**|Tipo di **bool** è un tipo integrale che può assumere uno dei due valori **true** oppure **false**. La relativa dimensione non è specificata.|  
||**short**|Tipo di **short int** (o semplicemente **breve**) è un tipo integrale è maggiore o uguale alla dimensione di tipo **char**e minore o uguale alla dimensione di tipo **int**.<br /><br /> Gli oggetti di tipo **brevi** possono essere dichiarate come **short con segno** oppure **short senza segno**. **Short con segno** è un sinonimo **breve**.|  
||**int**|Tipo di **int** è un tipo integrale è maggiore o uguale alla dimensione di tipo **short int**e minore o uguale alla dimensione di tipo **long**.<br /><br /> Gli oggetti di tipo **int** possono essere dichiarate come **tipo signed int** oppure **unsigned int**. **Tipo signed int** è un sinonimo **int**.|  
||**__int8**, **__int16**, **__int32**, **__int64**|Intero con dimensione `__int n`, dove `n` è la dimensione in bit della variabile di tipo intero. **__int8**, **__int16**, **__int32** e **__int64** sono parole chiave specifiche di Microsoft. Non tutti i tipi sono disponibili in tutte le architetture. (**__int128** non è supportato.)|  
||**long**|Tipo di **lungo** (o **long int**) è un tipo integrale è maggiore o uguale alla dimensione di tipo **int**.<br /><br /> Gli oggetti di tipo **lungo** possono essere dichiarate come **lungo firmato** oppure **long senza segno**. **Lungo firmato** è un sinonimo **lungo**.|  
||**long long**|Dimensioni superiori a unsigned **lungo**.<br /><br /> Gli oggetti di tipo **long long** possono essere dichiarate come **firmato long long** oppure **long long senza segno**. **tempo lungo firmato** è un sinonimo **long long**.|  
||**wchar_t**, **wchar_t**|Una variabile di tipo **wchar_t** designa un tipo di carattere wide o multibyte. Per impostazione predefinita **wchar_t** è un tipo nativo, ma è possibile usare [/Zc:wchar_t-](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) per rendere **wchar_t** un typedef per **short senza segno**. Il **wchar_t** tipo è un sinonimo specifico di Microsoft per l'oggetto nativo **wchar_t** tipo.<br /><br /> Usare il prefisso L prima di un valore letterale carattere o stringa per designare il tipo di carattere wide.|  
|Virgola mobile|**float**|Tipo di **float** è mobile più piccolo tipo di punto.|  
||**double**|Tipo di **doppie** è un tipo a virgola mobile maggiore o uguale al tipo **float**, ma minore o uguale alla dimensione di tipo **long double**.<br /><br /> Specifica di Microsoft: la rappresentazione del **long double** e **double** è identico. Tuttavia **long double** e **double** sono tipi distinti.|  
||**long double**|Tipo di **long double** è un tipo di punto che è maggiore o uguale al tipo a virgola mobile **doppie**.|  
  
 **Sezione specifica Microsoft**  
  
 La tabella seguente riporta la quantità spazio di archiviazione richiesta per i tipi fondamentali di Microsoft C++.  
  
### <a name="sizes-of-fundamental-types"></a>Dimensioni dei tipi fondamentali  
  
|Tipo|Dimensione|  
|----------|----------|  
|**bool**, **char**, **unsigned char**, **char con segno**, **__int8**|1 byte|  
|**__int16**, **breve**, **short senza segno**, **wchar_t**, **wchar_t**|2 byte|  
|**float**, **__int32**, **int**, **unsigned int**, **long**, **long senza segno**|4 byte|  
|**doppie**, **__int64**, **long double**, **long long**|8 byte|  
  
 **Fine sezione specifica Microsoft**  
  
 Per un riepilogo dell'intervallo di valori di ogni tipo, vedere [Intervalli dei tipi di dati](../cpp/data-type-ranges.md) .  
  
 Per altre informazioni sulla conversione dei tipi, vedere [Conversioni standard](../cpp/standard-conversions.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Intervalli dei tipi di dati](../cpp/data-type-ranges.md)
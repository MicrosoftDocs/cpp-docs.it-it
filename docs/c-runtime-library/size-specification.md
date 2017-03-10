---
title: Specifica delle dimensioni | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apilocation:
- msvcr120.dll
- msvcr80.dll
- msvcr110.dll
- msvcr90.dll
- msvcr110_clr0400.dll
- msvcr100.dll
apitype: DLLExport
f1_keywords:
- size
dev_langs:
- C++
helpviewer_keywords:
- printf function, format specification fields
ms.assetid: 525dc5d8-e70a-4797-a6a0-ec504a27355c
caps.latest.revision: 14
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
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
translationtype: Human Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: 9041b6c8cc2789b275bf7a62c73102812e5c9c48
ms.lasthandoff: 02/24/2017

---
# <a name="size-specification"></a>Specifica delle dimensioni 
In una specifica del formato, il quarto campo è un modificatore di lunghezza dell'argomento per l'identificatore di conversione. Il campo `size` viene usato come prefisso per il campo `type`. `h`, `l`, `w`, `I`, `I32`, `I64` e `ll` specificano le "dimensioni" dell'argomento corrispondente, ovvero lungo o corto, a 32 bit o a 64 bit, carattere a byte singolo o carattere wide, in base all'identificatore di conversione che viene modificato. I prefissi relativi alle dimensioni vengono usati con i caratteri `type` nei gruppi di funzioni `printf` e `wprintf` per specificare l'implementazione delle lunghezze degli argomenti, come mostrato nella tabella seguente. Il campo `size` è facoltativo per alcuni tipi di argomento. Quando non viene specificato alcun prefisso, il formattatore utilizza argomenti di tipo Integer, ad esempio `char`, `short` firmati o non firmati, `int`, `long` e tipi di enumerazione, ad esempio i tipi `int` a 32 bit e gli argomenti a virgola mobile vengono utilizzati come tipi `double` a 64 bit. Corrisponde alle regole di promozione degli argomenti predefinite per elenchi di argomenti variabili. Per altre informazioni sulla promozione di argomenti, vedere Puntini di sospensione e argomenti predefiniti in [Espressioni in forma suffissa](../cpp/postfix-expressions.md). Nei sistemi a 32 bit e 64 bit la specifica del formato di un argomento Integer a 64 bit deve includere un prefisso di dimensione pari a `ll` o `I64`. In caso contrario, il comportamento del formattatore non sarà definito.  
  
 Alcuni tipi corrispondono a dimensioni diverse le codice a 32 bit e a 64 bit. Ad esempio, `size_t` ha una lunghezza pari a 32 bit nel codice compilato per x86 e a 64 bit nel codice compilato per x64. Per creare codice di formattazione indipendente dalla piattaforma per tipi a larghezza variabile, è possibile usare un modificatore di lunghezza per argomenti a larghezza variabile. In alternativa, usare un modificatore di lunghezza di argomenti a 64 bit e alzare di livello esplicitamente il tipo di argomento a larghezza variabile a 64 bit. Il modificatore di lunghezza di argomenti `I` specifico Microsoft gestisce gli argomenti Integer a larghezza variabile.  
  
> [!NOTE]
>  I prefissi `I`, `I32` e `I64` del modificatore di lunghezza sono estensioni Microsoft, non compatibili con ANSI. Il prefisso `h` usato con dati di tipo `char`, il prefisso `w` usato con dati di tipo `wchar_t` e il prefisso `l` usato con dati di tipo `double` sono estensioni Microsoft. I prefissi di lunghezza `hh`, `j`, `z` e `t` non sono supportati.  
  
### <a name="size-prefixes-for-printf-and-wprintf-format-type-specifiers"></a>Prefissi di dimensione per identificatori di tipo di formato printf e wprintf  
  
|Per specificare|Prefisso da usare|Con identificatore del tipo|  
|----------------|----------------|-------------------------|  
|`long int`|`l` (L minuscola)|`d`, `i`, `o`, `x` o `X`|  
|`long unsigned int`|`l`|`o`, `u`, `x` o `X`|  
|`long long`|`ll`|`d`, `i`, `o`, `x` o `X`|  
|`short int`|`h`|`d`, `i`, `o`, `x` o `X`|  
|`short unsigned int`|`h`|`o`, `u`, `x` o `X`|  
|`__int32`|`I32`|`d`, `i`, `o`, `x` o `X`|  
|`unsigned __int32`|`I32`|`o`, `u`, `x` o `X`|  
|`__int64`|`I64`|`d`, `i`, `o`, `x` o `X`|  
|`unsigned __int64`|`I64`|`o`, `u`, `x` o `X`|  
|`ptrdiff_t` (ovvero `__int32` in piattaforme a 32 bit, `__int64` in piattaforme a 64 bit)|`I`|`d`, `i`, `o`, `x` o `X`|  
|`size_t` (ovvero `unsigned __int32` in piattaforme a 32 bit, `unsigned __int64` in piattaforme a 64 bit)|`I`|`o`, `u`, `x` o `X`|  
|`long double` (In [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)], anche se `long double` è un tipo distinto, ha la stessa rappresentazione interna di `double`).|`l` o `L`|`a`, `A`, `e`, `E`, `f`, `g` o `G`|  
|Carattere a byte singolo con le funzioni `printf` e `wprintf`. (Un identificatore di tipo `hc` o `hC` è sinonimo di `c` nelle funzioni `printf` e di `C` nelle funzioni `wprintf`).|`h`|`c` o `C`|  
|Carattere wide con le funzioni `printf` e `wprintf`. (Un identificatore di tipo `lc`, `lC`, `wc` o `wC` è sinonimo di `C` nelle funzioni `printf` e di `c` nelle funzioni `wprintf`).|`l` o `w`|`c` o `C`|  
|Stringa con caratteri a byte singolo con le funzioni `printf` e `wprintf`. (Un identificatore di tipo `hs` o `hS` è sinonimo di `s` nelle funzioni `printf` e di `S` nelle funzioni `wprintf`).|`h`|`s`, `S` o `Z`|  
|Stringa con caratteri wide e le funzioni `printf` e `wprintf`. (Un identificatore di tipo `ls`, `lS`, `ws` o `wS` è sinonimo di `S` nelle funzioni `printf` e di `s` nelle funzioni `wprintf`).|`l` o `w`|`s`, `S` o `Z`|  
  
## <a name="see-also"></a>Vedere anche  
 [printf, _printf_l, wprintf, _wprintf_l](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [Sintassi per la specifica del formato: funzioni printf e wprintf](../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md)   
 [Direttive flag](../c-runtime-library/flag-directives.md)   
 [Specifica della larghezza per printf](../c-runtime-library/printf-width-specification.md)   
 [Specifica della precisione](../c-runtime-library/precision-specification.md)   
 [Caratteri di campo di tipo per printf](../c-runtime-library/printf-type-field-characters.md)

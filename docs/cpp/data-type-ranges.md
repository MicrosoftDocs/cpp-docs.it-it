---
title: Intervalli dei tipi di dati | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- float keyword [C++]
- char keyword [C++]
- unsigned long
- __wchar_t keyword [C++]
- unsigned short int [C++]
- enum keyword [C++]
- unsigned char keyword [C++]
- integer data type [C++], data type ranges
- int data type
- data types [C++], ranges
- unsigned int [C++]
- short data type
- short int data
- signed types [C++], data type ranges
- long long keyword [C++]
- long double keyword [C++]
- double data type [C++], data type ranges
- signed short int [C++]
- unsigned short
- sized integer types
- signed int [C++]
- signed long int [C++]
- signed char keyword [C++]
- wchar_t keyword [C++]
- long keyword [C++]
- ranges [C++]
- unsigned types [C++], data type ranges
- floating-point numbers [C++]
- data type ranges
- ranges [C++], data types
- long int keyword [C++]
- unsigned long int [C++]
ms.assetid: 3691ceca-05fb-4b82-b1ae-5c4618cda91a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 93a399f922d79c073cc6471ebe702d8ef7fcd842
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37940641"
---
# <a name="data-type-ranges"></a>Intervalli dei tipi di dati
I compilatori di Visual C++ a 32 e a 64 bit riconoscono i tipi indicati nella tabella più avanti in questo articolo.  
  
-   `int` (`unsigned int`)  
  
-   `__int8` (`unsigned __int8`)  
  
-   `__int16` (`unsigned __int16`)  
  
-   `__int32` (`unsigned __int32`)  
  
-   `__int64` (`unsigned __int64`)  
  
-   `short` (`unsigned short`)  
  
-   `long` (`unsigned long`)  
  
-   `long` `long` (`unsigned long long`)  
  
 Se il nome inizia con due caratteri di sottolineatura (`__`), un tipo di dati non è standard.  
  
 Gli intervalli specificati nella tabella seguente sono inclusivo-inclusivo.  
  
|Nome tipo|Byte|Altri nomi|Intervallo di valori|  
|---------------|-----------|-----------------|---------------------|  
|int|4|signed|da -2.147.483.648 a 2.147.483.647|  
|unsigned int|4|unsigned|Da 0 a 4.294.967.295|  
|__int8|1|char|Da -128 a 127|  
|unsigned __int8|1|unsigned char|Da 0 a 255|  
|__int16|2|short, short int, signed short int|Da –32,768 a 32,767|  
|unsigned __int16|2|unsigned short, unsigned short int|Da 0 a 65.535|  
|__int32|4|signed, signed int, int|da -2.147.483.648 a 2.147.483.647|  
|unsigned __int32|4|unsigned, unsigned int|Da 0 a 4.294.967.295|  
|__int64|8|long long, signed long long|Da -9,223,372,036,854,775,808 a 9,223,372,036,854,775,807|  
|unsigned __int64|8|unsigned long long|Da 0 a 18.446.744.073.709.551.615|  
|bool|1|none|false o true|  
|char|1|none|-128 a 127 per impostazione predefinita<br /><br /> Da 0 a 255 quando viene compilato usando [/J](../build/reference/j-default-char-type-is-unsigned.md)|  
|signed char|1|none|Da -128 a 127|  
|unsigned char|1|none|Da 0 a 255|  
|short|2|short int, signed short int|Da –32,768 a 32,767|  
|unsigned short|2|unsigned short int|Da 0 a 65.535|  
|long|4|long int, signed long int|da -2.147.483.648 a 2.147.483.647|  
|unsigned long|4|unsigned long int|Da 0 a 4.294.967.295|  
|long long|8|none (ma equivalente a __int64)|Da -9,223,372,036,854,775,808 a 9,223,372,036,854,775,807|  
|unsigned long long|8|none (ma equivalente a __int64 non firmato)|Da 0 a 18.446.744.073.709.551.615|  
|enum|varies|none| |  
|float|4|none|3.4E +/- 38 (7 cifre)|  
|double|8|nessuno|1.7E +/- 308 (15 cifre)|  
|long double|uguale a double|none|uguale a double|  
|wchar_t|2|__wchar_t|Da 0 a 65.535|  
  
 In base a come viene usata, una variabile di `__wchar_t` indica un tipo di carattere wide o un tipo di carattere multibyte. Usare il prefisso `L` prima di una costante di carattere o di stringa per definire la costante del tipo di carattere wide.  
  
 **firmato** e **senza segno** sono modificatori che è possibile usare con qualsiasi tipo integrale eccetto **bool**. Si noti che **char**, **char con segno**, e **unsigned char** sono tre tipi distinti per gli scopi di meccanismi come l'overload e i modelli.  
  
 Il **int** e **unsigned int** tipi hanno una dimensione di quattro byte. Tuttavia, codice portatile non deve dipendere la dimensione del **int** perché lo standard del linguaggio consente di essere specifici dell'implementazione.  
  
 C/C++ in Visual Studio supporta inoltre tipi di Integer dimensionati. Per altre informazioni, vedere [__int8, \__int16, \__int32, \__int64](../cpp/int8-int16-int32-int64.md) e [Limiti per tipi Integer](../cpp/integer-limits.md).  
  
 Per altre informazioni sulle restrizioni della dimensione di ogni tipo, vedere [Tipi fondamentali](../cpp/fundamental-types-cpp.md).  
  
 L'intervallo dei tipi enumerati varia a seconda del contesto del linguaggio e dei flag del compilatore specificati. Per altre informazioni, vedere [Dichiarazioni di enumerazioni C](../c-language/c-enumeration-declarations.md) e [Enumerazioni](../cpp/enumerations-cpp.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Parole chiave](../cpp/keywords-cpp.md)   
 [Tipi fondamentali](../cpp/fundamental-types-cpp.md)
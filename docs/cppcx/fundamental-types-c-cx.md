---
description: 'Altre informazioni su: tipi fondamentali (C++/CX)'
title: Tipi fondamentali (C++/CX)
ms.date: 01/22/2017
ms.assetid: c9f82907-25f2-440b-91d6-afb8dbd46ea6
ms.openlocfilehash: 40e0a849d0b838f53ddaea26c8993dcfe625ed5d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97321005"
---
# <a name="fundamental-types-ccx"></a>Tipi fondamentali (C++/CX)

Oltre ai tipi incorporati C++ standard, C++/CX supporta il sistema di tipi definito dall'architettura Windows Runtime fornendo i typedef per i Windows Runtime tipi fondamentali che vengono mappati ai tipi C++ standard. C++/CX implementa i tipi fondamentali booleani, character e numeric. Questi typedef sono definiti nello spazio dei nomi `default` , che non deve mai essere specificato in modo esplicito. Inoltre, C++/CX fornisce wrapper e implementazioni concrete per determinati tipi di Windows Runtime e interfacce.

## <a name="boolean-and-character-types"></a>Tipi char e booleani

La tabella seguente elenca i tipi char e booleani e i relativi equivalenti C++ standard.

|Spazio dei nomi|Nome C++/CX|Definizione|Nome in C++ standard|Intervallo di valori|
|---------------|-----------------------------------------------------------------------|----------------|-------------------------|---------------------|
|Piattaforma|Boolean|Valore booleano a 8 bit.|bool|**`true`** (diverso da zero) e **`false`** (zero)|
|default|char16|Valore non numerico a 16 bit che rappresenta un punto di codice Unicode (UTF-16).|wchar_t<br /><br /> -oppure-<br /><br /> L'c'|(Specificato dallo standard Unicode)|

## <a name="numeric-types"></a>Tipi numerici

La tabella seguente elenca i tipi numerici incorporati. I tipi numerici vengono dichiarati nello spazio dei nomi `default` e sono typedef per il corrispondente tipo incorporato C++. Non tutti i tipi incorporati C++ (Long, ad esempio) sono supportati nella Windows Runtime. Per coerenza e chiarezza, è consigliabile usare il nome C++/CX.

|Nome C++/CX|Definizione|Nome in C++ standard|Intervallo di valori|
|-----------------------------------------------------------------------|----------------|-------------------------|---------------------|
|int8|Valore numerico con segno a 8 bit.|signed char|da-128 a 127|
|uint8|Valore numerico senza segno a 8 bit.|unsigned char|Da 0 a 255|
|int16|Intero con segno a 16 bit.|short|da-32.768 a 32.767|
|uint16|Numero intero non firmato a 16 bit.|unsigned short|Da 0 a 65.535|
|int32|Intero con segno a 32 bit.|INT|da-2.147.483.648 a 2.147.483.647|
|uint32|Intero senza segno a 32 bit.|int senza segno|Da 0 a 4.294.967.295|
|int64|Intero con segno a 64 bit.|Long Long-or-__int64|da-9.223.372.036.854, da 775.808 a 9.223.372.036.854.775.807|
|uint64|Intero senza segno a 64 bit.|Long Long senza segno o senza segno __int64|Da 0 a 18.446.744.073.709.551.615|
|float32|Numero a virgola mobile IEEE 754 a 32 bit.|float|3.4E +/- 38 (7 cifre)|
|float64|Numero a virgola mobile IEEE 754 a 64 bit.|double|1.7E +/- 308 (15 cifre)|

## <a name="windows-runtime-types"></a>Tipi di Windows Runtime

La tabella seguente elenca alcuni tipi aggiuntivi definiti dall'architettura Windows Runtime e sono incorporati in C++/CX. Object e String sono tipi di riferimento. Gli altri sono tipi di valore. Tutti questi tipi vengono dichiarati nello spazio dei nomi `Platform` . Per un elenco completo, vedere [Platform namespace](../cppcx/platform-namespace-c-cx.md).

|Nome|Definizione|
|----------|----------------|
|Oggetto|Rappresenta qualsiasi tipo di Windows Runtime.|
|string|Serie di caratteri che rappresenta un testo.|
|Rect|Set di quattro numeri a virgola mobile che rappresentano la posizione e le dimensioni di un rettangolo.|
|SizeT|Coppia ordinata di numeri a virgola mobile che specificano un'altezza e una larghezza.|
|Point|Coppia ordinata di coordinate x e y a virgola mobile, che definiscono un punto su un piano bidimensionale.|
|Guid|Valore non numerico a 128 bit usato come identificatore univoco.|
|UIntPtr|(Solo per uso interno). Valore senza segno a 64 bit utilizzato come puntatore.|
|IntPtr|(Solo per uso interno).  Valore con segno a 64 bit utilizzato come puntatore.|

## <a name="see-also"></a>Vedi anche

[Sistema di tipi](../cppcx/type-system-c-cx.md)

---
title: Tipi fondamentali (C++/CX)
ms.date: 01/22/2017
ms.assetid: c9f82907-25f2-440b-91d6-afb8dbd46ea6
ms.openlocfilehash: 2bd5be01b868fd3086c2064edfd4ca343db425be
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62301454"
---
# <a name="fundamental-types-ccx"></a>Tipi fondamentali (C++/CX)

Oltre lo standard C++ tipi predefiniti, C++/CX supporta il sistema di tipo definito dall'architettura di Windows Runtime fornendo i typedef per i tipi di Runtime di Windows fondamentali che eseguono il mapping allo standard C++ tipi di... C + c++ /CX implementa booleane, di carattere e i tipi numerici fondamentali. Questi typedef sono definiti nello spazio dei nomi `default` , che non deve mai essere specificato in modo esplicito. Inoltre, C++/CX fornisce wrapper e implementazioni concrete per determinati tipi Windows Runtime e le interfacce.

## <a name="boolean-and-character-types"></a>Tipi char e booleani

La tabella seguente elenca i tipi char e booleani e i relativi equivalenti C++ standard.

|Spazio dei nomi|C++Nome /CX|Definizione|Nome in C++ standard|Intervallo di valori|
|---------------|-----------------------------------------------------------------------|----------------|-------------------------|---------------------|
|Piattaforma|Booleano|Valore booleano a 8 bit.|bool|**true** (diverso da zero) e **false** (zero)|
|default|char16|Valore non numerico a 16 bit che rappresenta un punto di codice Unicode (UTF-16).|wchar_t<br /><br /> -oppure-<br /><br /> L'c'|(Specificato dallo standard Unicode)|

## <a name="numeric-types"></a>Tipi numerici

La tabella seguente elenca i tipi numerici incorporati. I tipi numerici vengono dichiarati nello spazio dei nomi `default` e sono typedef per il corrispondente tipo incorporato C++. Non tutti i tipi predefiniti di C++ (long, ad esempio) sono supportati nel Runtime di Windows. Per coerenza e chiarezza, è consigliabile usare il C++nome /CX.

|C++Nome /CX|Definizione|Nome in C++ standard|Intervallo di valori|
|-----------------------------------------------------------------------|----------------|-------------------------|---------------------|
|int8|Valore numerico con segno a 8 bit.|signed char|-128 e 127|
|uint8|Valore numerico senza segno a 8 bit.|unsigned char|Da 0 a 255|
|int16|Intero con segno a 16 bit.|short|compreso tra -32.768 e 32.767|
|uint16|Intero senza segno a 16 bit.|unsigned short|Da 0 a 65.535|
|int32|Intero con segno a 32 bit.|int|da -2.147.483.648 e 2.147.483.647|
|uint32|Intero senza segno a 32 bit.|unsigned int|Da 0 a 4.294.967.295|
|int64|Intero con segno a 64 bit.|long long - oppure - __int64|-9,223,372,036,854, 775,808 e 9.223.372.036.854.775.807|
|uint64|Intero senza segno a 64 bit.|unsigned long long - oppure - unsigned __int64|Da 0 a 18.446.744.073.709.551.615|
|float32|Numero a virgola mobile IEEE 754 a 32 bit.|float|3.4E +/- 38 (7 cifre)|
|float64|Numero a virgola mobile IEEE 754 a 64 bit.|double|1.7E +/- 308 (15 cifre)|

## <a name="windows-runtime-types"></a>Tipi Windows Runtime

La tabella seguente elenca alcuni tipi aggiuntivi definiti dall'architettura di Windows Runtime e sono integrate in C++/CX. Object e String sono tipi di riferimento. Gli altri sono tipi di valore. Tutti questi tipi vengono dichiarati nello spazio dei nomi `Platform` . Per un elenco completo, vedere [Platform namespace](../cppcx/platform-namespace-c-cx.md).

|Nome|Definizione|
|----------|----------------|
|Object|Rappresenta qualsiasi tipo Windows Runtime.|
|Stringa|Serie di caratteri che rappresenta un testo.|
|Rect|Set di quattro numeri a virgola mobile che rappresentano la posizione e le dimensioni di un rettangolo.|
|SizeT|Coppia ordinata di numeri a virgola mobile che specificano un'altezza e una larghezza.|
|Punto|Coppia ordinata di coordinate x e y a virgola mobile, che definiscono un punto su un piano bidimensionale.|
|GUID|Valore non numerico a 128 bit usato come identificatore univoco.|
|UIntPtr|Solo per uso interno. Valore a 64 bit senza segno usato come puntatore.|
|IntPtr|Solo per uso interno.  Valore a 64 bit con segno usato come puntatore.|

## <a name="see-also"></a>Vedere anche

[Sistema di tipi](../cppcx/type-system-c-cx.md)

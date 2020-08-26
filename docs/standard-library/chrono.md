---
title: '&lt;chrono&gt;'
ms.date: 05/07/2019
f1_keywords:
- chrono/std::chrono::nanoseconds
- chrono/std::chrono::minutes
- chrono/std::chrono::seconds
- <chrono>
- chrono/std::chrono::hours
- chrono/std::chrono::milliseconds
- chrono/std::chrono::microseconds
ms.assetid: 844de749-f306-482e-89bc-6f53c99c8324
ms.openlocfilehash: b74c25e9c26d5767426576633e0999ae3ca44954
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88840648"
---
# <a name="ltchronogt"></a>&lt;chrono&gt;

Includere l'intestazione standard \<chrono> per definire le classi e le funzioni che rappresentano e modificano le durate temporali e gli istanti temporali.

A partire da Visual Studio 2015, l'implementazione di `steady_clock` è cambiata per soddisfare i requisiti standard C++ per la stabilità e la monotonicità. `steady_clock` ora è basato su QueryPerformanceCounter() e `high_resolution_clock` è ora un typedef per `steady_clock`. Di conseguenza, nel compilatore Microsoft C++ `steady_clock::time_point` è ora un typedef per `chrono::time_point<steady_clock>` ; tuttavia, questa regola non è necessariamente il caso di altre implementazioni.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<chrono>

**Spazio dei nomi:** std

## <a name="members"></a>Membri

### <a name="classes"></a>Classi

|Nome|Descrizione|
|-|-|
|[Classe Duration](../standard-library/duration-class.md)|Descrive un tipo che contiene un intervallo di tempo.|
|[Classe time_point](../standard-library/time-point-class.md)|Descrive un tipo che rappresenta un punto nel tempo.|

### <a name="structs"></a>Struct

|Nome|Descrizione|
|-|-|
|[Struttura common_type](../standard-library/common-type-structure.md)|Descrive le specializzazioni del modello di classe [common_type](../standard-library/common-type-class.md) per le creazioni di istanze di `duration` e `time_point` .|
|[Struttura duration_values](../standard-library/duration-values-structure.md)|Fornisce valori specifici per il parametro di modello `duration``Rep`.|
|[struct high_resolution_clock](../standard-library/high-resolution-clock-struct.md)||
|[Struct steady_clock](../standard-library/steady-clock-struct.md)|Rappresenta un clock `steady`.|
|[Struttura system_clock](../standard-library/system-clock-structure.md)|Rappresenta un *tipo di clock* basato sull'orologio in tempo reale del sistema.|
|[Struttura treat_as_floating_point](../standard-library/treat-as-floating-point-structure.md)|Specifica se un tipo può essere considerato un tipo a virgola mobile.|

### <a name="functions"></a>Funzioni

|Nome|Descrizione|
|-|-|
|[duration_cast](../standard-library/chrono-functions.md#duration_cast)|Esegue il cast di un oggetto `duration` in un tipo specificato.|
|[time_point_cast](../standard-library/chrono-functions.md#time_point_cast)|Esegue il cast di un oggetto `time_point` in un tipo specificato.|

### <a name="operators"></a>Operatori

|Nome|Descrizione|
|-|-|
|[operatore](../standard-library/chrono-operators.md#operator-)|Operatore di sottrazione o negazione di oggetti `duration` e `time_point`.|
|[operatore! =](../standard-library/chrono-operators.md#op_neq)|Operatore di disuguaglianza che viene usato con oggetti `duration` o `time_point`.|
|[operatore modulo](../standard-library/chrono-operators.md#op_modulo)|Operatore per le operazioni moduli sugli oggetti `duration`.|
|[operatore](../standard-library/chrono-operators.md#op_star)|Operatore di moltiplicazione per gli oggetti `duration`.|
|[operatore](../standard-library/chrono-operators.md#op_div)|Operatore di divisione per oggetti `duration`.|
|[operatore +](../standard-library/chrono-operators.md#op_add)|Addiziona gli oggetti `duration` e `time_point`.|
|[operatore&lt;](../standard-library/chrono-operators.md#op_lt)|Determina se un oggetto `duration` o `time_point` è minore di un altro oggetto `duration` o `time_point`.|
|[operatore&lt;=](../standard-library/chrono-operators.md#op_lt_eq)|Determina se un oggetto `duration` o `time_point` è minore di o uguale a un altro oggetto `duration` o `time_point`.|
|[operatore = =](../standard-library/chrono-operators.md#op_eq_eq)|Determina se due oggetti `duration` rappresentano gli intervalli di tempo che hanno la stessa lunghezza, o se due oggetti `time_point` rappresentano lo stesso punto nel tempo.|
|[operatore&gt;](../standard-library/chrono-operators.md#op_gt)|Determina se un oggetto `duration` o `time_point` è maggiore di un altro oggetto `duration` o `time_point`.|
|[operatore&gt;=](../standard-library/chrono-operators.md#op_gt_eq)|Determina se un oggetto `duration` o `time_point` è maggiore o uguale a un altro oggetto `duration` o `time_point`.|

### <a name="typedefs-predefined-duration-types"></a>Typedef (tipi di durata predefiniti)

Per ulteriori informazioni sui tipi di rapporto utilizzati nei typedef seguenti, vedere [\<ratio>](../standard-library/ratio.md) .

|Nome|Descrizione|
|-|-|
|`typedef duration<long long, nano> nanoseconds;`|Sinonimo di un `duration` tipo con un periodo di cicli di 1 nanosecondo.|
|`typedef duration<long long, micro> microseconds;`|Sinonimo di un `duration` tipo con un periodo di cicli di 1 microsecondo.|
|`typedef duration<long long, milli> milliseconds;`|Sinonimo di un `duration` tipo con un periodo di cicli di 1 millisecondo.|
|`typedef duration<long long> seconds;`|Sinonimo di un `duration` tipo con un periodo di cicli di 1 secondo.|
|`typedef duration<int, ratio<60> > minutes;`|Sinonimo di un `duration` tipo con un periodo di cicli di 1 minuto.|
|`typedef duration<int, ratio<3600> > hours;`|Sinonimo di un `duration` tipo con un periodo di cicli di 1 ora.|

### <a name="literals"></a>Valori letterali

**(C++ 11)** L' \<chrono> intestazione definisce i [valori letterali definiti dall'utente](../cpp/user-defined-literals-cpp.md) seguenti che è possibile usare per maggiore praticità, indipendenza dai tipi e gestibilità del codice. Questi valori letterali sono definiti nello spazio dei nomi inline `literals::chrono_literals` e sono in ambito quando std::chrono è nell'ambito.

|Dichiarazione|Descrizione|
|-|-|
|`hours operator "" h(unsigned long long Val)`|Specifica le ore come valore integrale.|
|`duration<double, ratio<3600> > operator "" h(long double Val)`|Specifica le ore come valore a virgola mobile.|
|`minutes (operator "" min)(unsigned long long Val)`|Specifica i minuti come valore integrale.|
|`duration<double, ratio<60> > (operator "" min)( long double Val)`|Specifica i minuti come valore a virgola mobile.|
|`seconds operator "" s(unsigned long long Val)`|Specifica i minuti come valore integrale.|
|`duration<double> operator "" s(long double Val)`|Specifica i secondi come valore a virgola mobile.|
|`milliseconds operator "" ms(unsigned long long Val)`|Specifica i millisecondi come valore integrale.|
|`duration<double, milli> operator "" ms(long double Val)`|Specifica i millisecondi come valore a virgola mobile.|
|`microseconds operator "" us(unsigned long long Val)`|Specifica i microsecondi come valore integrale.|
|`duration<double, micro> operator "" us(long double Val)`|Specifica i microsecondi come valore a virgola mobile.|
|`nanoseconds operator "" ns(unsigned long long Val)`|Specifica i nanosecondi come valore integrale.|
|`duration<double, nano> operator "" ns(long double Val)`|Specifica i nanosecondi come valore a virgola mobile.|

Gli esempi seguenti illustrano l'uso dei valori letterali chrono.

```cpp
constexpr auto day = 24h;
constexpr auto week = 24h* 7;
constexpr auto my_duration_unit = 108ms;
```

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)

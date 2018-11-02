---
title: '&lt;chrono&gt;'
ms.date: 11/04/2016
f1_keywords:
- chrono/std::chrono::nanoseconds
- chrono/std::chrono::minutes
- chrono/std::chrono::seconds
- <chrono>
- chrono/std::chrono::hours
- chrono/std::chrono::milliseconds
- chrono/std::chrono::microseconds
ms.assetid: 844de749-f306-482e-89bc-6f53c99c8324
ms.openlocfilehash: 904e4df6b6c16b846ab4417d24a1d9836380d75b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50544547"
---
# <a name="ltchronogt"></a>&lt;chrono&gt;

Includere l'intestazione standard \<chrono> per definire le classi e le funzioni che rappresentano e modificano durate e istanti temporali.

A partire da Visual Studio 2015, l'implementazione di `steady_clock` è stata modificata per soddisfare i requisiti Standard C++ per tenuta e monotonicità. `steady_clock` ora è basato su QueryPerformanceCounter() e `high_resolution_clock` è ora un typedef per `steady_clock`. Di conseguenza in Visual C++ `steady_clock::time_point` è ora un typedef per `chrono::time_point<steady_clock>`; tuttavia, ciò non vale necessariamente per altre implementazioni.

## <a name="syntax"></a>Sintassi

```cpp
#include <chrono>
```

### <a name="classes"></a>Classi

|Nome|Descrizione|
|----------|-----------------|
|[Classe duration](../standard-library/duration-class.md)|Descrive un tipo che contiene un intervallo di tempo.|
|[Classe time_point](../standard-library/time-point-class.md)|Descrive un tipo che rappresenta un punto nel tempo.|

### <a name="structs"></a>Strutture

|nome|Descrizione|
|----------|-----------------|
|[Struct common_type](../standard-library/common-type-structure.md)|Descrive le specializzazioni della classe modello [common_type](../standard-library/common-type-class.md) per la creazione di istanze di `duration` e `time_point`.|
|[Struct duration_values](../standard-library/duration-values-structure.md)|Fornisce valori specifici per il parametro di modello `duration` `Rep`.|
|[Struct steady_clock](../standard-library/steady-clock-struct.md)|Rappresenta un clock `steady`.|
|[Struct system_clock](../standard-library/system-clock-structure.md)|Rappresenta un *tipo di clock* basato sull'orologio in tempo reale del sistema.|
|[Struct treat_as_floating_point](../standard-library/treat-as-floating-point-structure.md)|Specifica se un tipo può essere considerato un tipo a virgola mobile.|

### <a name="functions"></a>Funzioni

|Nome|Descrizione|
|----------|-----------------|
|[duration_cast](../standard-library/chrono-functions.md#duration_cast)|Esegue il cast di un oggetto `duration` in un tipo specificato.|
|[time_point_cast](../standard-library/chrono-functions.md#time_point_cast)|Esegue il cast di un oggetto `time_point` in un tipo specificato.|

### <a name="operators"></a>Operatori

|Nome|Descrizione|
|----------|-----------------|
|[operator-](../standard-library/chrono-operators.md#operator-)|Operatore di sottrazione o negazione di oggetti `duration` e `time_point`.|
|[operator!=](../standard-library/chrono-operators.md#op_neq)|Operatore di disuguaglianza che viene usato con oggetti `duration` o `time_point`.|
|[operatore modulo](../standard-library/chrono-operators.md#op_modulo)|Operatore per le operazioni moduli sugli oggetti `duration`.|
|[operator*](../standard-library/chrono-operators.md#op_star)|Operatore di moltiplicazione per gli oggetti `duration`.|
|[operator/](../standard-library/chrono-operators.md#op_div)|Operatore di divisione per oggetti `duration`.|
|[operator+](../standard-library/chrono-operators.md#op_add)|Addiziona gli oggetti `duration` e `time_point`.|
|[operator&lt;](../standard-library/chrono-operators.md#op_lt)|Determina se un oggetto `duration` o `time_point` è minore di un altro oggetto `duration` o `time_point`.|
|[operator&lt;=](../standard-library/chrono-operators.md#op_lt_eq)|Determina se un oggetto `duration` o `time_point` è minore di o uguale a un altro oggetto `duration` o `time_point`.|
|[operator==](../standard-library/chrono-operators.md#op_eq_eq)|Determina se due oggetti `duration` rappresentano gli intervalli di tempo che hanno la stessa lunghezza, o se due oggetti `time_point` rappresentano lo stesso punto nel tempo.|
|[operator&gt;](../standard-library/chrono-operators.md#op_gt)|Determina se un oggetto `duration` o `time_point` è maggiore di un altro oggetto `duration` o `time_point`.|
|[operator&gt;=](../standard-library/chrono-operators.md#op_gt_eq)|Determina se un oggetto `duration` o `time_point` è maggiore o uguale a un altro oggetto `duration` o `time_point`.|

### <a name="predefined-duration-types"></a>Tipi di durata predefiniti

Per altre informazioni sui tipi di rapporto usati nei seguenti typedef, vedere [\<ratio>](../standard-library/ratio.md).

|Typedef|Descrizione|
|-------------|-----------------|
|`typedef duration<long long, nano> nanoseconds;`|Sinonimo di un tipo `duration` con un periodo di cicli macchina di un nanosecondo.|
|`typedef duration<long long, micro> microseconds;`|Sinonimo di un tipo `duration` con un periodo di cicli macchina di un microsecondo.|
|`typedef duration<long long, milli> milliseconds;`|Sinonimo di un tipo `duration` con un periodo di cicli macchina di un millisecondo.|
|`typedef duration<long long> seconds;`|Sinonimo di un tipo `duration` con un periodo di cicli macchina di un secondo.|
|`typedef duration<int, ratio<60> > minutes;`|Sinonimo di un tipo `duration` con un periodo di cicli macchina di un minuto.|
|`typedef duration<int, ratio<3600> > hours;`|Sinonimo di un tipo `duration` con un periodo di cicli macchina di un'ora.|

### <a name="literals"></a>Valori letterali

**(C++11)** L'intestazione \<chrono> definisce i seguenti[valori letterali definiti dall'utente](../cpp/user-defined-literals-cpp.md) che è possibile usare per maggiore praticità, indipendenza dai tipi e gestibilità del codice. Questi valori letterali sono definiti nello spazio dei nomi inline `literals::chrono_literals` e sono in ambito quando std::chrono è nell'ambito.

|Literal|Descrizione|
|-------------|-----------------|
|chrono::hours operator "" h(unsigned long long Val)|Specifica le ore come valore integrale.|
|chrono:: Duration\<ratio double,\<3600 >> operatore "" h (long double Val)|Specifica le ore come valore a virgola mobile.|
|chrono::minutes (operator "" min)(unsigned long long Val)|Specifica i minuti come valore integrale.|
|chrono:: Duration\<ratio double,\<60 >> (operatore "" min) (long double Val)|Specifica i minuti come valore a virgola mobile.|
|chrono::seconds operator "" s(unsigned long long Val)|Specifica i minuti come valore integrale.|
|chrono::duration\<double> operator "" s(long double Val)|Specifica i secondi come valore a virgola mobile.|
|chrono::milliseconds operator "" ms(unsigned long long Val)|Specifica i millisecondi come valore integrale.|
|chrono::duration\<double, milli> operator "" ms(long double Val)|Specifica i millisecondi come valore a virgola mobile.|
|chrono::microseconds operator "" us(unsigned long long Val)|Specifica i microsecondi come valore integrale.|
|chrono::duration\<double, micro> operator "" us(long double Val)|Specifica i microsecondi come valore a virgola mobile.|
|chrono::nanoseconds operator "" ns(unsigned long long Val)|Specifica i nanosecondi come valore integrale.|
|chrono::duration\<double, nano> operator "" ns(long double Val)|Specifica i nanosecondi come valore a virgola mobile.|
|||

Gli esempi seguenti illustrano l'uso dei valori letterali chrono.

```cpp
constexpr auto day = 24h;
constexpr auto week = 24h* 7;
constexpr auto my_duration_unit = 108ms;
```

## <a name="remarks"></a>Note

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>

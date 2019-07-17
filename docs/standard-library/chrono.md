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
ms.openlocfilehash: 72d16b068f337fe935d07e1eb2d0e2b74de6268f
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68244860"
---
# <a name="ltchronogt"></a>&lt;chrono&gt;

Includere l'intestazione standard \<chrono> per definire le classi e le funzioni che rappresentano e modificano durate e istanti temporali.

A partire da Visual Studio 2015, l'implementazione di `steady_clock` è stata modificata per soddisfare i requisiti Standard C++ per tenuta e monotonicità. `steady_clock` ora è basato su QueryPerformanceCounter() e `high_resolution_clock` è ora un typedef per `steady_clock`. Di conseguenza, in Microsoft C++ compilatore `steady_clock::time_point` è ora un typedef per `chrono::time_point<steady_clock>`; tuttavia, questa regola non è necessariamente nel caso di altre implementazioni.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<chrono >

**Spazio dei nomi:** std

## <a name="members"></a>Members

### <a name="classes"></a>Classi

|||
|-|-|
|[Classe duration](../standard-library/duration-class.md)|Descrive un tipo che contiene un intervallo di tempo.|
|[Classe time_point](../standard-library/time-point-class.md)|Descrive un tipo che rappresenta un punto nel tempo.|

### <a name="structs"></a>Struct

|||
|-|-|
|[Struct common_type](../standard-library/common-type-structure.md)|Descrive le specializzazioni della classe modello [common_type](../standard-library/common-type-class.md) per la creazione di istanze di `duration` e `time_point`.|
|[Struct duration_values](../standard-library/duration-values-structure.md)|Fornisce valori specifici per il parametro di modello `duration` `Rep`.|
|[high_resolution_clock struct](../standard-library/high-resolution-clock-struct.md)||
|[Struct steady_clock](../standard-library/steady-clock-struct.md)|Rappresenta un clock `steady`.|
|[Struct system_clock](../standard-library/system-clock-structure.md)|Rappresenta un *tipo di clock* basato sull'orologio in tempo reale del sistema.|
|[Struct treat_as_floating_point](../standard-library/treat-as-floating-point-structure.md)|Specifica se un tipo può essere considerato un tipo a virgola mobile.|

### <a name="functions"></a>Funzioni

|||
|-|-|
|[duration_cast](../standard-library/chrono-functions.md#duration_cast)|Esegue il cast di un oggetto `duration` in un tipo specificato.|
|[time_point_cast](../standard-library/chrono-functions.md#time_point_cast)|Esegue il cast di un oggetto `time_point` in un tipo specificato.|

### <a name="operators"></a>Operatori

|||
|-|-|
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

### <a name="typedefs-predefined-duration-types"></a>TypeDef (tipi di durata predefiniti)

Per altre informazioni sui tipi di rapporto usati nei seguenti typedef, vedere [\<ratio>](../standard-library/ratio.md).

||| ||| | `typedef duration<long long, nano> nanoseconds;`| Sinonimo di un `duration` tipo con un periodo di cicli macchina di 1 nanosecondo. | |`typedef duration<long long, micro> microseconds;`| Sinonimo di un `duration` tipo con un periodo di cicli macchina di 1 microsecondo. | |`typedef duration<long long, milli> milliseconds;`| Sinonimo di un `duration` tipo con un periodo di cicli macchina di 1 millisecondo. | |`typedef duration<long long> seconds;`| Sinonimo di un `duration` tipo con un periodo di cicli macchina di 1 secondo. | |`typedef duration<int, ratio<60> > minutes;`| Sinonimo di un `duration` tipo con un periodo di cicli macchina di 1 minuto. | |`typedef duration<int, ratio<3600> > hours;`| Sinonimo di un `duration` tipo che ha un periodo di cicli macchina di 1 ora. |

### <a name="literals"></a>Valori letterali

**(C++11)**  il \<chrono > intestazione definisce gli elementi seguenti [valori letterali definiti dall'utente](../cpp/user-defined-literals-cpp.md) che è possibile usare per maggiore praticità, indipendenza dai tipi e gestibilità del codice. Questi valori letterali sono definiti nello spazio dei nomi inline `literals::chrono_literals` e sono in ambito quando std::chrono è nell'ambito.

|||
|-|-|
|operatore ore "" h (Val long long senza segno)|Specifica le ore come valore integrale.|
|durata\<ratio double,\<3600 >> operatore "" h (long double Val)|Specifica le ore come valore a virgola mobile.|
|minuti (operatore "" min) (Val long long senza segno)|Specifica i minuti come valore integrale.|
|durata\<ratio double,\<60 >> (operatore "" min) (long double Val)|Specifica i minuti come valore a virgola mobile.|
|operatore secondi "" s (Val long long senza segno)|Specifica i minuti come valore integrale.|
|durata\<double > operator "" s (long double Val)|Specifica i secondi come valore a virgola mobile.|
|operatore millisecondi "" ms (Val long long senza segno)|Specifica i millisecondi come valore integrale.|
|durata\<double, millisecondi > operator "" ms (long double Val)|Specifica i millisecondi come valore a virgola mobile.|
|operatore microsecondi "" Stati Uniti (Val long long senza segno)|Specifica i microsecondi come valore integrale.|
|durata\<double, micro > operator "" Stati Uniti (long double Val)|Specifica i microsecondi come valore a virgola mobile.|
|operatore nanosecondi "" ns (Val long long senza segno)|Specifica i nanosecondi come valore integrale.|
|durata\<nano double > operator "" ns (long double Val)|Specifica i nanosecondi come valore a virgola mobile.|

Gli esempi seguenti illustrano l'uso dei valori letterali chrono.

```cpp
constexpr auto day = 24h;
constexpr auto week = 24h* 7;
constexpr auto my_duration_unit = 108ms;
```

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>

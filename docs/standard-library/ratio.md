---
title: '&lt;ratio&gt; | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- ratio/std::mega
- ratio/std::peta
- ratio/std::ratio_greater
- ratio/std::micro
- ratio/std::ratio_add
- ratio/std::ratio_not_equal
- ratio/std::hecto
- ratio/std::nano
- ratio/std::ratio_less_equal
- ratio/std::ratio_less
- ratio/std::centi
- ratio/std::ratio_greater_equal
- ratio/std::ratio_subtract
- <ratio>
- ratio/std::atto
- ratio/std::tera
- ratio/std::milli
- ratio/std::ratio_multiply
- ratio/std::kilo
- ratio/std::ratio_divide
- ratio/std::giga
- ratio/std::pico
- ratio/std::femto
- ratio/std::ratio_equal
- ratio/std::ratio
- ratio/std::exa
- ratio/std::deci
- ratio/std::deca
dev_langs:
- C++
ms.assetid: 8543e912-2d84-45ea-b3c0-bd7bfacee405
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1a5ffa7666f9b976312bf1c3115d93204bdd8f8a
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="ltratiogt"></a>&lt;ratio&gt;

Includere l'intestazione standard \<ratio> per definire le costanti e i modelli usati per archiviare e modificare i numeri razionali in fase di compilazione.

## <a name="syntax"></a>Sintassi

```cpp
#include <ratio>
```

### <a name="ratio-template"></a>Modello di rapporto

```cpp
template<std::intmax_t Numerator, std::intmax_t Denominator = 1>
   struct ratio // holds the ratio of Numerator to Denominator
{
   static constexpr std::intmax_t num;
   static constexpr std::intmax_t den;
   typedef ratio<num, den> type;
}
```

Il modello `ratio` definisce le costanti statiche `num` e `den` tale `num`  /  `den` = = numeratore / denominatore e `num` e `den` non fattori comuni. `num` / `den` è il valore rappresentato dalla classe di modello. Pertanto, `type` indica la creazione di istanze `ratio<num, den>`.

### <a name="specializations"></a>Specializzazioni

\<ratio> definisce anche le specializzazioni di `ratio` che hanno il formato seguente.

`template <class R1, class R2> struct ratio_specialization`

Ciascuna specializzazione accetta due parametri di modello che devono anche essere specializzazioni di `ratio`. Il valore di `type` è determinato da un'operazione logica associata.

|nome|Valore di `type`|
|----------|------------------|
|`ratio_add`|`R1 + R2`|
|`ratio_divide`|`R1 / R2`|
|`ratio_equal`|`R1 == R2`|
|`ratio_greater`|`R1 > R2`|
|`ratio_greater_equal`|`R1 >= R2`|
|`ratio_less`|`R1 < R2`|
|`ratio_less_equal`|`R1 <= R2`|
|`ratio_multiply`|`R1 * R2`|
|`ratio_not_equal`|`!(R1 == R2)`|
|`ratio_subtract`|`R1 - R2`|

### <a name="typedefs"></a>typedef

Per praticità, l'intestazione definisce rapporti per i prefissi SI standard:

```cpp
typedef ratio<1, 1000000000000000000> atto;
typedef ratio<1, 1000000000000000> femto;
typedef ratio<1, 1000000000000> pico;
typedef ratio<1, 1000000000> nano;
typedef ratio<1, 1000000> micro;
typedef ratio<1, 1000> milli;
typedef ratio<1, 100> centi;
typedef ratio<1, 10> deci;
typedef ratio<10, 1> deca;
typedef ratio<100, 1> hecto;
typedef ratio<1000, 1> kilo;
typedef ratio<1000000, 1> mega;
typedef ratio<1000000000, 1> giga;
typedef ratio<1000000000000, 1> tera;
typedef ratio<1000000000000000, 1> peta;
typedef ratio<1000000000000000000, 1> exa;
```

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>

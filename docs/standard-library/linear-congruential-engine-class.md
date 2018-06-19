---
title: Classe linear_congruential_engine | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- random/std::linear_congruential_engine
dev_langs:
- C++
helpviewer_keywords:
- linear_congruential_engine class
ms.assetid: 30e00ca6-1933-4701-9561-54f3e810a5a1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6f902e7a1a3ae4bcb35a4822228425747476d5bc
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33864073"
---
# <a name="linearcongruentialengine-class"></a>Classe linear_congruential_engine

Genera una sequenza casuale mediante l'algoritmo congruenziale lineare.

## <a name="syntax"></a>Sintassi

```cpp
class linear_congruential_engine{
   public:  // types
   typedef UIntType result_type;
   // engine characteristics
   static constexpr result_type multiplier = a;
   static constexpr result_type increment = c;
   static constexpr result_type modulus = m;
   static constexpr result_type min() { return c == 0u  1u: 0u; }
   static constexpr result_type max() { return m - 1u; }
   static constexpr result_type default_seed = 1u;
   // constructors and seeding functions
   explicit linear_congruential_engine(result_type s = default_seed);
   template <class Sseq>
   explicit linear_congruential_engine(Sseq& q);
   void seed(result_type s = default_seed);
   template <class Sseq>
   void seed(Sseq& q);
   // generating functions
   result_type operator()();
   void discard(unsigned long long z);
   };
```

### <a name="parameters"></a>Parametri

`UIntType` Il tipo di risultato unsigned integer. Per informazioni sui tipi possibili, vedere [\<random>](../standard-library/random.md).

`A` **Moltiplicatore**. **Precondizione**: vedere la sezione Note.

`C` **Incremento**. **Precondizione**: vedere la sezione Note.

`M` **Modulo**. **Precondizione**: vedere la sezione Note.

## <a name="members"></a>Membri

||||
|-|-|-|
|`linear_congruential_engine::linear_congruential_engine`|`linear_congruential_engine::min`|`linear_congruential_engine::discard`|
|`linear_congruential_engine::operator()`|`linear_congruential_engine::max`|`linear_congruential_engine::seed`|

`default_seed` è una costante membro definita come `1u`, usata come valore di parametro predefinito per `linear_congruential_engine::seed` e per il costruttore a valore singolo.

Per altre informazioni sui membri del motore, vedere [\<random>](../standard-library/random.md).

## <a name="remarks"></a>Note

La classe modello `linear_congruential_engine` è il motore di generazione più semplice, ma non il più rapido o quello che offre la migliore qualità. Un miglioramento rispetto a questo motore è rappresentato da [substract_with_carry_engine](../standard-library/subtract-with-carry-engine-class.md). Nessuno di questi motori può tuttavia eguagliare la rapidità e la qualità dei risultati offerte da [mersenne_twister_engine](../standard-library/mersenne-twister-engine-class.md).

Il motore produce valori di un tipo integrale senza segno specificato dall'utente usando la relazione di ricorrenza (*period*) `x(i) = (A * x(i-1) + C) mod M`.

Se `M` è zero, il valore usato per questa operazione di modulo è `numeric_limits<result_type>::max() + 1`. L'ultimo valore restituito è lo stato del motore oppure il valore di seeding se non sono state effettuate chiamate a `operator()`.

Se `M` è diverso da zero, i valori degli argomenti di modello `A` e `C` devono essere minori di `M`.

Sebbene sia possibile costruire un generatore direttamente da questo motore, è anche possibile usare uno dei typedef predefiniti seguenti.

`minstd_rand0`: motore del 1988 a standard minimo (Lewis, Goodman e Miller, 1969).

```cpp
typedef linear_congruential_engine<unsigned int, 16807, 0, 2147483647> minstd_rand0;
```

`minstd_rand`: motore standard minimo `minstd_rand0` aggiornato (Park, Miller e Stockmeyer, 1993).

```cpp
typedef linear_congruential_engine<unsigned int, 48271, 0, 2147483647> minstd_rand;
```

Per altre informazioni sull'algoritmo del motore congruenziale lineare, vedere l'articolo di Wikipedia [Generatore lineare congruenziale](http://go.microsoft.com/fwlink/p/?linkid=402446).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<random>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[\<random>](../standard-library/random.md)<br/>

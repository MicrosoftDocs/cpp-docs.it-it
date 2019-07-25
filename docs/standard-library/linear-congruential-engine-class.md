---
title: Classe linear_congruential_engine
ms.date: 11/04/2016
f1_keywords:
- random/std::linear_congruential_engine
helpviewer_keywords:
- linear_congruential_engine class
ms.assetid: 30e00ca6-1933-4701-9561-54f3e810a5a1
ms.openlocfilehash: f5b448fbf158cf9e9cfb8331c6ec7a228859fffc
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68447579"
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

*UIntType*\
Tipo di risultato Unsigned Integer. Per informazioni sui tipi possibili, vedere [\<random>](../standard-library/random.md).

*UN*\
**Moltiplicatore**. **Precondizione**: Vedere la sezione Osservazioni.

*C*\
**Incremento**. **Precondizione**: Vedere la sezione Osservazioni.

*M*\
**Modulo**. **Precondizione**: Vedere la sezione Osservazioni.

## <a name="members"></a>Members

||||
|-|-|-|
|`linear_congruential_engine::linear_congruential_engine`|`linear_congruential_engine::min`|`linear_congruential_engine::discard`|
|`linear_congruential_engine::operator()`|`linear_congruential_engine::max`|`linear_congruential_engine::seed`|

`default_seed` è una costante membro definita come `1u`, usata come valore di parametro predefinito per `linear_congruential_engine::seed` e per il costruttore a valore singolo.

Per altre informazioni sui membri del motore, vedere [\<random>](../standard-library/random.md).

## <a name="remarks"></a>Note

La classe modello `linear_congruential_engine` è il motore di generazione più semplice, ma non il più rapido o quello che offre la migliore qualità. Un miglioramento rispetto a questo motore è rappresentato da [substract_with_carry_engine](../standard-library/subtract-with-carry-engine-class.md). Nessuno di questi motori può tuttavia eguagliare la rapidità e la qualità dei risultati offerte da [mersenne_twister_engine](../standard-library/mersenne-twister-engine-class.md).

Il motore produce valori di un tipo integrale senza segno specificato dall'utente usando la relazione di ricorrenza (*period*) `x(i) = (A * x(i-1) + C) mod M`.

Se *M* è zero, il valore usato per questa operazione di modulo `numeric_limits<result_type>::max() + 1`è. L'ultimo valore restituito è lo stato del motore oppure il valore di seeding se non sono state effettuate chiamate a `operator()`.

Se *M* è diverso da zero, i valori degli argomenti di modello *A* e *C* devono essere minori di *m*.

Sebbene sia possibile costruire un generatore direttamente da questo motore, è anche possibile usare uno dei typedef predefiniti seguenti.

`minstd_rand0`: Motore del 1988 a standard minimo (Lewis, Goodman e Miller, 1969).

```cpp
typedef linear_congruential_engine<unsigned int, 16807, 0, 2147483647> minstd_rand0;
```

`minstd_rand`: Motore standard minimo `minstd_rand0` aggiornato (Park, Miller e Stockmeyer, 1993).

```cpp
typedef linear_congruential_engine<unsigned int, 48271, 0, 2147483647> minstd_rand;
```

Per altre informazioni sull'algoritmo del motore congruenziale lineare, vedere l'articolo di Wikipedia [Generatore lineare congruenziale](https://go.microsoft.com/fwlink/p/?linkid=402446).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<random>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[\<random>](../standard-library/random.md)

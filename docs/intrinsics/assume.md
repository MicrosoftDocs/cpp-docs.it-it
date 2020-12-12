---
description: 'Altre informazioni su: __assume'
title: __assume
ms.date: 09/02/2019
f1_keywords:
- __assume
- _assume
- __assume_cpp
helpviewer_keywords:
- __assume keyword [C++]
ms.assetid: d8565123-b132-44b1-8235-5a8c8bff85a7
ms.openlocfilehash: fd7f275a8b570bc6176f4464ee59f2656328cf30
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97337235"
---
# <a name="__assume"></a>__assume

**Specifico di Microsoft**

Passa un hint all'utilità di ottimizzazione.

## <a name="syntax"></a>Sintassi

```C
__assume(
   expression
)
```

### <a name="parameters"></a>Parametri

*espressione*\
Espressione che si presuppone restituisca true.

## <a name="remarks"></a>Commenti

L'utilità di ottimizzazione presuppone che la condizione rappresentata dal parametro `expression` sia true nel punto in cui viene visualizzata la parola chiave e rimanga true finché `expression` non viene modificato, ad esempio da un'assegnazione a una variabile. L'uso selettivo degli hint passati a Query Optimizer da **`__assume`** può migliorare l'ottimizzazione.

Se l' **`__assume`** istruzione viene scritta come contraddizione (un'espressione che restituisce sempre false), viene sempre considerata come `__assume(0)` . Se il codice non si comporta come previsto, verificare che il parametro `expression` definito sia valido e true, come descritto in precedenza. Per altre informazioni sul comportamento previsto di `__assume(0)`, vedere quanto descritto più avanti.

> [!WARNING]
> Un programma non deve contenere un'istruzione non valida **`__assume`** in un percorso raggiungibile. Se il compilatore è in grado di raggiungere un'istruzione non valida **`__assume`** , il programma potrebbe causare un comportamento imprevedibile e potenzialmente pericoloso.

`__assume` non è una funzione intrinseca originale. Non deve essere dichiarata come funzione e non può essere usata in una direttiva `#pragma intrinsic`. Anche se non viene generato alcun codice, viene interessato il codice generato dall'utilità di ottimizzazione.

Utilizzare **`__assume`** in un' [asserzione](../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) solo se l'asserzione non è reversibile. Non usare **`__assume`** in un'asserzione per cui si dispone di un codice di ripristino di errore successivo, perché il compilatore potrebbe ottimizzare il codice di gestione degli errori.

L'istruzione `__assume(0)` è un caso speciale. Usare `__assume(0)` per indicare un percorso del codice che non può essere raggiunto. L'esempio seguente illustra come usare `__assume(0)` per indicare che il caso predefinito di un'istruzione switch non può essere raggiunto. Viene illustrato l'uso più comune di `__assume(0)`.

Per compatibilità con le versioni precedenti, **`_assume`** è un sinonimo di, a **`__assume`** meno che non sia specificata l'opzione del compilatore [/za \( Disable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md) .

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|**`__assume`**|x86, ARM, x64, ARM64|

## <a name="example"></a>Esempio

```cpp
// compiler_intrinsics__assume.cpp
#ifdef DEBUG
# define ASSERT(e)    ( ((e) || assert(__FILE__, __LINE__) )
#else
# define ASSERT(e)    ( __assume(e) )
#endif

void func1(int i)
{
}

int main(int p)
{
   switch(p){
      case 1:
         func1(1);
         break;
      case 2:
         func1(-1);
         break;
      default:
         __assume(0);
            // This tells the optimizer that the default
            // cannot be reached. As so, it does not have to generate
            // the extra code to check that 'p' has a value
            // not represented by a case arm. This makes the switch
            // run faster.
   }
}
```

L'uso di `__assume(0)` indica all'utilità di ottimizzazione che il caso predefinito non può essere raggiunto. L'esempio illustra che il programmatore conosce che gli unici input possibili per `p` sono 1 o 2. Se viene passato un altro valore per `p`, il programma diventa non valido e causa un comportamento imprevedibile.

A causa dell'istruzione `__assume(0)`, il compilatore non genera il codice per testare se `p` ha un valore che non è rappresentato in un'istruzione case. Per funzionare, l'istruzione `__assume(0)` deve essere la prima istruzione nel corpo del caso predefinito.

Poiché il compilatore genera codice basato su **`__assume`** , il codice potrebbe non essere eseguito correttamente se l'espressione all'interno dell' **`__assume`** istruzione è false in fase di esecuzione. Se non si è certi che l'espressione sarà sempre true al runtime, è possibile usare la funzione `assert` per proteggere il codice.

```C
#define ASSERT(e)    ( ((e) || assert(__FILE__, __LINE__)), __assume(e) )
```

Purtroppo, l'uso della funzione `assert` impedisce al compilatore di eseguire l'ottimizzazione del caso predefinito descritto precedentemente in questo documento. In alternativa, è possibile usare una macro separata, come illustrato di seguito.

```C
#ifdef DEBUG
# define NODEFAULT   ASSERT(0)
#else
# define NODEFAULT   __assume(0)
#endif

   default:
      NODEFAULT;
```

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[Parole chiave](../cpp/keywords-cpp.md)

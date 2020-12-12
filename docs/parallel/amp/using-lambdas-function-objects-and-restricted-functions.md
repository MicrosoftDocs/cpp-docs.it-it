---
description: 'Altre informazioni su: uso di espressioni lambda, oggetti funzione e funzioni con restrizioni'
title: Utilizzo di espressioni lambda, oggetti funzione e funzioni con restrizioni
ms.date: 11/04/2016
ms.assetid: 25346cc9-869d-4ada-aad3-e2228cad3d6c
ms.openlocfilehash: bef02f30b5d5b5f11b8051c7a596ac0a141eef0a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97314451"
---
# <a name="using-lambdas-function-objects-and-restricted-functions"></a>Utilizzo di espressioni lambda, oggetti funzione e funzioni con restrizioni

Il codice C++ AMP che si vuole eseguire sull'acceleratore viene specificato come argomento in una chiamata al metodo [parallel_for_each](reference/concurrency-namespace-functions-amp.md#parallel_for_each) . È possibile specificare un'espressione lambda o un oggetto funzione (functor) come argomento. Inoltre, l'espressione lambda o l'oggetto funzione può chiamare una funzione con restrizioni C++ AMP. In questo argomento viene utilizzato un algoritmo di aggiunta della matrice per illustrare espressioni lambda, oggetti funzione e funzioni limitate. Nell'esempio seguente viene illustrato l'algoritmo senza C++ AMP codice. Vengono create matrici 2 1-dimensionali di uguale lunghezza. Gli elementi integer corrispondenti vengono aggiunti e archiviati in una terza matrice unidimensionale. C++ AMP non viene utilizzato.

```cpp
void CpuMethod() {

    int aCPP[] = {1, 2, 3, 4, 5};
    int bCPP[] = {6, 7, 8, 9, 10};
    int sumCPP[5];

    for (int idx = 0; idx <5; idx++)
    {
        sumCPP[idx] = aCPP[idx] + bCPP[idx];
    }

    for (int idx = 0; idx <5; idx++)
    {
        std::cout <<sumCPP[idx] <<"\n";
    }
}
```

## <a name="lambda-expression"></a>Espressione lambda

L'utilizzo di un'espressione lambda rappresenta il modo più diretto per utilizzare C++ AMP per riscrivere il codice.

```cpp
void AddArraysWithLambda() {
    int aCPP[] = {1, 2, 3, 4, 5};
    int bCPP[] = {6, 7, 8, 9, 10};
    int sumCPP[5];

    array_view<const int, 1> a(5, aCPP);

    array_view<const int, 1> b(5, bCPP);

    array_view<int, 1> sum(5, sumCPP);

    sum.discard_data();

    parallel_for_each(
        sum.extent,
        [=](index<1> idx) restrict(amp)
        {
             sum[idx] = a[idx] + b[idx];
        });

    for (int i = 0; i <5; i++) {
        std::cout <<sum[i] <<"\n";
    }
}
```

L'espressione lambda deve includere un parametro di indicizzazione e deve includere `restrict(amp)` . Nell'esempio, l'oggetto [array_view](../../parallel/amp/reference/array-view-class.md) `sum` ha un rango pari a 1. Pertanto, il parametro per l'istruzione lambda è un oggetto [Indice](../../parallel/amp/reference/index-class.md) con rango 1. In fase di esecuzione, l'espressione lambda viene eseguita una volta per ogni elemento nell'oggetto [array_view](../../parallel/amp/reference/array-view-class.md) . Per altre informazioni, vedere [sintassi delle espressioni lambda](../../cpp/lambda-expression-syntax.md).

## <a name="function-object"></a>Oggetto Function

È possibile fattorizzare il codice dell'acceleratore in un oggetto funzione.

```cpp
class AdditionFunctionObject
{
public:
    AdditionFunctionObject(const array_view<int, 1>& a,
    const array_view<int, 1>& b,
    const array_view<int, 1>& sum)
    : a(a), b(b), sum(sum)
    {
    }

    void operator()(index<1> idx) restrict(amp)
    {
        sum[idx] = a[idx] + b[idx];
    }

private:
    array_view<int, 1> a;
    array_view<int, 1> b;
    array_view<int, 1> sum;
};

void AddArraysWithFunctionObject() {
    int aCPP[] = {1, 2, 3, 4, 5};
    int bCPP[] = {6, 7, 8, 9, 10};
    int sumCPP[5];

    array_view<const int, 1> a(5, aCPP);

    array_view<const int, 1> b(5, bCPP);

    array_view<int, 1> sum(5, sumCPP);

    sum.discard_data();

    parallel_for_each(
        sum.extent,
        AdditionFunctionObject(a, b, sum));

    for (int i = 0; i <5; i++) {
        std::cout <<sum[i] <<"\n";
    }
}
```

L'oggetto funzione deve includere un costruttore e deve includere un overload dell'operatore di chiamata di funzione. L'operatore di chiamata di funzione deve includere un parametro di indicizzazione. Un'istanza dell'oggetto funzione viene passata come secondo argomento al metodo [parallel_for_each](reference/concurrency-namespace-functions-amp.md#parallel_for_each) . In questo esempio tre oggetti [array_view](../../parallel/amp/reference/array-view-class.md) vengono passati al costruttore dell'oggetto funzione. Il valore di [array_view](../../parallel/amp/reference/array-view-class.md) dell'oggetto `sum` è 1. Pertanto, il parametro per l'operatore di chiamata di funzione è un oggetto [Indice](../../parallel/amp/reference/index-class.md) con rango 1. In fase di esecuzione, la funzione viene eseguita una volta per ogni elemento nell'oggetto [array_view](../../parallel/amp/reference/array-view-class.md) . Per ulteriori informazioni, vedere la pagina relativa alla [chiamata di funzione](../../cpp/function-call-cpp.md) e [agli oggetti funzione nella libreria standard C++](../../standard-library/function-objects-in-the-stl.md).

## <a name="c-amp-restricted-function"></a>Funzione AMP-Restricted C++

È possibile fattorizzare ulteriormente il codice dell'acceleratore creando una funzione con restrizioni e chiamandola da un'espressione lambda o un oggetto funzione. Nell'esempio di codice seguente viene illustrato come chiamare una funzione con restrizioni da un'espressione lambda.

```cpp
void AddElementsWithRestrictedFunction(index<1> idx, array_view<int, 1> sum, array_view<int, 1> a, array_view<int, 1> b) restrict(amp)
{
    sum[idx] = a[idx] + b[idx];
}

void AddArraysWithFunction() {

    int aCPP[] = {1, 2, 3, 4, 5};
    int bCPP[] = {6, 7, 8, 9, 10};
    int sumCPP[5];

    array_view<int, 1> a(5, aCPP);

    array_view<int, 1> b(5, bCPP);

    array_view<int, 1> sum(5, sumCPP);

    sum.discard_data();

    parallel_for_each(
        sum.extent,
        [=](index<1> idx) restrict(amp)
        {
            AddElementsWithRestrictedFunction(idx, sum, a, b);
        });

    for (int i = 0; i <5; i++) {
        std::cout <<sum[i] <<"\n";
    }
}
```

La funzione con restrizioni deve includere `restrict(amp)` e conformarsi alle restrizioni descritte in [restrict (C++ amp)](../../cpp/restrict-cpp-amp.md).

## <a name="see-also"></a>Vedi anche

[C++ AMP (C++ Accelerated Massive Parallelism)](../../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)<br/>
[Sintassi delle espressioni lambda](../../cpp/lambda-expression-syntax.md)<br/>
[Chiamata di funzione](../../cpp/function-call-cpp.md)<br/>
[Oggetti funzione nella libreria standard C++](../../standard-library/function-objects-in-the-stl.md)<br/>
[restrict (C++ AMP)](../../cpp/restrict-cpp-amp.md)

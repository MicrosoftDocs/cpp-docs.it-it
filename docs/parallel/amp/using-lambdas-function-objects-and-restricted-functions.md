---
title: Utilizzo di espressioni lambda, oggetti funzione e funzioni con restrizioni
ms.date: 11/04/2016
ms.assetid: 25346cc9-869d-4ada-aad3-e2228cad3d6c
ms.openlocfilehash: 0c72ae6f600fe73405481e34ab05b60f163e44d2
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62405326"
---
# <a name="using-lambdas-function-objects-and-restricted-functions"></a>Utilizzo di espressioni lambda, oggetti funzione e funzioni con restrizioni

Il C++ codice AMP che si desidera eseguire sull'acceleratore viene specificato come argomento in una chiamata per il [parallel_for_each](reference/concurrency-namespace-functions-amp.md#parallel_for_each) metodo. È possibile specificare un'espressione lambda o un oggetto funzione (functor) come argomento. Inoltre, la lambda espressione o l'oggetto funzione può chiamare una funzione con limitazioni AMP C++. In questo argomento Usa un algoritmo di somma di matrice per illustrare le espressioni lambda, oggetti funzione e funzioni con restrizioni. Nell'esempio seguente viene illustrato l'algoritmo senza codice C++ AMP. Vengono create due matrici 1-dimensionale di uguale lunghezza. Gli elementi integer corrispondenti vengono aggiunti e archiviati in una terza matrice dimensionale-1. C++ AMP non viene utilizzato.

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

Utilizzo di un'espressione lambda è il modo più diretto per utilizzare C++ AMP per riscrivere il codice.

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

L'espressione lambda deve includere un parametro indicizzante e deve includere `restrict(amp)`. Nell'esempio, il [array_view](../../parallel/amp/reference/array-view-class.md) `sum` oggetto ha un rango pari a 1. Pertanto, il parametro verso la lambda espressione è un' [indice](../../parallel/amp/reference/index-class.md) oggetto con rango 1. In fase di esecuzione, l'espressione lambda viene eseguita una sola volta per ogni elemento di [array_view](../../parallel/amp/reference/array-view-class.md) oggetto. Per altre informazioni, vedere [sintassi delle espressioni Lambda](../../cpp/lambda-expression-syntax.md).

## <a name="function-object"></a>Oggetto Function

È possibile scomporre il codice dell'acceleratore in un oggetto funzione.

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

L'oggetto della funzione deve includere un costruttore e deve includere un overload dell'operatore di chiamata di funzione. L'operatore di chiamata di funzione deve includere un parametro indicizzante. Un'istanza dell'oggetto funzione viene passata come secondo argomento per il [parallel_for_each](reference/concurrency-namespace-functions-amp.md#parallel_for_each) (metodo). In questo esempio, tre [array_view](../../parallel/amp/reference/array-view-class.md) gli oggetti vengono passati al costruttore dell'oggetto funzione. Il [array_view](../../parallel/amp/reference/array-view-class.md) oggetto `sum` ha rango uguale a 1. Pertanto, il parametro per l'operatore di chiamata di funzione è un [indice](../../parallel/amp/reference/index-class.md) oggetto con rango 1. In fase di esecuzione, la funzione viene eseguita una sola volta per ogni elemento di [array_view](../../parallel/amp/reference/array-view-class.md) oggetto. Per altre informazioni, vedere [chiamata di funzione](../../cpp/function-call-cpp.md) e [oggetti funzione della libreria Standard C++](../../standard-library/function-objects-in-the-stl.md).

## <a name="c-amp-restricted-function"></a>Funzione con limitazioni AMP C++

È possibile scomporre ulteriormente il codice dell'acceleratore creando una funzione limitata e chiamandola da una lambda espressione o un oggetto funzione. Esempio di codice seguente viene illustrato come chiamare una funzione limitata da un'espressione lambda.

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

La funzione limitata deve includere `restrict(amp)` e devono essere conformi alle restrizioni descritte in [limitare (C++ AMP)](../../cpp/restrict-cpp-amp.md).

## <a name="see-also"></a>Vedere anche

[C++ AMP (C++ Accelerated Massive Parallelism)](../../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)<br/>
[Sintassi delle espressioni lambda](../../cpp/lambda-expression-syntax.md)<br/>
[Chiamata di funzione](../../cpp/function-call-cpp.md)<br/>
[Oggetti funzione della libreria standard C++](../../standard-library/function-objects-in-the-stl.md)<br/>
[restrict (C++ AMP)](../../cpp/restrict-cpp-amp.md)

---
title: Utilizzando le espressioni lambda, oggetti funzione e funzioni con restrizioni | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 25346cc9-869d-4ada-aad3-e2228cad3d6c
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: afec84ba6e3c007e576c37b4a7afc71fe62691ea
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="using-lambdas-function-objects-and-restricted-functions"></a>Utilizzo di espressioni lambda, oggetti funzione e funzioni con restrizioni
Il codice C++ AMP che si desidera eseguire nel tasto di scelta rapida viene specificato come argomento in una chiamata al [parallel_for_each](reference/concurrency-namespace-functions-amp.md#parallel_for_each) metodo. È possibile fornire un'espressione lambda o un oggetto funzione (functor) come argomento. Inoltre, l'oggetto di espressione o una funzione lambda può chiamare una funzione con restrizioni AMP C++. In questo argomento Usa un algoritmo di aggiunta di matrice per illustrare le espressioni lambda, oggetti funzione e funzioni con restrizioni. Nell'esempio seguente viene illustrato l'algoritmo senza codice C++ AMP. Vengono create due matrici di 1-dimensionale di lunghezza uguale. Gli elementi di tipo integer corrispondenti vengono aggiunti e archiviati in una terza matrice dimensionale a 1. C++ AMP non viene usato.  
  
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
 Tramite un'espressione lambda è il modo più diretto per utilizzare C++ AMP per riscrivere il codice.  
  
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
  
 L'espressione lambda deve includere un parametro di indicizzazione e deve includere `restrict(amp)`. Nell'esempio di [array_view](../../parallel/amp/reference/array-view-class.md) `sum` oggetto ha un rango pari a 1. Pertanto, il parametro per l'istruzione di espressione lambda è un [indice](../../parallel/amp/reference/index-class.md) oggetto con classificazione 1. In fase di esecuzione, l'espressione lambda viene eseguita una volta per ogni elemento di [array_view](../../parallel/amp/reference/array-view-class.md) oggetto. Per ulteriori informazioni, vedere [sintassi delle espressioni Lambda](../../cpp/lambda-expression-syntax.md).  
  
## <a name="function-object"></a>Oggetto Function  
 È possibile scomporre il codice tasto di scelta rapida in un oggetto funzione.  
  
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

 L'oggetto della funzione deve includere un costruttore e deve includere un overload dell'operatore di chiamata di funzione. L'operatore di chiamata di funzione deve includere un parametro di indicizzazione. Un'istanza dell'oggetto funzione viene passata come secondo argomento per il [parallel_for_each](reference/concurrency-namespace-functions-amp.md#parallel_for_each) metodo. In questo esempio, tre [array_view](../../parallel/amp/reference/array-view-class.md) oggetti vengono passati al costruttore dell'oggetto funzione. Il [array_view](../../parallel/amp/reference/array-view-class.md) oggetto `sum` con una classificazione pari a 1. Pertanto, il parametro dell'operatore di chiamata di funzione è un [indice](../../parallel/amp/reference/index-class.md) oggetto con classificazione 1. In fase di esecuzione, la funzione viene eseguita una volta per ogni elemento di [array_view](../../parallel/amp/reference/array-view-class.md) oggetto. Per ulteriori informazioni, vedere [chiamata di funzione](../../cpp/function-call-cpp.md) e [oggetti funzione nella libreria Standard C++](../../standard-library/function-objects-in-the-stl.md).  
  
## <a name="c-amp-restricted-function"></a>Funzione con restrizioni AMP C++  
 Tramite la creazione di una funzione con restrizioni e chiamata da un'espressione lambda o un oggetto funzione, è possibile scomporre ulteriormente il codice tasto di scelta rapida. Esempio di codice riportato di seguito viene illustrato come chiamare una funzione con restrizioni da un'espressione lambda.  
  
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
  
 La funzione con restrizioni deve includere `restrict(amp)` e devono essere conformi alle restrizioni descritte in [limitare (C++ AMP)](../../cpp/restrict-cpp-amp.md).  
  
## <a name="see-also"></a>Vedere anche  
 [C++ AMP (C++ Accelerated Massive Parallelism)](../../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)   
 [Sintassi delle espressioni lambda](../../cpp/lambda-expression-syntax.md)   
 [Chiamata di funzione](../../cpp/function-call-cpp.md)   
 [Oggetti funzione nella libreria Standard C++](../../standard-library/function-objects-in-the-stl.md)   
 [restrict (C++ AMP)](../../cpp/restrict-cpp-amp.md)


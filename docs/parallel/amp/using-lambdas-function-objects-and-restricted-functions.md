---
title: "Utilizzo di espressioni lambda, oggetti funzione e funzioni con restrizioni | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 25346cc9-869d-4ada-aad3-e2228cad3d6c
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Utilizzo di espressioni lambda, oggetti funzione e funzioni con restrizioni
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Il codice C\+\+ AMP che si desidera eseguire sull'acceleratore viene specificato come argomento nella chiamata al metodo [parallel\_for\_each](../Topic/parallel_for_each%20Function%20\(C++%20AMP\).md).  È possibile fornire una lambda espressione o un oggetto funzione \(functor\) come tale argomento.  Inoltre, la lambda espressione o l'oggetto funzione possono chiamare una funzione C\+\+ AMP limitata.  In questo argomento viene utilizzato un algoritmo di somma di matrice per illustrare le funzioni lambda, gli oggetti funzione e le funzioni limitate.  Nell'esempio riportato di seguito viene illustrato l'algoritmo senza codice C\+\+ AMP.  Vengono create due matrici monodimensionali di uguale lunghezza.  Gli elementi integer corrispondenti vengono sommati e memorizzati in una terza matrice monodimensionale.  C\+\+ AMP non viene utilizzato.  
  
```cpp  
  
void CpuMethod() {  
  
    int aCPP[] = {1, 2, 3, 4, 5};  
    int bCPP[] = {6, 7, 8, 9, 10};  
    int sumCPP[5];  
  
    for (int idx = 0; idx < 5; idx++)  
    {  
        sumCPP[idx] = aCPP[idx] + bCPP[idx];  
    }  
  
    for (int idx = 0; idx < 5; idx++)  
    {  
        std::cout << sumCPP[idx] << "\n";  
    }  
}  
  
```  
  
## Espressione lambda  
 Utilizzare una lambda espressione è il modo più diretto per usare C\+\+ AMP per riscrivere il codice.  
  
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
        }  
    );  
  
    for (int i = 0; i < 5; i++) {  
        std::cout << sum[i] << "\n";  
    }  
}  
  
```  
  
 La lambda espressione deve includere un parametro di indicizzazione e deve includere `restrict(amp)`.  Nell'esempio, l'oggetto [array\_view](../../parallel/amp/reference/array-view-class.md) `sum` ha rango uguale a 1.  Di conseguenza, il parametro verso la lambda espressione è un oggetto [indice](../../parallel/amp/reference/index-class.md) con rango 1.  In fase di esecuzione, l'espressione lambda viene eseguita una volta per ogni elemento dell'oggetto [array\_view](../../parallel/amp/reference/array-view-class.md).  Per ulteriori informazioni, vedere [Sintassi delle espressioni lambda](../../cpp/lambda-expression-syntax.md).  
  
## Oggetto Function  
 È possibile scomporre il codice dell' acceleratore in un oggetto funzione.  
  
```cpp  
  
class AdditionFunctionObject  
{  
public:  
    AdditionFunctionObject(const array_view<int, 1>& a,  
        const array_view<int, 1>& b,  
        const array_view<int, 1>& sum  
    )  
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
        AdditionFunctionObject(a, b, sum)  
    );  
  
    for (int i = 0; i < 5; i++) {  
        std::cout << sum[i] << "\n";  
    }  
}  
  
```  
  
 L'oggetto funzione deve includere un costruttore e deve includere un overload dell'operatore di chiamata a funzione.  L'operatore di chiamata a funzione deve includere un parametro indicizzante.  Un'istanza dell'oggetto funzione viene passata come secondo argomento al metodo [parallel\_for\_each](../Topic/parallel_for_each%20Function%20\(C++%20AMP\).md).  In questo esempio, tre oggetti [array\_view](../../parallel/amp/reference/array-view-class.md) vengono passati al costruttore dell'oggetto funzione.  L'oggetto `sum` [array\_view](../../parallel/amp/reference/array-view-class.md) ha rango 1.  Di conseguenza, il parametro dell'operatore chiamata a funzione è un oggetto [index](../../parallel/amp/reference/index-class.md) con rango 1.  In fase di esecuzione, la funzione viene eseguita una volta per ogni elemento dell'oggetto [array\_view](../../parallel/amp/reference/array-view-class.md).  Per ulteriori informazioni, vedere [Chiamata di funzione](../../cpp/function-call-cpp.md) e [Oggetti funzione nella libreria STL](../../standard-library/function-objects-in-the-stl.md).  
  
## Funzione C\+\+ AMP Limitata  
 È possibile scomporre ulteriormente il codice dell' acceleratore creando una funzione limitata e chiamandola da una lambda espressione o da un oggetto funzione.  Nell'esempio di codice riportato di seguito viene illustrato come chiamare una funzione limitata a partire da una lambda espressione.  
  
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
        }  
    );  
  
    for (int i = 0; i < 5; i++) {  
        std::cout << sum[i] << "\n";  
    }  
}  
  
```  
  
 La funzione limitata deve includere `restrict(amp)` ed essere conforme alle limitazioni descritte in [restrict \(C\+\+ AMP\)](../../cpp/restrict-cpp-amp.md).  
  
## Vedere anche  
 [C\+\+ AMP \(C\+\+ Accelerated Massive Parallelism\)](../../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)   
 [Sintassi delle espressioni lambda](../../cpp/lambda-expression-syntax.md)   
 [Chiamata di funzione](../../cpp/function-call-cpp.md)   
 [Oggetti funzione nella libreria STL](../../standard-library/function-objects-in-the-stl.md)   
 [restrict \(C\+\+ AMP\)](../../cpp/restrict-cpp-amp.md)
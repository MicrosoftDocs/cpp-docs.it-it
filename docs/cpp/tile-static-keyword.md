---
title: parola chiave tile_static | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- tile_static_CPP
dev_langs:
- C++
helpviewer_keywords:
- tile_static keyword
ms.assetid: d78384d4-65d9-45cf-b3df-7e904f489d06
caps.latest.revision: 12
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 499aa37bb082636dd2947fa6f64a5ecc3cdd5e10
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="tilestatic-keyword"></a>Parola chiave tile_static
La parola chiave `tile_static` viene utilizzata per dichiarare una variabile a cui è possibile accedere da tutti i thread in una sezione dei thread. La durata della variabile inizia quando l'esecuzione raggiunge il punto di dichiarazione e termina quando la funzione kernel restituisce. Per ulteriori informazioni sull'utilizzo di riquadri, vedere [utilizzando riquadri](../parallel/amp/using-tiles.md).  
  
 La parola chiave `tile_static` presenta le limitazioni riportate di seguito.  
  
-   Può essere utilizzata solo in variabili che si trovano in una funzione con il modificatore `restrict(amp)`.  
  
-   Non è possibile utilizzarla in variabili che sono puntatore o tipi di riferimento.  
  
-   Una variabile `tile_static` non può disporre di un inizializzatore. I costruttori e i distruttori predefiniti non vengono invocati automaticamente.  
  
-   Il valore di una variabile non inizializzata `tile_static` non è definito.  
  
-   Se una variabile `tile_static` viene dichiarata in un grafico delle chiamate che contiene una radice da una chiamata non affiancata a `parallel_for_each`, viene generato un avviso e il comportamento della variabile non è definito.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come una variabile `tile_static` può essere utilizzata per accumulare i dati tra diversi thread in una sezione.  
  
```cpp  
// Sample data:  
int sampledata[] = {  
    2, 2, 9, 7, 1, 4,  
    4, 4, 8, 8, 3, 4,  
    1, 5, 1, 2, 5, 2,  
    6, 8, 3, 2, 7, 2};  
  
// The tiles:  
// 2 2    9 7    1 4  
// 4 4    8 8    3 4  
//  
// 1 5    1 2    5 2  
// 6 8    3 2    7 2  
  
// Averages:  
int averagedata[] = {   
    0, 0, 0, 0, 0, 0,   
    0, 0, 0, 0, 0, 0,   
    0, 0, 0, 0, 0, 0,   
    0, 0, 0, 0, 0, 0,   
};  
  
array_view<int, 2> sample(4, 6, sampledata);  
array_view<int, 2> average(4, 6, averagedata);  
  
parallel_for_each(  
    // Create threads for sample.extent and divide the extent into 2 x 2 tiles.  
    sample.extent.tile<2,2>(),  
    [=](tiled_index<2,2> idx) restrict(amp)  
    {  
        // Create a 2 x 2 array to hold the values in this tile.  
        tile_static int nums[2][2];  
        // Copy the values for the tile into the 2 x 2 array.  
        nums[idx.local[1]][idx.local[0]] = sample[idx.global];  
        // When all the threads have executed and the 2 x 2 array is complete, find the average.  
        idx.barrier.wait();  
        int sum = nums[0][0] + nums[0][1] + nums[1][0] + nums[1][1];  
        // Copy the average into the array_view.  
        average[idx.global] = sum / 4;  
      }  
);  
  
for (int i = 0; i < 4; i++) {  
    for (int j = 0; j < 6; j++) {  
        std::cout << average(i,j) << " ";  
    }  
    std::cout << "\n";  
}  
  
// Output:  
// 3 3 8 8 3 3  
// 3 3 8 8 3 3  
// 5 5 2 2 4 4  
// 5 5 2 2 4 4  
// Sample data.  
int sampledata[] = {  
    2, 2, 9, 7, 1, 4,  
    4, 4, 8, 8, 3, 4,  
    1, 5, 1, 2, 5, 2,  
    6, 8, 3, 2, 7, 2};  
  
// The tiles are:  
// 2 2    9 7    1 4  
// 4 4    8 8    3 4  
//  
// 1 5    1 2    5 2  
// 6 8    3 2    7 2  
  
// Averages.  
int averagedata[] = {   
    0, 0, 0, 0, 0, 0,   
    0, 0, 0, 0, 0, 0,   
    0, 0, 0, 0, 0, 0,   
    0, 0, 0, 0, 0, 0,   
};  
  
array_view<int, 2> sample(4, 6, sampledata);  
array_view<int, 2> average(4, 6, averagedata);  
  
parallel_for_each(  
    // Create threads for sample.grid and divide the grid into 2 x 2 tiles.  
    sample.extent.tile<2,2>(),  
    [=](tiled_index<2,2> idx) restrict(amp)  
    {  
        // Create a 2 x 2 array to hold the values in this tile.  
        tile_static int nums[2][2];  
        // Copy the values for the tile into the 2 x 2 array.  
        nums[idx.local[1]][idx.local[0]] = sample[idx.global];  
        // When all the threads have executed and the 2 x 2 array is complete, find the average.  
        idx.barrier.wait();  
        int sum = nums[0][0] + nums[0][1] + nums[1][0] + nums[1][1];  
        // Copy the average into the array_view.  
        average[idx.global] = sum / 4;  
      }  
);  
  
for (int i = 0; i < 4; i++) {  
    for (int j = 0; j < 6; j++) {  
        std::cout << average(i,j) << " ";  
    }  
    std::cout << "\n";  
}  
  
// Output.  
// 3 3 8 8 3 3  
// 3 3 8 8 3 3  
// 5 5 2 2 4 4  
// 5 5 2 2 4 4  
  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Modificatori specifici Microsoft](../cpp/microsoft-specific-modifiers.md)   
 [Panoramica di C++ AMP](../parallel/amp/cpp-amp-overview.md)   
 [parallel_for_each (funzione) (C++ AMP)](../parallel/amp/reference/concurrency-namespace-functions-amp.md#parallel_for_each)   
 [Procedura dettagliata: moltiplicazione di matrici](../parallel/amp/walkthrough-matrix-multiplication.md)

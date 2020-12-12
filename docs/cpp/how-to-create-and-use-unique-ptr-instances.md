---
description: 'Altre informazioni su: procedura: creare e usare istanze di unique_ptr'
title: 'Procedura: Creare e usare istanze unique_ptr'
ms.custom: how-to
ms.date: 11/19/2018
ms.topic: conceptual
ms.assetid: 9a373030-e587-452f-b9a5-c5f9d58b7673
ms.openlocfilehash: a53b3a9704c62803b50c9bde2c7db70c190a8008
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97268665"
---
# <a name="how-to-create-and-use-unique_ptr-instances"></a>Procedura: Creare e usare istanze unique_ptr

Un [unique_ptr](../standard-library/unique-ptr-class.md) non condivide il puntatore. Non può essere copiato in un altro `unique_ptr` , passato per valore a una funzione o usato in qualsiasi algoritmo della libreria standard C++ che richiede la copia. È possibile solo spostare un oggetto `unique_ptr`. Ciò significa che la proprietà della risorsa di memoria viene trasferita a un altro `unique_ptr` e l'oggetto `unique_ptr` originale non è più proprietario della risorsa. Si consiglia di limitare un oggetto a un solo proprietario, poiché la proprietà multipla rende più complessa la logica del programma. Pertanto, quando è necessario un puntatore intelligente per un oggetto C++ normale, utilizzare `unique_ptr` e quando si costruisce un oggetto `unique_ptr` , utilizzare la funzione di supporto [make_unique](../standard-library/memory-functions.md#make_unique) .

Nel diagramma seguente è illustrato il passaggio di proprietà tra due istanze di `unique_ptr`.

![Trasferimento della proprietà di un&#95;PTR univoco](media/unique_ptr.png "Trasferimento della proprietà di un&#95;PTR univoco")

`unique_ptr` viene definito nell' `<memory>` intestazione della libreria standard C++. È esattamente efficiente come un puntatore non elaborato e può essere usato nei contenitori della libreria standard C++. L'aggiunta di `unique_ptr` istanze ai contenitori della libreria standard C++ è efficace perché il costruttore di spostamento di `unique_ptr` Elimina la necessità di un'operazione di copia.

## <a name="example-1"></a>Esempio 1

Nell'esempio seguente viene illustrato come creare istanze di `unique_ptr` e passarle tra funzioni.

[!code-cpp[stl_smart_pointers#210](codesnippet/CPP/how-to-create-and-use-unique-ptr-instances_1.cpp)]

In questi esempi viene illustrata la caratteristica di base di `unique_ptr`, che può essere spostato, ma non copiato. Lo spostamento ("move") trasferisce la proprietà a un nuovo oggetto `unique_ptr` e reimposta l'oggetto `unique_ptr`precedente.

## <a name="example-2"></a>Esempio 2

Nell'esempio seguente viene illustrato come creare istanze di `unique_ptr` e utilizzarle in un vettore.

[!code-cpp[stl_smart_pointers#211](codesnippet/CPP/how-to-create-and-use-unique-ptr-instances_2.cpp)]

Nell'intervallo per il ciclo, si noti che `unique_ptr` viene passato per riferimento. Se si tenta di passare per valore, il compilatore genererà un errore perché il costruttore di copia `unique_ptr` viene eliminato.

## <a name="example-3"></a>Esempio 3

Nell'esempio seguente viene illustrato come inizializzare un `unique_ptr` che è un membro di classe.

[!code-cpp[stl_smart_pointers#212](codesnippet/CPP/how-to-create-and-use-unique-ptr-instances_3.cpp)]

## <a name="example-4"></a>Esempio 4

È possibile utilizzare [make_unique](../standard-library/memory-functions.md#make_unique) per creare un oggetto `unique_ptr` in una matrice, ma non è possibile utilizzare `make_unique` per inizializzare gli elementi della matrice.

[!code-cpp[stl_smart_pointers#213](codesnippet/CPP/how-to-create-and-use-unique-ptr-instances_4.cpp)]

Per altri esempi, vedere [make_unique](../standard-library/memory-functions.md#make_unique).

## <a name="see-also"></a>Vedi anche

[Puntatori intelligenti (C++ moderno)](smart-pointers-modern-cpp.md)<br/>
[make_unique](../standard-library/memory-functions.md#make_unique)

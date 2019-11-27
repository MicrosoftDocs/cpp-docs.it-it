---
title: 'Procedura: creare e utilizzare istanze di unique_ptr'
ms.custom: how-to
ms.date: 11/19/2018
ms.topic: conceptual
ms.assetid: 9a373030-e587-452f-b9a5-c5f9d58b7673
ms.openlocfilehash: 4b3362f71d1ccab0efb03d7e8705c6b3f25f9780
ms.sourcegitcommit: 654aecaeb5d3e3fe6bc926bafd6d5ace0d20a80e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2019
ms.locfileid: "74246530"
---
# <a name="how-to-create-and-use-unique_ptr-instances"></a>Procedura: creare e utilizzare istanze di unique_ptr

Un [unique_ptr](../standard-library/unique-ptr-class.md) non condivide il puntatore. Non può essere copiato in un altro `unique_ptr`, passato per valore a una funzione o utilizzato in qualsiasi C++ algoritmo della libreria standard che richiede la copia. È possibile solo spostare un oggetto `unique_ptr`. Ciò significa che la proprietà della risorsa di memoria viene trasferita a un altro `unique_ptr` e l'oggetto `unique_ptr` originale non è più proprietario della risorsa. Si consiglia di limitare un oggetto a un solo proprietario, poiché la proprietà multipla rende più complessa la logica del programma. Pertanto, quando è necessario un puntatore intelligente per un oggetto C++ normale, utilizzare `unique_ptr`e quando si costruisce una `unique_ptr`, utilizzare la funzione di supporto [make_unique](../standard-library/memory-functions.md#make_unique) .

Nel diagramma seguente è illustrato il passaggio di proprietà tra due istanze di `unique_ptr`.

![Trasferimento della proprietà di un PTR&#95;univoco](media/unique_ptr.png "Trasferimento della proprietà di un PTR&#95;univoco")

`unique_ptr` viene definito nell'intestazione `<memory>` nella libreria C++ standard. È esattamente efficiente come un puntatore non elaborato e può essere utilizzato nei contenitori C++ di libreria standard. L'aggiunta di `unique_ptr` istanze ai C++ contenitori della libreria standard è efficace perché il costruttore di spostamento della `unique_ptr` Elimina la necessità di un'operazione di copia.

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

È possibile utilizzare [make_unique](../standard-library/memory-functions.md#make_unique) per creare un `unique_ptr` a una matrice, ma non è possibile utilizzare `make_unique` per inizializzare gli elementi della matrice.

[!code-cpp[stl_smart_pointers#213](codesnippet/CPP/how-to-create-and-use-unique-ptr-instances_4.cpp)]

Per altri esempi, vedere [make_unique](../standard-library/memory-functions.md#make_unique).

## <a name="see-also"></a>Vedere anche

[Puntatori intelligenti (C++ moderno)](smart-pointers-modern-cpp.md)<br/>
[make_unique](../standard-library/memory-functions.md#make_unique)

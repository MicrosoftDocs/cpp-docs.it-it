---
title: Classe pointer_to_unary_function
ms.date: 02/21/2019
f1_keywords:
- functional/std::pointer_to_unary
helpviewer_keywords:
- pointer_to_unary_function function
- pointer_to_unary_function class
ms.assetid: 05600207-b916-4759-beca-6b6facd2d6f6
ms.openlocfilehash: 2b6bf82faa39e22c5af584a9fc3ebf68f5851463
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72689132"
---
# <a name="pointer_to_unary_function-class"></a>Classe pointer_to_unary_function

Converte un puntatore a funzione unaria in una funzione unaria adattabile. Deprecato in C++ 11, rimosso in C++ 17.

## <a name="syntax"></a>Sintassi

```cpp
template <class Arg, class Result>
class pointer_to_unary_function
    : public unary_function<Arg, Result>
{
    explicit pointer_to_unary_function(Result(*pfunc)(Arg));
    Result operator()(Arg left) const;
};
```

### <a name="parameters"></a>Parametri

\ *pfunc*
Funzione binaria da convertire.

\ a *sinistra*
Oggetto su cui viene chiamata la funzione *\*pfunc*.

## <a name="return-value"></a>Valore restituito

Il modello di classe archivia una copia di `pfunc`. Definisce la relativa funzione membro `operator()` che restituisce (\* **pfunc**)(_ *Left*).

## <a name="remarks"></a>Note

Un puntatore a funzione unaria è un oggetto funzione e può essere passato a qualsiasi algoritmo della libreria standard C++ che prevede una funzione unaria come parametro, ma non è adattabile. Per usarlo con un adattatore, ad esempio per associarvi un valore o usarlo con un negazionitore, è necessario che venga fornito con i tipi annidati `argument_type` e `result_type` che rendono possibile tale adattamento. La conversione da `pointer_to_unary_function` consente il funzionamento degli adattatori di funzione con i puntatori a funzione binaria.

## <a name="example"></a>Esempio

Il costruttore di `pointer_to_unary_function` viene usato di rado in modo diretto. Vedere la funzione helper [ptr_fun](../standard-library/functional-functions.md#ptr_fun) per indicazioni su come dichiarare e usare il predicato dell'adattatore `pointer_to_unary_function`.

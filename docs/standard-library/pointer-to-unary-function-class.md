---
title: Classe pointer_to_unary_function
ms.date: 02/21/2019
f1_keywords:
- functional/std::pointer_to_unary
helpviewer_keywords:
- pointer_to_unary_function function
- pointer_to_unary_function class
ms.assetid: 05600207-b916-4759-beca-6b6facd2d6f6
ms.openlocfilehash: cff84f1f15eea34c60162f702dfe05350d1383d1
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68240459"
---
# <a name="pointertounaryfunction-class"></a>Classe pointer_to_unary_function

Converte un puntatore a funzione unaria in una funzione unaria adattabile. Deprecate in c++11, rimossi in c++17.

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

*pfunc*\
Funzione binaria da convertire.

*A sinistra*\
Oggetto su cui viene chiamata la funzione *\*pfunc*.

## <a name="return-value"></a>Valore restituito

La classe modello archivia una copia di `pfunc`. Definisce la relativa funzione membro `operator()` che restituisce (\* **pfunc**)(_ *Left*).

## <a name="remarks"></a>Note

Un puntatore a funzione unaria è un oggetto funzione e può essere passato a qualsiasi algoritmo della libreria standard C++ che prevede una funzione unaria come parametro, ma non è adattabile. Per usarlo con un adattatore, ad esempio in associazione a un valore o con un negator, deve essere fornito con i tipi annidati `argument_type` e `result_type` che rendono possibile tale adattamento. La conversione da `pointer_to_unary_function` consente il funzionamento degli adattatori di funzione con i puntatori a funzione binaria.

## <a name="example"></a>Esempio

Il costruttore di `pointer_to_unary_function` viene usato di rado in modo diretto. Vedere la funzione helper [ptr_fun](../standard-library/functional-functions.md#ptr_fun) per indicazioni su come dichiarare e usare il predicato dell'adattatore `pointer_to_unary_function`.

---
title: Classe const_mem_fun1_ref_t
ms.date: 02/21/2019
f1_keywords:
- functional/std::const_mem_fun1_ref_t
helpviewer_keywords:
- const_mem_fun1_ref_t class
ms.assetid: 8220d373-fa1c-44be-a21d-96d49b3ea6bb
ms.openlocfilehash: 21d53178bf7ed80b5e0b170619e6221826393dab
ms.sourcegitcommit: 4299caac2dc9e806c74ac833d856a3838b0f52a1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/28/2019
ms.locfileid: "57006448"
---
# <a name="constmemfun1reft-class"></a>Classe const_mem_fun1_ref_t

Classe di adattatori che consente a una funzione membro **const** che accetta un singolo argomento di essere chiamata come oggetto funzione binaria, una volta inizializzata con un argomento di riferimento. Deprecate in c++11, rimossi in c++17.

## <a name="syntax"></a>Sintassi

```cpp
template <class Result, class Type, class Arg>
class const_mem_fun1_ref_t
: public binary_function<Type, Arg, Result>
{
    explicit const_mem_fun1_ref_t(Result (Type::* Pm)(Arg) const);
    Result operator()(const Type& left, Arg right) const;
};
```

### <a name="parameters"></a>Parametri

*Pm*<br/>
Puntatore alla funzione membro di classe `Type` da convertire in un oggetto funzione.

*left*<br/>
Il **const** oggetto a cui il *Pm* funzione membro viene chiamata su.

*right*<br/>
L'argomento che viene assegnato a *Pm*.

## <a name="return-value"></a>Valore restituito

Funzione binaria adattabile.

## <a name="remarks"></a>Note

La classe modello archivia una copia della *Pm*, che deve essere un puntatore a una funzione membro della classe `Type`, in un oggetto membro privato. Definisce la relativa funzione membro `operator()` che restituisce ( `left`.\* *Pm*)( `right`) **const**.

## <a name="example"></a>Esempio

Il costruttore di `const_mem_fun1_ref_t` non viene usato in genere direttamente; per adattare le funzioni membro, viene usata la funzione di supporto `mem_fun_ref`. Per esempi di come usare gli adattatori di funzione membro, vedere [mem_fun_ref](../standard-library/functional-functions.md#mem_fun_ref).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<functional>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>

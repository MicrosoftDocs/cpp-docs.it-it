---
title: '&lt;vector&gt;'
ms.date: 11/04/2016
f1_keywords:
- <vector>
helpviewer_keywords:
- vector header
ms.assetid: c1431ad8-c0b6-4dbb-89c4-5f651e432d7f
ms.openlocfilehash: 348b5c53ecd3fb7900d03fed7c1209a2c94eeb4c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62410856"
---
# <a name="ltvectorgt"></a>&lt;vector&gt;

Definisce il vettore della classe modello del contenitore e diversi modelli di supporto.

L'oggetto `vector` è un contenitore che consente di organizzare gli elementi di un determinato tipo in una sequenza lineare. Consente l'accesso casuale veloce a qualsiasi elemento e aggiunte e rimozioni dinamiche nella sequenza. L'oggetto `vector`è il contenitore preferito per una sequenza quando le prestazioni di accesso casuale sono scarse.

Per altre informazioni sulla classe `vector`, vedere [Classe vector](../standard-library/vector-class.md). Per informazioni sulla specializzazione `vector<bool>`, vedere [Classe vector\<bool>](../standard-library/vector-bool-class.md).

## <a name="syntax"></a>Sintassi

```cpp
namespace std {
template <class Type, class Allocator>
class vector;
template <class Allocator>
class vector<bool>;

template <class Allocator>
struct hash<vector<bool, Allocator>>;

// TEMPLATE FUNCTIONS
template <class Type, class Allocator>
bool operator== (
    const vector<Type, Allocator>& left,
    const vector<Type, Allocator>& right);

template <class Type, class Allocator>
bool operator!= (
    const vector<Type, Allocator>& left,
    const vector<Type, Allocator>& right);

template <class Type, class Allocator>
bool operator<(
    const vector<Type, Allocator>& left,
    const vector<Type, Allocator>& right);

template <class Type, class Allocator>
bool operator> (
    const vector<Type, Allocator>& left,
    const vector<Type, Allocator>& right);

template <class Type, class Allocator>
bool operator<= (
    const vector<Type, Allocator>& left,
    const vector<Type, Allocator>& right);

template <class Type, class Allocator>
bool operator>= (
    const vector<Type, Allocator>& left,
    const vector<Type, Allocator>& right);

template <class Type, class Allocator>
void swap (
    vector<Type, Allocator>& left,
    vector<Type, Allocator>& right);

}  // namespace std
```

### <a name="parameters"></a>Parametri

*Type*<br/>
Parametro di modello per il tipo di dati archiviati nel vettore.

*Allocatore*<br/>
Parametro di modello per l'oggetto allocatore archiviato responsabile dell'allocazione e disallocazione della memoria.

*left*<br/>
Primo vettore (a sinistra) in un'operazione di confronto.

*right*<br/>
Secondo vettore (a destra) in un'operazione di confronto.

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operator! =](../standard-library/vector-operators.md#op_neq)|Verifica se l'oggetto vettore a sinistra dell'operatore non è uguale all'oggetto vettore a destra.|
|[operator<](../standard-library/vector-operators.md#op_lt)|Verifica se l'oggetto vettore a sinistra dell'operatore è minore dell'oggetto vettore a destra.|
|[operator\<=](../standard-library/vector-operators.md#op_gt_eq)|Verifica se l'oggetto vettore a sinistra dell'operatore è minore o uguale all'oggetto vettore a destra.|
|[operator==](../standard-library/vector-operators.md#op_eq_eq)|Verifica se l'oggetto vettore a sinistra dell'operatore è uguale all'oggetto vettore a destra.|
|[operator>](../standard-library/vector-operators.md#op_gt)|Verifica se l'oggetto vettore a sinistra dell'operatore è maggiore dell'oggetto vettore a destra.|
|[operator>=](../standard-library/vector-operators.md#op_gt_eq)|Verifica se l'oggetto vettore a sinistra dell'operatore è maggiore o uguale all'oggetto vettore a destra.|

### <a name="classes"></a>Classi

|Classe|Descrizione|
|-|-|
|[Classe vector](../standard-library/vector-class.md)|Classe modello di contenitori di sequenza che organizzano gli elementi di un determinato tipo in una disposizione lineare e consentono l'accesso casuale veloce a qualsiasi elemento.|

### <a name="specializations"></a>Specializzazioni

|||
|-|-|
|[Classe vector\<bool>](../standard-library/vector-bool-class.md)|Specializzazione completa del vettore della classe modello per gli elementi di tipo `bool` con un allocatore per il tipo sottostante usato dalla specializzazione.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<vector>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>

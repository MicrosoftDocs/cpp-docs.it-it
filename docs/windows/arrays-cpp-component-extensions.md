---
title: Matrici (C + c++ /CLI e c++ /CX) | Microsoft Docs
ms.custom: ''
ms.date: 10/12/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- cli::array
- details::array
- lang::array
dev_langs:
- C++
helpviewer_keywords:
- array keyword [C++]
- arrays [C++], multidimensional
- multidimensional arrays
- arrays [C++]
ms.assetid: 49445812-d775-4db1-a231-869598dbb955
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b1a1f977e15d80d631799d8a9e101a8c85e3aaf1
ms.sourcegitcommit: 3f4e92266737ecb70507871e87dc8e2965ad7e04
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/15/2018
ms.locfileid: "49328103"
---
# <a name="arrays-ccli-and-ccx"></a>Matrici (C + c++ /CLI e c++ /CX)

Il `Platform::Array<T>` tipo in C + + c++ /CLI CX, o il **matrice** parola chiave in C + + c++ /CLI CLI, dichiara una matrice di un tipo specificato e un valore iniziale.

## <a name="all-platforms"></a>Tutte le piattaforme

La matrice deve essere dichiarata mediante il modificatore handle a oggetto (^) dopo la parentesi angolare di chiusura (>) nella dichiarazione.
Il numero di elementi della matrice non è parte del tipo. Una variabile di matrice possa fare riferimento alle matrici di diverse dimensioni.

A differenza di C++ standard, l'indice non è un sinonimo di aritmetica dei puntatori e non è commutativa.

Per altre informazioni sulle matrici, vedere:

- [Procedura: Usare matrici in C++/CLI](../dotnet/how-to-use-arrays-in-cpp-cli.md)

- [Elenchi di argomenti variabili (...) (C++/CLI)](../windows/variable-argument-lists-dot-dot-dot-cpp-cli.md)

## <a name="windows-runtime"></a>Windows Runtime

Le matrici sono membri del `Platform` dello spazio dei nomi. Le matrici possono essere solo unidimensionale.

### <a name="syntax"></a>Sintassi

Il primo esempio della sintassi Usa la **ref nuovo** parola chiave aggregata per allocare una matrice. Nel secondo esempio dichiara una matrice locale.

```cpp
[qualifiers] [Platform::]Array<[qualifiers] array-type [,rank]>^ identifier = 
    ref new[Platform::]Array<initialization-type> [{initialization-list [,...]}]

[qualifiers] [Platform::]Array<[qualifiers] array-type [,rank]>^ identifier = 
    {initialization-list [,...]}
```

*qualificatori*<br/>
(Facoltativo) Uno o più di questi identificatori di classi di archiviazione: [modificabile](../cpp/mutable-data-members-cpp.md), [volatile](../cpp/volatile-cpp.md), [const](../cpp/const-cpp.md), [extern](../cpp/using-extern-to-specify-linkage.md), [statico](../cpp/static-members-cpp.md).

*tipo di matrice*<br/>
Il tipo della variabile di matrice. I tipi validi sono le classi di Windows Runtime e tipi fondamentali, classi di riferimento e gli struct, classi e struct e puntatori nativi (`type*`).

*rank*<br/>
(Facoltativo) Il numero di dimensioni della matrice. Deve essere 1.

*identifier*<br/>
Il nome della variabile di matrice.

*tipo di inizializzazione*<br/>
Il tipo dei valori che consentono di inizializzare la matrice. In genere *di tipo matrice* e *tipo di inizializzazione* sono dello stesso tipo. Tuttavia, i tipi possono essere diversi se è presente una conversione da *-tipo di inizializzazione* per *di tipo matrice*, ad esempio, se *-tipo di inizializzazione* è derivato da *di tipo matrice*.

*elenco di inizializzazione*<br/>
(Facoltativo) Un elenco delimitato da virgole di valori in parentesi graffe che inizializzano gli elementi della matrice. Ad esempio, se *rank-dimensioni-list* erano `(3)`, che dichiara una matrice unidimensionale di 3 elementi, *l'elenco di inizializzazione* potrebbe essere `{1,2,3}`.

### <a name="remarks"></a>Note

È possibile rilevare in fase di compilazione se un tipo è una matrice di riferimenti conteggiati `__is_ref_array(type)`. Per altre informazioni, vedere [supporto del compilatore per tratti di tipo](../windows/compiler-support-for-type-traits-cpp-component-extensions.md).

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

### <a name="examples"></a>Esempi

L'esempio seguente crea una matrice unidimensionale che contiene 100 elementi.

```cpp
// cwr_array.cpp
// compile with: /ZW
using namespace Platform;
ref class MyClass {};
int main() {
   // one-dimensional array
   Array<MyClass^>^ My1DArray = ref new Array<MyClass^>(100);
   My1DArray[99] = ref new MyClass();
}
```

## <a name="common-language-runtime"></a>Common Language Runtime

### <a name="syntax"></a>Sintassi

Il primo esempio della sintassi Usa la **gcnew** (parola chiave) da allocare una matrice. Nel secondo esempio dichiara una matrice locale.

```cpp
[qualifiers] [cli::]array<[qualifiers] array-type [,rank]>^ identifier = 
    gcnew [cli::]array<initialization-type[,rank]>(rank-size-list[,...]) [{initialization-list [,...]}]

[qualifiers] [cli::]array<[qualifiers] array-type [,rank]>^ identifier = 
    {initialization-list [,...]}
```

*qualificatori*<br/>
(Facoltativo) Uno o più di questi identificatori di classi di archiviazione: [modificabile](../cpp/mutable-data-members-cpp.md), [volatile](../cpp/volatile-cpp.md), [const](../cpp/const-cpp.md), [extern](../cpp/using-extern-to-specify-linkage.md), [statico](../cpp/static-members-cpp.md).

*tipo di matrice*<br/>
Il tipo della variabile di matrice. I tipi validi sono le classi di Windows Runtime e tipi fondamentali, classi di riferimento e struct, classi e struct, puntatori nativi (`type*`) e tipi POD (dati non aggiornati) nativi.

*rank*<br/>
(Facoltativo) Il numero di dimensioni della matrice. Il valore predefinito è 1. il valore massimo è 32. Ogni dimensione della matrice è a sua volta una matrice.

*identifier*<br/>
Il nome della variabile di matrice.

*tipo di inizializzazione*<br/>
Il tipo dei valori che consentono di inizializzare la matrice. In genere *di tipo matrice* e *tipo di inizializzazione* sono dello stesso tipo. Tuttavia, i tipi possono essere diversi se è presente una conversione da *-tipo di inizializzazione* per *di tipo matrice*, ad esempio, se *-tipo di inizializzazione* è derivato da *di tipo matrice*.

*Rank-dimensioni-list*<br/>
Elenco delimitato da virgole delle dimensioni di ogni dimensione della matrice. In alternativa, se il *elenco di inizializzazione* viene specificato, il compilatore può dedurre le dimensioni di ogni dimensione e *rank-dimensioni-list* può essere omesso.

*elenco di inizializzazione*<br/>
(Facoltativo) Un elenco delimitato da virgole di valori in parentesi graffe che inizializzano gli elementi della matrice. O un elenco delimitato da virgole di annidato *elenco di inizializzazione* gli elementi che consentono di inizializzare gli elementi in una matrice multidimensionale.

Ad esempio, se *rank-dimensioni-list* erano `(3)`, che dichiara una matrice unidimensionale di 3 elementi, *l'elenco di inizializzazione* potrebbe essere `{1,2,3}`. Se *rank-dimensioni-list* erano `(3,2,4)`, che dichiara una matrice tridimensionale di 3 elementi nella prima dimensione, 2 elementi nel secondo e 4 elementi nella terza *elenco di inizializzazione* potrebbe essere `{{1,2,3},{0,0},{-5,10,-21,99}}`.)

### <a name="remarks"></a>Note

**matrice** è il [Platform, default e cli gli spazi dei nomi](../windows/platform-default-and-cli-namespaces-cpp-component-extensions.md) dello spazio dei nomi.

Ad esempio C++ standard, gli indici della matrice sono a base zero e una matrice è con indice usando le parentesi quadre ([]). A differenza di C++ standard, gli indici di una matrice multidimensionale vengono specificati in un elenco di indici per ogni dimensione anziché in un set di operatori parentesi quadra ([]) per ogni dimensione. Ad esempio, *identifier*[*index1*, *index2*] anziché *identificatore*[*index1*] [ *index2*].

Tutte le matrici gestite ereditano `System::Array`. Qualsiasi metodo o proprietà di `System::Array` può essere applicato direttamente alla variabile di matrice.

Quando si alloca una matrice il cui tipo di elemento è puntatore-a una classe gestita, gli elementi sono inizializzate su 0.

Quando si alloca una matrice il cui tipo di elemento è un tipo valore `V`, il costruttore predefinito per `V` viene applicato a ogni elemento della matrice. Per altre informazioni, vedere [equivalenti di .NET Framework a tipi nativi C++ (C + + CLI)](../dotnet/dotnet-framework-equivalents-to-cpp-native-types-cpp-cli.md).

In fase di compilazione, è possibile rilevare se un tipo è una matrice di runtime (CLR) di linguaggio comuni con `__is_ref_array(type)`. Per altre informazioni, vedere [supporto del compilatore per tratti di tipo](../windows/compiler-support-for-type-traits-cpp-component-extensions.md).

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempi

L'esempio seguente crea una matrice unidimensionale che contiene 100 elementi e una matrice tridimensionale che dispone di 3 elementi nella prima dimensione, 5 elementi nel secondo e nel terzo 6 elementi.

```cpp
// clr_array.cpp
// compile with: /clr
ref class MyClass {};
int main() {
   // one-dimensional array
   array<MyClass ^> ^ My1DArray = gcnew array<MyClass ^>(100);
   My1DArray[99] = gcnew MyClass();

   // three-dimensional array
   array<MyClass ^, 3> ^ My3DArray = gcnew array<MyClass ^, 3>(3, 5, 6);
   My3DArray[0,0,0] = gcnew MyClass();
}
```

## <a name="see-also"></a>Vedere anche

[Estensioni componenti per .NET e UWP](../windows/component-extensions-for-runtime-platforms.md)
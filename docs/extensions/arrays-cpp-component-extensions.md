---
title: Matrici (C++/CLI e C++/CX)
ms.date: 10/12/2018
ms.topic: reference
f1_keywords:
- cli::array
- details::array
- lang::array
helpviewer_keywords:
- array keyword [C++]
- arrays [C++], multidimensional
- multidimensional arrays
- arrays [C++]
ms.assetid: 49445812-d775-4db1-a231-869598dbb955
ms.openlocfilehash: ecd8425bf7bcc9772d7b1327add79b89aea629a7
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80182240"
---
# <a name="arrays-ccli-and-ccx"></a>Matrici (C++/CLI e C++/CX)

Il tipo `Platform::Array<T>` in C++/CX o la parola chiave **array** in C++/CLI dichiara una matrice di un tipo specificato e un valore iniziale.

## <a name="all-platforms"></a>Tutte le piattaforme

La matrice deve essere dichiarata usando il modificatore da handle a oggetto (^) dopo la parentesi angolare di chiusura nella dichiarazione.
Il numero di elementi della matrice non fa parte del tipo. Una variabile di matrice può fare riferimento a matrici di dimensioni diverse.

Diversamente da C++ standard, l'indice non è un sinonimo di aritmetica dei puntatori e non è commutativo.

Per altre informazioni sulle matrici, vedere:

- [Procedura: Usare matrici in C++/CLI](../dotnet/how-to-use-arrays-in-cpp-cli.md)

- [Elenchi di argomenti variabili (...) (C++/CLI)](variable-argument-lists-dot-dot-dot-cpp-cli.md)

## <a name="windows-runtime"></a>Windows Runtime

Le matrici sono membri dello spazio dei nomi `Platform`. Le matrici possono essere solo unidimensionali.

### <a name="syntax"></a>Sintassi

Il primo esempio della sintassi usa la parola chiave aggregata **ref new** per allocare una matrice. Il secondo esempio dichiara una matrice locale.

```cpp
[qualifiers] [Platform::]Array<[qualifiers] array-type [,rank]>^ identifier =
    ref new[Platform::]Array<initialization-type> [{initialization-list [,...]}]

[qualifiers] [Platform::]Array<[qualifiers] array-type [,rank]>^ identifier =
    {initialization-list [,...]}
```

*qualifiers*<br/>
(Facoltativo) Uno o più di questi identificatori di classe di archiviazione: [mutable](../cpp/mutable-data-members-cpp.md), [volatile](../cpp/volatile-cpp.md), [const](../cpp/const-cpp.md), [extern](../cpp/using-extern-to-specify-linkage.md), [static](../cpp/static-members-cpp.md).

*array-type*<br/>
Tipo della variabile di matrice. I tipi validi sono le classi e i tipi fondamentali di Windows Runtime, classi e struct di riferimento e puntatori nativi (`type*`).

*rank*<br/>
(Facoltativo) Numero di dimensioni nella matrice. Deve essere 1.

*identifier*<br/>
Nome della variabile di matrice.

*initialization-type*<br/>
Tipo dei valori che inizializzano la matrice. In genere *array-type* e *initialization-type* sono lo stesso tipo. Tuttavia, i tipi possono essere diversi in caso di conversione da *initialization-type* ad *array-type*, ad esempio, se *initialization-type* viene derivato da *array-type*.

*initialization-list*<br/>
(Facoltativo) Elenco delimitato da virgole di valori tra parentesi graffe che inizializzano gli elementi della matrice. Ad esempio, se *rank-size-list* è `(3)`, che dichiara una matrice unidimensionale di 3 elementi, *initialization-list* può essere `{1,2,3}`.

### <a name="remarks"></a>Osservazioni

È possibile rilevare in fase di compilazione se un tipo è una matrice con conteggio dei riferimenti tramite `__is_ref_array(type)`. Per altre informazioni, vedere [Supporto del compilatore per caratteristiche di tipo](compiler-support-for-type-traits-cpp-component-extensions.md).

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

Il primo esempio della sintassi usa la parola chiave **gcnew** per allocare una matrice. Il secondo esempio dichiara una matrice locale.

```cpp
[qualifiers] [cli::]array<[qualifiers] array-type [,rank]>^ identifier =
    gcnew [cli::]array<initialization-type[,rank]>(rank-size-list[,...]) [{initialization-list [,...]}]

[qualifiers] [cli::]array<[qualifiers] array-type [,rank]>^ identifier =
    {initialization-list [,...]}
```

*qualifiers*<br/>
(Facoltativo) Uno o più di questi identificatori di classe di archiviazione: [mutable](../cpp/mutable-data-members-cpp.md), [volatile](../cpp/volatile-cpp.md), [const](../cpp/const-cpp.md), [extern](../cpp/using-extern-to-specify-linkage.md), [static](../cpp/static-members-cpp.md).

*array-type*<br/>
Tipo della variabile di matrice. I tipi validi sono classi e tipi fondamentali di Windows Runtime, classi e struct di riferimento, classi e struct di valore, puntatori nativi (`type*`) e tipi POD (dati non aggiornati) nativi.

*rank*<br/>
(Facoltativo) Numero di dimensioni nella matrice. Il valore predefinito è 1, il valore massimo è 32. Ogni dimensione della matrice è a sua volta una matrice.

*identifier*<br/>
Nome della variabile di matrice.

*initialization-type*<br/>
Tipo dei valori che inizializzano la matrice. In genere *array-type* e *initialization-type* sono lo stesso tipo. Tuttavia, i tipi possono essere diversi in caso di conversione da *initialization-type* ad *array-type*, ad esempio, se *initialization-type* viene derivato da *array-type*.

*rank-size-list*<br/>
Elenco delimitato da virgole delle dimensioni di ogni dimensione nella matrice. In alternativa, se è specificato il parametro *initialization-list*, il compilatore può dedurre le dimensioni e *rank-size-list* può essere omesso.

*initialization-list*<br/>
(Facoltativo) Elenco delimitato da virgole di valori tra parentesi graffe che inizializzano gli elementi della matrice. O un elenco delimitato da virgole di elementi *initialization-list* annidati che inizializzano gli elementi in una matrice multidimensionale.

Ad esempio, se *rank-size-list* è `(3)`, che dichiara una matrice unidimensionale di 3 elementi, *initialization-list* può essere `{1,2,3}`. Se *rank-size-list* è `(3,2,4)`, che dichiara una matrice tridimensionale di 3 elementi nella prima dimensione, 2 elementi nella seconda e 4 elementi nella terza, *initialization-list* può essere `{{1,2,3},{0,0},{-5,10,-21,99}}`.

### <a name="remarks"></a>Osservazioni

**array** si trova negli [spazi dei nomi platform, default e cli](platform-default-and-cli-namespaces-cpp-component-extensions.md).

Come in C++ standard, gli indici di una matrice sono a base zero e una matrice viene impostata con indice usando le parentesi quadre ([]). A differenza di C++ standard, gli indici di una matrice multidimensionale vengono specificati in un elenco di indici per ogni dimensione anziché in un set di operatori parentesi quadra ([]) per ogni dimensione. Ad esempio, *identifier*[*indice1*, *indice2*] invece di *identifier*[*indice1*] [*indice2*].

Tutte le matrici gestite ereditano da `System::Array`. Qualsiasi metodo o proprietà di `System::Array` può essere applicato direttamente alla variabile di matrice.

Quando si alloca una matrice il cui tipo di elemento è puntatore a una classe gestita, gli elementi sono inizializzati da 0.

Quando si alloca una matrice il cui tipo di elemento è un tipo valore `V`, il costruttore predefinito per `V` viene applicato a ogni elemento della matrice. Per altre informazioni, vedere [Equivalenti di .NET Framework a tipi nativi C++ (C++/CLI)](../dotnet/dotnet-framework-equivalents-to-cpp-native-types-cpp-cli.md).

In fase di compilazione è possibile rilevare se un tipo è una matrice Common Language Runtime (CLR) tramite `__is_ref_array(type)`. Per altre informazioni, vedere [Supporto del compilatore per caratteristiche di tipo](compiler-support-for-type-traits-cpp-component-extensions.md).

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempi

L'esempio seguente crea una matrice unidimensionale che contiene 100 elementi e una matrice tridimensionale che contiene 3 elementi nella prima dimensione, 5 elementi nella seconda e 6 elementi nella terza.

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

[Estensioni componenti per .NET e UWP](component-extensions-for-runtime-platforms.md)

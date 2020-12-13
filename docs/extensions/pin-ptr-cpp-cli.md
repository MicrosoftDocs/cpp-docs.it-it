---
description: 'Altre informazioni su: pin_ptr (C++/CLI)'
title: pin_ptr (C++/CLI)
ms.date: 10/12/2018
ms.topic: reference
f1_keywords:
- pin_ptr_cpp
- stdcli::language::pin_ptr
- pin_ptr
helpviewer_keywords:
- pinning pointers
- pin_ptr keyword [C++]
ms.assetid: 6c2e6c73-4ec2-4dce-8e1f-ccf3a9f9d0aa
ms.openlocfilehash: c7439b1e8bd1030a5f1326d24b38c47af5bb4874
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97341074"
---
# <a name="pin_ptr-ccli"></a>pin_ptr (C++/CLI)

Dichiara un *puntatore di blocco*, usato solo con Common Language Runtime.

## <a name="all-runtimes"></a>Tutti i runtime

Non esistono note per questa funzionalità del linguaggio che si applichino a tutti i runtime.

## <a name="windows-runtime"></a>Windows Runtime

Questa funzionalità del linguaggio non è supportata in Windows Runtime.

## <a name="common-language-runtime"></a>Common Language Runtime

Un *puntatore di blocco* è un puntatore interno che impedisce lo spostamento dell'oggetto puntato nell'heap sottoposto a Garbage Collection. Ciò significa che il valore di un puntatore di blocco non viene modificato da Common Language Runtime. Ciò è necessario quando si passa l'indirizzo di una classe gestita a una funzione non gestita, affinché l'indirizzo non cambi in modo imprevisto durante la risoluzione della chiamata della funzione non gestita.

### <a name="syntax"></a>Sintassi

```cpp
[cli::]pin_ptr<cv_qualifiertype>var = &initializer;
```

### <a name="parameters"></a>Parametri

*cv_qualifier*<br/>
**`const`****`volatile`** qualificatori o. Per impostazione predefinita, un puntatore di blocco è **`volatile`** . È ridondante ma non è un errore per dichiarare un puntatore di blocco **`volatile`** .

*type*<br/>
Tipo di *initializer*.

*var*<br/>
Nome della variabile **pin_ptr**.

*initializer*<br/>
Membro di un tipo di riferimento, elemento di una matrice gestita o qualsiasi altro oggetto che è possibile assegnare a un puntatore nativo.

### <a name="remarks"></a>Commenti

Un oggetto **pin_ptr** rappresenta un superset delle funzionalità di un puntatore nativo. Qualsiasi elemento che può essere assegnato a un puntatore nativo può quindi essere assegnato anche a un oggetto **pin_ptr**. In un puntatore interno può essere eseguito lo stesso set di operazioni dei puntatori nativi, inclusi il confronto e l'aritmetica dei puntatori.

Un oggetto o un oggetto secondario di una classe gestita può essere bloccato e in questo caso Common Language Runtime non sposterà l'oggetto durante un'operazione di Garbage Collection. Lo scopo principale è quello di passare un puntatore ai dati gestiti come parametro effettivo di una chiamata di funzione non gestita. Durante un ciclo di raccolta, il runtime analizzerà i metadati creati per il puntatore di blocco e non sposterà l'elemento a cui puntano.

Bloccando un oggetto si bloccano anche i relativi campi valore, ovvero i campi di tipo valore o primitivo. I campi dichiarati dall'handle di rilevamento (`%`) non sono tuttavia bloccati.

Il blocco di un oggetto secondario definito in un oggetto gestito comporta il blocco di tutto l'oggetto.

Se il puntatore di blocco viene riassegnato per puntare a un nuovo valore, l'istanza a cui puntava in precedenza non viene più considerata bloccata.

Un oggetto è bloccato solo quando un elemento **pin_ptr** punta a esso. L'oggetto non è più bloccato quando il puntatore di blocco diventa esterno all'ambito o viene impostato su [nullptr](nullptr-cpp-component-extensions.md). Quando **pin_ptr** diventa esterno all'ambito, l'oggetto che era bloccato può essere spostato nell'heap dal Garbage Collector. I puntatori nativi che puntano ancora all'oggetto non vengono aggiornati e la dereferenziazione di uno di essi può generare un'eccezione irreversibile.

Se nessun puntatore di blocco punta all'oggetto (tutti i puntatori di blocco sono diventati esterni all'ambito, sono stati riassegnati in modo da puntare ad altri oggetti o sono stati impostati su [nullptr](nullptr-cpp-component-extensions.md)), è garantito che l'oggetto non venga bloccato.

Un puntatore di blocco può puntare a un handle di riferimento, un handle di tipo valore o boxed, un membro di un tipo gestito o un elemento di una matrice gestita. Non può puntare a un tipo riferimento.

Se si accetta l'indirizzo di un oggetto **pin_ptr** che punta a un oggetto nativo, si verifica un comportamento indefinito.

I puntatori di blocco possono essere dichiarati solo come variabili locali non statiche nello stack.

I puntatori di blocco non possono essere usati come:

- funzione (parametri)

- tipo restituito di una funzione

- membro di una classe

- tipo di destinazione di un cast

**pin_ptr** si trova nello spazio dei nomi `cli`. Per altre informazioni, vedere [Spazi dei nomi Platform, default e cli](platform-default-and-cli-namespaces-cpp-component-extensions.md).

Per altre informazioni sui puntatori interni, vedere [interior_ptr (C++/CLI)](interior-ptr-cpp-cli.md).

Per ulteriori informazioni sui puntatori di blocco, vedere [procedura: aggiungere puntatori e matrici](how-to-pin-pointers-and-arrays.md) e [procedura: dichiarare i puntatori di blocco e i tipi di valore](how-to-declare-pinning-pointers-and-value-types.md).

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempio

L'esempio seguente usa **pin_ptr** per vincolare la posizione del primo elemento di una matrice.

```cpp
// pin_ptr_1.cpp
// compile with: /clr
using namespace System;
#define SIZE 10

#pragma unmanaged
// native function that initializes an array
void native_function(int* p) {
   for(int i = 0 ; i < 10 ; i++)
    p[i] = i;
}
#pragma managed

public ref class A {
private:
   array<int>^ arr;   // CLR integer array

public:
   A() {
      arr = gcnew array<int>(SIZE);
   }

   void load() {
   pin_ptr<int> p = &arr[0];   // pin pointer to first element in arr
   int* np = p;   // pointer to the first element in arr
   native_function(np);   // pass pointer to native function
   }

   int sum() {
      int total = 0;
      for (int i = 0 ; i < SIZE ; i++)
         total += arr[i];
      return total;
   }
};

int main() {
   A^ a = gcnew A;
   a->load();   // initialize managed array using the native function
   Console::WriteLine(a->sum());
}
```

```Output
45
```

L'esempio seguente mostra che un puntatore interno può essere convertito in un puntatore di blocco e che il tipo restituito dell'operatore address-of (`&`) è un puntatore interno quando l'operando si trova nell'heap gestito.

```cpp
// pin_ptr_2.cpp
// compile with: /clr
using namespace System;

ref struct G {
   G() : i(1) {}
   int i;
};

ref struct H {
   H() : j(2) {}
   int j;
};

int main() {
   G ^ g = gcnew G;   // g is a whole reference object pointer
   H ^ h = gcnew H;

   interior_ptr<int> l = &(g->i);   // l is interior pointer

   pin_ptr<int> k = &(h->j);   // k is a pinning interior pointer

   k = l;   // ok
   Console::WriteLine(*k);
};
```

```Output
1
```

L'esempio seguente mostra che è possibile eseguire il cast di un puntatore di blocco a un altro tipo.

```cpp
// pin_ptr_3.cpp
// compile with: /clr
using namespace System;

ref class ManagedType {
public:
   int i;
};

int main() {
   ManagedType ^mt = gcnew ManagedType;
   pin_ptr<int> pt = &mt->i;
   *pt = 8;
   Console::WriteLine(mt->i);

   char *pc = ( char* ) pt;
   *pc = 255;
   Console::WriteLine(mt->i);
}
```

```Output
8
255
```

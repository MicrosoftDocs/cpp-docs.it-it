---
title: proprietà (C + c++ /CLI e c++ /CX) | Microsoft Docs
ms.custom: ''
ms.date: 10/12/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- property_cpp
- property
dev_langs:
- C++
helpviewer_keywords:
- property keyword [C++]
ms.assetid: cc79d2b2-f013-4d81-8252-eece97a18704
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 24028ac403092404ddf7fd279864273fcf6016ab
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50075866"
---
# <a name="property--ccli-and-ccx"></a>proprietà (C + c++ /CLI e c++ /CX)

Dichiara un *proprietà*, che è una funzione membro che si comporta e si accede, ad esempio un membro dati o un elemento della matrice.

## <a name="all-runtimes"></a>Tutti i runtime

È possibile dichiarare uno dei seguenti tipi di proprietà.

*proprietà semplice*<br/>
Per impostazione predefinita, crea una *funzione di accesso set* che assegna il valore della proprietà, un *funzione di accesso get* che recupera il valore della proprietà e un membro dati privato generato dal compilatore che contiene il valore della proprietà.

*blocco di proprietà*<br/>
Consente di creare funzioni di accesso get e/o set definite dall'utente. La proprietà è di lettura/scrittura se entrambe le funzioni di accesso get e set sono definite. È di sola lettura se viene definita solo la funzione di accesso get ed è di sola scrittura se viene definita solo la funzione di accesso set.

È necessario dichiarare in modo esplicito un membro dati per contenere il valore della proprietà.

*proprietà indicizzata*<br/>
Un blocco di proprietà che è possibile usare per ottenere e impostare un valore della proprietà specificato da uno o più indici.

È possibile creare una proprietà indicizzata con un nome di proprietà definito dall'utente o un *predefinito* nome della proprietà. Il nome di una proprietà indicizzata predefinito è il nome della classe in cui la proprietà è definita. Per dichiarare una proprietà predefinita, specificare il **predefinito** parola chiave anziché un nome di proprietà.

È necessario dichiarare in modo esplicito un membro dati per contenere il valore della proprietà. Per una proprietà indicizzata, il membro dati è in genere una matrice o una raccolta.

### <a name="syntax"></a>Sintassi

```cpp
property type property_name;

property type property_name {
   access-modifier type get() inheritance-modifier {property_body};
   access-modifier void set(type value) inheritance-modifier {property_body};
}

property type property_name[index_list] {
   access-modifier type get(index_list) inheritance-modifier {property_body};
   access-modifier void set(index_list, value) inheritance-modifier {property_body};
}

property type default[index_list] {
   access-modifier type get(index_list) inheritance-modifier {property_body};
   access-modifier void set(index_list, value) inheritance-modifier {property_body};
}
```

### <a name="parameters"></a>Parametri

*type*<br/>
Il tipo di dati del valore della proprietà e di conseguenza la proprietà stessa.

*property_name*<br/>
Nome della proprietà.

*modificatore di accesso*<br/>
Un qualificatore di accesso. I qualificatori validi sono **statici** e **virtuale**.

Get o set di funzioni di accesso non devono concordare il **virtuale** devono concordare il qualificatore, ma il **statico** qualificatore.

*modificatore di ereditarietà*<br/>
Un qualificatore di ereditarietà. I qualificatori validi sono **astratto** e **sealed**.

*index_list*<br/>
Un elenco delimitato da virgole di uno o più indici. Ogni indice è costituito da un tipo di indice e un identificatore facoltativo che può essere usato nel corpo del metodo di proprietà.

*valore*<br/>
Il valore da assegnare alla proprietà in un'operazione set o da recuperare in un'operazione set.

*property_body*<br/>
Il corpo del metodo di proprietà della funzione di accesso set o get. Il *property_body* possono utilizzare il *index_list* per accedere al membro dati della proprietà sottostante, o come parametri nell'elaborazione definita dall'utente.

## <a name="windows-runtime"></a>Windows Runtime

Per altre informazioni, vedere [delle proprietà (C + c++ /CX)](https://msdn.microsoft.com/library/windows/apps/hh755807.aspx).

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

### <a name="syntax"></a>Sintassi

```cpp
modifier property type property_name;

modifier property type property_name {
   modifier void set(type);
   modifier type get();
}
modifier property type property_name[index-list, value] {
   modifier void set(index-list, value);
   modifier type get(index-list);

modifier property type default[index];
}
```

### <a name="parameters"></a>Parametri

*Modificatore*<br/>
Un modificatore che può essere usato in una dichiarazione di proprietà o in un metodo della funzione di accesso get e set. I valori possibili sono **statici** e **virtuale**.

*type*<br/>
Il tipo di valore rappresentato dalla proprietà.

*property_name*<br/>
Parametri per il metodo raise; devono corrispondere alla firma del delegato.

*index_list*<br/>
Un elenco delimitato da virgole di uno o più indici, specificati tra parentesi quadrate (l'operatore di indice, ([])). Per ogni indice, specificare un tipo e, facoltativamente, un identificatore che può essere usato nel corpo del metodo di proprietà.

### <a name="remarks"></a>Note

Nel primo esempio di sintassi viene illustrata una *proprietà semplice*, che dichiara in modo implicito i una `set` e `get` (metodo). Il compilatore crea automaticamente un campo privato per archiviare il valore della proprietà.

Nel secondo esempio di sintassi viene illustrata una *blocco property*, che dichiara in modo esplicito i una `set` e `get` (metodo).

Nel terzo esempio di sintassi viene definito dal cliente *proprietà index*. Una proprietà indicizzata accetta parametri oltre al valore da impostare o recuperare. È necessario specificare un nome per la proprietà. A differenza di una proprietà semplice, i metodi `set` e/o `get` di una proprietà indicizzata devono essere definiti in modo esplicito ed è necessario specificare un nome per la proprietà.

Nel quarto esempio di sintassi viene illustrata una *predefinito* proprietà che fornisce l'accesso di tipo matrice a un'istanza del tipo. La parola chiave **predefinito**, serve solo per specificare una proprietà predefinita. Il nome di una proprietà predefinita è il nome del tipo in cui la proprietà è definita.

Il **proprietà** (parola chiave) possono essere visualizzati in una classe, interfaccia o tipo di valore. Una proprietà può essere associata una funzione get (sola lettura), a una funzione set (sola scrittura) o a entrambe (lettura e scrittura).

Un nome di proprietà non può corrispondere al nome della classe gestita che lo contiene. Il tipo restituito dalla funzione Get deve corrispondere al tipo dell'ultimo parametro di una funzione Set corrispondente.

Per il codice client una proprietà ha l'aspetto di un membro dati normale e può essere scritta o letta usando la stessa sintassi di un membro dati.

Get e set di metodi non devono concordare il **virtuale** modificatore.

L'accessibilità dei metodi get e set può variare.

La definizione di un metodo di proprietà può essere visualizzata all'esterno del corpo della classe, come un metodo comune.

Get e metodo set per una proprietà devono concordare il **statici** modificatore.

Una proprietà è scalare se i relativi metodi get e set si adattano alla descrizione seguente:

- Il metodo get non ha parametri e ha un tipo restituito `T`.

- Il metodo set ha un parametro di tipo `T`e il tipo restituito **void**.

In un ambito con lo stesso identificatore deve essere dichiarata solo una proprietà scalare. Le proprietà scalari non possono essere sottoposte a overload.

Quando un membro dati di proprietà viene dichiarato, il compilatore inserisce nella classe un membro dati, noto a volte come "archivio di backup". Tuttavia, il nome del membro dati è in un formato tale che non è possibile fare riferimento al membro nell'origine come se fosse un membro dati effettivo della classe contenitore. ildasm.exe consente di visualizzare i metadati per il tipo e il nome generato dal compilatore per l'archivio di backup della proprietà.

È consentita un'accessibilità diversa per i metodi della funzione di accesso in un blocco di proprietà.  Ovvero, il metodo set può essere pubblico e il metodo get può essere privato.  Tuttavia, a un metodo di una funzione di accesso non è consentito avere un'accessibilità meno restrittiva rispetto a quella nella dichiarazione della proprietà stessa.

**proprietà** è una parola chiave sensibile al contesto.  Per altre informazioni, vedere [parole chiave sensibili al contesto](../windows/context-sensitive-keywords-cpp-component-extensions.md).

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempi

Nell'esempio seguente vengono illustrati la dichiarazione e l'uso di un membro dati di proprietà e di un blocco di proprietà.  Viene inoltre illustrato che è possibile definire una funzione di accesso alla proprietà fuori dalla classe.

```cpp
// mcppv2_property.cpp
// compile with: /clr
using namespace System;
public ref class C {
   int MyInt;
public:

   // property data member
   property String ^ Simple_Property;

   // property block
   property int Property_Block {

      int get();

      void set(int value) {
         MyInt = value;
      }
   }
};

int C::Property_Block::get() {
   return MyInt;
}

int main() {
   C ^ MyC = gcnew C();
   MyC->Simple_Property = "test";
   Console::WriteLine(MyC->Simple_Property);

   MyC->Property_Block = 21;
   Console::WriteLine(MyC->Property_Block);
}
```

```Output
test

21
```

## <a name="see-also"></a>Vedere anche

[Estensioni componenti per .NET e UWP](../windows/component-extensions-for-runtime-platforms.md)
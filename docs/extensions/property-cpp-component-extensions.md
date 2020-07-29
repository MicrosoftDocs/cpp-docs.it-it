---
title: property (C++/CLI e C++/CX)
ms.date: 10/12/2018
ms.topic: reference
helpviewer_keywords:
- property keyword [C++]
ms.assetid: cc79d2b2-f013-4d81-8252-eece97a18704
ms.openlocfilehash: fbec97a5bd30bb9bb76459ef2f7b0956ae6a264f
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87225137"
---
# <a name="property--ccli-and-ccx"></a>property (C++/CLI e C++/CX)

Dichiara una *proprietà*, che è una funzione membro che si comporta e a cui è possibile accedere come un membro dati o un elemento di matrice.

## <a name="all-runtimes"></a>Tutti i runtime

È possibile dichiarare uno dei seguenti tipi di proprietà.

*proprietà semplice*<br/>
Per impostazione predefinita, crea una *funzione di accesso set* che assegna il valore della proprietà, una *funzione di accesso get* che recupera il valore della proprietà e un membro dati privato generato dal compilatore che contiene il valore della proprietà.

*blocco di proprietà*<br/>
Consente di creare funzioni di accesso get e/o set definite dall'utente. La proprietà è di lettura/scrittura se entrambe le funzioni di accesso get e set sono definite. È di sola lettura se viene definita solo la funzione di accesso get ed è di sola scrittura se viene definita solo la funzione di accesso set.

È necessario dichiarare in modo esplicito un membro dati per contenere il valore della proprietà.

*proprietà indicizzata*<br/>
Un blocco di proprietà che è possibile usare per ottenere e impostare un valore della proprietà specificato da uno o più indici.

È possibile creare una proprietà indicizzata con un nome di proprietà definito dall'utente o un nome di proprietà *predefinito*. Il nome di una proprietà indicizzata predefinito è il nome della classe in cui la proprietà è definita. Per dichiarare una proprietà predefinita, specificare la **`default`** parola chiave anziché il nome di una proprietà.

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

*access-modifier*<br/>
Un qualificatore di accesso. I qualificatori validi sono **`static`** e **`virtual`** .

Le funzioni di accesso get o set non devono concordare sul **`virtual`** qualificatore, ma devono concordare il **`static`** qualificatore.

*inheritance-modifier*<br/>
Un qualificatore di ereditarietà. I qualificatori validi sono **abstract** e **sealed**.

*index_list*<br/>
Un elenco delimitato da virgole di uno o più indici. Ogni indice è costituito da un tipo di indice e un identificatore facoltativo che può essere usato nel corpo del metodo di proprietà.

*value*<br/>
Il valore da assegnare alla proprietà in un'operazione set o da recuperare in un'operazione set.

*property_body*<br/>
Il corpo del metodo di proprietà della funzione di accesso set o get. *property_body* può usare *index_list* per accedere al membro dati della proprietà sottostante o come parametri nell'elaborazione definita dall'utente.

## <a name="windows-runtime"></a>Windows Runtime

Per altre informazioni, vedere [Proprietà (C++/CX)](../cppcx/properties-c-cx.md).

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

*modificatore*<br/>
Un modificatore che può essere usato in una dichiarazione di proprietà o in un metodo della funzione di accesso get e set. I valori possibili sono **`static`** e **`virtual`** .

*type*<br/>
Il tipo di valore rappresentato dalla proprietà.

*property_name*<br/>
Parametri per il metodo raise; devono corrispondere alla firma del delegato.

*index_list*<br/>
Un elenco delimitato da virgole di uno o più indici, specificati tra parentesi quadrate (l'operatore di indice, ([])). Per ogni indice, specificare un tipo e, facoltativamente, un identificatore che può essere usato nel corpo del metodo di proprietà.

### <a name="remarks"></a>Osservazioni

Il primo esempio di sintassi mostra una *proprietà semplice*, che dichiara in modo esplicito entrambi i metodi `set` e `get`. Il compilatore crea automaticamente un campo privato per archiviare il valore della proprietà.

Il secondo esempio di sintassi mostra un *blocco di proprietà*, che dichiara in modo esplicito entrambi i metodi `set` e `get`.

Il terzo esempio di sintassi mostra una *proprietà indicizzata* definita dall'utente. Una proprietà indicizzata accetta parametri oltre al valore da impostare o recuperare. È necessario specificare un nome per la proprietà. A differenza di una proprietà semplice, i metodi `set` e/o `get` di una proprietà indicizzata devono essere definiti in modo esplicito ed è necessario specificare un nome per la proprietà.

Il quarto esempio di sintassi mostra una proprietà *predefinita* che fornisce l'accesso di tipo matrice a un'istanza del tipo. La parola chiave, **`default`** , serve solo per specificare una proprietà predefinita. Il nome di una proprietà predefinita è il nome del tipo in cui la proprietà è definita.

La **`property`** parola chiave può essere visualizzata in una classe, un'interfaccia o un tipo di valore. Una proprietà può essere associata una funzione get (sola lettura), a una funzione set (sola scrittura) o a entrambe (lettura e scrittura).

Un nome di proprietà non può corrispondere al nome della classe gestita che lo contiene. Il tipo restituito dalla funzione Get deve corrispondere al tipo dell'ultimo parametro di una funzione Set corrispondente.

Per il codice client una proprietà ha l'aspetto di un membro dati normale e può essere scritta o letta usando la stessa sintassi di un membro dati.

I metodi get e set non devono concordare con il **`virtual`** modificatore.

L'accessibilità dei metodi get e set può variare.

La definizione di un metodo di proprietà può essere visualizzata all'esterno del corpo della classe, come un metodo comune.

I metodi get e set per una proprietà devono essere conformi al **`static`** modificatore.

Una proprietà è scalare se i relativi metodi get e set si adattano alla descrizione seguente:

- Il metodo get non ha parametri e ha un tipo restituito `T`.

- Il metodo set ha un parametro di tipo `T` e un tipo restituito **`void`** .

In un ambito con lo stesso identificatore deve essere dichiarata solo una proprietà scalare. Le proprietà scalari non possono essere sottoposte a overload.

Quando un membro dati di proprietà viene dichiarato, il compilatore inserisce nella classe un membro dati, noto a volte come "archivio di backup". Tuttavia, il nome del membro dati è in un formato tale che non è possibile fare riferimento al membro nell'origine come se fosse un membro dati effettivo della classe contenitore. ildasm.exe consente di visualizzare i metadati per il tipo e il nome generato dal compilatore per l'archivio di backup della proprietà.

È consentita un'accessibilità diversa per i metodi della funzione di accesso in un blocco di proprietà.  Ovvero, il metodo set può essere pubblico e il metodo get può essere privato.  Tuttavia, a un metodo di una funzione di accesso non è consentito avere un'accessibilità meno restrittiva rispetto a quella nella dichiarazione della proprietà stessa.

**`property`** è una parola chiave sensibile al contesto.  Per altre informazioni, vedere [Parole chiave sensibili al contesto](context-sensitive-keywords-cpp-component-extensions.md).

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

[Estensioni del componente per .NET e UWP](component-extensions-for-runtime-platforms.md)

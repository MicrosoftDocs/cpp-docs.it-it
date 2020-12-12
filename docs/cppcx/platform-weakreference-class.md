---
description: 'Altre informazioni su: classe Platform:: WeakReference'
title: Classe Platform::WeakReference
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- Platform::WeakReference
ms.assetid: 8cfe1977-a8c7-4b7b-b539-25c77ed4c5f1
ms.openlocfilehash: edf3220d8916ff4bdb1462f3dd04149a4e9a9709
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97307795"
---
# <a name="platformweakreference-class"></a>Classe Platform::WeakReference

Rappresenta un riferimento debole a un'istanza di una classe di riferimento.

## <a name="syntax"></a>Sintassi

```cpp
class WeakReference
```

#### <a name="parameters"></a>Parametri

### <a name="members"></a>Membri

### <a name="constructors"></a>Costruttori

|Membro|Descrizione|
|------------|-----------------|
|[WeakReference:: WeakReference](#ctor)|Inizializza una nuova istanza della classe WeakReference.|

### <a name="methods"></a>Metodi

|Membro|Descrizione|
|------------|-----------------|
|[WeakReference:: Resolve](#resolve)|Restituisce un handle alla classe di riferimento sottostante o nullptr se l'oggetto non esiste più.|

### <a name="operators"></a>Operatori

|Membro|Descrizione|
|------------|-----------------|
|[WeakReference::operator=](#operator-assign)|Assegna un nuovo valore all'oggetto WeakReference.|
|[BoolType WeakReference::operator](#booltype)|Implementa il modello bool sicuro.|

### <a name="remarks"></a>Commenti

La classe WeakReference stessa non è una classe di riferimento e pertanto non eredita da Platform::Object^ e non può essere usata nella firma di un metodo pubblico.

## <a name="weakreferenceoperator"></a><a name="operator-assign"></a> WeakReference:: operator =

Assegna un valore a WeakReference.

### <a name="syntax"></a>Sintassi

```cpp
WeakReference& operator=(decltype(__nullptr));
WeakReference& operator=(const WeakReference& otherArg);
WeakReference& operator=(WeakReference&& otherArg);
WeakReference& operator=(const volatile ::Platform::Object^ const otherArg);
```

### <a name="remarks"></a>Osservazioni

L'ultimo overload nell'elenco precedente consente di assegnare una classe di riferimento a una variabile WeakReference. In questo caso la classe ref è abbattuta per [Platform:: Object](../cppcx/platform-object-class.md)^. Il tipo originale viene ripristinato in un secondo momento specificandone il tipo come argomento per il parametro di tipo nella funzione membro [WeakReference:: Resolve \<T> ](#resolve) .

## <a name="weakreferenceoperator-booltype"></a><a name="booltype"></a> WeakReference:: operator BoolType

Implementa il modello bool sicuro per la classe WeakReference. Non chiamarlo esplicitamente dal codice.

### <a name="syntax"></a>Sintassi

```cpp
BoolType BoolType();
```

## <a name="weakreferenceresolve-method-platform-namespace"></a><a name="resolve"></a> Metodo WeakReference:: Resolve (spazio dei nomi Platform)

Restituisce un handle alla classe di riferimento originale o **`nullptr`** se l'oggetto non esiste più.

### <a name="syntax"></a>Sintassi

```cpp
template<typename T>
T^ Resolve() const;
```

### <a name="parameters"></a>Parametri

### <a name="property-valuereturn-value"></a>Valore proprietà/Valore restituito

Handle alla classe di riferimento a cui l'oggetto WeakReference era precedentemente associato, oppure nullptr.

### <a name="example"></a>Esempio

```cpp
Bar^ bar = ref new Bar();
//use bar...

if (bar != nullptr)
{
    WeakReference wr(bar);
    Bar^ newReference = wr.Resolve<Bar>();
}
```

Si noti che il parametro di tipo è T, non T^.

## <a name="weakreferenceweakreference-constructor"></a><a name="ctor"></a> Costruttore WeakReference:: WeakReference

Offre vari modi per creare un elemento WeakReference.

### <a name="syntax"></a>Sintassi

```cpp
WeakReference();
WeakReference(decltype(__nullptr));
WeakReference(const WeakReference& otherArg);
WeakReference(WeakReference&& otherArg);
explicit WeakReference(const volatile ::Platform::Object^ const otherArg);
```

### <a name="example"></a>Esempio

```cpp
MyClass^ mc = ref new MyClass();
WeakReference wr(mc);
MyClass^ copy2 = wr.Resolve<MyClass>();
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)

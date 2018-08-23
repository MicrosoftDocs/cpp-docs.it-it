---
title: Classe WeakRef | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::WeakRef
dev_langs:
- C++
helpviewer_keywords:
- WeakRef class
ms.assetid: 572be703-c641-496c-8af5-ad6164670ba1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 96aa076bb8285154f3b340e9e39ae36ed621522f
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42612733"
---
# <a name="weakref-class"></a>Classe WeakRef

Rappresenta un *riferimento debole* che può essere usato solamente da Windows Runtime, non da COM classico. Un riferimento debole rappresenta un oggetto che può o non può essere accessibile.

## <a name="syntax"></a>Sintassi

```cpp
class WeakRef : public ComPtr<IWeakReference>
```

## <a name="remarks"></a>Note

Oggetto **WeakRef** oggetto mantiene una *riferimento sicuro*, associata a un oggetto che può essere valido o non valido. Chiamare il `As()` o `AsIID()` metodo per ottenere un riferimento sicuro. Quando il riferimento sicuro è valido, può accedere all'oggetto associato. Quando non è valido il riferimento sicuro (**nullptr**), l'oggetto associato è inaccessibile.

Oggetto **WeakRef** oggetto viene in genere usato per rappresentare un oggetto la cui esistenza è controllata da un'applicazione o un thread esterno. Ad esempio, creare un **WeakRef** oggetto da un riferimento a un oggetto file. Finché il file rimane aperto, il riferimento sicuro è valido. Ma se il file viene chiuso, il riferimento sicuro non è più valido.

Tenere presente che si verifica un cambiamento di comportamento nei metodi [As](../windows/weakref-as-method.md), [AsIID](../windows/weakref-asiid-method.md) e [CopyTo](../windows/weakref-copyto-method.md) in Windows 10 SDK. Dopo aver chiamato uno di questi metodi, in precedenza, è possibile controllare il WeakRef per **nullptr** per determinare se un riferimento sicuro era stato ottenuto correttamente, come nel codice seguente:

```cpp
WeakRef wr;
strongComptrRef.AsWeak(&wr);

// Now suppose that the object strongComPtrRef points to no longer exists
// and the following code tries to get a strong ref from the weak ref:
ComPtr<ISomeInterface> strongRef;
HRESULT hr = wr.As(&strongRef);

// This check won't work with the Windows 10 SDK version of the library.
// Check the input pointer instead.
if(wr == nullptr)  
{
    wprintf(L"Couldn’t get strong ref!");
}
```

Il codice riportato sopra non funziona quando si usa Windows 10 SDK o versioni successive. Controllare invece il puntatore passato per **nullptr**.

```cpp
if (strongRef == nullptr)  
{
    wprintf(L"Couldn't get strong ref!");
}
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore WeakRef::WeakRef](../windows/weakref-weakref-constructor.md)|Inizializza una nuova istanza di **WeakRef** classe.|
|[Distruttore WeakRef::~WeakRef](../windows/weakref-tilde-weakref-destructor.md)|Deinizializza l'istanza corrente del **WeakRef** classe.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Metodo WeakRef::As](../windows/weakref-as-method.md)|Imposta l'oggetto specificato `ComPtr` parametro del puntatore per rappresentare l'interfaccia specificata.|
|[Metodo WeakRef::AsIID](../windows/weakref-asiid-method.md)|Imposta l'oggetto specificato `ComPtr` parametro del puntatore per rappresentare l'ID di interfaccia specificato.|
|[Metodo WeakRef::CopyTo](../windows/weakref-copyto-method.md)|Assegna un puntatore a un'interfaccia, se disponibile, per la variabile del puntatore specificato.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Operatore WeakRef::operator&](../windows/weakref-operator-ampersand-operator.md)|Restituisce un `ComPtrRef` oggetto che rappresenta l'oggetto corrente **WeakRef** oggetto.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ComPtr`

`WeakRef`

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)
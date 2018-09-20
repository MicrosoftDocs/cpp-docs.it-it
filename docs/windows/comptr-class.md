---
title: ComPtr (classe) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::ComPtr
dev_langs:
- C++
helpviewer_keywords:
- ComPtr class
ms.assetid: a6551902-6819-478a-8df7-b6f312ab1fb0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 88d3af154993bea6df509a69b832223aede7ad81
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46386509"
---
# <a name="comptr-class"></a>ComPtr (classe)

Crea un tipo di *puntatore intelligente* che rappresenta l'interfaccia specificata dal parametro di modello. **ComPtr** automaticamente mantiene un conteggio dei riferimenti per il puntatore di interfaccia sottostante e rilascia l'interfaccia quando il conteggio dei riferimenti va a zero.

## <a name="syntax"></a>Sintassi

```cpp
template <typename T>
class ComPtr;

template<class T>
friend class ComPtr;
```

### <a name="parameters"></a>Parametri

*T*<br/>
L'interfaccia che il **ComPtr** rappresenta.

*U*<br/>
Una classe a cui l'oggetto corrente **ComPtr** è un elemento friend. (Il modello che usa questo parametro è protetto.)

## <a name="remarks"></a>Note

`ComPtr<>` dichiara un tipo che rappresenta il puntatore di interfaccia sottostante. Usare `ComPtr<>` per dichiarare una variabile e quindi usare l'operatore freccia di accesso ai membri (`->`) per accedere a una funzione membro di interfaccia.

Per altre informazioni sui puntatori intelligenti, vedere la sottosezione "Puntatori intelligenti COM" del [COM Coding Practices](/windows/desktop/LearnWin32/com-coding-practices)argomento in MSDN Library.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`InterfaceType`|Un sinonimo per il tipo specificato per il *T* parametro di modello.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore ComPtr::ComPtr](../windows/comptr-comptr-constructor.md)|Inizializza una nuova istanza di **ComPtr** classe. Gli overload forniscono costruttori predefiniti, di copia, di spostamento e di conversione.|
|[Distruttore ComPtr::~ComPtr](../windows/comptr-tilde-comptr-destructor.md)|Deinizializza un'istanza di **ComPtr**.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Metodo ComPtr::As](../windows/comptr-as-method.md)|Restituisce un **ComPtr** oggetto che rappresenta l'interfaccia identificata dal parametro di modello specificato.|
|[Metodo ComPtr::AsIID](../windows/comptr-asiid-method.md)|Restituisce un **ComPtr** oggetto che rappresenta l'interfaccia identificata dall'ID dell'interfaccia specificata.|
|[Metodo ComPtr::AsWeak](../windows/comptr-asweak-method.md)|Restituisce un riferimento debole all'oggetto corrente.|
|[Metodo ComPtr::Attach](../windows/comptr-attach-method.md)|Ciò consente di associare **ComPtr** con il tipo di interfaccia specificato dal parametro del tipo di modello corrente.|
|[Metodo ComPtr::CopyTo](../windows/comptr-copyto-method.md)|Copia l'interfaccia corrente o specificata associato a questo **ComPtr** al puntatore di output specificato.|
|[Metodo ComPtr::Detach](../windows/comptr-detach-method.md)|Rimuove l'associazione di questo **ComPtr** dall'interfaccia da essa rappresentato.|
|[Metodo ComPtr::Get](../windows/comptr-get-method.md)|Recupera un puntatore all'interfaccia associata a questo **ComPtr**.|
|[Metodo ComPtr::GetAddressOf](../windows/comptr-getaddressof-method.md)|Recupera l'indirizzo del [PTR _](../windows/comptr-ptr-data-member.md) membro dei dati, che contiene un puntatore all'interfaccia rappresentata da questa **ComPtr**.|
|[Metodo ComPtr::ReleaseAndGetAddressOf](../windows/comptr-releaseandgetaddressof-method.md)|Rilascia l'interfaccia associato a questo **ComPtr** e quindi recupera l'indirizzo del [PTR _](../windows/comptr-ptr-data-member.md) membro dei dati, che contiene un puntatore a interfaccia che è stata rilasciata.|
|[ComPtr::Reset](../windows/comptr-reset.md)|Rilascia tutti i riferimenti del puntatore all'interfaccia associata a questo **ComPtr**.|
|[Metodo ComPtr::Swap](../windows/comptr-swap-method.md)|Scambia l'interfaccia gestita dall'oggetto corrente **ComPtr** con l'interfaccia gestita dall'oggetto specificato **ComPtr**.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[Metodo ComPtr::InternalAddRef](../windows/comptr-internaladdref-method.md)|Incrementa il conteggio dei riferimenti dell'interfaccia associato a questo **ComPtr**.|
|[Metodo ComPtr::InternalRelease](../windows/comptr-internalrelease-method.md)|Esegue un'operazione di rilascio COM sull'interfaccia associata a questo **ComPtr**.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Operatore ComPtr::operator Microsoft::WRL::Details::BoolType](../windows/comptr-operator-microsoft-wrl-details-booltype-operator.md)|Indica o meno una **ComPtr** gestisce la durata dell'oggetto di un'interfaccia.|
|[Operatore ComPtr::operator&](../windows/comptr-operator-ampersand-operator.md)|Recupera l'indirizzo dell'oggetto corrente **ComPtr**.|
|[Operatore ComPtr::operator=](../windows/comptr-operator-assign-operator.md)|Assegna un valore all'oggetto corrente **ComPtr**.|
|[Operatore ComPtr::operator->](../windows/comptr-operator-arrow-operator.md)|Recupera un puntatore al tipo specificato dal parametro di modello corrente.|
|[Operatore ComPtr::operator==](../windows/comptr-operator-equality-operator.md)|Indica se due **ComPtr** oggetti sono uguali.|
|[Operatore ComPtr::operator!=](../windows/comptr-operator-inequality-operator.md)|Indica se due **ComPtr** oggetti non sono uguali.|

### <a name="protected-data-members"></a>Membri dati protetti

|nome|Descrizione|
|----------|-----------------|
|[Membro ComPtr::ptr_ Data](../windows/comptr-ptr-data-member.md)|Contiene un puntatore a interfaccia che viene associato e gestito da questa **ComPtr**.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ComPtr`

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)
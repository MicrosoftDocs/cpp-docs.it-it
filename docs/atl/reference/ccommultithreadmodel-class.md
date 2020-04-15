---
title: CComMultiThreadModel (classe)
ms.date: 11/04/2016
f1_keywords:
- CComMultiThreadModel
- ATLBASE/ATL::CComMultiThreadModel
- ATLBASE/ATL::CComMultiThreadModel::AutoCriticalSection
- ATLBASE/ATL::CComMultiThreadModel::CriticalSection
- ATLBASE/ATL::CComMultiThreadModel::ThreadModelNoCS
- ATLBASE/ATL::CComMultiThreadModel::Decrement
- ATLBASE/ATL::CComMultiThreadModel::Increment
helpviewer_keywords:
- ATL, multithreading
- CComMultiThreadModel class
- threading [ATL]
ms.assetid: db8f1662-2f7a-44b3-b341-ffbfb6e422a3
ms.openlocfilehash: 7ef803439d2d683633e8f9c00810542dd787541e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327665"
---
# <a name="ccommultithreadmodel-class"></a>CComMultiThreadModel (classe)

`CComMultiThreadModel`fornisce metodi thread-safe per incrementare e decrementare il valore di una variabile.

## <a name="syntax"></a>Sintassi

```
class CComMultiThreadModel
```

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComMultiThreadModel::AutoCriticalSection](#autocriticalsection)|References alla classe [CComAutoCriticalSection](../../atl/reference/ccomautocriticalsection-class.md).|
|[CComMultiThreadModel::CriticalSection](#criticalsection)|References classe [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md).|
|[CComMultiThreadModel::ThreadModelNoCS](#threadmodelnocs)|Classe references [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md).|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComMultiThreadModel:ecrement :D](#decrement)|(Statico) Decrementa il valore della variabile specificata in modo thread-safe.|
|[CComMultiThreadModel::Incremento](#increment)|(Statico) Incrementa il valore della variabile specificata in modo thread-safe.|

## <a name="remarks"></a>Osservazioni

In genere, `CComMultiThreadModel` si utilizza uno dei due nomi **di typedef,** ovvero [CComObjectThreadModel](atl-typedefs.md.ccomobjectthreadmodel o [CComGlobalsThreadModel](atl-typedefs.md La classe a cui fa riferimento ogni typedef dipende dal modello di threading utilizzato, come illustrato nella tabella seguente:The class referenced by each **typedef** depends on the threading model used, as shown in the following table:

|typedef|Filettatura singola|Appartamento filettatura|Filettatura libera|
|-------------|----------------------|-------------------------|--------------------|
|`CComObjectThreadModel`|S|S|M|
|`CComGlobalsThreadModel`|S|M|M|

( `CComSingleThreadModel`) e così via, è stato possibile Operatore di ammortamento, la proprietà`CComMultiThreadModel`

`CComMultiThreadModel`stesso definisce tre nomi **typedef.** `AutoCriticalSection`e `CriticalSection` classi di riferimento che forniscono metodi per ottenere e rilasciare la proprietà di una sezione critica. `ThreadModelNoCS`references (classe) [CComMultiThreadModelNoCS(ccommultithreadmodelnocs-class.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="ccommultithreadmodelautocriticalsection"></a><a name="autocriticalsection"></a>CComMultiThreadModel::AutoCriticalSection

Quando `CComMultiThreadModel`si utilizza , `AutoCriticalSection` il nome **typedef** fa riferimento alla classe [CComAutoCriticalSection](ccomautocriticalsection-class.md), che fornisce metodi per ottenere e rilasciare la proprietà di un oggetto sezione critica.

```
typedef CComAutoCriticalSection AutoCriticalSection;
```

### <a name="remarks"></a>Osservazioni

[CComSingleThreadModel](ccomsinglethreadmodel-class.md) e [CComMultiThreadModelNoCS](ccommultithreadmodelnocs-class.md) contengono anche le definizioni per `AutoCriticalSection`. Nella tabella seguente viene illustrata la relazione tra la `AutoCriticalSection`classe del modello di threading e la classe di sezione critica a cui fa riferimento :

|Classe definita in|Classe a cui si fa riferimento|
|----------------------|----------------------|
|`CComMultiThreadModel`|`CComCriticalSection`|
|`CComSingleThreadModel`|`CComFakeCriticalSection`|
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|

Oltre a `AutoCriticalSection`, è possibile utilizzare il nome **typedef** [CriticalSection](#criticalsection). Non è `AutoCriticalSection` necessario specificare in oggetti globali o membri di classe statici se si desidera eliminare il codice di avvio CRT.

### <a name="example"></a>Esempio

Il codice seguente viene modellato in base `AutoCriticalSection` a [CComObjectRootEx](ccomobjectrootex-class.md)e viene illustrato come utilizzato in un ambiente di threading.

```cpp
template<class ThreadModel>
class CMyAutoCritClass
{
public:
   typedef ThreadModel _ThreadModel;
   typedef typename _ThreadModel::AutoCriticalSection _CritSec;

   CMyAutoCritClass() : m_dwRef(0) {}

   ULONG InternalAddRef()
   {
      return _ThreadModel::Increment(&m_dwRef);
   }
   ULONG InternalRelease()
   {
      return _ThreadModel::Decrement(&m_dwRef);
   }
   void Lock() { m_critsec.Lock( ); }
   void Unlock() { m_critsec.Unlock(); }

private:
   _CritSec m_critsec;
   LONG m_dwRef;
```

Nelle tabelle seguenti vengono `InternalAddRef` illustrati `Lock` i risultati `ThreadModel` dei metodi e , a seconda del parametro di modello e del modello di threading utilizzato dall'applicazione:

### <a name="threadmodel--ccomobjectthreadmodel"></a>ThreadModel - CComObjectThreadModel

|Metodo|Filettatura singola o apartment|Threading libero|
|------------|-----------------------------------|--------------------|
|`InternalAddRef`|L'incremento non è thread-safe.|L'incremento è thread-safe.|
|`Lock`|Non fa nulla; non vi è alcuna sezione critica da bloccare.|La sezione critica è bloccata.|

### <a name="threadmodel--ccomobjectthreadmodelthreadmodelnocs"></a>ThreadModel : CComObjectThreadModel::ThreadModelNoCS

|Metodo|Filettatura singola o apartment|Threading libero|
|------------|-----------------------------------|--------------------|
|`InternalAddRef`|L'incremento non è thread-safe.|L'incremento è thread-safe.|
|`Lock`|Non fa nulla; non vi è alcuna sezione critica da bloccare.|Non fa nulla; non vi è alcuna sezione critica da bloccare.|

## <a name="ccommultithreadmodelcriticalsection"></a><a name="criticalsection"></a>CComMultiThreadModel::CriticalSection

Quando `CComMultiThreadModel`si utilizza , `CriticalSection` il nome **typedef** fa riferimento alla classe [CComCriticalSection](ccomcriticalsection-class.md), che fornisce metodi per ottenere e rilasciare la proprietà di un oggetto sezione critica.

```
typedef CComCriticalSection CriticalSection;
```

### <a name="remarks"></a>Osservazioni

[CComSingleThreadModel](ccomsinglethreadmodel-class.md) e [CComMultiThreadModelNoCS](ccommultithreadmodelnocs-class.md) contengono anche le definizioni per `CriticalSection`. Nella tabella seguente viene illustrata la relazione tra la `CriticalSection`classe del modello di threading e la classe di sezione critica a cui fa riferimento :

|Classe definita in|Classe a cui si fa riferimento|
|----------------------|----------------------|
|`CComMultiThreadModel`|`CComCriticalSection`|
|`CComSingleThreadModel`|`CComFakeCriticalSection`|
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|

Oltre a `CriticalSection`, è possibile utilizzare il nome **typedef** [AutoCriticalSection](#autocriticalsection). Non è `AutoCriticalSection` necessario specificare in oggetti globali o membri di classe statici se si desidera eliminare il codice di avvio CRT.

### <a name="example"></a>Esempio

Vedere [CComMultiThreadModel::AutoCriticalSection](#autocriticalsection).

## <a name="ccommultithreadmodeldecrement"></a><a name="decrement"></a>CComMultiThreadModel:ecrement :D

Questa funzione statica chiama la funzione Win32 [InterlockedDecrement](/windows/win32/api/winnt/nf-winnt-interlockeddecrement), che decrementa il valore della variabile a cui punta *p*.

```
static ULONG WINAPI Decrement(LPLONG p) throw ();
```

### <a name="parameters"></a>Parametri

*P*<br/>
[in] Puntatore alla variabile da decrementare.

### <a name="return-value"></a>Valore restituito

Se il risultato del decremento `Decrement` è 0, restituisce 0. Se il risultato del decremento è diverso da zero, anche il valore restituito è diverso da zero, ma potrebbe non essere uguale al risultato del decremento.

### <a name="remarks"></a>Osservazioni

`InterlockedDecrement`impedisce a più thread di utilizzare contemporaneamente questa variabile.

## <a name="ccommultithreadmodelincrement"></a><a name="increment"></a>CComMultiThreadModel::Incremento

Questa funzione statica chiama la funzione Win32 [InterlockedIncrement](/windows/win32/api/winnt/nf-winnt-interlockedincrement), che incrementa il valore della variabile a cui punta *p*.

```
static ULONG WINAPI Increment(LPLONG p) throw ();
```

### <a name="parameters"></a>Parametri

*P*<br/>
[in] Puntatore alla variabile da incrementare.

### <a name="return-value"></a>Valore restituito

Se il risultato dell'incremento è 0, `Increment` restituisce 0. Se il risultato dell'incremento è diverso da zero, anche il valore restituito è diverso da zero, ma potrebbe non essere uguale al risultato dell'incremento.

### <a name="remarks"></a>Osservazioni

`InterlockedIncrement`impedisce a più thread di utilizzare contemporaneamente questa variabile.

## <a name="ccommultithreadmodelthreadmodelnocs"></a><a name="threadmodelnocs"></a>CComMultiThreadModel::ThreadModelNoCS

Quando `CComMultiThreadModel`si utilizza , `ThreadModelNoCS` il nome **typedef** fa riferimento alla classe [CComMultiThreadModelNoCS](ccommultithreadmodelnocs-class.md).

```
typedef CComMultiThreadModelNoCS ThreadModelNoCS;
```

### <a name="remarks"></a>Osservazioni

`CComMultiThreadModelNoCS`fornisce metodi thread-safe per incrementare e decrementare una variabile; tuttavia, non fornisce una sezione critica.

[CComSingleThreadModel](ccomsinglethreadmodel-class.md) `CComMultiThreadModelNoCS` e contengono `ThreadModelNoCS`anche le definizioni per . Nella tabella seguente viene illustrata la relazione tra `ThreadModelNoCS`la classe del modello di threading e la classe a cui fa riferimento :

|Classe definita in|Classe a cui si fa riferimento|
|----------------------|----------------------|
|`CComMultiThreadModel`|`CComMultiThreadModelNoCS`|
|`CComSingleThreadModel`|`CComSingleThreadModel`|
|`CComMultiThreadModelNoCS`|`CComMultiThreadModelNoCS`|

### <a name="example"></a>Esempio

Vedere [CComMultiThreadModel::AutoCriticalSection](#autocriticalsection).

## <a name="see-also"></a>Vedere anche

[CComSingleThreadModel (classe)](ccomsinglethreadmodel-class.md)<br/>
[CComAutoCriticalSection (classe)](ccomautocriticalsection-class.md)<br/>
[CComCriticalSection (classe)](ccomcriticalsection-class.md)<br/>
[Cenni preliminari sulle classi](../atl-class-overview.md)

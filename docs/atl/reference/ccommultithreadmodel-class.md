---
title: Classe CComMultiThreadModel
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
ms.openlocfilehash: 74fb68eead498685ef252968124368863e27be75
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69497094"
---
# <a name="ccommultithreadmodel-class"></a>Classe CComMultiThreadModel

`CComMultiThreadModel`fornisce metodi thread-safe per incrementare e decrementare il valore di una variabile.

## <a name="syntax"></a>Sintassi

```
class CComMultiThreadModel
```

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

|Name|Descrizione|
|----------|-----------------|
|[CComMultiThreadModel:: AutoCriticalSection](#autocriticalsection)|Fa riferimento alla classe [CComAutoCriticalSection](../../atl/reference/ccomautocriticalsection-class.md).|
|[CComMultiThreadModel:: CriticalSection](#criticalsection)|Fa riferimento alla classe [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md).|
|[CComMultiThreadModel::ThreadModelNoCS](#threadmodelnocs)|Fa riferimento alla classe [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md).|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComMultiThreadModel::Decrement](#decrement)|Statico Decrementa il valore della variabile specificata in modo thread-safe.|
|[CComMultiThreadModel::Increment](#increment)|Statico Incrementa il valore della variabile specificata in modo thread-safe.|

## <a name="remarks"></a>Note

In genere, è `CComMultiThreadModel` possibile utilizzare uno dei due nomi **typedef** , ovvero [CComObjectThreadModel] (ATL-Typedefs. MD # CComObjectThreadModel o [CComGlobalsThreadModel] (ATL-Typedefs. MD # CComGlobalsThreadModel. La classe a cui fa riferimento ogni **typedef** dipende dal modello di threading utilizzato, come illustrato nella tabella seguente:

|typedef|Thread singolo|Threading Apartment|Threading libero|
|-------------|----------------------|-------------------------|--------------------|
|`CComObjectThreadModel`|S|S|M|
|`CComGlobalsThreadModel`|S|M|M|

S= `CComSingleThreadModel`; M= `CComMultiThreadModel`

`CComMultiThreadModel`definisce tre nomi **typedef** . `AutoCriticalSection`e `CriticalSection` classi di riferimento che forniscono metodi per ottenere e rilasciare la proprietà di una sezione critica. `ThreadModelNoCS`Classe References [CComMultiThreadModelNoCS (CComMultiThreadModelNoCS-class.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="autocriticalsection"></a>CComMultiThreadModel:: AutoCriticalSection

Quando si `CComMultiThreadModel`USA, il nome `AutoCriticalSection` **typedef** fa riferimento alla classe [CComAutoCriticalSection](ccomautocriticalsection-class.md), che fornisce metodi per ottenere e rilasciare la proprietà di un oggetto sezione critica.

```
typedef CComAutoCriticalSection AutoCriticalSection;
```

### <a name="remarks"></a>Note

[CComSingleThreadModel](ccomsinglethreadmodel-class.md) e [CComMultiThreadModelNoCS](ccommultithreadmodelnocs-class.md) contengono anche le definizioni `AutoCriticalSection`per. Nella tabella seguente viene illustrata la relazione tra la classe del modello di threading e la classe di `AutoCriticalSection`sezione critica a cui fa riferimento:

|Classe definita in|Classe a cui si fa riferimento|
|----------------------|----------------------|
|`CComMultiThreadModel`|`CComCriticalSection`|
|`CComSingleThreadModel`|`CComFakeCriticalSection`|
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|

Oltre a `AutoCriticalSection`, è possibile usare il nome **typedef** [CriticalSection](#criticalsection). Se si desidera eliminare `AutoCriticalSection` il codice di avvio CRT, non specificare in oggetti globali o membri di classe statici.

### <a name="example"></a>Esempio

Il codice seguente viene modellato dopo [CComObjectRootEx](ccomobjectrootex-class.md)e viene illustrato `AutoCriticalSection` come usato in un ambiente di Threading.

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

Nelle tabelle seguenti vengono illustrati i risultati `InternalAddRef` dei `Lock` metodi e, a seconda del `ThreadModel` parametro di modello e del modello di threading utilizzato dall'applicazione:

### <a name="threadmodel--ccomobjectthreadmodel"></a>ThreadModel = CComObjectThreadModel

|Metodo|Threading singolo o Apartment|Threading libero|
|------------|-----------------------------------|--------------------|
|`InternalAddRef`|L'incremento non è thread-safe.|L'incremento è thread-safe.|
|`Lock`|Non esegue alcuna operazione; Nessuna sezione critica da bloccare.|La sezione critica è bloccata.|

### <a name="threadmodel--ccomobjectthreadmodelthreadmodelnocs"></a>ThreadModel = CComObjectThreadModel:: ThreadModelNoCS

|Metodo|Threading singolo o Apartment|Threading libero|
|------------|-----------------------------------|--------------------|
|`InternalAddRef`|L'incremento non è thread-safe.|L'incremento è thread-safe.|
|`Lock`|Non esegue alcuna operazione; Nessuna sezione critica da bloccare.|Non esegue alcuna operazione; Nessuna sezione critica da bloccare.|

##  <a name="criticalsection"></a>CComMultiThreadModel:: CriticalSection

Quando si `CComMultiThreadModel`USA, il nome `CriticalSection` **typedef** fa riferimento alla classe [CComCriticalSection](ccomcriticalsection-class.md), che fornisce metodi per ottenere e rilasciare la proprietà di un oggetto sezione critica.

```
typedef CComCriticalSection CriticalSection;
```

### <a name="remarks"></a>Note

[CComSingleThreadModel](ccomsinglethreadmodel-class.md) e [CComMultiThreadModelNoCS](ccommultithreadmodelnocs-class.md) contengono anche le definizioni `CriticalSection`per. Nella tabella seguente viene illustrata la relazione tra la classe del modello di threading e la classe di `CriticalSection`sezione critica a cui fa riferimento:

|Classe definita in|Classe a cui si fa riferimento|
|----------------------|----------------------|
|`CComMultiThreadModel`|`CComCriticalSection`|
|`CComSingleThreadModel`|`CComFakeCriticalSection`|
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|

Oltre a `CriticalSection`, è possibile usare il nome **typedef** [AutoCriticalSection](#autocriticalsection). Se si desidera eliminare `AutoCriticalSection` il codice di avvio CRT, non specificare in oggetti globali o membri di classe statici.

### <a name="example"></a>Esempio

Vedere [CComMultiThreadModel:: AutoCriticalSection](#autocriticalsection).

##  <a name="decrement"></a>CComMultiThreadModel::D ecrement

Questa funzione statica chiama la funzione Win32 [InterlockedDecrement](/windows/win32/api/winnt/nf-winnt-interlockeddecrement), che decrementa il valore della variabile a cui punta *p*.

```
static ULONG WINAPI Decrement(LPLONG p) throw ();
```

### <a name="parameters"></a>Parametri

*p*<br/>
in Puntatore alla variabile da decrementare.

### <a name="return-value"></a>Valore restituito

Se il risultato del decremento è 0, `Decrement` restituisce 0. Se il risultato del decremento è diverso da zero, anche il valore restituito è diverso da zero, ma potrebbe non corrispondere al risultato del decremento.

### <a name="remarks"></a>Note

`InterlockedDecrement`impedisce a più di un thread di usare simultaneamente questa variabile.

##  <a name="increment"></a>CComMultiThreadModel:: Increment

Questa funzione statica chiama la funzione Win32 [InterlockedIncrement](/windows/win32/api/winnt/nf-winnt-interlockedincrement), che incrementa il valore della variabile a cui punta *p*.

```
static ULONG WINAPI Increment(LPLONG p) throw ();
```

### <a name="parameters"></a>Parametri

*p*<br/>
in Puntatore alla variabile da incrementare.

### <a name="return-value"></a>Valore restituito

Se il risultato dell'incremento è 0, `Increment` restituisce 0. Se il risultato dell'incremento è diverso da zero, anche il valore restituito è diverso da zero, ma potrebbe non corrispondere al risultato dell'incremento.

### <a name="remarks"></a>Note

`InterlockedIncrement`impedisce a più di un thread di usare simultaneamente questa variabile.

##  <a name="threadmodelnocs"></a>CComMultiThreadModel:: ThreadModelNoCS

Quando si `CComMultiThreadModel`USA, il nome `ThreadModelNoCS` **typedef** fa riferimento alla classe [CComMultiThreadModelNoCS](ccommultithreadmodelnocs-class.md).

```
typedef CComMultiThreadModelNoCS ThreadModelNoCS;
```

### <a name="remarks"></a>Note

`CComMultiThreadModelNoCS`fornisce metodi thread-safe per incrementare e decrementare una variabile. Tuttavia, non fornisce una sezione critica.

[CComSingleThreadModel](ccomsinglethreadmodel-class.md) e `CComMultiThreadModelNoCS` contengono anche le definizioni `ThreadModelNoCS`per. Nella tabella seguente viene illustrata la relazione tra la classe del modello di threading e la `ThreadModelNoCS`classe a cui fa riferimento:

|Classe definita in|Classe a cui si fa riferimento|
|----------------------|----------------------|
|`CComMultiThreadModel`|`CComMultiThreadModelNoCS`|
|`CComSingleThreadModel`|`CComSingleThreadModel`|
|`CComMultiThreadModelNoCS`|`CComMultiThreadModelNoCS`|

### <a name="example"></a>Esempio

Vedere [CComMultiThreadModel:: AutoCriticalSection](#autocriticalsection).

## <a name="see-also"></a>Vedere anche

[Classe CComSingleThreadModel](ccomsinglethreadmodel-class.md)<br/>
[Classe CComAutoCriticalSection](ccomautocriticalsection-class.md)<br/>
[Classe CComCriticalSection](ccomcriticalsection-class.md)<br/>
[Panoramica della classe](../atl-class-overview.md)

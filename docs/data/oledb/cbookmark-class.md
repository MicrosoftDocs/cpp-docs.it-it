---
title: Classe CBookmark
ms.date: 11/04/2016
f1_keywords:
- ATL.CBookmark
- ATL::CBookmark<nSize>
- CBookmark
- ATL.CBookmark<nSize>
- ATL::CBookmark
- CBookmark<0>.CBookmark<0>
- CBookmark::CBookmark
- ATL.CBookmark.CBookmark
- CBookmark.CBookmark
- ATL::CBookmark<0>::CBookmark<0>
- ATL.CBookmark<0>.CBookmark<0>
- CBookmark<0>::CBookmark<0>
- ATL::CBookmark::CBookmark
- ATL.CBookmark<0>.GetBuffer
- ATL.CBookmark.GetBuffer
- ATL::CBookmark<0>::GetBuffer
- ATL::CBookmark::GetBuffer
- CBookmark.GetBuffer
- ATL::CBookmark<nSize>::GetBuffer
- ATL.CBookmark<nSize>.GetBuffer
- CBookmark<0>.GetBuffer
- CBookmark<nSize>::GetBuffer
- CBookmark<0>::GetBuffer
- CBookmark<nSize>.GetBuffer
- CBookmark::GetBuffer
- CBookmark::GetSize
- ATL.CBookmark<nSize>.GetSize
- CBookmark<nSize>.GetSize
- CBookmark.GetSize
- ATL::CBookmark::GetSize
- CBookmark<0>::GetSize
- ATL::CBookmark<nSize>::GetSize
- ATL.CBookmark<0>.GetSize
- ATL::CBookmark<0>::GetSize
- ATL.CBookmark.GetSize
- CBookmark<0>.GetSize
- CBookmark<nSize>::GetSize
- CBookmark<0>::SetBookmark
- ATL.CBookmark<0>.SetBookmark
- CBookmark<0>.SetBookmark
- SetBookmark
- ATL::CBookmark::SetBookmark
- ATL::CBookmark<0>::SetBookmark
- CBookmark.SetBookmark
- ATL.CBookmark.SetBookmark
- CBookmark::SetBookmark
- CBookmark<0>::operator=
- CBookmark<0>.operator=
- ATL.CBookmark.operator=
- CBookmark::operator=
- ATL.CBookmark<0>.operator=
- ATL::CBookmark<0>::operator=
- CBookmark.operator=
- ATL::CBookmark::operator=
helpviewer_keywords:
- CBookmark class
- CBookmark class, constructor
- GetBuffer method
- GetSize method
- SetBookmark method
- = operator, with OLE DB templates
- operator =, bookmarks
- operator=, bookmarks
ms.assetid: bc942f95-6f93-41d9-bb6e-bcdae4ae0b7a
ms.openlocfilehash: e15be3342b32b432c438b65ec57765cb135f5316
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80212238"
---
# <a name="cbookmark-class"></a>Classe CBookmark

Include un valore di segnalibro nel buffer.

## <a name="syntax"></a>Sintassi

```cpp
template < DBLENGTH nSize = 0 >
class CBookmark : public CBookmarkBase

template <>
class CBookmark< 0 > : public CBookmarkBase
```

### <a name="parameters"></a>Parametri

*nSize*<br/>
Dimensioni in byte del buffer dei segnalibri. Quando *nSize* è zero, il buffer del segnalibro verrà creato dinamicamente in fase di esecuzione.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="members"></a>Members

### <a name="methods"></a>Metodi

|||
|-|-|
|[CBookmark](#cbookmark)|Costruttore|
|[GetBuffer](#getbuffer)|Recupera il puntatore al buffer.|
|[GetSize](#getsize)|Recupera la dimensione del buffer in byte.|
|[SetBookmark](#setbookmark)|Imposta il valore del segnalibro.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operatore =](#operator)|Assegna una classe `CBookmark` a un'altra.|

## <a name="remarks"></a>Osservazioni

`CBookmark<0>` è una specializzazione di modello di `CBookmark`; il buffer viene creato dinamicamente in fase di esecuzione.

## <a name="cbookmarkcbookmark"></a><a name="cbookmark"></a>CBookmark:: CBookmark

Costruttore.

### <a name="syntax"></a>Sintassi

```cpp
CBookmark();
CBookmark(DBLENGTH nSize);
```

#### <a name="parameters"></a>Parametri

*nSize*<br/>
in Dimensioni in byte del buffer dei segnalibri.

### <a name="remarks"></a>Osservazioni

La prima funzione imposta il buffer su NULL e la dimensione del buffer su 0. La seconda funzione imposta la dimensione del buffer su *nSize*e il buffer su una matrice di byte di *nSize* byte.

> [!NOTE]
>  Questa funzione è disponibile solo in `CBookmark<0>`.

## <a name="cbookmarkgetbuffer"></a><a name="getbuffer"></a>CBookmark:: GetBuffer

Recupera il puntatore al buffer dei segnalibri.

### <a name="syntax"></a>Sintassi

```cpp
virtual BYTE* GetBuffer() const throw();
```

### <a name="return-value"></a>Valore restituito

Puntatore al buffer dei segnalibri.

## <a name="cbookmarkgetsize"></a><a name="getsize"></a>CBookmark:: GetSize

Recupera la dimensione del buffer dei segnalibri.

### <a name="syntax"></a>Sintassi

```cpp
virtual DBLENGTH GetSize() const throw();
```

### <a name="return-value"></a>Valore restituito

Dimensioni del buffer in byte.

## <a name="cbookmarksetbookmark"></a><a name="setbookmark"></a>CBookmark:: sesegnalibro

Copia il valore del segnalibro a cui fa riferimento *pbuffer* nel buffer `CBookmark` e imposta le dimensioni del buffer su *nSize*.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT SetBookmark(DBLENGTH nSize, BYTE* pBuffer) throw();
```

#### <a name="parameters"></a>Parametri

*nSize*<br/>
in Dimensioni del buffer dei segnalibri.

*pBuffer*<br/>
in Puntatore alla matrice di byte contenente il valore del segnalibro.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Questa funzione è disponibile solo in `CBookmark<0>`.

## <a name="cbookmarkoperator-"></a><a name="operator"></a>CBookmark:: operator =

Assegna un oggetto `CBookmark` a un altro oggetto.

### <a name="syntax"></a>Sintassi

```cpp
CBookmark& operator =(const CBookmark& bookmark) throw();
```

### <a name="remarks"></a>Osservazioni

Questo operatore è necessario solo in `CBookmark<0>`.

## <a name="see-also"></a>Vedere anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)

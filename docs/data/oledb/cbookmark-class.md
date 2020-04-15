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
ms.openlocfilehash: d3d82ea09b7ed2c1cbaf325906b4f9b480e1eb4e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81359326"
---
# <a name="cbookmark-class"></a>Classe CBookmark

Contiene un valore di segnalibro nel buffer.

## <a name="syntax"></a>Sintassi

```cpp
template < DBLENGTH nSize = 0 >
class CBookmark : public CBookmarkBase

template <>
class CBookmark< 0 > : public CBookmarkBase
```

### <a name="parameters"></a>Parametri

*nDimensioni*<br/>
Dimensione del buffer del segnalibro in byte. Quando *nSize* è zero, il buffer del segnalibro verrà creato dinamicamente in fase di esecuzione.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[Cbookmark](#cbookmark)|Il costruttore|
|[GetBuffer](#getbuffer)|Recupera il puntatore al buffer.|
|[GetSize](#getsize)|Recupera la dimensione del buffer in byte.|
|[SetBookmark](#setbookmark)|Imposta il valore del segnalibro.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operatore .](#operator)|Assegna una `CBookmark` classe a un'altra.|

## <a name="remarks"></a>Osservazioni

`CBookmark<0>`è una specializzazione `CBookmark`modello di ; il buffer viene creato dinamicamente in fase di esecuzione.

## <a name="cbookmarkcbookmark"></a><a name="cbookmark"></a>Segnalibro CSegnalibro::CSegnalibro

Costruttore.

### <a name="syntax"></a>Sintassi

```cpp
CBookmark();
CBookmark(DBLENGTH nSize);
```

#### <a name="parameters"></a>Parametri

*nDimensioni*<br/>
[in] Dimensione del buffer del segnalibro in byte.

### <a name="remarks"></a>Osservazioni

La prima funzione imposta il buffer su NULL e la dimensione del buffer su 0. La seconda funzione imposta la dimensione del buffer su *nSize*e il buffer su una matrice di byte di *nSize* byte.

> [!NOTE]
> Questa funzione è `CBookmark<0>`disponibile solo in .

## <a name="cbookmarkgetbuffer"></a><a name="getbuffer"></a>Segnalibro CSegnalibro::GetBuffer

Recupera il puntatore al buffer del segnalibro.

### <a name="syntax"></a>Sintassi

```cpp
virtual BYTE* GetBuffer() const throw();
```

### <a name="return-value"></a>Valore restituito

Puntatore al buffer del segnalibro.

## <a name="cbookmarkgetsize"></a><a name="getsize"></a>Segnalibro CSegnalibro::GetSize

Recupera la dimensione del buffer del segnalibro.

### <a name="syntax"></a>Sintassi

```cpp
virtual DBLENGTH GetSize() const throw();
```

### <a name="return-value"></a>Valore restituito

Dimensioni del buffer in byte.

## <a name="cbookmarksetbookmark"></a><a name="setbookmark"></a>Segnalibro CSegnalibro::SetBookmark

Copia il valore del segnalibro a `CBookmark` cui fa riferimento *pBuffer* nel buffer e imposta la dimensione del buffer su *nSize*.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT SetBookmark(DBLENGTH nSize, BYTE* pBuffer) throw();
```

#### <a name="parameters"></a>Parametri

*nDimensioni*<br/>
[in] Dimensione del buffer del segnalibro.

*pBuffer*<br/>
[in] Puntatore alla matrice di byte contenente il valore del segnalibro.

### <a name="return-value"></a>Valore restituito

Un HRESULT standard.

### <a name="remarks"></a>Osservazioni

Questa funzione è `CBookmark<0>`disponibile solo in .

## <a name="cbookmarkoperator-"></a><a name="operator"></a>CBookmark::operatore

Assegna un oggetto `CBookmark` a un altro oggetto.

### <a name="syntax"></a>Sintassi

```cpp
CBookmark& operator =(const CBookmark& bookmark) throw();
```

### <a name="remarks"></a>Osservazioni

Questo operatore è `CBookmark<0>`necessario solo in .

## <a name="see-also"></a>Vedere anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)

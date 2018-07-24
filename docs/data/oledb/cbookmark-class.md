---
title: Classe CBookmark | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
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
- CBookmark
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 7545a9a31ff9bd7426002ef97176c59dd308dd49
ms.sourcegitcommit: 7eadb968405bcb92ffa505e3ad8ac73483e59685
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/23/2018
ms.locfileid: "39209144"
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
 *nSize*  
 Le dimensioni del buffer di segnalibro in byte. Quando *nSize* è uguale a zero, il buffer di segnalibro verrà creato in modo dinamico in fase di esecuzione.  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[CBookmark](#cbookmark)|Il costruttore|  
|[GetBuffer](#getbuffer)|Recupera il puntatore al buffer.|  
|[GetSize](#getsize)|Recupera la dimensione del buffer in byte.|  
|[SetBookmark](#setbookmark)|Imposta il valore di segnalibro.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator =](#operator)|Assegna un `CBookmark` classe a un altro.|  
  
## <a name="remarks"></a>Note  
 `CBookmark<0>` è una specializzazione di modello di `CBookmark`; il buffer viene creato dinamicamente in fase di esecuzione.  

## <a name="cbookmark"></a> CBookmark:: CBookmark
Costruttore.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
      CBookmark();   

CBookmark(DBLENGTH nSize);  
```  
  
#### <a name="parameters"></a>Parametri  
 *nSize*  
 [in] Dimensioni del buffer di segnalibro in byte.  
  
### <a name="remarks"></a>Note  
 La prima funzione imposta il buffer su NULL e le dimensioni del buffer su 0. La seconda funzione imposta la dimensione del buffer *nSize*e il buffer a una matrice di byte *nSize* byte.  
  
> [!NOTE]
>  Questa funzione è disponibile solo in `CBookmark<0>`. 
  
## <a name="getbuffer"></a> CBookmark:: GetBuffer
Recupera il puntatore al buffer di segnalibro.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
virtual BYTE* GetBuffer() const throw();  
  
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al buffer di segnalibro. 

## <a name="getsize"></a> CBookmark:: GetSize
Recupera la dimensione del buffer del segnalibro.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
virtual DBLENGTH GetSize() const throw();  
  
```  
  
### <a name="return-value"></a>Valore restituito  
 Dimensioni del buffer in byte.  

## <a name="setbookmark"></a> CBookmark:: SetBookmark
Copia il valore di segnalibro a cui fanno riferimento *pBuffer* per il `CBookmark` memorizzare nel buffer e imposta le dimensioni del buffer *nSize*.  
  
### <a name="syntax"></a>Sintassi  
  
```
HRESULT SetBookmark(DBLENGTH nSize,  
  BYTE* pBuffer) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 *nSize*  
 [in] Le dimensioni del buffer del segnalibro.  
  
 *pBuffer*  
 [in] Puntatore alla matrice di byte che contiene il valore di segnalibro.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Questa funzione è disponibile solo in `CBookmark<0>`. 

## <a name="operator"></a> CBookmark:: operator =
Assegna un oggetto `CBookmark` a un altro oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
      CBookmark& operator =(const CBookmark& bookmark) throw();  
```  
  
### <a name="remarks"></a>Note  
 Questo operatore è necessario solo in `CBookmark<0>`.   

## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)
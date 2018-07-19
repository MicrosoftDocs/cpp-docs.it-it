---
title: Classe CComSafeArrayBound | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CComSafeArrayBound
- ATLSAFE/ATL::CComSafeArrayBound
- ATLSAFE/ATL::GetCount
- ATLSAFE/ATL::GetLowerBound
- ATLSAFE/ATL::GetUpperBound
- ATLSAFE/ATL::SetCount
- ATLSAFE/ATL::SetLowerBound
dev_langs:
- C++
helpviewer_keywords:
- CComSafeArrayBound class
ms.assetid: dd6299db-5f84-4630-bbf0-f5add5318437
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: cdb0acc5059fa76531421cb261cb1d640aef3709
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38954339"
---
# <a name="ccomsafearraybound-class"></a>Classe CComSafeArrayBound
Questa classe è un wrapper per un [SAFEARRAYBOUND](/previous-versions/windows/desktop/api/oaidl/ns-oaidl-tagsafearraybound) struttura.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CComSafeArrayBound : public SAFEARRAYBOUND
```  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[CComSafeArrayBound](#ccomsafearraybound)|Costruttore.|  
|[GetCount](#getcount)|Chiamare questo metodo per restituire il numero di elementi.|  
|[GetLowerBound](#getlowerbound)|Chiamare questo metodo per restituire il limite inferiore.|  
|[GetUpperBound](#getupperbound)|Chiamare questo metodo per restituire il limite superiore.|  
|[SetCount](#setcount)|Chiamare questo metodo per impostare il numero di elementi.|  
|[SetLowerBound](#setlowerbound)|Chiamare questo metodo per impostare il limite inferiore.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator =](#operator_eq)|Imposta il `CComSafeArrayBound` su un nuovo valore.|  
  
## <a name="remarks"></a>Note  
 Questa classe è un wrapper per il `SAFEARRAYBOUND` struttura usata da [CComSafeArray](../../atl/reference/ccomsafearray-class.md). Fornisce metodi per l'esecuzione di query e impostare i limiti superiori e inferiori di una singola dimensione di un `CComSafeArray` oggetto e il numero di elementi in esso contenuti. Multidimensionale `CComSafeArray` oggetto utilizza una matrice di `CComSafeArrayBound` oggetti, uno per ogni dimensione. Pertanto, quando si utilizzano i metodi, ad esempio [GetCount](#getcount), tenere presente che questo metodo non restituisce il numero totale di elementi in una matrice multidimensionale.  
  
 **Intestazione:** atlsafe.h  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlsafe.h  
  
##  <a name="ccomsafearraybound"></a>  CComSafeArrayBound::CComSafeArrayBound  
 Costruttore.  
  
```
CComSafeArrayBound(ULONG ulCount = 0, LONG lLowerBound = 0) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *ulCount*  
 Numero di elementi nella matrice.  
  
 *lLowerBound*  
 Il limite inferiore da cui la matrice è numerata.  
  
### <a name="remarks"></a>Note  
 Se la matrice deve essere accessibile da un programma Visual C++, è consigliabile che il limite inferiore viene definita come 0. Potrebbe essere preferibile usare un valore limite inferiore differente se la matrice deve essere usato con altri linguaggi, ad esempio Visual Basic.  
  
##  <a name="getcount"></a>  CComSafeArrayBound::GetCount  
 Chiamare questo metodo per restituire il numero di elementi.  
  
```
ULONG GetCount() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di elementi.  
  
### <a name="remarks"></a>Note  
 Se l'oggetto associato `CComSafeArray` oggetto rappresenta una matrice multidimensionale, questo metodo restituirà solo il numero totale di elementi nella dimensione più a destra. Uso [CComSafeArray::GetCount](../../atl/reference/ccomsafearray-class.md#getcount) per ottenere il numero totale di elementi.  
  
##  <a name="getlowerbound"></a>  CComSafeArrayBound::GetLowerBound  
 Chiamare questo metodo per restituire il limite inferiore.  
  
```
LONG GetLowerBound() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il limite inferiore del `CComSafeArrayBound` oggetto.  
  
##  <a name="getupperbound"></a>  CComSafeArrayBound::GetUpperBound  
 Chiamare questo metodo per restituire il limite superiore.  
  
```
LONG GetUpperBound() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il limite superiore del `CComSafeArrayBound` oggetto.  
  
### <a name="remarks"></a>Note  
 Il limite superiore dipende dal numero di elementi e il valore limite inferiore. Ad esempio, se il limite inferiore è 0 e il numero di elementi è 10, il limite superiore di essere imposterà automaticamente su 9.  
  
##  <a name="operator_eq"></a>  CComSafeArrayBound::operator =  
 Imposta il `CComSafeArrayBound` su un nuovo valore.  
  
```
CComSafeArrayBound& operator= (const CComSafeArrayBound& bound) throw();
CComSafeArrayBound& operator= (ULONG ulCount) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *Associato*  
 Oggetto `CComSafeArrayBound`.  
  
 *ulCount*  
 Numero di elementi.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore al `CComSafeArrayBound` oggetto.  
  
### <a name="remarks"></a>Note  
 Il `CComSafeArrayBound` oggetto può essere assegnato usando un oggetto esistente `CComSafeArrayBound`, oppure specificando il numero di elementi, nel qual caso il limite inferiore è impostato su 0 per impostazione predefinita.  
  
##  <a name="setcount"></a>  CComSafeArrayBound::SetCount  
 Chiamare questo metodo per impostare il numero di elementi.  
  
```
ULONG SetCount(ULONG ulCount) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *ulCount*  
 Numero di elementi.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di elementi nel `CComSafeArrayBound` oggetto.  
  
##  <a name="setlowerbound"></a>  CComSafeArrayBound::SetLowerBound  
 Chiamare questo metodo per impostare il limite inferiore.  
  
```
LONG SetLowerBound(LONG lLowerBound) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *lLowerBound*  
 Il limite inferiore.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il nuovo limite inferiore del `CComSafeArrayBound` oggetto.  
  
### <a name="remarks"></a>Note  
 Se la matrice deve essere accessibile da un programma Visual C++, è consigliabile che il limite inferiore viene definita come 0. Potrebbe essere preferibile usare un valore limite inferiore differente se la matrice deve essere usato con altri linguaggi, ad esempio Visual Basic.  
  
 Il limite superiore dipende dal numero di elementi e il valore limite inferiore. Ad esempio, se il limite inferiore è 0 e il numero di elementi è 10, il limite superiore di essere imposterà automaticamente su 9.  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica della classe](../../atl/atl-class-overview.md)

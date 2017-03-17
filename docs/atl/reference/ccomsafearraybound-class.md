---
title: Classe CComSafeArrayBound | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComSafeArrayBound
- ATLSAFE/ATL::CComSafeArrayBound
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
caps.latest.revision: 21
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: 1cc2adef85c902b7ad12b152b35a7ef68e6abacb
ms.lasthandoff: 02/24/2017

---
# <a name="ccomsafearraybound-class"></a>Classe CComSafeArrayBound
Questa classe è un wrapper per un [SAFEARRAYBOUND](http://msdn.microsoft.com/en-us/303a9bdb-71d6-4f14-8747-84cf84936c6d) struttura.  
  
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
|[operatore =](#operator_eq)|Imposta il `CComSafeArrayBound` su un nuovo valore.|  
  
## <a name="remarks"></a>Note  
 Questa classe è un wrapper per il **SAFEARRAYBOUND** struttura utilizzata da [CComSafeArray](../../atl/reference/ccomsafearray-class.md). Fornisce metodi per l'esecuzione di query e impostare i limiti superiori e inferiori di una singola dimensione di un `CComSafeArray` oggetto e il numero di elementi che contiene. Un oggetto multidimensionale `CComSafeArray` oggetto utilizza una matrice di `CComSafeArrayBound` oggetti, uno per ogni dimensione. Pertanto, quando si utilizzano i metodi, ad esempio [GetCount](#getcount), tenere presente che questo metodo non restituirà il numero totale di elementi in una matrice multidimensionale.  
  
 **Intestazione:** atlsafe.h  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlsafe.h  
  
##  <a name="ccomsafearraybound"></a>CComSafeArrayBound::CComSafeArrayBound  
 Costruttore.  
  
```
CComSafeArrayBound(ULONG ulCount = 0, LONG lLowerBound = 0) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `ulCount`  
 Numero di elementi nella matrice.  
  
 `lLowerBound`  
 Il limite inferiore da cui viene assegnato il numero della matrice.  
  
### <a name="remarks"></a>Note  
 Se la matrice è accessibile da un programma Visual C++, è consigliabile che il limite inferiore viene definita come 0. Potrebbe essere preferibile utilizzare un valore limite inferiore diverso se la matrice è utilizzabile con altri linguaggi, ad esempio Visual Basic.  
  
##  <a name="getcount"></a>CComSafeArrayBound::GetCount  
 Chiamare questo metodo per restituire il numero di elementi.  
  
```
ULONG GetCount() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di elementi.  
  
### <a name="remarks"></a>Note  
 Se l'oggetto associato `CComSafeArray` oggetto rappresenta una matrice multidimensionale, questo metodo restituirà solo il numero totale di elementi nella dimensione più a destra. Utilizzare [CComSafeArray::GetCount](../../atl/reference/ccomsafearray-class.md#getcount) per ottenere il numero totale di elementi.  
  
##  <a name="getlowerbound"></a>CComSafeArrayBound::GetLowerBound  
 Chiamare questo metodo per restituire il limite inferiore.  
  
```
LONG GetLowerBound() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il limite inferiore di `CComSafeArrayBound` oggetto.  
  
##  <a name="getupperbound"></a>CComSafeArrayBound::GetUpperBound  
 Chiamare questo metodo per restituire il limite superiore.  
  
```
LONG GetUpperBound() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il limite superiore di `CComSafeArrayBound` oggetto.  
  
### <a name="remarks"></a>Note  
 Il limite superiore dipende dal numero di elementi e il valore limite inferiore. Ad esempio, se il limite inferiore è 0 e il numero di elementi è 10, il limite superiore verrà automaticamente impostato a 9.  
  
##  <a name="operator_eq"></a>CComSafeArrayBound::operator =  
 Imposta il `CComSafeArrayBound` su un nuovo valore.  
  
```
CComSafeArrayBound& operator= (const CComSafeArrayBound& bound) throw();
CComSafeArrayBound& operator= (ULONG ulCount) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `bound`  
 Oggetto `CComSafeArrayBound`.  
  
 `ulCount`  
 Numero di elementi.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore per il `CComSafeArrayBound` oggetto.  
  
### <a name="remarks"></a>Note  
 Il `CComSafeArrayBound` oggetto può essere assegnato utilizzando un oggetto esistente `CComSafeArrayBound`, oppure specificando il numero di elementi, nel qual caso il limite inferiore è impostato su 0 per impostazione predefinita.  
  
##  <a name="setcount"></a>CComSafeArrayBound::SetCount  
 Chiamare questo metodo per impostare il numero di elementi.  
  
```
ULONG SetCount(ULONG ulCount) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `ulCount`  
 Numero di elementi.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di elementi di `CComSafeArrayBound` oggetto.  
  
##  <a name="setlowerbound"></a>CComSafeArrayBound::SetLowerBound  
 Chiamare questo metodo per impostare il limite inferiore.  
  
```
LONG SetLowerBound(LONG lLowerBound) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `lLowerBound`  
 Il limite inferiore.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il nuovo limite inferiore di `CComSafeArrayBound` oggetto.  
  
### <a name="remarks"></a>Note  
 Se la matrice è accessibile da un programma Visual C++, è consigliabile che il limite inferiore viene definita come 0. Potrebbe essere preferibile utilizzare un valore limite inferiore diverso se la matrice è utilizzabile con altri linguaggi, ad esempio Visual Basic.  
  
 Il limite superiore dipende dal numero di elementi e il valore limite inferiore. Ad esempio, se il limite inferiore è 0 e il numero di elementi è 10, il limite superiore verrà automaticamente impostato a 9.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)


---
title: Classe CAccessorBase | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CAccessorBase
- CAccessorBase.Close
- CAccessorBase::Close
- GetHAccessor
- CAccessorBase::GetHAccessor
- CAccessorBase.GetHAccessor
- CAccessorBase::GetNumAccessors
- GetNumAccessors
- CAccessorBase.GetNumAccessors
- IsAutoAccessor
- CAccessorBase.IsAutoAccessor
- CAccessorBase::IsAutoAccessor
- CAccessorBase::ReleaseAccessors
- CAccessorBase.ReleaseAccessors
- ReleaseAccessors
dev_langs:
- C++
helpviewer_keywords:
- CAccessorBase class
- Close method
- GetHAccessor method
- GetNumAccessors method
- IsAutoAccessor method
- ReleaseAccessors method
ms.assetid: 389b65be-11ca-4ae0-9290-60c621c4982b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 99f6be0815572b88f7c46406262ed21eaefdb77d
ms.sourcegitcommit: 04d327940787df1297b72d534f388a035d472af0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/20/2018
ms.locfileid: "39181198"
---
# <a name="caccessorbase-class"></a>Classe CAccessorBase
Tutte le funzioni di accesso nei modelli OLE DB derivano da questa classe. `CAccessorBase` consente a un set di righe per la gestione di più funzioni di accesso. Fornisce inoltre l'associazione per entrambi i parametri e colonne di output.  
  
## <a name="syntax"></a>Sintassi

```cpp
// Replace with syntax  
```  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[Chiudi](#close)|Chiude le funzioni di accesso.|  
|[GetHAccessor](#geth)|Recupera l'handle della funzione di accesso.|  
|[GetNumAccessors](#getnum)|Recupera il numero di funzioni di accesso creato dalla classe.|  
|[IsAutoAccessor](#isauto)|Verifica se la funzione di accesso specificato è un sia automatica o meno.|  
|[ReleaseAccessors](#release)|Rilascia le funzioni di accesso.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  

## <a name="close"></a> CAccessorBase:: Close
Chiude le funzioni di accesso.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
void Close();  
  
```  
  
### <a name="remarks"></a>Note  
 È necessario chiamare [ReleaseAccessors](../../data/oledb/caccessorbase-releaseaccessors.md) prima.  

## <a name="geth"></a> CAccessorBase:: Gethaccessor
Recupera l'handle di funzione di accesso di una funzione di accesso specificata.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
      HACCESSOR GetHAccessor(ULONG nAccessor) const;  
```  
  
#### <a name="parameters"></a>Parametri  
 *nAccessor*  
 [in] Numero di offset uguale a zero per la funzione di accesso.  
  
### <a name="return-value"></a>Valore restituito  
 Handle della funzione di accesso.  

## <a name="getnum"></a> CAccessorBase:: Getnumaccessors
Recupera il numero di funzioni di accesso creato dalla classe.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
ULONG GetNumAccessors() const;  
  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di funzioni di accesso creato dalla classe.  

## <a name="isauto"></a> CAccessorBase:: Isautoaccessor
Restituisce true se i dati vengono recuperati automaticamente per la funzione di accesso durante un'operazione di spostamento.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
      bool IsAutoAccessor(ULONG nAccessor) const;  
```  
  
#### <a name="parameters"></a>Parametri  
 *nAccessor*  
 [in] Numero di offset uguale a zero per la funzione di accesso.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se la funzione di accesso è un sia automatica o meno. Negli altri casi, viene restituito **false**.  

## <a name="release"></a> CAccessorBase:: Releaseaccessors
Rilascia le funzioni di accesso creati dalla classe.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT ReleaseAccessors(IUnknown* pUnk);  
```  
  
#### <a name="parameters"></a>Parametri  
 *pUnk*  
 [in] Un puntatore a un `IUnknown` interfaccia per l'oggetto COM per il quale sono stati creati le funzioni di accesso.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Chiamato da [CAccessorRowset:: Close](../../data/oledb/caccessorrowset-close.md). 
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)   
 [Classe CAccessorBase](../../data/oledb/caccessorbase-class.md)

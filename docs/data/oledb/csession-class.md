---
title: Classe CSession | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CSession
- ATL::CSession
- ATL.CSession
- CSession.Abort
- CSession::Abort
- ATL.CSession.Abort
- ATL::CSession::Abort
- CSession::Close
- ATL.CSession.Close
- CSession.Close
- ATL::CSession::Close
- CSession.Commit
- ATL.CSession.Commit
- ATL::CSession::Commit
- CSession::Commit
- GetTransactionInfo
- CSession.GetTransactionInfo
- ATL.CSession.GetTransactionInfo
- CSession::GetTransactionInfo
- ATL::CSession::GetTransactionInfo
- ATL::CSession::Open
- CSession::Open
- CSession.Open
- ATL.CSession.Open
- CSession::StartTransaction
- StartTransaction
- ATL.CSession.StartTransaction
- CSession.StartTransaction
- ATL::CSession::StartTransaction
dev_langs:
- C++
helpviewer_keywords:
- CSession class
- Abort method
- Close method
- Commit method
- GetTransactionInfo method
- Open method
- StartTransaction method
ms.assetid: 83cd798f-b45d-4f11-a23c-29183390450c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 72ac1a5be4f2e114e5b90b65542b09733c43d174
ms.sourcegitcommit: 889a75be1232817150be1e0e8d4d7f48f5993af2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/30/2018
ms.locfileid: "39338863"
---
# <a name="csession-class"></a>Classe CSession
Rappresenta una sessione di accesso singolo database.  
  
## <a name="syntax"></a>Sintassi

```cpp
class CSession  
```  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[Abort](#abort)|Annulla (termina) della transazione.|  
|[Chiudi](#close)|Chiude la sessione.|  
|[Eseguire il commit](#commit)|esegue il commit della transazione.|  
|[GetTransactionInfo](#gettransactioninfo)|Restituisce informazioni su una transazione.|  
|[Apri](#open)|Apre una nuova sessione per l'oggetto origine dati.|  
|[StartTransaction](#starttransaction)|Inizia una nuova transazione per questa sessione.|  
  
## <a name="remarks"></a>Note  
 Una o più sessioni possono essere associati a ogni connessione del provider (origine dati), che è rappresentata da un [CDataSource](../../data/oledb/cdatasource-class.md) oggetto. Per creare una nuova `CSession` per un `CDataSource`, chiamare [CSession:: Open](../../data/oledb/csession-open.md). Per iniziare una transazione di database, `CSession` fornisce il `StartTransaction` (metodo). Una volta che viene avviata una transazione, è possibile eseguire il commit tramite il `Commit` metodo, o annullare l'operazione usando il `Abort` (metodo).  
  
## <a name="abort"></a> CSession:: Abort
Termina la transazione.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT Abort(BOID* pboidReason = NULL,   
   BOOL bRetaining = FALSE,   
   BOOL bAsync = FALSE) const throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [ITransaction:: Abort](https://msdn.microsoft.com/library/ms709833.aspx) nel *riferimento per programmatori OLE DB*.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard. 

## <a name="close"></a> CSession:: Close
Chiude la sessione, che è stato aperto con [CSession:: Open](../../data/oledb/csession-open.md).  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
void Close() throw();  
```  
  
### <a name="remarks"></a>Note  
 Versioni di `m_spOpenRowset` puntatore.  

## <a name="commit"></a> CSession:: commit
esegue il commit della transazione.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT Commit(BOOL bRetaining = FALSE,   
   DWORD grfTC = XACTTC_SYNC,   
   DWORD grfRM = 0) const throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [ITransaction](https://msdn.microsoft.com/library/ms713008.aspx) nel *riferimento per programmatori OLE DB*.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Per altre informazioni, vedere [ITransaction:: commit](https://msdn.microsoft.com/library/ms713008.aspx).  

## <a name="gettransactioninfo"></a> CSession:: Gettransactioninfo
Restituisce informazioni su una transazione.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT GetTransactionInfo(XACTTRANSINFO* pInfo) const throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [ITransaction::GetTransactionInfo](https://msdn.microsoft.com/library/ms714975.aspx) nel *riferimento per programmatori OLE DB*.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Per altre informazioni, vedere [ITransaction::GetTransactionInfo](https://msdn.microsoft.com/library/ms714975.aspx) nel *riferimento per programmatori OLE DB*. 

## <a name="open"></a> CSession:: Open
Apre una nuova sessione per l'oggetto origine dati.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT Open(const CDataSource& ds,  
   DBPROPSET *pPropSet = NULL,  
   ULONG ulPropSets = 0) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 *dominio Active Directory*  
 [in] L'origine dati per il quale è necessario aprire la sessione.  
  
 *pPropSet*  
 [in] Un puntatore a una matrice di [DBPROPSET](https://msdn.microsoft.com/library/ms714367.aspx) strutture contenenti le proprietà e valori da impostare. Visualizzare [set di proprietà e i gruppi di proprietà](https://msdn.microsoft.com/library/ms713696.aspx) nel *riferimento per programmatori OLE DB* in Windows SDK.  
  
 *ulPropSets*  
 [in] Il numero di [DBPROPSET](https://msdn.microsoft.com/library/ms714367.aspx) strutture passato il *pPropSet* argomento.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 È necessario aprire l'oggetto origine dati usando [CDataSource:: Open](../../data/oledb/cdatasource-open.md) prima di passarlo a `CSession::Open`.  

## <a name="starttransaction"></a> CSession:: StartTransaction
Inizia una nuova transazione per questa sessione.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT StartTransaction(ISOLEVEL isoLevel = ISOLATIONLEVEL_READCOMMITTED,  
   ULONG isoFlags = 0,  
   ITransactionOptions* pOtherOptions = NULL,  
   ULONG* pulTransactionLevel = NULL) const throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [ITransactionLocal:: StartTransaction](https://msdn.microsoft.com/library/ms709786.aspx) nel *riferimento per programmatori OLE DB*.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Per altre informazioni, vedere [ITransactionLocal:: StartTransaction](https://msdn.microsoft.com/library/ms709786.aspx) nel *riferimento per programmatori OLE DB*. 
  
## <a name="see-also"></a>Vedere anche  
 [CatDB](../../visual-cpp-samples.md)   
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)
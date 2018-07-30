---
title: Classe CManualAccessor | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL::CManualAccessor
- ATL.CManualAccessor
- CManualAccessor
- ATL::CManualAccessor::AddBindEntry
- ATL.CManualAccessor.AddBindEntry
- CManualAccessor::AddBindEntry
- AddBindEntry
- CManualAccessor.AddBindEntry
- CManualAccessor::AddParameterEntry
- ATL.CManualAccessor.AddParameterEntry
- CManualAccessor.AddParameterEntry
- AddParameterEntry
- ATL::CManualAccessor::AddParameterEntry
- ATL::CManualAccessor::CreateAccessor
- CreateAccessor
- ATL.CManualAccessor.CreateAccessor
- CManualAccessor.CreateAccessor
- CManualAccessor::CreateAccessor
- ATL::CManualAccessor::CreateParameterAccessor
- ATL.CManualAccessor.CreateParameterAccessor
- CManualAccessor.CreateParameterAccessor
- CreateParameterAccessor
- CManualAccessor::CreateParameterAccessor
dev_langs:
- C++
helpviewer_keywords:
- CManualAccessor class
- AddBindEntry method
- AddParameterEntry method
- CreateAccessor method
- CreateParameterAccessor method
ms.assetid: a0088074-7135-465c-b228-69097a50b8cc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: f94e1100398b3f338fdc34839aee9a1e8f67871c
ms.sourcegitcommit: 889a75be1232817150be1e0e8d4d7f48f5993af2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/30/2018
ms.locfileid: "39338376"
---
# <a name="cmanualaccessor-class"></a>Classe CManualAccessor
Rappresenta un tipo di funzione di accesso progettato per utenti esperti.  
  
## <a name="syntax"></a>Sintassi

```cpp
class CManualAccessor : public CAccessorBase  
```  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[AddBindEntry](#addbindentry)|Aggiunge una voce binding alle colonne di output.|  
|[AddParameterEntry](#addparameterentry)|Aggiunge una voce di parametro alla funzione di accesso di parametro.|  
|[CreateAccessor](#createaccessor)|Alloca memoria per la colonna strutture bind e inizializza i membri di dati di colonna.|  
|[CreateParameterAccessor](#createparameteraccessor)|Alloca memoria per il parametro di binding strutture e inizializza i membri di dati di parametro.|  
  
## <a name="remarks"></a>Note  
 Usando `CManualAccessor`, è possibile specificare il parametro e associazione di colonna di output dalle chiamate di funzione di runtime.  

## <a name="addbindentry"></a> CManualAccessor:: AddBindEntry
Aggiunge una voce binding alle colonne di output.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
void AddBindEntry(DBORDINAL nOrdinal,  
   DBTYPE wType,  DBLENGTH nColumnSize,  
   void* pData,  
   void* pLength = NULL,  
   void* pStatus = NULL) throw ();  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [DBBINDING](https://msdn.microsoft.com/library/ms716845.aspx) nel *riferimento per programmatori OLE DB*.  
  
 *nOrdinal*  
 [in] Numero di colonna.  
  
 *wType*  
 [in] Tipo di dati.  
  
 *nColumnSize*  
 [in] Dimensioni di colonna in byte.  
  
 *pData*  
 [in] Puntatore ai dati delle colonne memorizzati nel buffer.  
  
 *pLength*  
 [in] Un puntatore per la lunghezza del campo, se necessario.  
  
 *pStatus*  
 [in] Puntatore alla variabile da associare allo stato della colonna, se necessario.  
  
### <a name="remarks"></a>Note  
 Per usare questa funzione, è necessario chiamare innanzitutto [CreateAccessor](../../data/oledb/cmanualaccessor-createaccessor.md). Non è possibile aggiungere altre voci rispetto al numero di colonne specificate nella `CreateAccessor`. 
  
## <a name="addparameterentry"></a> CManualAccessor:: AddParameterEntry
Aggiunge una voce di parametro alle strutture di voce di parametro.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
void AddParameterEntry(DBORDINAL nOrdinal,  
   DBTYPE wType,  DBLENGTH nColumnSize,  
   void* pData,  
   void* pLength = NULL,  
   void* pStatus = NULL,  
   DBPARAMIO eParamIO = DBPARAMIO_INPUT) throw ();  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [DBBINDING](https://msdn.microsoft.com/library/ms716845.aspx) nel *riferimento per programmatori OLE DB*.  
  
 *nOrdinal*  
 [in] Numero di parametro.  
  
 *wType*  
 [in] Tipo di dati.  
  
 *nColumnSize*  
 [in] Dimensioni di colonna in byte.  
  
 *pData*  
 [in] Puntatore ai dati delle colonne memorizzati nel buffer.  
  
 *pLength*  
 [in] Un puntatore per la lunghezza del campo, se necessario.  
  
 *pStatus*  
 [in] Puntatore alla variabile da associare allo stato della colonna, se necessario.  
  
 *eParamIO*  
 [in] Specifica se il parametro a cui è associato l'associazione è un parametro di input, input/output o di output.  
  
### <a name="remarks"></a>Note  
 Per usare questa funzione, è necessario chiamare innanzitutto [CreateParameterAccessor](../../data/oledb/cmanualaccessor-createparameteraccessor.md). 

## <a name="createaccessor"></a> CManualAccessor:: CreateAccessor
Alloca memoria per la colonna strutture bind e inizializza i membri di dati di colonna.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT CreateAccessor(int nBindEntries,   
  void* pBuffer,   
   DBLENGTH nBufferSize) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 *nBindEntries*  
 [in] Numero di colonne. Questo numero deve corrispondere al numero di chiamate per il [CManualAccessor:: AddBindEntry](../../data/oledb/cmanualaccessor-addbindentry.md) (funzione).  
  
 *pBuffer*  
 [in] Un puntatore al buffer in cui sono archiviate le colonne di output.  
  
 *nBufferSize*  
 [in] Le dimensioni del buffer in byte.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione prima di chiamare il `CManualAccessor::AddBindEntry` (funzione).  

## <a name="createparameteraccessor"></a> CManualAccessor:: Createparameteraccessor
Alloca memoria per il parametro di binding strutture e inizializza i membri di dati di parametro.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT CreateParameterAccessor(int nBindEntries,   
   void* pBuffer,   
   DBLENGTH nBufferSize) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 *nBindEntries*  
 [in] Numero di colonne.  
  
 *pBuffer*  
 [in] Un puntatore al buffer in cui sono archiviate le colonne di input.  
  
 *nBufferSize*  
 [in] Le dimensioni del buffer in byte.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di HRESULT standard.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare questa funzione prima di chiamare [AddParameterEntry](../../data/oledb/cmanualaccessor-addparameterentry.md).

## <a name="see-also"></a>Vedere anche  
 [DBViewer](../../visual-cpp-samples.md)   
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)   
 [Classe CAccessor](../../data/oledb/caccessor-class.md)   
 [Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)   
 [Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)
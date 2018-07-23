---
title: Classe CAccessorRowset | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CAccessorRowset
- ATL.CAccessorRowset
- ATL::CAccessorRowset
- CAccessorRowset.Bind
- CAccessorRowset::Bind
- CAccessorRowset::CAccessorRowset
- CAccessorRowset.CAccessorRowset
- CAccessorRowset
- ATL.CAccessorRowset.CAccessorRowset
- ATL::CAccessorRowset::CAccessorRowset
- CAccessorRowset.Close
- CAccessorRowset::Close
- CAccessorRowset::FreeRecordMemory
- CAccessorRowset.FreeRecordMemory
- FreeRecordMemory
- GetColumnInfo
- CAccessorRowset.GetColumnInfo
- CAccessorRowset::GetColumnInfo
dev_langs:
- C++
helpviewer_keywords:
- CAccessorRowset class
- CAccessorRowset class, methods
- CAccessorRowset class, members
- Bind method
- CAccessorRowset class, constructor
- Close method
- FreeRecordMemory method
- GetColumnInfo method
ms.assetid: bd4f58ed-cebf-4d43-8985-1e5fcbf06953
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: a9f869a901885b064ef4ddbbfddc23b246455a39
ms.sourcegitcommit: 04d327940787df1297b72d534f388a035d472af0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/20/2018
ms.locfileid: "39181185"
---
# <a name="caccessorrowset-class"></a>Classe CAccessorRowset
Incapsula un set di righe e delle relative funzioni di accesso associati in una singola classe.  
  
## <a name="syntax"></a>Sintassi

```cpp
template <class TAccessor = CNoAccessor, 
          template <typename T> class TRowset = CRowset>  
class CAccessorRowset : public TAccessor, public TRowset<TAccessor>  
```  
  
### <a name="parameters"></a>Parametri  
 *TAccessor*  
 Una classe di funzione di accesso.  
  
 *TRowset*  
 Una classe di set di righe.  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[Eseguire l'associazione](#bind)|Consente di creare associazioni (utilizzato quando `bBind` viene specificato come **false** nelle [CCommand::](../../data/oledb/ccommand-open.md)).|  
|[CAccessorRowset](#caccessorrowset)|Costruttore.|  
|[Chiudi](#close)|Chiude il set di righe e le funzioni di accesso.|  
|[FreeRecordMemory](#freerecordmemory)|Libera tutte le colonne nel record corrente che devono essere liberate.|  
|[GetColumnInfo](#getcolumninfo)|Implements [IColumnsInfo:: GetColumnInfo](https://msdn.microsoft.com/en-us/library/ms722704.aspx).|  
  
## <a name="remarks"></a>Note  
 Classe `TAccessor` gestisce la funzione di accesso. Classe *TRowset* gestisce il set di righe.  

## <a name="bind"></a> CAccessorRowset:: Bind
Consente di creare le associazioni se è stato specificato `bBind` come **false** nelle [CCommand::](../../data/oledb/ccommand-open.md).  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT Bind();  
  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  

## <a name="caccessorrowset"></a> CAccessorRowset:: CAccessorRowset
Inizializza il `CAccessorRowset` oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
CAccessorRowset();  
  
```  

## <a name="close"></a> CAccessorRowset:: Close
Rilascia tutte le funzioni di accesso attivi e il set di righe.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
void Close();  
  
```  
  
### <a name="remarks"></a>Note  
 Rilascia qualsiasi memoria associati.  

## <a name="freerecordmemory"></a> CAccessorRowset:: Freerecordmemory
Libera tutte le colonne nel record corrente che devono essere liberate.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
void FreeRecordMemory();  
  
```  

## <a name="getcolumninfo"></a> CAccessorRowset:: GetColumnInfo
Ottiene informazioni sulle colonne dal set di righe aperto.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT GetColumnInfo(DBORDINAL* pulColumns,  
   DBCOLUMNINFO** ppColumnInfo,  
   LPOLESTR* ppStrings) const;  

HRESULT GetColumnInfo(DBORDINAL* pColumns,  
   DBCOLUMNINFO** ppColumnInfo);  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [IColumnsInfo:: GetColumnInfo](https://msdn.microsoft.com/en-us/library/ms722704.aspx) nel *riferimento per programmatori OLE DB*.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 L'utente deve liberare il buffer di stringa e le informazioni di colonna restituita. Utilizzare la seconda versione di questo metodo quando si usa [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) ed è necessario eseguire l'override delle associazioni.  
  
 Per altre informazioni, vedere [IColumnsInfo:: GetColumnInfo](https://msdn.microsoft.com/en-us/library/ms722704.aspx) nel *riferimento per programmatori OLE DB*.  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)
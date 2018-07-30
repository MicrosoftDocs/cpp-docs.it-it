---
title: Classe CUtlProps | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CUtlProps
- CUtlProps::GetPropValue
- CUtlProps.GetPropValue
- GetPropValue
- CUtlProps::IsValidValue
- CUtlProps.IsValidValue
- IsValidValue
- CUtlProps
- OnPropertyChanged
- CUtlProps.OnPropertyChanged
- CUtlProps::OnPropertyChanged
- SetPropValue
- ATL::CUtlProps<T>::SetPropValue
- ATL.CUtlProps<T>.SetPropValue
- ATL.CUtlProps.SetPropValue
- CUtlProps::SetPropValue
- CUtlProps<T>::SetPropValue
- CUtlProps.SetPropValue
- CUtlProps<T>.SetPropValue
- ATL::CUtlProps::SetPropValue
dev_langs:
- C++
helpviewer_keywords:
- CUtlProps class
- GetPropValue method
- IsValidValue method
- OnInterfaceRequested method
- OnPropertyChanged method
- SetPropValue method
ms.assetid: bb525178-765c-4e23-a110-c0fd70c05437
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 661ac13acd1d8eac0ecde9af9fa08875b99153e3
ms.sourcegitcommit: 889a75be1232817150be1e0e8d4d7f48f5993af2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/30/2018
ms.locfileid: "39336980"
---
# <a name="cutlprops-class"></a>Classe CUtlProps
Implementa le proprietà per un'ampia gamma di interfacce della proprietà OLE DB (ad esempio, `IDBProperties`, `IDBProperties`, e `IRowsetInfo`).  
  
## <a name="syntax"></a>Sintassi

```cpp
template < class T >  
class ATL_NO_VTABLE CUtlProps : public CUtlPropsBase  
```  
  
### <a name="parameters"></a>Parametri  
 *T*  
 La classe che contiene il `BEGIN_PROPSET_MAP`.  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  

## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[GetPropValue](#getpropvalue)|Ottiene una proprietà da un set di proprietà.|  
|[IsValidValue](#isvalidvalue)|Usato per convalidare un valore prima di impostare una proprietà.|  
|[OnInterfaceRequested](#oninterfacerequested)|Gestisce le richieste per un'interfaccia facoltativa quando un consumer chiama un metodo su un oggetto di interfaccia di creazione.|  
|[OnPropertyChanged](#onpropertychanged)|Chiamato dopo l'impostazione di una proprietà per gestire le proprietà concatenate.|  
|[SetPropValue](#setpropvalue)|Imposta una proprietà in un set di proprietà.|  
  
## <a name="remarks"></a>Note  
 La maggior parte di questa classe è un dettaglio di implementazione.  
  
 `CUtlProps` contiene due membri per l'impostazione delle proprietà internamente: [GetPropValue](../../data/oledb/cutlprops-getpropvalue.md) e [SetPropValue](../../data/oledb/cutlprops-setpropvalue.md).  
  
 Per altre informazioni sulle macro di utilizzato in una mappa di set di proprietà, vedere [BEGIN_PROPSET_MAP](../../data/oledb/begin-propset-map.md) e [END_PROPSET_MAP](../../data/oledb/end-propset-map.md).  
  
## <a name="getpropvalue"></a> CUtlProps:: GetPropValue
Ottiene una proprietà da un set di proprietà.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
OUT_OF_LINE HRESULT GetPropValue(const GUID* pguidPropSet,  
   DBPROPID dwPropId,  
   VARIANT* pvValue);  
```  
  
#### <a name="parameters"></a>Parametri  
 *pguidPropSet*  
 [in] GUID per il set di proprietà.  
  
 *dwPropId*  
 [in] L'indice della proprietà.  
  
 *pvValue*  
 [out] Un puntatore a un variant contenente il nuovo valore della proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 `Failure` in errore e S_OK se l'operazione riesce.

## <a name="isvalidvalue"></a> CUtlProps:: IsValidValue
Usato per convalidare un valore prima di impostare una proprietà.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
virtual HRESULT CUtlPropsBase::IsValidValue(ULONG /* iCurSet */,  
   DBPROP* pDBProp);  
```  
  
#### <a name="parameters"></a>Parametri  
 *iCurSet*  
 L'indice nella matrice di set di proprietà; zero se è presente una sola proprietà set.  
  
 *pDBProp*  
 L'ID di proprietà e un nuovo valore in una [DBPROP](https://msdn.microsoft.com/library/ms717970.aspx) struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard. Il valore predefinito è S_OK.  
  
### <a name="remarks"></a>Note  
 Se si dispone di qualsiasi routine di convalida da eseguire su un valore che sta tentando di usare per impostare una proprietà, si deve eseguire l'override di questa funzione. È ad esempio, è stato possibile convalidare DBPROP_AUTH_PASSWORD rispetto a una tabella di password per determinare un valore valido. 

## <a name="oninterfacerequested"></a> CUtlProps:: Oninterfacerequested
Gestisce le richieste per un'interfaccia facoltativa quando un consumer chiama un metodo in uno degli oggetti interfacce di creazione.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
virtual HRESULT CUtlPropsBase::OnInterfaceRequested(REFIID riid);  
```  
  
#### <a name="parameters"></a>Parametri  
 *riid*  
 [in] IID per l'interfaccia richiesta. Per altre informazioni, vedere la descrizione del *riid* parametro di `ICommand::Execute` nel *riferimento per programmatori OLE DB* (nel *SDK di MDAC*).  
  
### <a name="remarks"></a>Note  
 `OnInterfaceRequested` gestisce le richieste di consumer per un'interfaccia facoltativa quando un consumer chiama un metodo in uno degli oggetti interfacce di creazione (ad esempio `IDBCreateSession`, `IDBCreateCommand`, `IOpenRowset`, o `ICommand`). Imposta la proprietà OLE DB corrispondente per l'interfaccia richiesta. Ad esempio, se il consumer richiede `IID_IRowsetLocate`, `OnInterfaceRequested` imposta il `DBPROP_IRowsetLocate` interfaccia. In questo modo mantiene lo stato corretto durante la creazione del set di righe.  
  
 Questo metodo viene chiamato quando il consumer chiama `IOpenRowset::OpenRowset` o `ICommand::Execute`.  
  
 Se un utente apre un oggetto e richiede un'interfaccia facoltativa, il provider deve impostare la proprietà associata all'interfaccia su VARIANT_TRUE. Per consentire l'elaborazione di specifici delle proprietà, `OnInterfaceRequested` viene chiamato prima che il provider `Execute` viene chiamato il metodo. Per impostazione predefinita, `OnInterfaceRequested` gestisce le interfacce seguenti:  
  
-   `IRowsetLocate`  
  
-   `IRowsetChange`  
  
-   `IRowsetUpdate`  
  
-   `IConnectionPointContainer`  
  
-   `IRowsetScroll`  
  
 Se si vuole gestire altre interfacce, eseguire l'override di questa funzione nella classe dati origine, sessione, nel comando o set di righe per le funzioni di processo. La sostituzione deve passare attraverso le interfacce di proprietà get/set normale per assicurarsi che le proprietà si imposta alcuna proprietà concatenate (vedere [OnPropertyChanged](../../data/oledb/cutlprops-onpropertychanged.md)).  

## <a name="onpropertychanged"></a> CUtlProps:: OnPropertyChanged
Chiamato dopo l'impostazione di una proprietà per gestire le proprietà concatenate.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
virtual HRESULT OnPropertyChanged(ULONG /* iCurSet */,  
   DBPROP* pDBProp);  
```  
  
#### <a name="parameters"></a>Parametri  
 *iCurSet*  
 L'indice nella matrice di set di proprietà; zero se è presente una sola proprietà set.  
  
 *pDBProp*  
 L'ID di proprietà e un nuovo valore in una [DBPROP](https://msdn.microsoft.com/library/ms717970.aspx) struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard. Il valore predefinito è S_OK.  
  
### <a name="remarks"></a>Note  
 Se si desidera gestire proprietà concatenate, ad esempio i segnalibri o aggiornamenti i cui valori sono dipendenti dal valore della proprietà di un altro, si deve eseguire l'override di questa funzione.  
  
### <a name="example"></a>Esempio  
 In questa funzione, l'utente ottiene l'ID di proprietà dal `DBPROP*` parametro. A questo punto, è possibile confrontare l'ID in base a una proprietà alla catena. Quando la proprietà viene trovata, `SetProperties` viene chiamata con la proprietà che verrà impostata in combinazione con l'altra proprietà. In questo caso, se uno Ottiene il `DBPROP_IRowsetLocate`, `DBPROP_LITERALBOOKMARKS`, o `DBPROP_ORDEREDBOOKMARKS` proprietà, è possibile impostare il `DBPROP_BOOKMARKS` proprietà.  
  
 [!code-cpp[NVC_OLEDB_Provider#2](../../data/oledb/codesnippet/cpp/cutlprops-onpropertychanged_1.h)]  
  
## <a name="setpropvalue"></a> CUtlProps:: Setpropvalue
Imposta una proprietà in un set di proprietà.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT SetPropValue(const GUID* pguidPropSet,  
   DBPROPID dwPropId,  
   VARIANT* pvValue);  
```  
  
#### <a name="parameters"></a>Parametri  
 *pguidPropSet*  
 [in] GUID per il set di proprietà.  
  
 *dwPropId*  
 [in] L'indice della proprietà.  
  
 *pvValue*  
 [in] Un puntatore a un variant contenente il nuovo valore della proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 `Failure` in errore e S_OK se l'operazione riesce. 

## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
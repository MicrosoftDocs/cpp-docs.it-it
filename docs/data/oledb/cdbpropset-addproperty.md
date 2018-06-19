---
title: 'CDBPropSet:: | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CDBPropSet::AddProperty
- CDBPropSet.AddProperty
- AddProperty
- ATL::CDBPropSet::AddProperty
- ATL.CDBPropSet.AddProperty
dev_langs:
- C++
helpviewer_keywords:
- AddProperty method
ms.assetid: dc9539d3-1ee4-40f3-9281-2068e6d65e93
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 454d86b7c5b654ac1af5b628abc5db7d3678d2f2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33097666"
---
# <a name="cdbpropsetaddproperty"></a>CDBPropSet::AddProperty
Aggiunge una proprietà per il set di proprietà.  
  
## <a name="syntax"></a>Sintassi  
  
```
bool AddProperty(DWORD dwPropertyID,   
   constVARIANT& var,   
   DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED) throw();bool AddProperty(DWORD dwPropertyID,  
   LPCSTR szValue,  DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED) throw();bool AddProperty(DWORD dwPropertyID,  
   LPCWSTR szValue,DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED) throw();bool AddProperty(DWORD dwPropertyID,  
   bool bValue,  DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED) throw();bool AddProperty(DWORD dwPropertyID,  
   BYTE bValue,  DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED);bool AddProperty(DWORD dwPropertyID,  
   short nValue,  DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED);bool AddProperty(DWORD dwPropertyID,  
   long nValue,  DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED);bool AddProperty(DWORD dwPropertyID,  
   float fltValue,  DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED);bool AddProperty(DWORD dwPropertyID,  
   double dblValue,  DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED) throw();bool AddProperty(DWORD dwPropertyID,  
   CY cyValue,  DBPROPOPTIONS propoptions = DBPROPOPTIONS_REQUIRED) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 *dwPropertyID*  
 [in] L'ID della proprietà da aggiungere. Utilizzato per inizializzare il **dwPropertyID** del `DBPROP` struttura aggiunto al set di proprietà.  
  
 `var`  
 [in] Una variabile variant utilizzato per inizializzare il valore della proprietà per il `DBPROP` struttura aggiunto al set di proprietà.  
  
 `szValue`  
 [in] Una stringa utilizzata per inizializzare il valore della proprietà per il `DBPROP` struttura aggiunto al set di proprietà.  
  
 `bValue`  
 [in] Oggetto **BYTE** o valore booleano utilizzato per inizializzare il valore della proprietà per il `DBPROP` struttura aggiunto al set di proprietà.  
  
 `nValue`  
 [in] Un valore integer utilizzato per inizializzare il valore della proprietà per il `DBPROP` struttura aggiunto al set di proprietà.  
  
 *fltValue*  
 [in] Valore a virgola mobile utilizzato per inizializzare il valore della proprietà per il `DBPROP` struttura aggiunto al set di proprietà.  
  
 `dblValue`  
 [in] Valore a virgola mobile e precisione doppia, utilizzato per inizializzare il valore della proprietà per il `DBPROP` struttura aggiunto al set di proprietà.  
  
 `cyValue`  
 [in] Un valore di valuta CY utilizzato per inizializzare il valore della proprietà per il `DBPROP` struttura aggiunto al set di proprietà.  
  
## <a name="return-value"></a>Valore restituito  
 **true** se la proprietà è stata aggiunta correttamente. in caso contrario, **false**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [CDBPropSet (classe)](../../data/oledb/cdbpropset-class.md)   
 [Struttura DBPROP](https://msdn.microsoft.com/en-us/library/ms717970.aspx)
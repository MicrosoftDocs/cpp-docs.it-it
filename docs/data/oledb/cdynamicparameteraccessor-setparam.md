---
title: 'CDynamicParameterAccessor:: SetParam | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL::CDynamicParameterAccessor::SetParam
- ATL::CDynamicParameterAccessor::SetParam<ctype>
- CDynamicParameterAccessor.SetParam
- ATL.CDynamicParameterAccessor.SetParam
- SetParam
- CDynamicParameterAccessor:SetParam
- CDynamicParameterAccessor::SetParam<ctype>
- CDynamicParameterAccessor::SetParam
dev_langs: C++
helpviewer_keywords: SetParam method
ms.assetid: e2349220-545c-46ad-90da-9113ac52551a
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: b092dad600c1698d3cbe550f16e05a8307f030fd
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cdynamicparameteraccessorsetparam"></a>CDynamicParameterAccessor::SetParam
Imposta il buffer del parametro utilizzando i dati (non di tipo stringa) specificati.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      template < class   
      ctype >  
bool SetParam(  
   DBORDINAL nParam,  
   const ctype* pData,  
   DBSTATUS status = DBSTATUS_S_OK  
) throw( );  
template < class ctype >  
bool SetParam(  
   TCHAR* pParamName,  
   const ctype* pData,  
   DBSTATUS status = DBSTATUS_S_OK  
) throw( );  
```  
  
#### <a name="parameters"></a>Parametri  
 `ctype`  
 Un parametro basato su modelli che è il tipo di dati.  
  
 `nParam`  
 [in] Numero di parametro (offset da 1). Il parametro 0 è riservato ai valori restituiti. Il numero di parametro è l'indice del parametro in base al relativo ordine nella chiamata SQL o nella chiamata della stored procedure. Ad esempio:  
  
 [!code-cpp[NVC_OLEDB_Consumer#8](../../data/oledb/codesnippet/cpp/cdynamicparameteraccessor-setparam_1.cpp)]  
  
 `pParamName`  
 [in] Il nome del parametro.  
  
 `pData`  
 [in] Puntatore alla memoria contenente i dati da scrivere nel buffer.  
  
 *status*  
 [in] Il `DBSTATUS` stato della colonna. Per informazioni su `DBSTATUS` valori, vedere [stato](https://msdn.microsoft.com/en-us/library/ms722617.aspx) nel *riferimento per programmatori OLE DB*, o cercare `DBSTATUS` in OleDb.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce **true** in caso di esito positivo o **false** in caso di errore.  
  
 Utilizzare `SetParam` per impostare i dati dei parametri non di tipo stringa nel buffer. Utilizzare [SetParamString](../../data/oledb/cdynamicparameteraccessor-setparamstring.md) per impostare i dati di parametro di stringa nel buffer.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)
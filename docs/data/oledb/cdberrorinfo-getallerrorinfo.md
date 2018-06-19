---
title: 'Cdberrorinfo:: Getallerrorinfo | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL.CDBErrorInfo.GetAllErrorInfo
- CDBErrorInfo::GetAllErrorInfo
- ATL::CDBErrorInfo::GetAllErrorInfo
- GetAllErrorInfo
- CDBErrorInfo.GetAllErrorInfo
dev_langs:
- C++
helpviewer_keywords:
- GetAllErrorInfo method
ms.assetid: 630049fa-d296-497a-bbf6-f5d3d71d271d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 590215ddc5c62e5c717aebe196bc33ce7d514e7a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33091907"
---
# <a name="cdberrorinfogetallerrorinfo"></a>CDBErrorInfo::GetAllErrorInfo
Restituisce tutti i tipi di informazioni sull'errore contenute in un record di errore.  
  
## <a name="syntax"></a>Sintassi  
  
```
HRESULT GetAllErrorInfo(ULONG ulRecordNum,  
   LCID lcid,  BSTR* pbstrDescription,  
   BSTR* pbstrSource = NULL,  
   GUID* pguid = NULL,  
   DWORD* pdwHelpContext = NULL,  
   BSTR* pbstrHelpFile = NULL) const throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 *ulRecordNum*  
 [in] Il numero in base zero del record per cui restituire informazioni sull'errore.  
  
 `lcid`  
 [in] L'ID impostazioni locali per le informazioni sull'errore da restituire.  
  
 `pbstrDescription`  
 [out] Puntatore a una descrizione dell'errore o NULL se le impostazioni locali non sono supportata. Vedere la sezione Osservazioni.  
  
 `pbstrSource`  
 [out] Un puntatore a una stringa contenente il nome del componente che ha generato l'errore.  
  
 `pguid`  
 [out] Puntatore al GUID dell'interfaccia che definisce l'errore.  
  
 *pdwHelpContext*  
 [out] Un puntatore all'ID di contesto della Guida per l'errore.  
  
 *pbstrHelpFile*  
 [out] Un puntatore a una stringa contenente il percorso del file della Guida che descrive l'errore.  
  
## <a name="return-value"></a>Valore restituito  
 `S_OK` se l'operazione riesce. Vedere [IErrorRecords::GetErrorInfo](https://msdn.microsoft.com/en-us/library/ms711230.aspx) nel *riferimento per programmatori OLE DB* per gli altri valori restituiti.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="remarks"></a>Note  
 Il valore di output di `pbstrDescription` utilizzato internamente dalla chiamata IErrorInfo:: GetDescription, che imposta il valore su NULL se le impostazioni locali non sono supportata o se si verificano entrambe le condizioni seguenti:  
  
1.  il valore di `lcid` non siano stati uniti Inglese e  
  
2.  il valore di `lcid` è diverso da quello restituito da viene impostata dalla.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDBErrorInfo](../../data/oledb/cdberrorinfo-class.md)
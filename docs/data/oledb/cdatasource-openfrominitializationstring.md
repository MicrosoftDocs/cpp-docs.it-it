---
title: 'CDataSource:: OpenFromInitializationString | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CDataSource.OpenFromInitializationString
- OpenFromInitializationString
- CDataSource::OpenFromInitializationString
- ATL::CDataSource::OpenFromInitializationString
- ATL.CDataSource.OpenFromInitializationString
dev_langs: C++
helpviewer_keywords: OpenFromInitializationString method
ms.assetid: 5ef1f1fd-92a9-4e1c-ad80-d3601b094b8c
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 294c5cd893b04dd477a002adb6dc03fa33c60a29
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cdatasourceopenfrominitializationstring"></a>CDataSource::OpenFromInitializationString
Apre un'origine dati specificata dalla stringa di inizializzazione fornito dall'utente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      HRESULT OpenFromInitializationString(   
   LPCOLESTR szInitializationString,   
   bool fPromptForInfo = false    
) throw( );  
```  
  
#### <a name="parameters"></a>Parametri  
 *szInitializationString*  
 [in] La stringa di inizializzazione.  
  
 *fPromptForInfo*  
 [in] Se questo argomento è impostato su **true**, quindi `OpenFromInitializationString` imposterà il **DBPROP_INIT_PROMPT** proprietà **DBPROMPT_COMPLETEREQUIRED**, che specifica l'utente deve essere richiesto solo se sono necessarie ulteriori informazioni. Ciò è utile nei casi in cui la stringa di inizializzazione specifica un database che richiede una password, ma la stringa non contiene la password. L'utente verrà richiesto per una password (o qualsiasi altra informazione mancante) quando si tenta di connettersi al database.  
  
 Il valore predefinito è **false**, che consente di specificare che l'utente richiesti (imposta **DBPROP_INIT_PROMPT** a **DBPROMPT_NOPROMPT**).  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
## <a name="remarks"></a>Note  
 Questo metodo apre un oggetto origine dati usando i componenti del servizio in oledb32.dll. Questa DLL contiene l'implementazione delle funzionalità dei componenti del servizio, come il pool di risorse, l'inserimento automatico delle transazioni e così via.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDataSource](../../data/oledb/cdatasource-class.md)
---
title: "CDataSource::OpenFromInitializationString | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDataSource.OpenFromInitializationString"
  - "OpenFromInitializationString"
  - "CDataSource::OpenFromInitializationString"
  - "ATL::CDataSource::OpenFromInitializationString"
  - "ATL.CDataSource.OpenFromInitializationString"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OpenFromInitializationString (metodo)"
ms.assetid: 5ef1f1fd-92a9-4e1c-ad80-d3601b094b8c
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDataSource::OpenFromInitializationString
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Aprire un'origine dati specificato dalla stringa di inizializzazione fornita dall'utente.  
  
## Sintassi  
  
```  
  
      HRESULT OpenFromInitializationString(   
   LPCOLESTR szInitializationString,   
   bool fPromptForInfo = false    
) throw( );  
```  
  
#### Parametri  
 *szInitializationString*  
 \[in\] la stringa di inizializzazione.  
  
 *fPromptForInfo*  
 \[in\] se questo argomento è impostato su **true**, quindi `OpenFromInitializationString` imposterà la proprietà di **DBPROP\_INIT\_PROMPT** a **DBPROMPT\_COMPLETEREQUIRED**, che specifica che l'utente è richiesto solo se di più informazioni sono necessarie.  Ciò è utile nelle situazioni in cui la stringa di inizializzazione specifica un database che richiede una password, ma la stringa non contiene la password.  L'utente verrà richiesta una password o altre informazioni mancante\) quando tenta di connettersi al database.  
  
 Il valore predefinito è **false**, che specifica che l'utente non è necessario mai \(set **DBPROP\_INIT\_PROMPT** a **DBPROMPT\_NOPROMPT**\).  
  
## Valore restituito  
 `HRESULT`standard.  
  
## Note  
 Questo metodo viene aperto un oggetto origine dati utilizzo dei componenti del servizio in oledb32.dll; questa DLL contiene l'implementazione delle funzionalità dei componenti del servizio come pool di risorse, l'integrazione automatica delle transazioni, e così via.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDataSource](../../data/oledb/cdatasource-class.md)
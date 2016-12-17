---
title: "CDBErrorInfo::GetAllErrorInfo | Microsoft Docs"
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
  - "ATL.CDBErrorInfo.GetAllErrorInfo"
  - "CDBErrorInfo::GetAllErrorInfo"
  - "ATL::CDBErrorInfo::GetAllErrorInfo"
  - "GetAllErrorInfo"
  - "CDBErrorInfo.GetAllErrorInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetAllErrorInfo (metodo)"
ms.assetid: 630049fa-d296-497a-bbf6-f5d3d71d271d
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDBErrorInfo::GetAllErrorInfo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce tutti i tipi di informazioni sugli errori contenuti in un record di errore.  
  
## Sintassi  
  
```  
  
      HRESULT GetAllErrorInfo(  
   ULONG ulRecordNum,  
   LCID lcid,  
   BSTR* pbstrDescription,  
   BSTR* pbstrSource = NULL,  
   GUID* pguid = NULL,  
   DWORD* pdwHelpContext = NULL,  
   BSTR* pbstrHelpFile = NULL  
) const throw( );  
```  
  
#### Parametri  
 *ulRecordNum*  
 \[in\] numero in base zero del record per il quale restituire informazioni sugli errori.  
  
 `lcid`  
 \[in\] ID delle impostazioni locali per informazioni sugli errori vengano restituiti.  
  
 `pbstrDescription`  
 \[out\] puntatore A una descrizione di testo dell'errore o NULL se le impostazioni locali non sono supportate.  Vedere la sezione Osservazioni.  
  
 `pbstrSource`  
 \[out\] puntatore A una stringa contenente il nome del componente che ha generato l'errore.  
  
 `pguid`  
 \[out\] puntatore Al GUID dell'interfaccia che ha definito l'errore.  
  
 *pdwHelpContext*  
 \[out\] puntatore All'ID del contesto della guida dell'errore.  
  
 *pbstrHelpFile*  
 \[out\] puntatore A una stringa contenente il percorso del file della Guida che descrive l'errore.  
  
## Valore restituito  
 `S_OK` in caso di esito positivo.  Vedere [IErrorRecords::GetErrorInfo](https://msdn.microsoft.com/en-us/library/ms711230.aspx)*in OLE DB Programmer's Reference* per altri valori restituiti.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Note  
 Il valore di output di `pbstrDescription` viene ottenuto chiamando IErrorInfo::GetDescription internamente, che imposta il valore SU NULL se le impostazioni locali non sono supportate, o se entrambe le condizioni seguenti sono vere:  
  
1.  il valore di `lcid` non sono gli Stati Uniti e inglesi  
  
2.  il valore di `lcid` non è uguale al valore restituito da GetUserDefaultLCID.  
  
## Vedere anche  
 [Classe CDBErrorInfo](../../data/oledb/cdberrorinfo-class.md)
---
title: "Metodo FtmBase::GetUnmarshalClass | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ftm/Microsoft::WRL::FtmBase::GetUnmarshalClass"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetUnmarshalClass (metodo)"
ms.assetid: 535fc539-5b97-4967-b158-f7568f13d341
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo FtmBase::GetUnmarshalClass
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ottiene il CLSID utilizzato da COM per individuare la DLL che contiene il codice per il proxy corrispondente.  COM carica questa DLL per creare un'istanza non inizializzata del proxy.  
  
## Sintassi  
  
```  
STDMETHODIMP GetUnmarshalClass(  
   __in REFIID riid,  
   __in_opt void *pv,  
   __in DWORD dwDestContext,  
   __reserved void *pvDestContext,  
   __in DWORD mshlflags,  
   __out CLSID *pCid  
) override;  
```  
  
#### Parametri  
 `riid`  
 Riferimento all'identificatore di interfaccia del marshalling.  
  
 `pv`  
 Puntatore all'interfaccia del marshalling, può essere NULL se il chiamante non dispone di un puntatore all'interfaccia desiderata.  
  
 `dwDestContext`  
 Contesto di destinazione in cui l'interfaccia specificata deve essere unmarshaled.  
  
 Specificare uno o più valori di enumerazione di MSHCTX.  
  
 L'Unmarshaling può verificarsi in un altro apartment del processo corrente \(MSHCTX\_INPROC\) o in un altro processo nello stesso computer come processo corrente \(MSHCTX\_LOCAL\).  
  
 `pvDestContext`  
 Riservato per utilizzi futuri; deve essere NULL.  
  
 `mshlflags`  
 Quando questa operazione viene completata, puntatore al CLSID da utilizzare per creare un proxy nel processo client.  
  
 `pCid`  
  
## Valore restituito  
 S\_OK se ha avuto esito positivo, S\_FALSE in caso contrario.  
  
## Requisiti  
 **Header:** ftm.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe FtmBase](../windows/ftmbase-class.md)
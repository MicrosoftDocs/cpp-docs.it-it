---
title: "Invoking Scripts | Microsoft Docs"
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
  - "StringRegister"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "script, invoking registry in ATL"
  - "StringRegister method"
ms.assetid: eabd41ee-586b-4266-9e92-5aaad04b73a4
caps.latest.revision: 10
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Invoking Scripts
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

[Utilizzo di parametri sostituibili \(il preprocessore di registrazione\)](../atl/using-replaceable-parameters-the-registrar-s-preprocessor.md) vengono descritte le mappe di sostituzione e descritti il metodo **AddReplacement**di registrazione.  Il registrar presenta otto altri metodi specifici per gli script e vengono descritti nella tabella seguente.  
  
|Metodo|Descrizione e sintassi|  
|------------|----------------------------|  
|**ResourceRegister**|*resFileName* **, UINT**  `nID` **, LPCOLESTR**  `szType`\);di**HRESULT ResourceRegister\( LPCOLESTR**<br /><br /> Registra lo script contenuto nella risorsa di un modulo.  *il resFileName* indica il percorso UNC nel modulo stesso.  `nID` e `szType` contengono l'id e il tipo di risorsa, rispettivamente.|  
|**ResourceUnregister**|*resFileName* **, UINT**  `nID` **, LPCOLESTR**  `szType`\);di**HRESULT ResourceUnregister\( LPCOLESTR**<br /><br /> Annulla la registrazione di script contenuto nella risorsa di un modulo.  *il resFileName* indica il percorso UNC nel modulo stesso.  `nID` e `szType` contengono l'id e il tipo di risorsa, rispettivamente.|  
|**ResourceRegisterSz**|*SzID* **, LPCOLESTR**  `szType`\);di**, LPCOLESTR** *di resFileName*di**HRESULT ResourceRegisterSz\( LPCOLESTR**<br /><br /> Registra lo script contenuto nella risorsa di un modulo.  *il resFileName* indica il percorso UNC nel modulo stesso.  *lo szID* e `szType` contengono l'identificatore di stringa e il tipo di risorsa, rispettivamente.|  
|**ResourceUnregisterSz**|*SzID* **, LPCOLESTR**  `szType`\);di**, LPCOLESTR** *di resFileName*di**HRESULT ResourceUnregisterSz\( LPCOLESTR**<br /><br /> Annulla la registrazione di script contenuto nella risorsa di un modulo.  *il resFileName* indica il percorso UNC nel modulo stesso.  *lo szID* e `szType` contengono l'identificatore di stringa e il tipo di risorsa, rispettivamente.|  
|**FileRegister**|*nome file* \);di**HRESULT FileRegister\( LPCOLESTR**<br /><br /> Registra lo script in un file.  *il nome file* è un percorso UNC a un file che contiene o\) è uno script di risorsa.|  
|**FileUnregister**|*nome file* \);di**HRESULT FileUnregister\( LPCOLESTR**<br /><br /> Annulla la registrazione di script in un file.  *il nome file* è un percorso UNC a un file che contiene o\) è uno script di risorsa.|  
|**StringRegister**|*dati* \);di**HRESULT StringRegister\( LPCOLESTR**<br /><br /> Registra lo script in una stringa.  *i dati* contengono lo stesso script.|  
|**StringUnregister**|*dati* \);di**HRESULT StringUnregister\( LPCOLESTR**<br /><br /> Annulla la registrazione di script in una stringa.  *i dati* contengono lo stesso script.|  
  
 **ResourceRegisterSz** e **ResourceUnregisterSz**, sono simili a **ResourceRegister** e a **ResourceUnregister**, ma che consentono di specificare un identificatore di stringa.  
  
 I metodi **FileRegister** e **FileUnregister** sono utili se non si desidera che lo script in una risorsa o se si desidera che lo script nel proprio file.  I metodi **StringRegister** e **StringUnregister** consentono il file RGS da archiviare in una stringa allocata in modo dinamico.  
  
## Vedere anche  
 [Creating Registrar Scripts](../atl/creating-registrar-scripts.md)
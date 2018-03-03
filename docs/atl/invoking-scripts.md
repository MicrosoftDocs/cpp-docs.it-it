---
title: Chiamata di script (ATL) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- StringRegister
dev_langs:
- C++
helpviewer_keywords:
- StringRegister method
- scripts, invoking registry in ATL
ms.assetid: eabd41ee-586b-4266-9e92-5aaad04b73a4
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7cbf969f601bd90e84bf0ee15ae2ea3dcb392610
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="invoking-scripts"></a>Chiamata di script
[Utilizzo dei parametri sostituibili (il Registrar preprocessore)](../atl/using-replaceable-parameters-the-registrar-s-preprocessor.md) illustra mappe di sostituzione e viene indicato il metodo di registrazione **AddReplacement**. Il Registrar dispone di otto altri metodi specifici dello script e tutte sono descritte nella tabella seguente.  
  
|Metodo|La sintassi e la descrizione|  
|------------|-------------------------|  
|**ResourceRegister**|**HRESULT ResourceRegister (LPCOLESTR***NomeFileris* **, UINT** `nID` **, LPCOLESTR** `szType` **);** <br /><br /> Registra lo script contenuto in una risorsa del modulo. *NomeFileris* indica il percorso UNC per il modulo stesso. `nID`e `szType` contengono rispettivamente ID e il tipo, la risorsa.|  
|**ResourceUnregister**|**HRESULT ResourceUnregister (LPCOLESTR***NomeFileris* **, UINT** `nID` **, LPCOLESTR** `szType` **);** <br /><br /> Annulla la registrazione lo script contenuto in una risorsa del modulo. *NomeFileris* indica il percorso UNC per il modulo stesso. `nID`e `szType` contengono rispettivamente ID e il tipo, la risorsa.|  
|**ResourceRegisterSz**|**HRESULT ResourceRegisterSz (LPCOLESTR***NomeFileris* **, LPCOLESTR***IDdm* **, LPCOLESTR** `szType` **);** <br /><br /> Registra lo script contenuto in una risorsa del modulo. *NomeFileris* indica il percorso UNC per il modulo stesso. *IDdm* e `szType` contengono rispettivamente di identificatore di stringa e il tipo, la risorsa.|  
|**ResourceUnregisterSz**|**HRESULT ResourceUnregisterSz (LPCOLESTR***NomeFileris* **, LPCOLESTR***IDdm* **, LPCOLESTR** `szType` **);** <br /><br /> Annulla la registrazione lo script contenuto in una risorsa del modulo. *NomeFileris* indica il percorso UNC per il modulo stesso. *IDdm* e `szType` contengono rispettivamente di identificatore di stringa e il tipo, la risorsa.|  
|**FileRegister**|**HRESULT FileRegister (LPCOLESTR***fileName***);** <br /><br /> Registra lo script in un file. *nome del file* è un percorso UNC di un file che contiene uno script di risorsa (o è).|  
|**FileUnregister**|**HRESULT FileUnregister (LPCOLESTR***fileName***);** <br /><br /> Annulla la registrazione in un file di script. *nome del file* è un percorso UNC di un file che contiene uno script di risorsa (o è).|  
|**StringRegister**|**HRESULT StringRegister (LPCOLESTR***dati***);** <br /><br /> Registra lo script in una stringa. *dati* contiene lo script stesso.|  
|**StringUnregister**|**HRESULT StringUnregister (LPCOLESTR***dati***);** <br /><br /> Annulla la registrazione di script in una stringa. *dati* contiene lo script stesso.|  
  
 **ResourceRegisterSz** e **ResourceUnregisterSz**, sono simili a **ResourceRegister** e **ResourceUnregister**, ma è possibile specificare un Identificatore di stringa.  
  
 I metodi **FileRegister** e **FileUnregister** sono utili se non si desidera che lo script in una risorsa o se si desidera che lo script nel proprio file. I metodi **StringRegister** e **StringUnregister** consentono il file RGS essere archiviato in una stringa allocata in modo dinamico.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione degli script del Registro di sistema](../atl/creating-registrar-scripts.md)


---
title: Chiamata di script (ATL) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
f1_keywords:
- StringRegister
dev_langs:
- C++
helpviewer_keywords:
- StringRegister method
- scripts, invoking registry in ATL
ms.assetid: eabd41ee-586b-4266-9e92-5aaad04b73a4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 91d11b86b2b7cf17ef90ab701b06c6f31b272691
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="invoking-scripts"></a>Chiamata di script
[Utilizzo dei parametri sostituibili (il Registrar preprocessore)](../atl/using-replaceable-parameters-the-registrar-s-preprocessor.md) illustra le mappe di sostituzione e viene indicato il metodo Registrar **AddReplacement**. Il Registrar dispone di otto altri metodi specifici dello script e tutte sono descritte nella tabella seguente.  
  
|Metodo|La sintassi e la descrizione|  
|------------|-------------------------|  
|**ResourceRegister**|**HRESULT ResourceRegister (LPCOLESTR***NomeFileris* **, UINT** `nID` **, LPCOLESTR** `szType` **);** <br /><br /> Registra lo script contenuto in una risorsa del modulo. *NomeFileris* indica il percorso UNC per il modulo stesso. `nID` e `szType` contengono rispettivamente ID e il tipo, la risorsa.|  
|**ResourceUnregister**|**HRESULT ResourceUnregister (LPCOLESTR***NomeFileris* **, UINT** `nID` **, LPCOLESTR** `szType` **);** <br /><br /> Annulla la registrazione lo script contenuto in una risorsa del modulo. *NomeFileris* indica il percorso UNC per il modulo stesso. `nID` e `szType` contengono rispettivamente ID e il tipo, la risorsa.|  
|**ResourceRegisterSz**|**HRESULT ResourceRegisterSz (LPCOLESTR***NomeFileris* **, LPCOLESTR***IDdm* **, LPCOLESTR** `szType` **);** <br /><br /> Registra lo script contenuto in una risorsa del modulo. *NomeFileris* indica il percorso UNC per il modulo stesso. *IDdm* e `szType` contengono rispettivamente identificatore di stringa e il tipo, la risorsa.|  
|**ResourceUnregisterSz**|**HRESULT ResourceUnregisterSz (LPCOLESTR***NomeFileris* **, LPCOLESTR***IDdm* **, LPCOLESTR** `szType` **);** <br /><br /> Annulla la registrazione lo script contenuto in una risorsa del modulo. *NomeFileris* indica il percorso UNC per il modulo stesso. *IDdm* e `szType` contengono rispettivamente identificatore di stringa e il tipo, la risorsa.|  
|**FileRegister**|**HRESULT FileRegister (LPCOLESTR***fileName***);** <br /><br /> Registra lo script in un file. *nome del file* è un percorso UNC in un file che contiene uno script di risorsa (o è).|  
|**FileUnregister**|**HRESULT FileUnregister (LPCOLESTR***fileName***);** <br /><br /> Annulla la registrazione in un file di script. *nome del file* è un percorso UNC in un file che contiene uno script di risorsa (o è).|  
|**StringRegister**|**HRESULT StringRegister (LPCOLESTR***dati***);** <br /><br /> Registra lo script in una stringa. *dati* contiene lo script stesso.|  
|**StringUnregister**|**HRESULT StringUnregister (LPCOLESTR***dati***);** <br /><br /> Annulla la registrazione di script in una stringa. *dati* contiene lo script stesso.|  
  
 **ResourceRegisterSz** e **ResourceUnregisterSz**, sono simili alle **ResourceRegister** e **ResourceUnregister**, ma è possibile specificare una stringa identificatore.  
  
 I metodi **FileRegister** e **FileUnregister** sono utili se non si desidera che lo script in una risorsa o se si desidera che lo script nel proprio file. I metodi **StringRegister** e **StringUnregister** consentono il file RGS essere archiviato in una stringa allocata in modo dinamico.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione degli script del Registro di sistema](../atl/creating-registrar-scripts.md)


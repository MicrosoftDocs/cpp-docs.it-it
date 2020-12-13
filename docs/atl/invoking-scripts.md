---
description: 'Altre informazioni su: richiamo di script'
title: Chiamata di script (ATL)
ms.date: 11/04/2016
helpviewer_keywords:
- StringRegister method
- scripts, invoking registry in ATL
ms.assetid: eabd41ee-586b-4266-9e92-5aaad04b73a4
ms.openlocfilehash: 48fc49118d93893b5cd60462fbaecfdb73d747c3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97152659"
---
# <a name="invoking-scripts"></a>Richiamo di script

[L'uso di parametri sostituibili (il preprocessore del registrar)](../atl/using-replaceable-parameters-the-registrar-s-preprocessor.md) illustra le mappe di sostituzione e menziona il metodo di registrazione **AddReplacement**. Il registrar dispone di otto altri metodi specifici per lo scripting, tutti descritti nella tabella seguente.

|Metodo|Sintassi/Descrizione|
|------------|-------------------------|
|**ResourceRegister**|**HRESULT ResourceRegister (LPCOLESTR***NomeFileris* **, uint** `nID` **, LPCOLESTR** `szType` **);**      <br /><br /> Registra lo script contenuto nella risorsa di un modulo. *NomeFileris* indica il percorso UNC del modulo stesso. *NID* e *Tipodm* contengono rispettivamente l'ID e il tipo della risorsa.|
|**ResourceUnregister**|**HRESULT ResourceUnregister (LPCOLESTR***NomeFileris* **, uint** `nID` **, LPCOLESTR** `szType` **);**      <br /><br /> Annulla la registrazione dello script contenuto nella risorsa di un modulo. *NomeFileris* indica il percorso UNC del modulo stesso. *NID* e *Tipodm* contengono rispettivamente l'ID e il tipo della risorsa.|
|**ResourceRegisterSz**|**HRESULT ResourceRegisterSz (LPCOLESTR***NomeFileris* **, LPCOLESTR***szId* **, LPCOLESTR** `szType` **);**      <br /><br /> Registra lo script contenuto nella risorsa di un modulo. *NomeFileris* indica il percorso UNC del modulo stesso. *szId* e *Tipodm* contengono rispettivamente l'identificatore di stringa della risorsa e il tipo.|
|**ResourceUnregisterSz**|**HRESULT ResourceUnregisterSz (LPCOLESTR***NomeFileris* **, LPCOLESTR***szId* **, LPCOLESTR** `szType` **);**      <br /><br /> Annulla la registrazione dello script contenuto nella risorsa di un modulo. *NomeFileris* indica il percorso UNC del modulo stesso. *szId* e *Tipodm* contengono rispettivamente l'identificatore di stringa della risorsa e il tipo.|
|**FileRegister**|**HRESULT FileRegister (LPCOLESTR**  *nomefile*  **);**<br /><br /> Registra lo script in un file. *filename* è un percorso UNC di un file che contiene (o è) uno script di risorsa.|
|**FileUnregister**|**HRESULT FileUnregister (LPCOLESTR**  *nomefile*  **);**<br /><br /> Annulla la registrazione dello script in un file. *filename* è un percorso UNC di un file che contiene (o è) uno script di risorsa.|
|**StringRegister**|**HRESULT StringRegister (LPCOLESTR**  *Data*  **);**<br /><br /> Registra lo script in una stringa. i *dati* contengono lo script stesso.|
|**StringUnregister**|**HRESULT StringUnregister (LPCOLESTR**  *Data*  **);**<br /><br /> Annulla la registrazione dello script in una stringa. i *dati* contengono lo script stesso.|

**ResourceRegisterSz** e **ResourceUnregisterSz** sono simili a **ResourceRegister** e **ResourceUnregister**, ma consentono di specificare un identificatore di stringa.

I metodi **FileRegister** e **FileUnregister** sono utili se non si desidera che lo script sia in una risorsa o se si desidera che lo script si trovi nel proprio file. I metodi **StringRegister** e **StringUnregister** consentono di archiviare il file con estensione RGS in una stringa allocata in modo dinamico.

## <a name="see-also"></a>Vedi anche

[Creazione di script del registrar](../atl/creating-registrar-scripts.md)

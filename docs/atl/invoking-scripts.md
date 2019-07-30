---
title: Richiamo degli script (ATL)
ms.date: 11/04/2016
helpviewer_keywords:
- StringRegister method
- scripts, invoking registry in ATL
ms.assetid: eabd41ee-586b-4266-9e92-5aaad04b73a4
ms.openlocfilehash: 6ca744ced53677550e7b77f44d4f6550da744372
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62250467"
---
# <a name="invoking-scripts"></a>Richiamo degli script

[Uso dei parametri sostituibili (preprocessore del Registrar di)](../atl/using-replaceable-parameters-the-registrar-s-preprocessor.md) illustra il mapping di sostituzione e viene fatto riferimento al metodo del Registrar **AddReplacement**. Il programma di registrazione ha otto altri metodi specifici per la creazione di script e tutte sono descritte nella tabella seguente.

|Metodo|/ Descrizione della sintassi|
|------------|-------------------------|
|**ResourceRegister**|**HRESULT ResourceRegister (LPCOLESTR***NomeFileris* **, UINT** `nID` **, LPCOLESTR** `szType` **);**<br /><br /> Registra lo script contenuto in una risorsa del modulo. *NomeFileris* indica il percorso UNC per il modulo stesso. *nID* e *Tipodm* contengono ID della risorsa e il tipo, rispettivamente.|
|**ResourceUnregister**|**HRESULT ResourceUnregister (LPCOLESTR***NomeFileris* **, UINT** `nID` **, LPCOLESTR** `szType` **);**<br /><br /> Annulla la registrazione lo script contenuto in una risorsa del modulo. *NomeFileris* indica il percorso UNC per il modulo stesso. *nID* e *Tipodm* contengono ID della risorsa e il tipo, rispettivamente.|
|**ResourceRegisterSz**|**HRESULT ResourceRegisterSz (LPCOLESTR***NomeFileris* **, LPCOLESTR***IDdm* **, LPCOLESTR** `szType` **);**<br /><br /> Registra lo script contenuto in una risorsa del modulo. *NomeFileris* indica il percorso UNC per il modulo stesso. *IDdm* e *Tipodm* contengono rispettivamente l'identificatore di stringa e il tipo, la risorsa.|
|**ResourceUnregisterSz**|**HRESULT ResourceUnregisterSz (LPCOLESTR***NomeFileris* **, LPCOLESTR***IDdm* **, LPCOLESTR** `szType` **);**<br /><br /> Annulla la registrazione lo script contenuto in una risorsa del modulo. *NomeFileris* indica il percorso UNC per il modulo stesso. *IDdm* e *Tipodm* contengono rispettivamente l'identificatore di stringa e il tipo, la risorsa.|
|**FileRegister**|**HRESULT FileRegister (LPCOLESTR***fileName* **);**<br /><br /> Registra lo script in un file. *nome del file* è un percorso UNC di un file che contiene uno script di risorsa (o è).|
|**FileUnregister**|**HRESULT FileUnregister (LPCOLESTR***fileName* **);**<br /><br /> Annulla la registrazione lo script in un file. *nome del file* è un percorso UNC di un file che contiene uno script di risorsa (o è).|
|**StringRegister**|**HRESULT StringRegister( LPCOLESTR**  *data*  **);**<br /><br /> Registra lo script in una stringa. *dati* contiene lo script stesso.|
|**StringUnregister**|**HRESULT StringUnregister (LPCOLESTR***data* **);**<br /><br /> Annulla la registrazione lo script in una stringa. *dati* contiene lo script stesso.|

**ResourceRegisterSz** e **ResourceUnregisterSz**, sono simili agli **ResourceRegister** e **ResourceUnregister**, ma è possibile specificare una stringa identificatore.

I metodi **FileRegister** e **FileUnregister** sono utili se non si desidera lo script in una risorsa o se si desidera che lo script nel proprio file. I metodi **StringRegister** e **StringUnregister** consentire al file con estensione RGS di essere archiviato in una stringa allocata in modo dinamico.

## <a name="see-also"></a>Vedere anche

[Creazione degli script del Registro di sistema](../atl/creating-registrar-scripts.md)

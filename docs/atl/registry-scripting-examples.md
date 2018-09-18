---
title: Esempi di script Registro di sistema | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- scripting, examples
- registrar scripts [ATL]
- scripts, Registrar scripts
- registry, Registrar
ms.assetid: b6df80e1-e08b-40ee-9243-9b381b172460
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: eabb923b165d407f77554d88d710cd7c67a14240
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46022111"
---
# <a name="registry-scripting-examples"></a>Esempi di script del Registro di sistema

L'esempio di script in questo argomento viene illustrato come aggiungere una chiave al Registro di sistema, registrare il server COM Registrar e specificare più alberi di analisi.

## <a name="add-a-key-to-hkeycurrentuser"></a>Aggiungere una chiave in HKEY_CURRENT_USER

L'albero di analisi seguente illustra un semplice script che aggiunge una singola chiave al Registro di sistema. In particolare, lo script aggiunge la chiave `MyVeryOwnKey`, a `HKEY_CURRENT_USER`. Assegna anche il valore di stringa predefinita del `HowGoesIt` alla nuova chiave:

```
HKEY_CURRENT_USER
{  
    'MyVeryOwnKey' = s 'HowGoesIt'
}
```

Questo script può essere facilmente esteso per definire più di sottochiavi come indicato di seguito:

```
HKCU
{  
    'MyVeryOwnKey' = s 'HowGoesIt'  
    {  
        'HasASubkey'  
        {  
            'PrettyCool' = d '55'  
            val 'ANameValue' = s 'WithANamedValue'  
        }  
    }
}
```

A questo punto, lo script aggiunge una sottochiave `HasASubkey`, a `MyVeryOwnKey`. Questa sottochiave, entrambi aggiunge il `PrettyCool` sottochiave (con un valore predefinito `DWORD` pari a 55) e il `ANameValue` denominato valore (con un valore di stringa di `WithANamedValue`).

##  <a name="_atl_register_the_registrar_com_server"></a> Registrare il Server COM Registrar

Lo script seguente registra il server COM di registrazione.

```
HKCR
{  
    ATL.Registrar = s 'ATL Registrar Class'  
    {  
        CLSID = s '{44EC053A-400F-11D0-9DCD-00A0C90391D3}'  
    }  
    NoRemove CLSID  
    {  
        ForceRemove {44EC053A-400F-11D0-9DCD-00A0C90391D3} = s 'ATL Registrar Class'  
        {  
            ProgID = s 'ATL.Registrar'  
            InprocServer32 = s '%MODULE%'  
            {  
                val ThreadingModel = s 'Apartment'  
            }  
        }  
    }
}
```

In fase di esecuzione, questo albero di analisi aggiunge il `ATL.Registrar` chiave `HKEY_CLASSES_ROOT`. Per questa nuova chiave, quindi it:

- Specifica `ATL Registrar Class` come valore predefinito della chiave della stringa.

- Aggiunge `CLSID` come sottochiave.

- Specifica `{44EC053A-400F-11D0-9DCD-00A0C90391D3}` per `CLSID`. (Questo valore è il Registrar CLSID per l'uso con `CoCreateInstance`.)

Poiché `CLSID` è condiviso, non deve essere rimossi in modalità di annullamento della registrazione. L'istruzione `NoRemove CLSID`, a tale scopo che indica che `CLSID` deve essere aperto in modalità di registrazione e ignorati in modalità di annullamento della registrazione.

Il `ForceRemove` istruzione offre una funzione di manutenzione tramite la rimozione di una chiave e tutte le relative sottochiavi prima di ricreare la chiave. Ciò può essere utile se sono stati modificati i nomi delle sottochiavi. In questo esempio di script `ForceRemove` verifica se `{44EC053A-400F-11D0-9DCD-00A0C90391D3}` esiste già. In caso affermativo, `ForceRemove`:

- Elimina in modo ricorsivo `{44EC053A-400F-11D0-9DCD-00A0C90391D3}` e tutte le relative sottochiavi.

- Ricrea `{44EC053A-400F-11D0-9DCD-00A0C90391D3}`.

- Aggiunge `ATL Registrar Class` come valore stringa predefinito per `{44EC053A-400F-11D0-9DCD-00A0C90391D3}`.

L'albero di analisi aggiunge due nuove sottochiavi da `{44EC053A-400F-11D0-9DCD-00A0C90391D3}`. La prima chiave `ProgID`, ottiene un valore di stringa predefinita che è il valore ProgID. La seconda chiave, `InprocServer32`, ottiene un valore di stringa, impostazione predefinita `%MODULE%`, vale a dire un valore per il preprocessore illustrati nella sezione [usando parametri sostituibili (preprocessore del Registrar)](../atl/using-replaceable-parameters-the-registrar-s-preprocessor.md), di questo articolo. `InprocServer32` Ottiene un valore, denominato `ThreadingModel`, con un valore stringa `Apartment`.

## <a name="specify-multiple-parse-trees"></a>Specificare più alberi di analisi

Per specificare più di un albero di analisi in uno script, è sufficiente inserire un albero alla fine di un altro. Ad esempio, lo script seguente aggiunge la chiave `MyVeryOwnKey`, per gli alberi di analisi per entrambe `HKEY_CLASSES_ROOT` e `HKEY_CURRENT_USER`:

```
HKCR
{  
    'MyVeryOwnKey' = s 'HowGoesIt'
}
HKEY_CURRENT_USER
{  
    'MyVeryOwnKey' = s 'HowGoesIt'
}
```

> [!NOTE]
> In uno script di registrazione, 4 KB è la dimensione massima dei token. (Un token è qualsiasi elemento riconoscibile nella sintassi). Nell'esempio precedente scripting `HKCR`, `HKEY_CURRENT_USER`, `'MyVeryOwnKey'`, e `'HowGoesIt'` sono tutti i token.

## <a name="see-also"></a>Vedere anche

[Creazione degli script del Registro di sistema](../atl/creating-registrar-scripts.md)


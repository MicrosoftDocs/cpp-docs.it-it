---
title: Esempi di script del Registro di sistemaRegistry Scripting Examples
ms.date: 11/04/2016
helpviewer_keywords:
- scripting, examples
- registrar scripts [ATL]
- scripts, Registrar scripts
- registry, Registrar
ms.assetid: b6df80e1-e08b-40ee-9243-9b381b172460
ms.openlocfilehash: 7bcdb7076982e2f0bd08f4fd82bb45f21e61ef20
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329333"
---
# <a name="registry-scripting-examples"></a>Esempi di script del Registro di sistemaRegistry Scripting Examples

Negli esempi di script riportati in questo argomento viene illustrato come aggiungere una chiave al Registro di sistema, registrare il server COM di registrazione e specificare più alberi di analisi.

## <a name="add-a-key-to-hkey_current_user"></a>Aggiungere una chiave a HKEY_CURRENT_USER

Nell'albero di analisi seguente viene illustrato un semplice script che aggiunge una singola chiave al Registro di sistema. In particolare, lo script `MyVeryOwnKey`aggiunge `HKEY_CURRENT_USER`la chiave, , a . Assegna inoltre il valore stringa `HowGoesIt` predefinito di alla nuova chiave:

```
HKEY_CURRENT_USER
{
    'MyVeryOwnKey' = s 'HowGoesIt'
}
```

Questo script può essere facilmente esteso per definire più sottochiavi come segue:

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

A questo punto, lo `HasASubkey`script `MyVeryOwnKey`aggiunge una sottochiave, , a . A questa sottochiave vengono `PrettyCool` aggiunti sia la `DWORD` sottochiave (con un `ANameValue` valore predefinito di 55) che il valore denominato (con un valore stringa di `WithANamedValue`).

## <a name="register-the-registrar-com-server"></a><a name="_atl_register_the_registrar_com_server"></a>Registrare il server COM di registrazioneRegister the Registrar COM Server

Lo script seguente registra il server COM di registrazione stesso.

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

In fase di esecuzione, `ATL.Registrar` questo `HKEY_CLASSES_ROOT`albero di analisi aggiunge la chiave a . A questa nuova chiave:

- Specifica `ATL Registrar Class` come valore stringa predefinito della chiave.

- Aggiunge `CLSID` come sottochiave.

- Specifica `{44EC053A-400F-11D0-9DCD-00A0C90391D3}` per `CLSID`. (Questo valore è il CLSID della `CoCreateInstance`funzione di registrazione per l'utilizzo con .)

Poiché `CLSID` è condiviso, non deve essere rimosso in modalità unregister. L'istruzione `NoRemove CLSID`, , esegue `CLSID` questa operazione indicando che deve essere aperta in modalità Register e ignorata in modalità Unregister.

L'istruzione `ForceRemove` fornisce una funzione di pulizia rimuovendo una chiave e tutte le relative sottochiavi prima di ricreare la chiave. Ciò può essere utile se i nomi delle sottochiavi sono stati modificati. In questo esempio `ForceRemove` di scripting, verifica se `{44EC053A-400F-11D0-9DCD-00A0C90391D3}` esiste già. In caso `ForceRemove`affermativo, :

- Elimina `{44EC053A-400F-11D0-9DCD-00A0C90391D3}` in modo ricorsivo e tutte le relative sottochiavi.

- Ricrea `{44EC053A-400F-11D0-9DCD-00A0C90391D3}`.

- Aggiunge `ATL Registrar Class` come valore stringa `{44EC053A-400F-11D0-9DCD-00A0C90391D3}`predefinito per .

L'albero di analisi ora `{44EC053A-400F-11D0-9DCD-00A0C90391D3}`aggiunge due nuove sottochiavi a . La prima `ProgID`chiave, , ottiene un valore stringa predefinito che è il ProgID. La seconda `InprocServer32`chiave, , , `%MODULE%`ottiene un valore stringa predefinito, , ovvero un valore del preprocessore illustrato nella sezione [Using Replaceable Parameters (The Registrar's Preprocessor)](../atl/using-replaceable-parameters-the-registrar-s-preprocessor.md)di questo articolo. `InprocServer32`ottiene anche un `ThreadingModel`valore denominato, , `Apartment`con un valore stringa di .

## <a name="specify-multiple-parse-trees"></a>Specificare più alberi di analisiSpecify Multiple Parse Trees

Per specificare più di un albero di analisi in uno script, è sufficiente posizionare un albero alla fine di un altro. Ad esempio, lo script seguente `MyVeryOwnKey`aggiunge la chiave `HKEY_CLASSES_ROOT` , `HKEY_CURRENT_USER`, agli alberi di analisi per entrambi e :

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
> In uno script di registrazione, 4K è la dimensione massima del token. Un token è qualsiasi elemento riconoscibile nella sintassi. Nell'esempio di `HKCR`script `HKEY_CURRENT_USER` `'MyVeryOwnKey'`precedente, `'HowGoesIt'` , , e sono tutti token.

## <a name="see-also"></a>Vedere anche

[Creazione di script di registrazioneCreating Registrar Scripts](../atl/creating-registrar-scripts.md)

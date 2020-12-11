---
description: 'Altre informazioni su: esempi di script del registro di sistema'
title: Esempi di script del registro di sistema
ms.date: 11/04/2016
helpviewer_keywords:
- scripting, examples
- registrar scripts [ATL]
- scripts, Registrar scripts
- registry, Registrar
ms.assetid: b6df80e1-e08b-40ee-9243-9b381b172460
ms.openlocfilehash: 716aa69ed95c784079e72f9b785fedd8c07b0563
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97157542"
---
# <a name="registry-scripting-examples"></a>Esempi di script del registro di sistema

Gli esempi di script in questo argomento illustrano come aggiungere una chiave al registro di sistema, registrare il server COM del registrar e specificare più alberi di analisi.

## <a name="add-a-key-to-hkey_current_user"></a>Aggiungere una chiave a HKEY_CURRENT_USER

Nell'albero di analisi seguente viene illustrato un semplice script che aggiunge una singola chiave al registro di sistema. In particolare, lo script aggiunge la chiave, `MyVeryOwnKey` , a `HKEY_CURRENT_USER` . Assegna anche il valore stringa predefinito di `HowGoesIt` alla nuova chiave:

```rgs
HKEY_CURRENT_USER
{
    'MyVeryOwnKey' = s 'HowGoesIt'
}
```

Questo script può essere facilmente esteso per definire più sottochiavi come indicato di seguito:

```rgs
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

A questo punto, lo script aggiunge una sottochiave, `HasASubkey` , a `MyVeryOwnKey` . Per questa sottochiave, viene aggiunta la `PrettyCool` sottochiave (con un `DWORD` valore predefinito di 55) e il `ANameValue` valore denominato (con un valore di stringa pari a `WithANamedValue` ).

## <a name="register-the-registrar-com-server"></a><a name="_atl_register_the_registrar_com_server"></a> Registrare il server COM del registrar

Lo script seguente registra il server COM del registrar.

```rgs
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

In fase di esecuzione, questo albero di analisi aggiunge la `ATL.Registrar` chiave a `HKEY_CLASSES_ROOT` . Alla nuova chiave, quindi:

- Specifica `ATL Registrar Class` come valore stringa predefinito della chiave.

- Aggiunge `CLSID` come sottochiave.

- Specifica `{44EC053A-400F-11D0-9DCD-00A0C90391D3}` per `CLSID` . Questo valore è il CLSID del registrar da usare con `CoCreateInstance` .

Poiché `CLSID` è condiviso, non deve essere rimosso in modalità di annullamento della registrazione. A tale scopo, l'istruzione `NoRemove CLSID` indica che `CLSID` deve essere aperta in modalità di registrazione e ignorata in modalità di annullamento della registrazione.

L' `ForceRemove` istruzione fornisce una funzione di manutenzione rimuovendo una chiave e tutte le relative sottochiavi prima di ricreare la chiave. Questa operazione può essere utile se i nomi delle sottochiavi sono stati modificati. In questo esempio di scripting, `ForceRemove` verifica se `{44EC053A-400F-11D0-9DCD-00A0C90391D3}` esiste già. In caso contrario, `ForceRemove` :

- Elimina in modo ricorsivo `{44EC053A-400F-11D0-9DCD-00A0C90391D3}` e tutte le relative sottochiavi.

- Crea nuovamente `{44EC053A-400F-11D0-9DCD-00A0C90391D3}` .

- Aggiunge `ATL Registrar Class` come valore stringa predefinito per `{44EC053A-400F-11D0-9DCD-00A0C90391D3}` .

L'albero di analisi aggiunge ora due nuove sottochiavi a `{44EC053A-400F-11D0-9DCD-00A0C90391D3}` . La prima chiave, `ProgID` , ottiene un valore stringa predefinito che corrisponde al ProgID. La seconda chiave, `InprocServer32` , ottiene un valore stringa predefinito, `%MODULE%` , che è un valore del preprocessore illustrato nella sezione, [usando i parametri sostituibili (il preprocessore del registrar)](../atl/using-replaceable-parameters-the-registrar-s-preprocessor.md)di questo articolo. `InprocServer32` Ottiene anche un valore denominato, `ThreadingModel` , con un valore di stringa pari a `Apartment` .

## <a name="specify-multiple-parse-trees"></a>Specificare più alberi di analisi

Per specificare più di un albero di analisi in uno script, è sufficiente inserire un albero alla fine di un altro. Ad esempio, lo script seguente aggiunge la chiave, `MyVeryOwnKey` , agli alberi di analisi per `HKEY_CLASSES_ROOT` e `HKEY_CURRENT_USER` :

```rgs
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
> In uno script di registrazione, 4K è la dimensione massima del token. Un token è qualsiasi elemento riconoscibile nella sintassi. Nell'esempio di scripting precedente,,, `HKCR` `HKEY_CURRENT_USER` `'MyVeryOwnKey'` e `'HowGoesIt'` sono tutti token.

## <a name="see-also"></a>Vedi anche

[Creazione di script del registrar](../atl/creating-registrar-scripts.md)

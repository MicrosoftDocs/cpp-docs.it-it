---
title: Esempi di script del Registro di sistema | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- scripting, examples
- registrar scripts [ATL]
- scripts, Registrar scripts
- registry, Registrar
ms.assetid: b6df80e1-e08b-40ee-9243-9b381b172460
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1b2a5dfd3bd31674917a5b41174277ef787aff25
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="registry-scripting-examples"></a>Esempi di script del Registro di sistema
Gli esempi di script in questo argomento viene illustrato come aggiungere una chiave del Registro di sistema, registrare il server di registrazione COM e specificare più alberi di analisi.  
  
## <a name="add-a-key-to-hkeycurrentuser"></a>Aggiungere una chiave HKEY_CURRENT_USER  
 Albero di analisi seguenti viene illustrato un semplice script che aggiunge una singola chiave al Registro di sistema. In particolare, lo script aggiunge la chiave, `MyVeryOwnKey`a `HKEY_CURRENT_USER`. Viene inoltre assegnato il valore di stringa del valore predefinito di `HowGoesIt` alla nuova chiave:  
  
```  
HKEY_CURRENT_USER  
{  
 'MyVeryOwnKey' = s 'HowGoesIt'  
}  
```  
  
 Questo script può essere facilmente esteso per definire più sottochiavi, come indicato di seguito:  
  
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
  
 A questo punto, lo script aggiunge una sottochiave, `HasASubkey`a `MyVeryOwnKey`. Questa sottochiave, viene aggiunto sia il `PrettyCool` sottochiave (valore predefinito è `DWORD` valore 55) e il `ANameValue` denominato value (con un valore di stringa di `WithANamedValue`).  
  
##  <a name="_atl_register_the_registrar_com_server"></a>Registrare il Server di registrazione COM  
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
    ForceRemove {44EC053A-400F-11D0-9DCD-00A0C90391D3} = 
    s 'ATL Registrar Class'  
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
  
 In fase di esecuzione, si aggiunge questo albero di analisi di `ATL.Registrar` per `HKEY_CLASSES_ROOT`. Per questa nuova chiave, quindi it:  
  
-   Specifica `ATL Registrar Class` come valore predefinito della chiave della stringa.  
  
-   Aggiunge `CLSID` come una sottochiave.  
  
-   Specifica `{44EC053A-400F-11D0-9DCD-00A0C90391D3}` per `CLSID`. (Questo valore è il Registrar CLSID per l'utilizzo con `CoCreateInstance`.)  
  
 Poiché `CLSID` è condiviso, non deve essere rimosso in modalità di annullamento della registrazione. L'istruzione, `NoRemove CLSID`, indica che `CLSID` deve essere aperto in modalità di registrazione e ignorati nella modalità di annullamento della registrazione.  
  
 Il `ForceRemove` istruzione fornisce una funzione di manutenzione tramite la rimozione di una chiave e tutte le relative sottochiavi prima di ricreare la chiave. Questo può essere utile se sono stati modificati i nomi delle sottochiavi. In questo esempio di script `ForceRemove` controlla se `{44EC053A-400F-11D0-9DCD-00A0C90391D3}` esiste già. In caso affermativo, `ForceRemove`:  
  
-   Elimina in modo ricorsivo `{44EC053A-400F-11D0-9DCD-00A0C90391D3}` e tutte le relative sottochiavi.  
  
-   Ricrea `{44EC053A-400F-11D0-9DCD-00A0C90391D3}`.  
  
-   Aggiunge `ATL Registrar Class` come il valore di stringa del valore predefinito per `{44EC053A-400F-11D0-9DCD-00A0C90391D3}`.  
  
 La struttura ad albero di analisi ora aggiunge due nuove sottochiavi a `{44EC053A-400F-11D0-9DCD-00A0C90391D3}`. La prima chiave `ProgID`, ottiene un valore di stringa predefinita che è il valore ProgID. La seconda chiave, `InprocServer32`, ottiene un valore di stringa del valore predefinito, `%MODULE%`, vale a dire un valore per il preprocessore descritto nella sezione [utilizzando parametri sostituibili (il Registrar preprocessore)](../atl/using-replaceable-parameters-the-registrar-s-preprocessor.md), di questo articolo. `InprocServer32`Ottiene anche un valore denominato, `ThreadingModel`, con un valore stringa `Apartment`.  
  
## <a name="specify-multiple-parse-trees"></a>Specificare più alberi di analisi  
 Per specificare più di un albero di analisi in uno script, è sufficiente inserire una struttura ad albero alla fine di un altro. Ad esempio, lo script seguente aggiunge la chiave, `MyVeryOwnKey`, alle strutture di analisi per entrambi `HKEY_CLASSES_ROOT` e `HKEY_CURRENT_USER`:  
  
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
>  In uno script di registrazione, 4K è la dimensione massima dei token. (Un token è un qualsiasi elemento riconoscibile nella sintassi). Nell'esempio di script precedente, `HKCR`, `HKEY_CURRENT_USER`, `'MyVeryOwnKey'`, e `'HowGoesIt'` sono tutti i token.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione degli script del Registro di sistema](../atl/creating-registrar-scripts.md)


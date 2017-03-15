---
title: "Registry Scripting Examples | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "registrar scripts [ATL]"
  - "Registro di sistema, Registrar"
  - "script, esempi"
  - "script, Registrar scripts"
ms.assetid: b6df80e1-e08b-40ee-9243-9b381b172460
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Registry Scripting Examples
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esempi di scripting in questo argomento viene illustrato come aggiungere una chiave nel Registro di sistema, registrare il server COM di registrazione e specificano le strutture ad albero di traccia meno.  
  
## Aggiungere una chiave a HKEY\_CURRENT\_USER  
 Nell'albero di analisi illustrato uno script semplice che aggiunge una singola chiave nel Registro di sistema.  In particolare, lo script aggiunge la chiave, `MyVeryOwnKey`, a `HKEY_CURRENT_USER`.  Inoltre assegnato il valore stringa predefinito `HowGoesIt?` alla nuova chiave:  
  
```  
HKEY_CURRENT_USER  
{  
   'MyVeryOwnKey' = s 'HowGoesIt?'  
}  
```  
  
 Questo script può essere esteso per definire le sottochiavi più come segue:  
  
```  
HKCU  
{  
   'MyVeryOwnKey' = s 'HowGoesIt?'  
   {  
      'HasASubkey'  
      {  
         'PrettyCool?' = d '55'  
         val 'ANameValue' = s 'WithANamedValue'  
      }  
   }  
}  
```  
  
 Ora, lo script viene aggiunta una sottochiave, `HasASubkey`, a `MyVeryOwnKey`.  Nella sottochiave, aggiunge la sottochiave `PrettyCool?` poiché il valore predefinito `DWORD` di 55 che `ANameValue` denominato valore con un valore stringa `WithANamedValue`\).  
  
##  <a name="_atl_register_the_registrar_com_server"></a> Registrare il server COM di registrazione  
 Il seguente script registra il server stesso COM di registrazione.  
  
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
  
 In fase di esecuzione, questa struttura ad albero di analisi aggiunge la chiave `ATL.Registrar` a `HKEY_CLASSES_ROOT`.  Alla nuova chiave, quindi:  
  
-   Specifica `ATL Registrar Class` come valore stringa predefinito della chiave.  
  
-   Aggiunge `CLSID` come sottochiave.  
  
-   Specifica `{44EC053A-400F-11D0-9DCD-00A0C90391D3}` per `CLSID`.  Questo valore è il CLSID di registrazione per l'utilizzo con `CoCreateInstance`\).  
  
 Poiché `CLSID` è condiviso, non deve essere rimosso in annulla la registrazione la modalità.  L'istruzione, `NoRemove CLSID`, a tale scopo indica che `CLSID` deve essere aperto in modalità di registro e ignorati in annullare la registrazione della modalità.  
  
 L'istruzione `ForceRemove` fornisce una funzione del governo di cane rimozione di una chiave e le relative sottochiavi prima della creazione della chiave.  Questo può essere utile se i nomi delle sottochiavi modificate.  In questo esempio di script, controlli `ForceRemove` verifica se `{44EC053A-400F-11D0-9DCD-00A0C90391D3}` esiste già.  In caso affermativo, `ForceRemove`:  
  
-   In modo ricorsivo elimina `{44EC053A-400F-11D0-9DCD-00A0C90391D3}` e tutte le relative sottochiavi.  
  
-   Ricrea `{44EC053A-400F-11D0-9DCD-00A0C90391D3}`.  
  
-   Aggiunge `ATL Registrar Class` come valore stringa predefinito per `{44EC053A-400F-11D0-9DCD-00A0C90391D3}`.  
  
 L'albero di analisi verranno aggiunte due nuove sottochiavi a `{44EC053A-400F-11D0-9DCD-00A0C90391D3}`.  La prima chiave, `ProgID`, ottiene un valore stringa predefinito che rappresenta il ProgID.  La seconda chiave, `InprocServer32`, ottiene un valore stringa predefinito, `%MODULE%`, un valore del preprocessore illustrato nella sezione, [Utilizzo di parametri sostituibili \(il preprocessore di registrazione\)](../atl/using-replaceable-parameters-the-registrar-s-preprocessor.md), di questo articolo.  `InprocServer32` ottiene anche un valore denominato, `ThreadingModel`, con un valore stringa `Apartment`.  
  
## Specificare le strutture ad albero di traccia più  
 Per specificare più di un albero di traccia in uno script, percorsi semplicemente una struttura ad albero alla fine di un altro.  Ad esempio, il seguente script aggiunge la chiave, `MyVeryOwnKey`, alle strutture ad albero di traccia sia per `HKEY_CLASSES_ROOT` che `HKEY_CURRENT_USER`:  
  
```  
HKCR  
{  
   'MyVeryOwnKey' = s 'HowGoesIt?'  
}  
HKEY_CURRENT_USER  
{  
   'MyVeryOwnKey' = s 'HowGoesIt?'  
}  
```  
  
> [!NOTE]
>  In uno script di registrazione, 4K è la dimensione massima del token.  \(Il token di un oggetto è qualsiasi elemento riconoscibile nella sintassi.\) Nell'esempio precedente di script, `HKCR`, `HKEY_CURRENT_USER`, `'MyVeryOwnKey'`e `'HowGoesIt?'` sono tutti i token.  
  
## Vedere anche  
 [Creating Registrar Scripts](../atl/creating-registrar-scripts.md)
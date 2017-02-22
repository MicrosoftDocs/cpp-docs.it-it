---
title: "Understanding Parse Trees | Microsoft Docs"
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
  - "parse trees"
ms.assetid: 668ce2dd-a1c3-4ca0-8135-b25267cb6a85
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Understanding Parse Trees
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile definire una o più strutture ad albero di traccia nello script di registrazione, in cui ogni struttura ad albero di analisi ha il formato seguente:  
  
```  
<root key>{<registry expression>}+  
```  
  
 Dove:  
  
```  
<root key> ::=  HKEY_CLASSES_ROOT | HKEY_CURRENT_USER |  
               HKEY_LOCAL_MACHINE | HKEY_USERS |  
               HKEY_PERFORMANCE_DATA | HKEY_DYN_DATA |  
               HKEY_CURRENT_CONFIG | HKCR | HKCU |  
               HKLM | HKU | HKPD | HKDD | HKCC  
<registry expression> ::= <Add Key> | <Delete Key>  
<Add Key> ::= [ForceRemove | NoRemove | val]<Key Name>  
              [<Key Value>][{< Add Key>}]  
<Delete Key> ::=  Delete<Key Name>  
<Key Name> ::= '<AlphaNumeric>+'  
<AlphaNumeric> ::= any character not NULL, i.e. ASCII 0  
<Key Value> ::== <Key Type><Key Name>  
<Key Type> ::= s | d  
<Key Value> ::= '<AlphaNumeric>'  
```  
  
> [!NOTE]
>  `HKEY_CLASSES_ROOT` e `HKCR` sono uguali; `HKEY_CURRENT_USER` e `HKCU` sono uguali; e così via.  
  
 Un albero di analisi può aggiungere più chiavi e le sottochiavi a \<root key\>.  In tal modo, consente un handle di una sottochiave aperto finché il parser fino a coprire tutte le relative sottochiavi.  Questo approccio è più efficiente di esecuzione in una singola chiave per volta, come mostrato nell'esempio seguente:  
  
```  
HKEY_CLASSES_ROOT  
{  
   'MyVeryOwnKey'  
   {  
      'HasASubKey'  
      {  
         'PrettyCool?'  
      }  
   }  
}  
```  
  
 In questo caso, il registrar inizialmente aperta \(crea\) `HKEY_CLASSES_ROOT\MyVeryOwnKey`.  Si vede che `MyVeryOwnKey` dispone di una sottochiave.  Anziché chiave a `MyVeryOwnKey`, il registrar di handle e aperta \(crea\) `HasASubKey` utilizzando questi handle padre.  \(Il Registro di sistema sia più lenta quando non sono handle padre aperte.\) Pertanto, aprire `HKEY_CLASSES_ROOT\MyVeryOwnKey` quindi aprire `HasASubKey` con `MyVeryOwnKey` come elemento padre sono più veloci all'apertura `MyVeryOwnKey`, di chiusura `MyVeryOwnKey`quindi all'apertura `MyVeryOwnKey\HasASubKey`.  
  
## Vedere anche  
 [Creating Registrar Scripts](../atl/creating-registrar-scripts.md)
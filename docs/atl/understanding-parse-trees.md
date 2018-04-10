---
title: ATL (Registrar) e strutture di analisi | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-windows
ms.tgt_pltfrm: ''
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- parse trees
ms.assetid: 668ce2dd-a1c3-4ca0-8135-b25267cb6a85
caps.latest.revision: 12
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c8ce648a541f6e0e2d4fac2e6ee19226e41f20ad
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="understanding-parse-trees"></a>Informazioni sulle strutture di analisi
È possibile definire uno o più strutture di analisi nello script di registrazione, in cui ogni albero di analisi ha il formato seguente:  
  
```  
<root key>{<registry expression>}+  
```  
  
 dove:  
  
```  
<root key> ::= HKEY_CLASSES_ROOT | HKEY_CURRENT_USER |  
    HKEY_LOCAL_MACHINE | HKEY_USERS |  
    HKEY_PERFORMANCE_DATA | HKEY_DYN_DATA |  
    HKEY_CURRENT_CONFIG | HKCR | HKCU |  
    HKLM | HKU | HKPD | HKDD | HKCC  
<registry expression> ::= <Add Key> | <Delete Key>  
<Add Key> ::= [ForceRemove | NoRemove | val]<Key Name>  
 [<Key Value>][{<Add Key>}]  
<Delete Key> ::= Delete<Key Name>  
<Key Name> ::= '<AlphaNumeric>+'  
<AlphaNumeric> ::= any character not NULL, i.e. ASCII 0  
<Key Value> ::== <Key Type><Key Name>  
<Key Type> ::= s | d  
<Key Value> ::= '<AlphaNumeric>'  
```  
  
> [!NOTE]
> `HKEY_CLASSES_ROOT`e `HKCR` sono equivalenti. `HKEY_CURRENT_USER` e `HKCU` sono equivalenti; e così via.  
  
 Una struttura ad albero di analisi è possibile aggiungere più chiavi e sottochiavi per la \<chiave principale >. In questo modo, mantiene un handle di sottochiave aperta fino a quando il parser ha completato l'analisi di tutte le relative sottochiavi. Questo approccio è più efficiente dell'utilizzo di una singola chiave contemporaneamente, come illustrato nell'esempio seguente:  
  
```  
HKEY_CLASSES_ROOT  
{  
 'MyVeryOwnKey'  
 {  
 'HasASubKey'  
 {  
 'PrettyCool'  
 }  
 }  
}  
```  
  
 In questo caso, inizialmente aperta (Crea) `HKEY_CLASSES_ROOT\MyVeryOwnKey`. Quindi, vede che `MyVeryOwnKey` ha una sottochiave. Invece di chiudere la chiave per `MyVeryOwnKey`, il programma di registrazione consente di mantenere l'handle e apre (Crea) `HasASubKey` utilizzando l'handle del padre. (Il Registro di sistema può essere più lento quando non è aperto alcun handle padre.) Di conseguenza, apertura `HKEY_CLASSES_ROOT\MyVeryOwnKey` e quindi aprire `HasASubKey` con `MyVeryOwnKey` come elemento padre è più veloce di apertura `MyVeryOwnKey`chiusura `MyVeryOwnKey`e quindi aprire `MyVeryOwnKey\HasASubKey`.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione degli script del Registro di sistema](../atl/creating-registrar-scripts.md)


---
title: ATL (Registrar) e gli alberi di analisi | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- parse trees
ms.assetid: 668ce2dd-a1c3-4ca0-8135-b25267cb6a85
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 08c92d86cbbfd38ed4ae852ce52e3b70735812e9
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46028090"
---
# <a name="understanding-parse-trees"></a>Informazioni sulle strutture di analisi

È possibile definire uno o più alberi di analisi nello script di registrazione, in cui ogni albero di analisi ha il formato seguente:

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
<Add Key> ::= [ForceRemove | NoRemove | val]<Key Name> [<Key Value>][{<Add Key>}]
<Delete Key> ::= Delete<Key Name>
<Key Name> ::= '<AlphaNumeric>+'
<AlphaNumeric> ::= any character not NULL, i.e. ASCII 0
<Key Value> ::== <Key Type><Key Name>
<Key Type> ::= s | d
<Key Value> ::= '<AlphaNumeric>'
```

> [!NOTE]
> `HKEY_CLASSES_ROOT` e `HKCR` sono equivalenti. `HKEY_CURRENT_USER` e `HKCU` sono equivalenti; e così via.

Un albero di analisi è possibile aggiungere più chiavi e sottochiavi al \<chiave principale >. In questo modo, mantiene un handle di sottochiave aperta fino a quando il parser ha completato l'analisi di tutte le relative sottochiavi. Questo approccio è più efficiente rispetto all'opera su una sola chiave alla volta, come illustrato nell'esempio seguente:

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

In questo caso, il programma di registrazione apre inizialmente (Crea) `HKEY_CLASSES_ROOT\MyVeryOwnKey`. Che rileva quindi `MyVeryOwnKey` ha una sottochiave. Invece di chiudere la chiave per `MyVeryOwnKey`, il Registrar consente di mantenere l'handle e apre (Crea) `HasASubKey` tramite questo handle padre. (Il Registro di sistema può essere più lento quando non esistono handle padre viene aperto.) Di conseguenza, aprendo `HKEY_CLASSES_ROOT\MyVeryOwnKey` e quindi aprendo `HasASubKey` con `MyVeryOwnKey` come elemento padre è più veloce di apertura `MyVeryOwnKey`, la chiusura `MyVeryOwnKey`e quindi aprendo `MyVeryOwnKey\HasASubKey`.

## <a name="see-also"></a>Vedere anche

[Creazione degli script del Registro di sistema](../atl/creating-registrar-scripts.md)


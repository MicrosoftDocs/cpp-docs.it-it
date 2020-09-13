---
title: Registrar and parse trees ATL
ms.date: 11/04/2016
helpviewer_keywords:
- parse trees
ms.assetid: 668ce2dd-a1c3-4ca0-8135-b25267cb6a85
ms.openlocfilehash: ff74ff879e757a569232ff19244d3f7598063465
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90040288"
---
# <a name="understanding-parse-trees"></a>Informazioni sugli alberi di analisi

È possibile definire uno o più alberi di analisi nello script del registrar, in cui ogni albero di analisi ha il formato seguente:

> \<root key>{\<registry expression>}+

dove:

> \<root key> :: = HKEY_CLASSES_ROOT \| HKEY_CURRENT_USER \|\
> &emsp;HKEY_LOCAL_MACHINE \| HKEY_USERS \|\
> &emsp;HKEY_PERFORMANCE_DATA \| HKEY_DYN_DATA \|\
> &emsp;HKEY_CURRENT_CONFIG \| HKCR \| HKCU \|\
> &emsp;HKLM \| HKU \| HKPD \| HKDD \| HKCC

> \<registry expression>::= \<Add Key> \|\<Delete Key>

> \<Add Key>:: = \[ **ForceRemove** \| **NoRemove** \| **Val**] \<Key Name> [ \<Key Value> ] [{ \<Add Key> }]

> \<Delete Key> :: = **Delete**\<Key Name>

> \<Key Name> ::= **'**\<AlphaNumeric>+**'**

> \<AlphaNumeric> :: = *qualsiasi carattere non null, ad esempio ASCII 0*

> \<Key Value> ::= \<Key Type>\<Key Name>

> \<Key Type> :: = **s** \| **d**

> \<Key Value> ::= **'**\<AlphaNumeric>**'**

> [!NOTE]
> `HKEY_CLASSES_ROOT` e `HKCR` sono equivalenti; `HKEY_CURRENT_USER` e `HKCU` sono equivalenti e così via.

Un albero di analisi può aggiungere più chiavi e sottochiavi a \<root key> . In questo modo, mantiene aperto l'handle di una sottochiave finché il parser non ha completato l'analisi di tutte le relative sottochiavi. Questo approccio è più efficiente rispetto all'utilizzo di una singola chiave alla volta, come illustrato nell'esempio seguente:

```rgs
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

Il registrar si apre inizialmente (Crea) `HKEY_CLASSES_ROOT\MyVeryOwnKey` . Viene quindi visualizzato `MyVeryOwnKey` con una sottochiave. Anziché chiudere la chiave per `MyVeryOwnKey` , il registrar mantiene il punto di controllo e si apre (Crea) `HasASubKey` utilizzando questo handle padre. Il registro di sistema può essere più lento quando non è aperto alcun handle padre. Pertanto, `HKEY_CLASSES_ROOT\MyVeryOwnKey` l'apertura e `HasASubKey` l'apertura di con `MyVeryOwnKey` come elemento padre è più veloce di quella di apertura `MyVeryOwnKey` , chiusura `MyVeryOwnKey` e apertura `MyVeryOwnKey\HasASubKey` .

## <a name="see-also"></a>Vedi anche

[Creazione di script del registrar](../atl/creating-registrar-scripts.md)

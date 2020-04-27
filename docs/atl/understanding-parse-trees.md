---
title: Registrar and parse trees ATL
ms.date: 11/04/2016
helpviewer_keywords:
- parse trees
ms.assetid: 668ce2dd-a1c3-4ca0-8135-b25267cb6a85
ms.openlocfilehash: de2cea9b0e7b7c62236f708f9aa8217eaa5df51d
ms.sourcegitcommit: 2bc15c5b36372ab01fa21e9bcf718fa22705814f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/27/2020
ms.locfileid: "82168696"
---
# <a name="understanding-parse-trees"></a>Informazioni sugli alberi di analisi

È possibile definire uno o più alberi di analisi nello script del registrar, in cui ogni albero di analisi ha il formato seguente:

> \<chiave radice> {\<espressione registro di sistema>} +

dove:

> \<chiave radice>:: = HKEY_CLASSES_ROOT | HKEY_CURRENT_USER | \
> &nbsp;&nbsp;&nbsp;&nbsp;HKEY_LOCAL_MACHINE | HKEY_USERS | \
> &nbsp;&nbsp;&nbsp;&nbsp;HKEY_PERFORMANCE_DATA | HKEY_DYN_DATA | \
> &nbsp;&nbsp;&nbsp;&nbsp;HKEY_CURRENT_CONFIG | HKCR | HKCU | \
> &nbsp;&nbsp;&nbsp;&nbsp;HKLM | HKU | HKPD | HKDD | HKCC

> \<espressione registro di sistema>: \<: = aggiungi chiave> | \<Elimina chiave>

> \<Aggiungi chiave>:: = [**ForceRemove** | **NoRemove** | **Val**]\<nome chiave> [\<valore chiave>] [{\<Aggiungi chiave>}]

> \<Elimina chiave>:: = **Elimina**\<nome chiave>

> \<Nome chiave>:: = **'**\<alfanumerico>+**'**

> \<Alfanumerico>:: = *qualsiasi carattere non null, ad esempio ASCII 0*

> \<Valore chiave>:: = \<tipo di chiave \<>nome chiave>

> \<Tipo di chiave>:: = **s** | **d**

> \<Valore chiave>:: = **'**\<alfanumerico>**'**

> [!NOTE]
> `HKEY_CLASSES_ROOT`e `HKCR` sono equivalenti; `HKEY_CURRENT_USER` e `HKCU` sono equivalenti; E così via.

Un albero di analisi può aggiungere più chiavi e sottochiavi alla \<chiave radice>. In questo modo, mantiene aperto l'handle di una sottochiave finché il parser non ha completato l'analisi di tutte le relative sottochiavi. Questo approccio è più efficiente rispetto all'utilizzo di una singola chiave alla volta, come illustrato nell'esempio seguente:

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

Il registrar si apre inizialmente (Crea) `HKEY_CLASSES_ROOT\MyVeryOwnKey`. Viene quindi visualizzato `MyVeryOwnKey` con una sottochiave. Anziché chiudere la chiave per, `MyVeryOwnKey`il registrar mantiene il punto di controllo e si apre ( `HasASubKey` crea) utilizzando questo handle padre. Il registro di sistema può essere più lento quando non è aperto alcun handle padre. Pertanto, l' `HKEY_CLASSES_ROOT\MyVeryOwnKey` apertura e l' `HasASubKey` apertura `MyVeryOwnKey` di con come elemento padre è più `MyVeryOwnKey`veloce di `MyVeryOwnKey`quella di apertura, `MyVeryOwnKey\HasASubKey`chiusura e apertura.

## <a name="see-also"></a>Vedere anche

[Creazione di script del registrar](../atl/creating-registrar-scripts.md)

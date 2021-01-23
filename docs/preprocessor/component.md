---
description: Altre informazioni sulla direttiva Component pragma in Microsoft C/C++
title: componente pragma
ms.date: 01/22/2021
f1_keywords:
- vc-pragma.component
- component_CPP
helpviewer_keywords:
- component pragma
- pragma, component
no-loc:
- pragma
ms.openlocfilehash: 68a4117439390c6ec978ae9d766efb395a4ceaa4
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98712947"
---
# <a name="component-no-locpragma"></a>`component` pragma

Controlla la raccolta di informazioni di visualizzazione o di informazioni sulle dipendenze dall'interno dei file di origine.

## <a name="syntax"></a>Sintassi

> **`#pragma component( browser,`** { **`on`** \| **`off`** } \[ **`,`** **`references`** \[ **`,`** *nome* ]] **`)`** \
> **`#pragma component( minrebuild,`** { **`on`** \| **`off`** } **`)`** \
> **`#pragma component( mintypeinfo,`** { **`on`** \| **`off`** } **`)`**

## <a name="remarks"></a>Osservazioni

### <a name="browser"></a>Browser

È possibile abilitare o disabilitare la raccolta e specificare determinati nomi da ignorare man mano che vengono raccolte le informazioni.

L'utilizzo di on o off controlla la raccolta di informazioni di visualizzazione in pragma Avanti. Ad esempio:

```cpp
#pragma component(browser, off)
```

arresta la raccolta di informazioni di visualizzazione da parte del compilatore.

> [!NOTE]
> Per attivare la raccolta delle informazioni di visualizzazione con questa operazione pragma , [è necessario abilitare prima le informazioni di visualizzazione](../build/reference/building-browse-information-files-overview.md).

L' **`references`** opzione può essere utilizzata con o senza l'argomento *Name* . **`references`** L'utilizzo di senza *nome* consente di attivare o disattivare la raccolta di riferimenti (altre informazioni di visualizzazione continuano a essere raccolte, tuttavia). Ad esempio:

```cpp
#pragma component(browser, off, references)
```

arresta la raccolta di informazioni di riferimento da parte del compilatore.

**`references`** L'utilizzo di with *Name* e **`off`** impedisce la visualizzazione dei riferimenti al *nome* nella finestra informazioni di visualizzazione. Utilizzare questa sintassi per ignorare i nomi e i tipi non desiderati e per ridurre le dimensioni dei file di informazioni di visualizzazione. Ad esempio:

```cpp
#pragma component(browser, off, references, DWORD)
```

Ignora i riferimenti a DWORD da quel punto in poi. È possibile riattivare la raccolta di riferimenti a DWORD utilizzando **`on`** :

```cpp
#pragma component(browser, on, references, DWORD)
```

Questo è l'unico modo per riprendere la raccolta dei riferimenti al *nome*; è necessario attivare in modo esplicito qualsiasi *nome* disattivato.

Per impedire al preprocessore di espandere il *nome* (ad esempio, espandendo null a 0), racchiuderlo tra virgolette:

```cpp
#pragma component(browser, off, references, "NULL")
```

### <a name="minimal-rebuild"></a>Ricompilazione minima

La funzionalità deprecata [ `/Gm` (Abilita ricompilazione minima)](../build/reference/gm-enable-minimal-rebuild.md) richiede al compilatore di creare e archiviare le informazioni sulle dipendenze della classe C++, che occupa spazio su disco. Per risparmiare spazio su disco, è possibile usare `#pragma component( minrebuild, off )` ogni volta che non è necessario raccogliere informazioni sulle dipendenze, ad esempio, in file di intestazione che non cambiano. Inserisci `#pragma component( minrebuild, on )` dopo le classi non modificabili per attivare di nuovo la raccolta delle dipendenze.

### <a name="reduce-type-information"></a>Ridurre le informazioni sul tipo

L' **`mintypeinfo`** opzione consente di ridurre le informazioni di debug per l'area specificata. Il volume di queste informazioni è notevole e incide sui file pdb e obj. Non è possibile eseguire il debug di classi e strutture nell' **`mintypeinfo`** area. L'uso dell' **`mintypeinfo`** opzione può essere utile per evitare l'avviso seguente:

```cmd
LINK : warning LNK4018: too many type indexes in PDB "filename", discarding subsequent type information
```

Per ulteriori informazioni, vedere l'opzione del compilatore [ `/Gm` (Abilita ricompilazione minima)](../build/reference/gm-enable-minimal-rebuild.md) .

## <a name="see-also"></a>Vedere anche

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)

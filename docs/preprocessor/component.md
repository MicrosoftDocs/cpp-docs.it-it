---
title: component
ms.date: 04/08/2019
f1_keywords:
- vc-pragma.component
- component_CPP
helpviewer_keywords:
- component pragma
- pragmas, component
ms.assetid: 7b66355e-3201-4c14-8190-f4a2a81a604a
ms.openlocfilehash: 4870860650a39d27639ad18100ba37ba14aa15c0
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59424066"
---
# <a name="component"></a>component

Controllare la raccolta delle informazioni di visualizzazione o informazioni sulla dipendenza dal file di origine.

## <a name="syntax"></a>Sintassi

> **#pragma component( browser,** { **on** | **off** }[**,** **references** [**,** *name* ]] **)** \
> **#pragma component( minrebuild, on** | **off )** \
> **#pragma component( mintypeinfo, on** | **off )**

## <a name="remarks"></a>Note

### <a name="browser"></a>Browser

È possibile abilitare o disabilitare la raccolta e specificare determinati nomi da ignorare man mano che vengono raccolte le informazioni.

L'utilizzo di On o Off consente di controllare la raccolta di informazioni di visualizzazione dal pragma in avanti. Ad esempio:

```cpp
#pragma component(browser, off)
```

arresta la raccolta di informazioni di visualizzazione da parte del compilatore.

> [!NOTE]
> Per abilitare la raccolta delle informazioni di visualizzazione con questo pragma [le informazioni di visualizzazione devono essere prima abilitate](../build/reference/building-browse-information-files-overview.md).

Il `references` opzione può essere utilizzata con o senza il *nome* argomento. Usando `references` senza *nome* attiva o disattiva la raccolta di riferimenti (altre informazioni di visualizzazione continuano a essere raccolte). Ad esempio:

```cpp
#pragma component(browser, off, references)
```

arresta la raccolta di informazioni di riferimento da parte del compilatore.

Usando `references` con *name* e `off` impedisce i riferimenti a *nome* che venga visualizzato nella finestra di informazioni di esplorazione. Utilizzare questa sintassi per ignorare i nomi e i tipi non desiderati e per ridurre le dimensioni dei file di informazioni di visualizzazione. Ad esempio:

```cpp
#pragma component(browser, off, references, DWORD)
```

Ignora i riferimenti a DWORD da quel punto in poi. È possibile attivare la raccolta di riferimenti a DWORD riaccenderle tramite `on`:

```cpp
#pragma component(browser, on, references, DWORD)
```

Questo è l'unico modo per riprendere la raccolta dei riferimenti a *name*; è necessario attivare in modo esplicito su qualsiasi *nome* che è stata disattivata.

Per impedire al preprocessore di espansione *nome* (ad esempio l'espansione NULL a 0), racchiuderlo tra virgolette:

```cpp
#pragma component(browser, off, references, "NULL")
```

### <a name="minimal-rebuild"></a>Ricompilazione minima

Deprecate [/Gm (Abilita ricompilazione minima)](../build/reference/gm-enable-minimal-rebuild.md) funzionalità richiede al compilatore di creare e archiviare C++ classe informazioni sulle dipendenze, che richiede spazio su disco. Per risparmiare spazio su disco, è possibile usare `#pragma component( minrebuild, off )` ogni volta che non è necessario raccogliere informazioni sulle dipendenze, ad esempio, nei file di intestazione non modificabili. Inserisci `#pragma component(minrebuild, on)` dopo le classi non modificabili per attivare la raccolta delle dipendenze si riconnettano.

### <a name="reduce-type-information"></a>Ridurre le informazioni sui tipi

Il `mintypeinfo` opzione riduce le informazioni di debug per l'area specificata. Il volume di queste informazioni è notevole e incide sui file pdb e obj. Non è possibile eseguire il debug delle classi e delle strutture nell'area mintypeinfo. L'utilizzo dell'opzione mintypeinfo può essere utile per evitare il seguente avviso:

```cmd
LINK : warning LNK4018: too many type indexes in PDB "filename", discarding subsequent type information
```

Per altre informazioni, vedere la [/Gm (Abilita ricompilazione minima)](../build/reference/gm-enable-minimal-rebuild.md) opzione del compilatore.

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
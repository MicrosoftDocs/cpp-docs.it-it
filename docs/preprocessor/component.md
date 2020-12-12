---
description: 'Altre informazioni su: pragma componente'
title: Pragma component
ms.date: 08/29/2019
f1_keywords:
- vc-pragma.component
- component_CPP
helpviewer_keywords:
- component pragma
- pragmas, component
ms.assetid: 7b66355e-3201-4c14-8190-f4a2a81a604a
ms.openlocfilehash: 2eeb70701c490e0f797dfbd6da7ac11030283073
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97300801"
---
# <a name="component-pragma"></a>Pragma component

Controlla la raccolta di informazioni di visualizzazione o di informazioni sulle dipendenze dall'interno dei file di origine.

## <a name="syntax"></a>Sintassi

> **componente #pragma (browser,** { **on** \| **off** } \[ **,** **riferimenti** \[ **,** *nome* ]] **)** \
> **componente #pragma (minrebuild,** { **on** \| **off** } **)** \
> **componente #pragma (mintypeinfo,** { **on** \| **off** } **)**

## <a name="remarks"></a>Commenti

### <a name="browser"></a>Browser

È possibile abilitare o disabilitare la raccolta e specificare determinati nomi da ignorare man mano che vengono raccolte le informazioni.

L'utilizzo di On o Off consente di controllare la raccolta di informazioni di visualizzazione dal pragma in avanti. Ad esempio:

```cpp
#pragma component(browser, off)
```

arresta la raccolta di informazioni di visualizzazione da parte del compilatore.

> [!NOTE]
> Per attivare la raccolta di informazioni di visualizzazione con questo pragma, [è necessario abilitare prima le informazioni di visualizzazione](../build/reference/building-browse-information-files-overview.md).

L'opzione **References** può essere utilizzata con o senza l'argomento *Name* . L'uso di **riferimenti** senza *nome* consente di attivare o disattivare la raccolta di riferimenti (altre informazioni di visualizzazione continuano a essere raccolte, tuttavia). Ad esempio:

```cpp
#pragma component(browser, off, references)
```

arresta la raccolta di informazioni di riferimento da parte del compilatore.

L'utilizzo di **riferimenti** con *Name* e **off** impedisce la visualizzazione dei riferimenti al *nome* nella finestra informazioni di visualizzazione. Utilizzare questa sintassi per ignorare i nomi e i tipi non desiderati e per ridurre le dimensioni dei file di informazioni di visualizzazione. Ad esempio:

```cpp
#pragma component(browser, off, references, DWORD)
```

Ignora i riferimenti a DWORD da quel punto in poi. È possibile riattivare la raccolta di riferimenti a DWORD utilizzando **on**:

```cpp
#pragma component(browser, on, references, DWORD)
```

Questo è l'unico modo per riprendere la raccolta dei riferimenti al *nome*; è necessario attivare in modo esplicito qualsiasi *nome* disattivato.

Per impedire al preprocessore di espandere il *nome* (ad esempio, espandendo null a 0), racchiuderlo tra virgolette:

```cpp
#pragma component(browser, off, references, "NULL")
```

### <a name="minimal-rebuild"></a>Ricompilazione minima

La funzionalità deprecata [/GM (Abilita ricompilazione minima)](../build/reference/gm-enable-minimal-rebuild.md) richiede al compilatore di creare e archiviare le informazioni sulle dipendenze della classe C++, che occupa spazio su disco. Per risparmiare spazio su disco, è possibile usare `#pragma component( minrebuild, off )` ogni volta che non è necessario raccogliere informazioni sulle dipendenze, ad esempio, in file di intestazione che non cambiano. Inserisci `#pragma component( minrebuild, on )` dopo le classi non modificabili per attivare di nuovo la raccolta delle dipendenze.

### <a name="reduce-type-information"></a>Ridurre le informazioni sul tipo

L' `mintypeinfo` opzione consente di ridurre le informazioni di debug per l'area specificata. Il volume di queste informazioni è notevole e incide sui file pdb e obj. Non è possibile eseguire il debug delle classi e delle strutture nell'area mintypeinfo. L'utilizzo dell'opzione mintypeinfo può essere utile per evitare il seguente avviso:

```cmd
LINK : warning LNK4018: too many type indexes in PDB "filename", discarding subsequent type information
```

Per altre informazioni, vedere l'opzione del compilatore [/GM (Abilita ricompilazione minima)](../build/reference/gm-enable-minimal-rebuild.md)  .

## <a name="see-also"></a>Vedi anche

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)

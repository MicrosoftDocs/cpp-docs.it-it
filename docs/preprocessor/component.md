---
title: componente | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- vc-pragma.component
- component_CPP
dev_langs:
- C++
helpviewer_keywords:
- component pragma
- pragmas, component
ms.assetid: 7b66355e-3201-4c14-8190-f4a2a81a604a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c38324552d1dda7c315481f6e2bae4528012fb09
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50073890"
---
# <a name="component"></a>component
Controlla la raccolta di informazioni di visualizzazione o di informazioni sulle dipendenze dall'interno dei file di origine.

## <a name="syntax"></a>Sintassi

```
#pragma component( browser, { on | off }[, references [, name ]] )
#pragma component( minrebuild, on | off )
#pragma component( mintypeinfo, on | off )
```

## <a name="remarks"></a>Note

### <a name="browser"></a>Browser

È possibile abilitare o disabilitare la raccolta e specificare determinati nomi da ignorare man mano che vengono raccolte le informazioni.

L'utilizzo di On o Off consente di controllare la raccolta di informazioni di visualizzazione dal pragma in avanti. Ad esempio:

```
#pragma component(browser, off)
```

arresta la raccolta di informazioni di visualizzazione da parte del compilatore.

> [!NOTE]
> Per abilitare la raccolta delle informazioni di visualizzazione con questo pragma [le informazioni di visualizzazione devono essere prima abilitate](../build/reference/building-browse-information-files-overview.md).

Il `references` opzione può essere utilizzata con o senza il *nome* argomento. Usando `references` senza *nome* attiva o disattiva la raccolta di riferimenti (altre informazioni di visualizzazione continuano a essere raccolte). Ad esempio:

```
#pragma component(browser, off, references)
```

arresta la raccolta di informazioni di riferimento da parte del compilatore.

Usando `references` con *name* e `off` impedisce i riferimenti a *nome* che venga visualizzato nella finestra di informazioni di esplorazione. Utilizzare questa sintassi per ignorare i nomi e i tipi non desiderati e per ridurre le dimensioni dei file di informazioni di visualizzazione. Ad esempio:

```
#pragma component(browser, off, references, DWORD)
```

Ignora i riferimenti a DWORD da quel punto in poi. È possibile attivare la raccolta di riferimenti a DWORD riaccenderle tramite `on`:

```
#pragma component(browser, on, references, DWORD)
```

Questo è l'unico modo per riprendere la raccolta dei riferimenti a *name*; è necessario attivare in modo esplicito su qualsiasi *nome* che è stata disattivata.

Per impedire al preprocessore di espansione *nome* (ad esempio l'espansione NULL a 0), racchiuderlo tra virgolette:

```
#pragma component(browser, off, references, "NULL")
```

### <a name="minimal-rebuild"></a>Ricompilazione minima

La funzionalità di ricompilazione minima di Visual C++ richiede la creazione e l'archiviazione delle informazioni sulle dipendenze delle classi C++ da parte del compilatore, che richiede spazio su disco. Per risparmiare spazio su disco, è possibile usare `#pragma component( minrebuild, off )` ogni volta che non è necessario raccogliere informazioni sulle dipendenze, ad esempio, nei file di intestazione non modificabili. Inserisci `#pragma component(minrebuild, on)` dopo le classi non modificabili per attivare la raccolta delle dipendenze si riconnettano.

### <a name="reduce-type-information"></a>Ridurre le informazioni sui tipi

Il `mintypeinfo` opzione riduce le informazioni di debug per l'area specificata. Il volume di queste informazioni è notevole e incide sui file pdb e obj. Non è possibile eseguire il debug delle classi e delle strutture nell'area mintypeinfo. L'utilizzo dell'opzione mintypeinfo può essere utile per evitare il seguente avviso:

```
LINK : warning LNK4018: too many type indexes in PDB "filename", discarding subsequent type information
```

Per altre informazioni, vedere la [Abilita ricompilazione minima](../build/reference/gm-enable-minimal-rebuild.md) (o Gm) l'opzione del compilatore.

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
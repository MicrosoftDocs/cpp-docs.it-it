---
description: Altre informazioni su:/VERBOSE (stampa messaggi di stato)
title: /VERBOSE (Stampa di messaggi sullo stato)
ms.date: 02/03/2021
f1_keywords:
- /verbose
- VC.Project.VCLinkerTool.ShowProgress
helpviewer_keywords:
- -VERBOSE linker option
- linking [C++], session progress information
- Print Progress Messages linker option
- linker [C++], output dependency information
- /VERBOSE linker option
- dependencies [C++], dependency information in linker output
- VERBOSE linker option
ms.openlocfilehash: d58a6cc8d75021c78f8161cf12957a77bb26483c
ms.sourcegitcommit: c20734f18d3d49bb38b1628c68b53b54b3eeeb03
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/03/2021
ms.locfileid: "99522924"
---
# <a name="verbose-print-progress-messages"></a>`/VERBOSE` (Stampa messaggi di stato)

Genera messaggi di stato durante il processo di collegamento.

## <a name="syntax"></a>Sintassi

> **`/VERBOSE`**\[**`:`**{**`CLR`**|**`ICF`**|**`INCR`**|**`LIB`**|**`REF`**|**`SAFESEH`**|**`UNUSEDDELAYLOAD`**|**`UNUSEDLIBS`**}\]

## <a name="remarks"></a>Commenti

Il linker Invia le informazioni sullo stato di avanzamento della sessione di collegamento alla finestra di **output** . Nella riga di comando le informazioni vengono inviate all'output standard e possono essere reindirizzate a un file.

| Opzione | Descrizione |
| ------------ | ----------------- |
| **`/VERBOSE`** | Visualizza dettagli sul processo di collegamento. |
| **`/VERBOSE:CLR`** | Visualizza informazioni sull'attività del linker specifica di oggetti e metadati compilati tramite [`/clr`](clr-common-language-runtime-compilation.md) . |
| **`/VERBOSE:ICF`** | Visualizza informazioni sull'attività del linker risultante dall'utilizzo di [`/OPT:ICF`](opt-optimizations.md) . |
| **`/VERBOSE:INCR`** | Visualizza informazioni sul processo di collegamento incrementale. |
| **`/VERBOSE:LIB`** | Visualizza messaggi di stato che indicano solo le librerie in cui viene eseguita la ricerca.<br/> Le informazioni visualizzate includono il processo di ricerca della libreria. Vengono elencate le librerie e il nome dell'oggetto (con percorso completo), il simbolo da risolvere dalla libreria e un elenco di oggetti che fanno riferimento al simbolo. |
| **`/VERBOSE:REF`** | Visualizza informazioni sull'attività del linker risultante dall'utilizzo di [`/OPT:REF`](opt-optimizations.md) . |
| **`/VERBOSE:SAFESEH`** | Visualizza informazioni sui moduli che non sono compatibili con la gestione delle eccezioni strutturate sicure quando [`/SAFESEH`](safeseh-image-has-safe-exception-handlers.md) non è specificato. |
| **`/VERBOSE:UNUSEDDELAYLOAD`** | Visualizza informazioni sulle DLL a caricamento ritardato che non dispongono di simboli utilizzati durante la creazione dell'immagine. |
| **`/VERBOSE:UNUSEDLIBS`** | Visualizza informazioni su tutti i file di libreria che non sono stati utilizzati quando l'immagine è stata creata. |

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la   >  pagina delle proprietà della riga di comando del **linker** proprietà di configurazione  >   .

1. Aggiungere l'opzione alla casella **Opzioni aggiuntive** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ShowProgress%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)

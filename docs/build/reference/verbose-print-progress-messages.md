---
title: /VERBOSE (Stampa di messaggi sullo stato)
ms.date: 06/13/2019
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
ms.assetid: 9c347d98-4c37-4724-a39e-0983934693ab
ms.openlocfilehash: bbf7b5966c741535f26202979cbfd71f839cc537
ms.sourcegitcommit: e79188287189b76b34eb7e8fb1bfe646bdb586bc
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/14/2019
ms.locfileid: "67141659"
---
# <a name="verbose-print-progress-messages"></a>/VERBOSE (Stampa di messaggi sullo stato)

Messaggi di stato di avanzamento di output durante il processo di collegamento.

## <a name="syntax"></a>Sintassi

> **/VERBOSE**\[ **:** {**CLR**|**ICF**|**INCR**|**LIB**|**REF**|**SAFESEH**|**UNUSEDDELAYLOAD**|**UNUSEDLIBS**}\]

## <a name="remarks"></a>Note

Il linker invia le informazioni sullo stato di avanzamento della sessione di collegamento per il **Output** finestra. Nella riga di comando, le informazioni vengono inviate all'output standard e possono essere reindirizzate a un file.

| Opzione | Descrizione |
| ------------ | ----------------- |
| /VERBOSE | Visualizza i dettagli sul processo di collegamento. |
| /VERBOSE:CLR | Visualizza le informazioni sull'attività del linker specifico a oggetti e metadati compilati usando [/clr](clr-common-language-runtime-compilation.md). |
| /VERBOSE:ICF | Visualizza le informazioni sull'attività del linker risultante dall'utilizzo di [/OPT: ICF](opt-optimizations.md). |
| /VERBOSE:INCR | Visualizza informazioni sul processo di collegamento incrementale. |
| /VERBOSE:LIB | Visualizza messaggi di stato che indicano solo le librerie in cui viene eseguita la ricerca.<br/> Le informazioni visualizzate includono il processo di ricerca della libreria. Elenca ogni nome di oggetto e di libreria (con il percorso completo), il simbolo in fase di risoluzione della libreria di e un elenco di oggetti che fanno riferimento al simbolo. |
| /VERBOSE:REF | Visualizza le informazioni sull'attività del linker risultante dall'utilizzo di [/OPT: ref](opt-optimizations.md). |
| /VERBOSE:SAFESEH | Visualizza informazioni sui moduli incompatibili con quando gestione sicura delle eccezioni strutturata [/SAFESEH](safeseh-image-has-safe-exception-handlers.md) non è specificato. |
| /VERBOSE:UNUSEDDELAYLOAD | Visualizza informazioni su eventuali ritardi caricato le DLL che non dispone di alcun simboli usati quando viene creata l'immagine. |
| /VERBOSE:UNUSEDLIBS | Visualizza informazioni su tutti i file di libreria che non sono stati utilizzati quando l'immagine è stata creata. |

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **Linker** > **della riga di comando** pagina delle proprietà.

1. Aggiungere l'opzione per la **opzioni aggiuntive** casella.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ShowProgress%2A>.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)

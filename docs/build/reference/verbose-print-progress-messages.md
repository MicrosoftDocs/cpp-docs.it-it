---
description: Altre informazioni su:/VERBOSE (stampa messaggi di stato)
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
ms.openlocfilehash: 9d1a22a1b05f42a707b2449fbb114ba06db85ff5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97176418"
---
# <a name="verbose-print-progress-messages"></a>/VERBOSE (Stampa di messaggi sullo stato)

Genera messaggi di stato durante il processo di collegamento.

## <a name="syntax"></a>Sintassi

> **/Verbose** \[ **:**{**CLR** | **ICF** | **incr** | **lib** | **ref** | **SAFESEH** | **UNUSEDDELAYLOAD** | **UNUSEDLIBS**}\]

## <a name="remarks"></a>Commenti

Il linker Invia le informazioni sullo stato di avanzamento della sessione di collegamento alla finestra di **output** . Nella riga di comando le informazioni vengono inviate all'output standard e possono essere reindirizzate a un file.

| Opzione | Description |
| ------------ | ----------------- |
| /VERBOSE | Visualizza dettagli sul processo di collegamento. |
| /VERBOSE: CLR | Visualizza informazioni sull'attività del linker specifica di oggetti e metadati compilati con [/CLR](clr-common-language-runtime-compilation.md). |
| /VERBOSE: ICF | Visualizza informazioni sull'attività del linker risultante dall'utilizzo di [/opt: ICF](opt-optimizations.md). |
| /VERBOSE: INCR | Visualizza informazioni sul processo di collegamento incrementale. |
| /VERBOSE: LIB | Visualizza messaggi di stato che indicano solo le librerie in cui viene eseguita la ricerca.<br/> Le informazioni visualizzate includono il processo di ricerca della libreria. Vengono elencate le librerie e il nome dell'oggetto (con percorso completo), il simbolo da risolvere dalla libreria e un elenco di oggetti che fanno riferimento al simbolo. |
| /VERBOSE: REF | Visualizza informazioni sull'attività del linker risultante dall'utilizzo di [/opt: Ref](opt-optimizations.md). |
| /VERBOSE: SAFESEH | Visualizza informazioni sui moduli incompatibili con la gestione di eccezioni strutturate sicure quando non è specificato [/SAFESEH](safeseh-image-has-safe-exception-handlers.md) . |
| /VERBOSE: UNUSEDDELAYLOAD | Visualizza informazioni sulle DLL a caricamento ritardato che non dispongono di simboli utilizzati durante la creazione dell'immagine. |
| /VERBOSE:UNUSEDLIBS | Visualizza informazioni su tutti i file di libreria che non sono stati utilizzati quando l'immagine è stata creata. |

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la   >  pagina delle proprietà della riga di comando del **linker** proprietà di configurazione  >   .

1. Aggiungere l'opzione alla casella **Opzioni aggiuntive** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ShowProgress%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)

---
title: /GT (Supporta archiviazione locale di thread indipendente da fiber)
description: L'opzione del compilatore MSVC/GT Abilita le ottimizzazioni sicure per i dati di archiviazione locali di thread.
ms.date: 07/08/2020
f1_keywords:
- VC.Project.VCCLCompilerTool.EnableFiberSafeOptimizations
- /gt
helpviewer_keywords:
- /GT compiler option [C++]
- GT compiler option [C++]
- thread-local storage
- static thread-local storage and fiber safety
- -GT compiler option [C++]
- fiber-safe static thread-local storage compiler option [C++]
ms.assetid: 071fec79-c701-432b-9970-457344133159
ms.openlocfilehash: 1b1d9f6514cec8c3d247f86be063f2ac3e0dfe72
ms.sourcegitcommit: 80c8a512b361bd84e38958beb1a1bf6db7434021
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/09/2020
ms.locfileid: "86180812"
---
# <a name="gt-support-fiber-safe-thread-local-storage"></a>`/GT`(Supporta archiviazione locale di thread indipendente da Fiber)

Supporta l'indipendenza da Fiber per i dati allocati usando l'archiviazione locale di thread statici, ovvero i dati allocati con `__declspec(thread)` .

## <a name="syntax"></a>Sintassi

> **`/GT`**

## <a name="remarks"></a>Osservazioni

Ai dati dichiarati con `__declspec(thread)` viene fatto riferimento tramite una matrice di archiviazione locale di thread (TLS). La matrice TLS è una matrice di indirizzi gestiti dal sistema per ogni thread. Ogni indirizzo in questa matrice fornisce il percorso dei dati di archiviazione locale del thread.

Un fiber è un oggetto leggero costituito da uno stack e un contesto di registro e può essere pianificato in diversi thread. Un fiber può essere eseguito su qualsiasi thread. Poiché è possibile che una fibra venga scambiata e riavviata in un secondo momento su un thread diverso, il compilatore non deve memorizzare nella cache l'indirizzo della matrice TLS o ottimizzarlo come sottoespressione comune in una chiamata di funzione. **`/GT`** impedisce tali ottimizzazioni.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione**proprietà di  >  **ottimizzazione C/C++**  >  **Optimization** .

1. Modificare la proprietà **Abilita ottimizzazioni Fiber-Safe** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableFiberSafeOptimizations%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)

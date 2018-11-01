---
title: /GT (Supporta archiviazione locale di thread indipendente da fiber)
ms.date: 11/04/2016
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
ms.openlocfilehash: 22f9df6248b0ee1af2ef999bbf0dba2e716c9189
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50557911"
---
# <a name="gt-support-fiber-safe-thread-local-storage"></a>/GT (Supporta archiviazione locale di thread indipendente da fiber)

Supporta l'indipendenza da fiber per i dati allocati mediante l'archiviazione thread-local statica, vale a dire i dati allocati con `__declspec(thread)`.

## <a name="syntax"></a>Sintassi

```
/GT
```

## <a name="remarks"></a>Note

Dati dichiarato con `__declspec(thread)` viene fatto riferimento tramite un array di archiviazione thread-local (TLS). La matrice TLS è una matrice di indirizzi che il sistema mantiene per ogni thread. Ogni indirizzo di questa matrice fornisce la posizione dei dati di archiviazione thread-local.

Un fiber è un oggetto semplice che è costituito da uno stack e un contesto di registro e può essere pianificato in thread diversi. Un fiber può eseguire in qualsiasi thread. Poiché un fiber può essere scambiato e riavviato in un secondo momento su un thread diverso, l'indirizzo della matrice di TLS non deve essere memorizzati nella cache o ottimizzato come una sottoespressione comune in una chiamata di funzione (vedere la [/Og (ottimizzazioni globali)](../../build/reference/og-global-optimizations.md) opzione Dettagli). **/GT** impedisce che tali ottimizzazioni.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Scegliere il **ottimizzazione** pagina delle proprietà.

1. Modificare il **abilita ottimizzazioni indipendenti da Fiber** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableFiberSafeOptimizations%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
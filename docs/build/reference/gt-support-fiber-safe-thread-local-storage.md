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
ms.openlocfilehash: 417ac00a446f773a424553e42478a4f0cf58efc6
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62291808"
---
# <a name="gt-support-fiber-safe-thread-local-storage"></a>/GT (Supporta archiviazione locale di thread indipendente da fiber)

Supporta l'indipendenza da fiber per i dati allocati mediante l'archiviazione thread-local statica, vale a dire i dati allocati con `__declspec(thread)`.

## <a name="syntax"></a>Sintassi

```
/GT
```

## <a name="remarks"></a>Note

Dati dichiarato con `__declspec(thread)` viene fatto riferimento tramite un array di archiviazione thread-local (TLS). La matrice TLS è una matrice di indirizzi che il sistema mantiene per ogni thread. Ogni indirizzo di questa matrice fornisce la posizione dei dati di archiviazione thread-local.

Un fiber è un oggetto semplice che è costituito da uno stack e un contesto di registro e può essere pianificato in thread diversi. Un fiber può eseguire in qualsiasi thread. Poiché un fiber può essere scambiato e riavviato in un secondo momento su un thread diverso, l'indirizzo della matrice di TLS non deve essere memorizzati nella cache o ottimizzato come una sottoespressione comune in una chiamata di funzione (vedere la [/Og (ottimizzazioni globali)](og-global-optimizations.md) opzione Dettagli). **/GT** impedisce che tali ottimizzazioni.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Scegliere il **ottimizzazione** pagina delle proprietà.

1. Modificare il **abilita ottimizzazioni indipendenti da Fiber** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableFiberSafeOptimizations%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)

---
title: -GF (Elimina stringhe Duplicate) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCCLCompilerTool.StringPooling
- VC.Project.VCCLWCECompilerTool.StringPooling
- /gf
dev_langs:
- C++
helpviewer_keywords:
- duplicate strings
- Eliminate Duplicate Strings compiler option [C++]
- pooling strings compiler option [C++]
- -GF compiler option [C++]
- /GF compiler option [C++]
- GF compiler option [C++]
- strings [C++], pooling
ms.assetid: bb7b5d1c-8e1f-453b-9298-8fcebf37d16c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e19915485bddb32ac993bd0f0cbb4c3e2f9bc517
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45718497"
---
# <a name="gf-eliminate-duplicate-strings"></a>/GF (Elimina stringhe duplicate)

Consente al compilatore di creare una singola copia di stringhe identiche nell'immagine del programma e in memoria durante l'esecuzione. Si tratta di un'ottimizzazione denominata *condivisione delle stringhe* consente di creare programmi di dimensioni ridotte.

## <a name="syntax"></a>Sintassi

```
/GF
```

## <a name="remarks"></a>Note

Se si usa **/GF**, il sistema operativo non scambiare la parte della stringa di memoria e può leggere le stringhe di eseguire il backup dal file di immagine.

**/GF** condivide le stringhe in sola lettura. Se si prova a modificare le stringhe in **/GF**, si verifica un errore dell'applicazione.

Condivisione delle stringhe consente di quelli che erano destinati a essere più indicatori di misura a un singolo buffer più puntatori ai buffer di più. Nel codice seguente, `s` e `t` vengono inizializzati con la stessa stringa. Condivisione delle stringhe fa in modo che puntino alla stessa memoria:

```
char *s = "This is a character buffer";
char *t = "This is a character buffer";
```

> [!NOTE]
>  Il [/ZI](../../build/reference/z7-zi-zi-debug-information-format.md) opzione, utilizzata per la modifica e continuazione, imposta automaticamente il **/GF** opzione.

> [!NOTE]
>  Il **/GF** opzione del compilatore crea una sezione indirizzabile per ogni stringa univoca. E per impostazione predefinita, un file di oggetti può contenere fino a 65.536 sezioni indirizzabili. Se il programma contiene più di 65.536 stringhe, usare il [/bigobj](../../build/reference/bigobj-increase-number-of-sections-in-dot-obj-file.md) opzione del compilatore per creare altre sezioni.

**/GF** è attiva quando [/O1](../../build/reference/o1-o2-minimize-size-maximize-speed.md) oppure **/O2** viene usato.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Scegliere il **generazione di codice** pagina delle proprietà.

1. Modificare il **abilita la condivisione delle stringhe** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.StringPooling%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
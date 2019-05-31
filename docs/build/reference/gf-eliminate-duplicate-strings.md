---
title: /GF (Elimina stringhe duplicate)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCCLCompilerTool.StringPooling
- VC.Project.VCCLWCECompilerTool.StringPooling
- /gf
helpviewer_keywords:
- duplicate strings
- Eliminate Duplicate Strings compiler option [C++]
- pooling strings compiler option [C++]
- -GF compiler option [C++]
- /GF compiler option [C++]
- GF compiler option [C++]
- strings [C++], pooling
ms.assetid: bb7b5d1c-8e1f-453b-9298-8fcebf37d16c
ms.openlocfilehash: 90d3fb5c601d9534215a46594884be5d168fe0aa
ms.sourcegitcommit: 28eae422049ac3381c6b1206664455dbb56cbfb6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/31/2019
ms.locfileid: "66449551"
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
>  Il [/ZI](z7-zi-zi-debug-information-format.md) opzione, utilizzata per la modifica e continuazione, imposta automaticamente il **/GF** opzione.

> [!NOTE]
>  Il **/GF** opzione del compilatore crea una sezione indirizzabile per ogni stringa univoca. E per impostazione predefinita, un file di oggetti può contenere fino a 65.536 sezioni indirizzabili. Se il programma contiene più di 65.536 stringhe, usare il [/bigobj](bigobj-increase-number-of-sections-in-dot-obj-file.md) opzione del compilatore per creare altre sezioni.

**/GF** è attiva quando [/O1](o1-o2-minimize-size-maximize-speed.md) oppure [/O2](o1-o2-minimize-size-maximize-speed.md) viene usato.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Scegliere il **generazione di codice** pagina delle proprietà.

1. Modificare il **abilita la condivisione delle stringhe** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.StringPooling%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)

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
ms.openlocfilehash: e0d23004c7b710f51065db52410fbb15b7cca040
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81320498"
---
# <a name="gf-eliminate-duplicate-strings"></a>/GF (Elimina stringhe duplicate)

Consente al compilatore di creare una singola copia di stringhe identiche nell'immagine del programma e in memoria durante l'esecuzione. Si tratta di un'ottimizzazione denominata *pool di stringhe* in grado di creare programmi più piccoli.

## <a name="syntax"></a>Sintassi

```
/GF
```

## <a name="remarks"></a>Osservazioni

Se si utilizza **/GF**, il sistema operativo non scambia la parte di memoria della stringa e può leggere le stringhe dal file di immagine.

**/GF** raggruppa le stringhe in sola lettura. Se si tenta di modificare le stringhe in **/GF**, si verifica un errore dell'applicazione.

Il pooling di stringhe consente a più puntatori a più buffer di essere più puntatori a un singolo buffer. Nel codice seguente `s` `t` e vengono inizializzati con la stessa stringa. Il pool ingaggio delle stringhe fa in modo che puntino alla stessa memoria:

```
char *s = "This is a character buffer";
char *t = "This is a character buffer";
```

> [!NOTE]
> L'opzione [/-I,](z7-zi-zi-debug-information-format.md) utilizzata per Modifica e continuazione, imposta automaticamente l'opzione **/GF.**

> [!NOTE]
> L'opzione del compilatore **/GF** crea una sezione indirizzabile per ogni stringa univoca. Per impostazione predefinita, un file oggetto può contenere fino a 65.536 sezioni indirizzabili. Se il programma contiene più di 65.536 stringhe, utilizzare l'opzione del compilatore [/bigobj](bigobj-increase-number-of-sections-in-dot-obj-file.md) per creare più sezioni.

**/GF** è attivo quando si utilizza [/O1](o1-o2-minimize-size-maximize-speed.md) o [/O2.](o1-o2-minimize-size-maximize-speed.md)

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Generazione codice.**

1. Modificare la proprietà **Abilita pool di stringhe.**

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.StringPooling%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVCMSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)

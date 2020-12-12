---
description: Altre informazioni su:/GF (Elimina stringhe duplicate)
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
ms.openlocfilehash: 65c8cca610b9e01cf49939c2074a698b00c6e338
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97191940"
---
# <a name="gf-eliminate-duplicate-strings"></a>/GF (Elimina stringhe duplicate)

Consente al compilatore di creare una singola copia di stringhe identiche nell'immagine del programma e in memoria durante l'esecuzione. Si tratta di un'ottimizzazione denominata *pool di stringhe* che può creare programmi di dimensioni minori.

## <a name="syntax"></a>Sintassi

```
/GF
```

## <a name="remarks"></a>Osservazioni

Se si usa **/GF**, il sistema operativo non scambia la parte della memoria della stringa ed è in grado di leggere le stringhe dal file di immagine.

**/GF** pool di stringhe di sola lettura. Se si tenta di modificare le stringhe in **/GF**, si verifica un errore dell'applicazione.

Il pooling delle stringhe consente di scegliere tra più puntatori a più buffer per essere più puntatori a un singolo buffer. Nel codice seguente, `s` e `t` vengono inizializzati con la stessa stringa. Il pool di stringhe fa puntare alla stessa memoria:

```
char *s = "This is a character buffer";
char *t = "This is a character buffer";
```

> [!NOTE]
> L'opzione [/Zi](z7-zi-zi-debug-information-format.md) , usata per modifica e continuazione, imposta automaticamente l'opzione **/GF** .

> [!NOTE]
> L'opzione del compilatore **/GF** crea una sezione indirizzabile per ogni stringa univoca. Per impostazione predefinita, un file oggetto può contenere fino a 65.536 sezioni indirizzabili. Se il programma contiene più di 65.536 stringhe, usare l'opzione del compilatore [/bigobj](bigobj-increase-number-of-sections-in-dot-obj-file.md) per creare altre sezioni.

**/GF** è attivo quando viene usato [/O1](o1-o2-minimize-size-maximize-speed.md) o [/O2](o1-o2-minimize-size-maximize-speed.md) .

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **generazione codice** .

1. Modificare la proprietà **Abilita pooling di stringhe** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.StringPooling%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)

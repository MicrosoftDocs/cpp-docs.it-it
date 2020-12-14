---
description: Altre informazioni su:/GW (Ottimizza dati globali)
title: /Gw (Ottimizza dati globali)
ms.date: 11/04/2016
f1_keywords:
- /Gw
helpviewer_keywords:
- /Gw compiler option [C++]
- -Gw compiler option [C++]
ms.assetid: 6f90f4e9-5eb8-4c47-886e-631278a5a4a9
ms.openlocfilehash: 2f9a6b9452f09473e650a5453ad2600cc73f0c00
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97200143"
---
# <a name="gw-optimize-global-data"></a>/Gw (Ottimizza dati globali)

Creare un pacchetto di dati globali nelle sezioni COMDAT per l'ottimizzazione.

## <a name="syntax"></a>Sintassi

```
/Gw[-]
```

## <a name="remarks"></a>Osservazioni

Con l'opzione **/GW** il compilatore crea un pacchetto di dati globali in singole sezioni di COMDAT. Per impostazione predefinita, **/GW** è disattivato e deve essere abilitato in modo esplicito. Per disabilitarlo in modo esplicito, usare **/GW-**. Quando sono abilitati sia **/GW** che [/GL](gl-whole-program-optimization.md) , il linker usa l'ottimizzazione dell'intero programma per confrontare le sezioni COMDAT tra più file oggetto per escludere i dati globali senza riferimenti o per unire dati globali di sola lettura identici. In tal modo è possibile ridurre in modo significativo la dimensione del file eseguibile binario risultante.

Quando si compilano e si collegano separatamente, è possibile usare l'opzione del linker [/opt: Ref](opt-optimizations.md) per escludere dall'eseguibile i dati globali senza riferimenti nei file oggetto compilati con l'opzione **/GW** .

È anche possibile usare le opzioni del linker [/opt: ICF](opt-optimizations.md) e [/LTCG](ltcg-link-time-code-generation.md) insieme per unire nell'eseguibile tutti i dati globali di sola lettura identici tra più file oggetto compilati con l'opzione **/GW** .

Per ulteriori informazioni, vedere l' [Introduzione all'opzione del compilatore/GW](https://devblogs.microsoft.com/cppblog/introducing-gw-compiler-switch/) nel Blog del team di C++.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la cartella **C/C++** .

1. Selezionare la pagina delle proprietà **riga di comando** .

1. Modificare la proprietà **Opzioni aggiuntive** per includere **/GW** , quindi scegliere **OK**.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)

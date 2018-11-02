---
title: /Gw (Ottimizza dati globali)
ms.date: 11/04/2016
f1_keywords:
- /Gw
helpviewer_keywords:
- /Gw compiler option [C++]
- -Gw compiler option [C++]
ms.assetid: 6f90f4e9-5eb8-4c47-886e-631278a5a4a9
ms.openlocfilehash: 406b1577b77f056e18753db10bae5675febe879e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50506691"
---
# <a name="gw-optimize-global-data"></a>/Gw (Ottimizza dati globali)

Creare un pacchetto di dati globali nelle sezioni COMDAT per l'ottimizzazione.

## <a name="syntax"></a>Sintassi

```
/Gw[-]
```

## <a name="remarks"></a>Note

Il **/Gw** opzione indica al compilatore di pacchetto di dati globali in singole sezioni COMDAT. Per impostazione predefinita **/Gw** è disattivato e deve essere abilitata in modo esplicito. Per disabilitare in modo esplicito, usare **/Gw-**. Quando entrambe **/Gw** e [/GL](../../build/reference/gl-whole-program-optimization.md) sono abilitati, il linker Usa Ottimizzazione intero programma per confrontare le sezioni COMDAT tra più file oggetto per escludere dati globali senza riferimenti o di tipo merge sola lettura i dati globali identici. In tal modo è possibile ridurre in modo significativo la dimensione del file eseguibile binario risultante.

Quando si compila e collega separatamente, è possibile usare la [/OPT: ref](../../build/reference/opt-optimizations.md) l'opzione del linker da escludere dal file eseguibile i dati globali senza riferimenti in file oggetto compilati con la **/Gw** opzione.

È anche possibile usare la [/OPT: ICF](../../build/reference/opt-optimizations.md) e [/LTCG](../../build/reference/ltcg-link-time-code-generation.md) le opzioni del linker assieme per unire nel file eseguibile eventuali dati globali di sola lettura identici per più file oggetto compilati con il **/Gw** opzione.

Per altre informazioni, vedere [Introducing opzione del compilatore /Gw](http://blogs.msdn.com/b/vcblog/archive/2013/09/11/introducing-gw-compiler-switch.aspx) nel Blog del Team Visual C++.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **C/C++** cartella.

1. Selezionare il **riga di comando** pagina delle proprietà.

1. Modificare il **opzioni aggiuntive** proprietà da includere **/Gw** e quindi scegliere **OK**.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
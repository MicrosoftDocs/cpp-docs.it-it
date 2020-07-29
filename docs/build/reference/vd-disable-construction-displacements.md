---
title: /vd (Disabilita spostamenti costruttori)
ms.date: 11/04/2016
f1_keywords:
- /vd
helpviewer_keywords:
- -vd0 compiler option [C++]
- vd1 compiler option [C++]
- /vdn (Disable Construction Displacement) compiler option
- constructor displacements
- vtordisp fields
- /vd0 compiler option [C++]
- -vd1 compiler option [C++]
- /vd1 compiler option [C++]
- displacements compiler option
- vd0 compiler option [C++]
- Disable Construction Displacements compiler option
ms.assetid: 93258964-14d7-4b1c-9cbc-d6f4d74eab69
ms.openlocfilehash: df8891cc71dd5a4cfd417969578c0c1b46ae3be3
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87223811"
---
# <a name="vd-disable-construction-displacements"></a>/vd (Disabilita spostamenti costruttori)

## <a name="syntax"></a>Sintassi

```
/vdn
```

## <a name="arguments"></a>Argomenti

**0**<br/>
Disattiva il membro di spostamento del costruttore/distruttore vtordisp. Scegliere questa opzione solo se si è certi che tutti i costruttori e i distruttori della classe chiamano virtualmente le funzioni virtuali.

**1**<br/>
Consente la creazione di membri di spostamento di costruttori/distruttori vtordisp nascosti. Si tratta dell'opzione predefinita.

**2**<br/>
Consente di usare [dynamic_cast operatore](../../cpp/dynamic-cast-operator.md) su un oggetto costruito. Ad esempio, un dynamic_cast da una classe base virtuale a una classe derivata.

**/vd2** aggiunge un campo vtordisp quando si dispone di una base virtuale con funzioni virtuali. **/VD1** dovrebbe essere sufficiente. Il caso più comune in cui **/vd2** è necessario è quando l'unica funzione virtuale nella base virtuale è un distruttore.

## <a name="remarks"></a>Osservazioni

Queste opzioni si applicano solo al codice C++ che usa le basi virtuali.

Visual C++ implementa il supporto di spostamento della costruzione C++ nelle situazioni in cui viene utilizzata l'ereditarietà virtuale. Gli spostamenti della costruzione risolvono il problema creato quando una funzione virtuale, dichiarata in una base virtuale e sottoposta a override in una classe derivata, viene chiamata da un costruttore durante la costruzione di un'altra classe derivata.

Il problema è che è possibile che alla funzione virtuale venga passato un **`this`** puntatore errato in seguito a discrepanze tra le dislocazioni delle basi virtuali di una classe e le dislocazioni alle classi derivate. La soluzione fornisce una singola regolazione di spostamento della costruzione, denominata campo vtordisp, per ogni base virtuale di una classe.

Per impostazione predefinita, i campi vtordisp vengono introdotti ogni volta che il codice definisce i costruttori e i distruttori definiti dall'utente e sostituisce anche le funzioni virtuali delle basi virtuali.

Queste opzioni interessano interi file di origine. Usare [vtordisp](../../preprocessor/vtordisp.md) per disattivare e quindi riabilitare i campi vtordisp in base alla classe.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)

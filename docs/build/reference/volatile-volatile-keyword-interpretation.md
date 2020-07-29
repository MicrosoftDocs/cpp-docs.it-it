---
title: /volatile (interpretazione della parole chiave volatile)
ms.date: 11/04/2016
f1_keywords:
- /volatile:iso
- /volatile:ms
- /volatile
helpviewer_keywords:
- /volatile compiler option
- /volatile compiler option [C++]
- -volatile compiler option
- volatile compiler option [C++]
- volatile compiler option
- -volatile compiler option [C++]
ms.assetid: 9d08fcc6-5bda-44c8-8151-8d8d54f164b8
ms.openlocfilehash: 7c2c1cd477b424f56e66bd9246e7bde76ad06120
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87223785"
---
# <a name="volatile-volatile-keyword-interpretation"></a>/volatile (interpretazione della parole chiave volatile)

Specifica la modalità di interpretazione della parola chiave [volatile](../../cpp/volatile-cpp.md) .

## <a name="syntax"></a>Sintassi

> **/volatile:**{**ISO** | **MS**}

## <a name="arguments"></a>Argomenti

**/volatile: ISO**<br/>
Seleziona **`volatile`** una semantica rigida in base a quanto definito dal linguaggio C++ standard ISO. La semantica di acquisizione/rilascio non è garantita negli accessi volatili. Se il compilatore è destinato a ARM, si tratta dell'interpretazione predefinita di **`volatile`** .

**/volatile: ms**<br/>
Seleziona la **`volatile`** semantica estesa Microsoft, che aggiunge le garanzie di ordinamento della memoria oltre il linguaggio C++ standard ISO. La semantica di acquisizione/rilascio è garantita negli accessi volatili. Tuttavia, questa opzione impone anche al compilatore di generare barriere di memoria hardware, che potrebbero comportare un sovraccarico significativo su ARM e altre architetture di ordinamento della memoria debole. Se il compilatore è destinato a qualsiasi piattaforma eccetto ARM, si tratta dell'interpretazione predefinita di **`volatile`** .

## <a name="remarks"></a>Osservazioni

Si consiglia di usare **/volatile: ISO** con le primitive di sincronizzazione esplicite e le funzioni intrinseche del compilatore quando si tratta di una memoria condivisa tra i thread. Per ulteriori informazioni, vedere [volatile](../../cpp/volatile-cpp.md).

Se si trasferisce il codice esistente o si modifica questa opzione al centro di un progetto, può essere utile abilitare [C4746](../../error-messages/compiler-warnings/compiler-warning-c4746.md) di avviso per identificare i percorsi di codice interessati dalla differenza di semantica.

Non esiste alcun `#pragma` equivalente per controllare questa opzione.

### <a name="to-set-the-volatile-compiler-option-in-visual-studio"></a>Per impostare l'opzione del compilatore/volatile in Visual Studio

1. Aprire la finestra di dialogo **pagine delle proprietà** per il progetto. Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione**proprietà della riga di comando di  >  **c/C++**  >  **Command Line** .

1. Nella casella **Opzioni aggiuntive** aggiungere **/volatile: ISO** o **/volatile: ms** , quindi scegliere **OK** o **applica** per salvare le modifiche.

## <a name="see-also"></a>Vedere anche

[volatile](../../cpp/volatile-cpp.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)

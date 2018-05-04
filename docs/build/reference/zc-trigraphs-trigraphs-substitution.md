---
title: '/Zc: trigraphs (sostituzione trigrammi) | Documenti Microsoft'
ms.custom: ''
ms.date: 03/06/2018
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /Zc
dev_langs:
- C++
helpviewer_keywords:
- -Zc compiler options (C++)
- /Zc compiler options (C++)
- Conformance compiler options
- Zc compiler options (C++)
ms.assetid: e3d6058f-400d-4966-a3aa-800cfdf69cbf
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3e465b62944b360d6fdb09da1230f3353658437b
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="zctrigraphs-trigraphs-substitution"></a>/Zc:trigraphs (sostituzione trigrammi)

Quando **/Zc: trigraphs** viene specificato, il compilatore sostituisce una sequenza di caratteri di trigramma usando un carattere di punteggiatura corrispondenti.

## <a name="syntax"></a>Sintassi

> **/Zc:trigraphs**[**-**]  

## <a name="remarks"></a>Note

Un *trigramma* è costituito da due punti interrogativi consecutivi ("?") seguito da un terzo carattere univoco. Il linguaggio C standard supporta i trigrammi per i file di origine che utilizzano un set di caratteri che non contiene rappresentazioni grafiche adeguate per alcuni caratteri di punteggiatura. Ad esempio, quando sono abilitati i trigrammi, il compilatore sostituisce il "?? = "utilizzando il carattere '#'. Tramite c++14, trigrammi sono supportati come in C. La standard c++17 rimuove i trigrammi dal linguaggio C++. Nel codice C++, il **/Zc: trigraphs** opzione del compilatore abilita la sostituzione delle sequenze di trigramma per il carattere di punteggiatura corrispondenti. **/Zc:trigraphs-** disabilita la sostituzione di trigramma.

Il **/Zc: trigraphs** opzione è disattivata per impostazione predefinita e l'opzione non è interessato quando il [/ permissiva-](permissive-standards-conformance.md) è specificata l'opzione.

Per un elenco dei trigrammi C/C++ e un esempio in cui viene illustrato come utilizzare i trigrammi, vedere [trigrammi](../../c-language/trigraphs.md).

## <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **riga di comando** pagina delle proprietà.

1. Modificare il **opzioni aggiuntive** proprietà da includere **/Zc: trigraphs** oppure **/Zc:trigraphs-** e quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[/Zc (conformità)](../../build/reference/zc-conformance.md)<br/>
[Trigrammi](../../c-language/trigraphs.md)<br/>

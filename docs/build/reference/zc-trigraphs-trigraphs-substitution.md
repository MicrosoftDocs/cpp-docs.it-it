---
title: '/Zc: trigraphs (sostituzione trigrammi) | Microsoft Docs'
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
ms.openlocfilehash: ce8c9d13fa062ddac0f31eac0e20fba1266c7a8c
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45707733"
---
# <a name="zctrigraphs-trigraphs-substitution"></a>/Zc:trigraphs (sostituzione trigrammi)

Quando **/Zc: trigraphs** viene specificato, il compilatore sostituisce una sequenza di caratteri di trigramma con un carattere di punteggiatura corrispondente.

## <a name="syntax"></a>Sintassi

> **/Zc:trigraphs**[**-**]

## <a name="remarks"></a>Note

Oggetto *trigramma* è costituito da due punti interrogativi consecutivi ("??") seguito da un terzo carattere univoco. Lo standard del linguaggio C supporta i trigrammi per i file di origine che usano un set di caratteri che non contiene rappresentazioni grafiche adeguate per alcuni caratteri di punteggiatura. Ad esempio, quando i trigrammi sono abilitati, il compilatore sostituisce il "?? = "trigramma utilizzando il carattere '#'. Tramite C++ 14, i trigrammi sono supportati come in C. La standard c++17 rimuove i trigrammi dal linguaggio C++. Nel codice C++, il **/Zc: trigraphs** opzione del compilatore abilita la sostituzione delle sequenze di trigramma dal carattere di punteggiatura corrispondente. **/Zc:trigraphs-** disabilita la sostituzione dei trigrammi.

Il **/Zc: trigraphs** opzione è disattivata per impostazione predefinita e l'opzione non è interessata quando la [/PERMISSIVE--](permissive-standards-conformance.md) è specificata l'opzione.

Per un elenco dei trigrammi C/C++ e un esempio che illustra come usare i trigrammi, vedere [trigrammi](../../c-language/trigraphs.md).

## <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **della riga di comando** pagina delle proprietà.

1. Modificare il **opzioni aggiuntive** proprietà da includere **/Zc: trigraphs** oppure **/Zc:trigraphs-** e quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[/Zc (conformità)](../../build/reference/zc-conformance.md)<br/>
[Trigrammi](../../c-language/trigraphs.md)<br/>

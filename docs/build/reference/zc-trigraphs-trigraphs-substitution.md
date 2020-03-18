---
title: /Zc:trigraphs (sostituzione trigrammi)
ms.date: 03/06/2018
f1_keywords:
- /Zc:trigraphs
helpviewer_keywords:
- -Zc compiler options (C++)
- /Zc compiler options (C++)
- Conformance compiler options
- Zc compiler options (C++)
ms.assetid: e3d6058f-400d-4966-a3aa-800cfdf69cbf
ms.openlocfilehash: 0e4c98e09551d39e3ff7978767b21f1d2c5bb318
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79438659"
---
# <a name="zctrigraphs-trigraphs-substitution"></a>/Zc:trigraphs (sostituzione trigrammi)

Quando si specifica **/Zc: trigraphs** , il compilatore sostituisce una sequenza di caratteri trigramma usando un carattere di punteggiatura corrispondente.

## <a name="syntax"></a>Sintassi

> **/Zc: trigraphs**[ **-** ]

## <a name="remarks"></a>Osservazioni

Un *trigramma* è costituito da due punti interrogativi consecutivi ("??") seguiti da un terzo carattere univoco. Lo standard del linguaggio C supporta i trigrammi per i file di origine che usano un set di caratteri che non contiene rappresentazioni grafiche convenienti per alcuni caratteri di punteggiatura. Se, ad esempio, i trigrammi sono abilitati, il compilatore sostituisce il "?? = "trigramma con il carattere" # ". Con C++ 14, i trigrammi sono supportati come in C. Lo standard C++ 17 rimuove i C++ trigrammi dal linguaggio. Nel C++ codice, l'opzione del compilatore **/Zc: trigraphs** consente la sostituzione di sequenze trigramma per il carattere di punteggiatura corrispondente. **/Zc: trigraphs-** Disabilita la sostituzione del trigramma.

L'opzione **/Zc: trigraphs** è disattivata per impostazione predefinita e l'opzione non è interessata quando si specifica l'opzione [/permissive-](permissive-standards-conformance.md) .

Per un elenco di C/C++ trigrammi e un esempio che illustra come usare trigrammi, vedere [trigrammi](../../c-language/trigraphs.md).

## <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare le proprietà del compilatore e di compilazione C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà **Proprietà di configurazione** > **C/C++**  > **Riga di comando**.

1. Modificare la proprietà **Opzioni aggiuntive** in modo da includere **/Zc: trigraphs** o **/Zc: trigraphs** , quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[/Zc (conformità)](zc-conformance.md)<br/>
[Trigrammi](../../c-language/trigraphs.md)<br/>

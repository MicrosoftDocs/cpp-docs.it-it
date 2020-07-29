---
title: /Zc:trigraphs (sostituzione trigrammi)
description: Opzione del compilatore Microsoft C++ che controlla il supporto della conformità per i trigrammi.
ms.date: 07/25/2020
f1_keywords:
- /Zc:trigraphs
helpviewer_keywords:
- -Zc compiler options (C++)
- /Zc compiler options (C++)
- Conformance compiler options
- Zc compiler options (C++)
ms.assetid: e3d6058f-400d-4966-a3aa-800cfdf69cbf
ms.openlocfilehash: e24f3d2f0064c3acc04b4c3774f47f6e442d5ddd
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87211853"
---
# <a name="zctrigraphs-trigraphs-substitution"></a>`/Zc:trigraphs`(Sostituzione trigrammi)

Quando **`/Zc:trigraphs`** si specifica, il compilatore sostituisce una sequenza di caratteri trigramma usando un carattere di punteggiatura corrispondente.

## <a name="syntax"></a>Sintassi

> **`/Zc:trigraphs`**[**`-`**]

## <a name="remarks"></a>Osservazioni

Un *trigramma* è costituito da due punti interrogativi consecutivi ( **`??`** ) seguiti da un terzo carattere univoco. Lo standard del linguaggio C supporta i trigrammi per i file di origine che usano un set di caratteri che non contiene rappresentazioni grafiche convenienti per alcuni caratteri di punteggiatura. Ad esempio, quando i trigrammi sono abilitati, il compilatore sostituisce il **`??=`** trigramma usando il **`#`** carattere. Con C++ 14, i trigrammi sono supportati come in C. Lo standard C++ 17 rimuove i trigrammi dal linguaggio C++. Nel codice C++, l' **`/Zc:trigraphs`** opzione del compilatore consente la sostituzione di sequenze trigramma per il carattere di punteggiatura corrispondente. **`/Zc:trigraphs-`** Disabilita la sostituzione del trigramma.

**`/Zc:trigraphs`** Per impostazione predefinita, l'opzione è disattivata e l'opzione non è interessata quando [`/permissive-`](permissive-standards-conformance.md) si specifica l'opzione.

Per un elenco di trigrammi C/C++ e un esempio che illustra come usare trigrammi, vedere [trigrammi](../../c-language/trigraphs.md).

## <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione**proprietà della riga di comando di  >  **c/C++**  >  **Command Line** .

1. Modificare la proprietà **Opzioni aggiuntive** in modo da includere **`/Zc:trigraphs`** o **`/Zc:trigraphs-`** , quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[`/Zc`Conformità](zc-conformance.md)<br/>
[Trigrammi](../../c-language/trigraphs.md)

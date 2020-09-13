---
title: '/Experimental: preprocessore (Abilita modalità di conformità del preprocessore)'
description: "Usare l'opzione del compilatore/Experimental: preprocessore per abilitare il supporto del compilatore sperimentale per un preprocessore conforme standard."
ms.date: 09/10/2020
f1_keywords:
- preprocessor
- /experimental:preprocessor
helpviewer_keywords:
- preprocessor conformance
- /experimental:preprocessor
- Enable preprocessor conformance mode
ms.openlocfilehash: 9a98289434e7154d2ec8b8753d990876a8218acf
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90042095"
---
# <a name="experimentalpreprocessor-enable-preprocessor-conformance-mode"></a>`/experimental:preprocessor` (Abilita modalità di conformità del preprocessore)

Questa opzione è obsoleta a partire da Visual Studio 2019 versione 16,5, sostituita dall' [`/Zc:preprocessor`](zc-preprocessor.md) opzione del compilatore. **`/experimental:preprocessor`** consente un preprocessore sperimentale basato su token che è strettamente conforme agli standard C++ 11, incluse le funzionalità del preprocessore C99. Per altre informazioni, vedere [MSVC New Preprocessor Overview](../../preprocessor/preprocessor-experimental-overview.md).

## <a name="syntax"></a>Sintassi

> **`/experimental:preprocessor`**\[**`-`**]

## <a name="remarks"></a>Commenti

Usare l' **`/experimental:preprocessor`** opzione del compilatore per abilitare il preprocessore conforme sperimentale. È possibile usare **`/experimental:preprocessor-`** l'opzione per specificare in modo esplicito il preprocessore tradizionale.

L' **`/experimental:preprocessor`** opzione è disponibile a partire da Visual Studio 2017 versione 15,8. A partire da Visual Studio 2019 versione 16,5, il nuovo preprocessore è completo e disponibile con l' [`/Zc:preprocessor`](zc-preprocessor.md) opzione del compilatore.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione**proprietà della riga di comando di  >  **c/C++**  >  **Command Line** .

1. Modificare la proprietà **Opzioni aggiuntive** in modo da includere *`/experimental:preprocessor`* , quindi scegliere **OK**.

## <a name="see-also"></a>Vedi anche

[/Zc (Conformità)](zc-conformance.md)

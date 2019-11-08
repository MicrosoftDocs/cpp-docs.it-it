---
title: '/Experimental: preprocessore (Abilita modalità di conformità del preprocessore)'
description: "Usare l'opzione del compilatore/Experimental: preprocessore per abilitare il supporto del compilatore sperimentale per un preprocessore conforme standard."
ms.date: 10/31/2019
f1_keywords:
- preprocessor
- /experimental:preprocessor
helpviewer_keywords:
- preprocessor conformance
- /experimental:preprocessor
- Enable preprocessor conformance mode
ms.openlocfilehash: cb1ac63d2c12083975139455d8625544cb419adf
ms.sourcegitcommit: 2362d15b5eb18d27773c3f7522da3d0eed9e2571
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/07/2019
ms.locfileid: "73754049"
---
# <a name="experimentalpreprocessor-enable-preprocessor-conformance-mode"></a>/Experimental: preprocessore (Abilita modalità di conformità del preprocessore)

Questa opzione consente a un preprocessore sperimentale basato su token che è strettamente conforme agli standard C++ 11, incluse le funzionalità del preprocessore C99. Per altre informazioni, vedere [Panoramica del preprocessore sperimentale MSVC](../../preprocessor/preprocessor-experimental-overview.md).

## <a name="syntax"></a>Sintassi

> **/Experimental: preprocessore**[ **-** ]

## <a name="remarks"></a>Note

Usare l'opzione del compilatore **/Experimental: preprocessore** per abilitare il preprocessore conforme sperimentale. È possibile usare **/Experimental: Preprocessor-** option per specificare in modo esplicito il preprocessore tradizionale.

L'opzione **/Experimental: Preprocessor** è disponibile a partire da Visual Studio 2017 versione 15,8.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare le proprietà del compilatore e di compilazione C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà **Proprietà di configurazione** > **C/C++**  > **Riga di comando**.

1. Modificare la proprietà **Opzioni aggiuntive** per includere **/Experimental: preprocessore** , quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[/Zc (conformità)](zc-conformance.md)

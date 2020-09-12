---
title: '/Zc: preprocessore (Abilita modalità di conformità del preprocessore)'
description: "Usare l'opzione del compilatore/Zc: preprocessore per abilitare il supporto del compilatore per un preprocessore conforme standard."
ms.date: 09/10/2020
f1_keywords:
- preprocessor
- /Zc:preprocessor
helpviewer_keywords:
- preprocessor conformance
- /Zc:preprocessor
- Enable preprocessor conformance mode
ms.openlocfilehash: 356434e4892966b9a9304021dd5d8770dcc2f8b1
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90042904"
---
# <a name="zcpreprocessor-enable-preprocessor-conformance-mode"></a>`/Zc:preprocessor` (Abilita modalità di conformità del preprocessore)

Questa opzione Abilita un preprocessore basato su token che è conforme agli standard C99 e C++ 11 e versioni successive. Per altre informazioni, vedere [MSVC New Preprocessor Overview](../../preprocessor/preprocessor-experimental-overview.md).

## <a name="syntax"></a>Sintassi

> **`/Zc:preprocessor`**[**-**]

## <a name="remarks"></a>Commenti

Usare l' **`/Zc:preprocessor`** opzione del compilatore per abilitare il preprocessore conforme. È possibile usare **`/Zc:preprocessor-`** l'opzione per specificare in modo esplicito il preprocessore tradizionale (non conforme).

L' **`/Zc:preprocessor`** opzione è disponibile a partire da Visual Studio 2019 versione 16,5. Una versione precedente incompleta della nuova opzione per il preprocessore è disponibile nelle versioni di Visual Studio a partire da Visual Studio 2017 versione 15,8. Per altre informazioni, vedere [`/experimental:preprocessor`](experimental-preprocessor.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione**proprietà della riga di comando di  >  **c/C++**  >  **Command Line** .

1. Modificare la proprietà **Opzioni aggiuntive** in modo da includere *`/Zc:preprocessor`* , quindi scegliere **OK**.

## <a name="see-also"></a>Vedi anche

[/Zc (Conformità)](zc-conformance.md)

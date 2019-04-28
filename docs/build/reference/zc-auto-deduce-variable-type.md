---
title: /Zc:auto (deduzione del tipo di variabile)
ms.date: 02/28/2018
f1_keywords:
- /Zc:auto
helpviewer_keywords:
- -Zc compiler options (C++)
- Deduce variable type (C++)
- /Zc compiler options (C++)
- Zc compiler options (C++)
ms.assetid: 5f5bc102-44c3-4688-bbe1-080594dcee5c
ms.openlocfilehash: ea977020286d720ed3a6b1b13bf8ff8f5c85e5b2
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62315963"
---
# <a name="zcauto-deduce-variable-type"></a>/Zc:auto (deduzione del tipo di variabile)

Il **/Zc: auto [-]** l'opzione del compilatore indica al compilatore come usare i [parola chiave auto](../../cpp/auto-keyword.md) per dichiarare le variabili. Se si specifica l'opzione predefinita **/Zc: Auto**, il compilatore deduce il tipo di variabile dichiarata dalla relativa espressione di inizializzazione. Se si specifica **/Zc:auto-**, il compilatore alloca la variabile alla classe di archiviazione automatica.

## <a name="syntax"></a>Sintassi

> **/Zc:auto**[**-**]

## <a name="remarks"></a>Note

Lo standard C++ definisce un significato originale e uno rivisto per la parola chiave `auto`. Prima di Visual C++ 2010, la parola chiave dichiara una variabile nella classe di archiviazione automatica; vale a dire, una variabile che ha una durata locale. A partire da Visual C++ 2010, la parola chiave deduce il tipo di una variabile dall'espressione di inizializzazione della dichiarazione. Usare la **/Zc: auto [-]** opzione del compilatore per indicare al compilatore di usare il significato originale o rivisto della `auto` (parola chiave). Il **/Zc: Auto** opzione è attivata per impostazione predefinita. Il [/PERMISSIVE--](permissive-standards-conformance.md) opzione non modifica l'impostazione predefinita **/Zc: Auto**.

Il compilatore genera un messaggio di diagnostica appropriato se l'utilizzo dei `auto` parola chiave meno avanzata vengono contraddetti corrente **/Zc: Auto** opzione del compilatore. Per altre informazioni, vedere [parola chiave auto](../../cpp/auto-keyword.md). Per altre informazioni sui problemi di conformità in Visual C++, vedere [comportamento non standard](../../cpp/nonstandard-behavior.md).

### <a name="to-set-this-compiler-option-in-visual-studio"></a>Per impostare questa opzione del compilatore in Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **della riga di comando** pagina delle proprietà.

1. Aggiungere **/Zc: Auto** oppure **/Zc:auto-** per il **opzioni aggiuntive:** riquadro.

## <a name="see-also"></a>Vedere anche

[/Zc (conformità)](zc-conformance.md)<br/>
[Auto (parola chiave)](../../cpp/auto-keyword.md)

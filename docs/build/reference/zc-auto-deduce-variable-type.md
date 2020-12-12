---
description: 'Altre informazioni su: `/Zc:auto` (deduce il tipo di variabile)'
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
ms.openlocfilehash: d20f377fc653e9c3cceb5c3e81b5e5e8a815bcad
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97114715"
---
# <a name="zcauto-deduce-variable-type"></a>`/Zc:auto` (Deduce il tipo di variabile)

L' **`/Zc:auto`** opzione del compilatore indica al compilatore come usare la [ `auto` parola chiave](../../cpp/auto-cpp.md) per dichiarare le variabili. Se si specifica l'opzione predefinita, **`/Zc:auto`** , il compilatore deduce il tipo della variabile dichiarata dalla relativa espressione di inizializzazione. Se si specifica **`/Zc:auto-`** , il compilatore alloca la variabile alla classe di archiviazione automatica.

## <a name="syntax"></a>Sintassi

> **`/Zc:auto`**[**`-`**]

## <a name="remarks"></a>Commenti

Lo standard C++ definisce un significato originale e modificato per la **`auto`** parola chiave. Prima di Visual Studio 2010, la parola chiave dichiara una variabile nella classe di archiviazione automatica; ovvero una variabile con una durata locale. A partire da Visual Studio 2010, la parola chiave deduce il tipo di una variabile dall'espressione di inizializzazione della dichiarazione. Usare l' **`/Zc:auto`** opzione del compilatore per indicare al compilatore di usare il significato modificato della **`auto`** parola chiave. **`/Zc:auto`** Per impostazione predefinita, l'opzione è attiva. L' [`/permissive-`](permissive-standards-conformance.md) opzione non modifica l'impostazione predefinita di **`/Zc:auto`** .

Il compilatore genera un messaggio di diagnostica appropriato se l'uso della **`auto`** parola chiave contraddice l' **`/Zc:auto`** opzione del compilatore corrente. Per ulteriori informazioni, vedere [ `auto` parola chiave](../../cpp/auto-cpp.md). Per ulteriori informazioni sui problemi di conformità con Visual C++, vedere [comportamento non standard](../../cpp/nonstandard-behavior.md).

### <a name="to-set-this-compiler-option-in-visual-studio"></a>Per impostare questa opzione del compilatore in Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione** proprietà della riga di comando di  >  **c/C++**  >   .

1. Aggiungere **`/Zc:auto`** o **`/Zc:auto-`** al riquadro **Opzioni aggiuntive:** .

## <a name="see-also"></a>Vedi anche

[`/Zc` Conformità](zc-conformance.md)<br/>
[`auto` Parola chiave](../../cpp/auto-cpp.md)

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
ms.openlocfilehash: 02871622242930d7419fda16f4d106fccb2056f0
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57819493"
---
# <a name="volatile-volatile-keyword-interpretation"></a>/volatile (interpretazione della parole chiave volatile)

Specifica come il [volatile](../../cpp/volatile-cpp.md) parola chiave deve essere interpretato.

## <a name="syntax"></a>Sintassi

> **/volatile:**{**iso**|**ms**}

## <a name="arguments"></a>Argomenti

**/volatile:iso**<br/>
Seleziona strict `volatile` la semantica di base a quanto definito dal linguaggio C++ conforme allo standard ISO. Semantica di acquisizione/rilascio non è garantita negli accessi volatili. Se il compilatore è destinata a ARM, si tratta dell'interpretazione predefinita di `volatile`.

**/volatile:ms**<br/>
Seleziona estese Microsoft `volatile` semantica che aggiunta memoria di là del linguaggio C++ conforme allo standard ISO garanzia di ordinamento. Semantica di acquisizione/rilascio è garantita negli accessi volatili. Tuttavia, questa opzione forza anche il compilatore a generare barriere di memoria hardware, che potrebbero aggiungere un sovraccarico su ARM e ad altre architetture di memoria a ordinamento debole. Se il compilatore è destinato a qualsiasi piattaforma tranne quella ARM, si tratta dell'interpretazione predefinita di `volatile`.

## <a name="remarks"></a>Note

È consigliabile usare **/volatile:iso** insieme primitive esplicite di sincronizzazione e intrinseche al compilatore quando utilizzano con una memoria condivisa tra thread. Per altre informazioni, vedere [volatile](../../cpp/volatile-cpp.md).

Se il porting del codice esistente o si modifica questa opzione nel corso di un progetto, potrebbe essere utile attivare l'avviso [C4746](../../error-messages/compiler-warnings/compiler-warning-c4746.md) per identificare i percorsi di codice che sono interessate dalla differenza nella semantica.

È presente alcun `#pragma` equivalente per controllare questa opzione.

### <a name="to-set-the-volatile-compiler-option-in-visual-studio"></a>Per impostare il /volatile opzione del compilatore in Visual Studio

1. Aprire il **pagine delle proprietà** finestra di dialogo per il progetto. Per altre informazioni, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **della riga di comando** pagina delle proprietà.

1. Nel **opzioni aggiuntive** , aggiungere **/volatile:iso** oppure **/volatile: MS** e quindi scegliere **OK** o **applica** per salvare le modifiche.

## <a name="see-also"></a>Vedere anche

[volatile](../../cpp/volatile-cpp.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)

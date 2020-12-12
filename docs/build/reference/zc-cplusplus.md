---
description: 'Altre informazioni su:/Zc: __cplusplus (abilitazione della macro __cplusplus aggiornata)'
title: /Zc:__cplusplus (abilita la macro __cplusplus aggiornata)
ms.date: 05/16/2019
f1_keywords:
- /Zc:__cplusplus
helpviewer_keywords:
- -Zc:__cplusplus compiler option (C++)
- __cplusplus macro (C++)
ms.openlocfilehash: 3aa5579a0315c2bba5e74a8a3c191801328fc589
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97114676"
---
# <a name="zc__cplusplus-enable-updated-__cplusplus-macro"></a>/Zc:__cplusplus (abilita la macro __cplusplus aggiornata)

L'opzione del compilatore **/Zc: __cplusplus** consente alla macro del preprocessore **\_ \_ cplusplus** di segnalare un valore aggiornato per il supporto degli standard del linguaggio C++ recenti. Per impostazione predefinita, Visual Studio restituisce sempre il valore "199711L" per la macro del preprocessore **\_ \_ cplusplus** .

## <a name="syntax"></a>Sintassi

> **/Zc: __cplusplus**[ **-** ]

## <a name="remarks"></a>Commenti

La macro del preprocessore **\_ \_ cplusplus** viene comunemente usata per segnalare il supporto per una particolare versione dello standard C++. Poiché per gran parte del codice esistente apparentemente è necessario che il valore di questa macro corrisponda a "199711L", il compilatore non cambia il valore della macro a meno che non si acconsenta esplicitamente tramite l'opzione del compilatore **/Zc:__cplusplus**. L'opzione **/Zc:__cplusplus** è disponibile a partire da Visual Studio 2017 versione 15.7 ed è disattivata per impostazione predefinita. Nelle versioni precedenti di Visual Studio e, per impostazione predefinita, o se **/Zc: __cplusplus-** è specificato, Visual Studio restituisce il valore "199711L" per la macro del preprocessore **\_ \_ cplusplus** . L'opzione [/permissive-](permissive-standards-conformance.md) non abilita **/Zc:__cplusplus**.

Quando l'opzione **/Zc: __cplusplus** è abilitata, il valore restituito dalla macro **\_ \_ cplusplus** dipende dall'impostazione del comcambio di versione di [/std](std-specify-language-standard-version.md) . Questa tabella indica i valori possibili per la macro:

|Opzione /Zc:__cplusplus|Opzione /std:c++|Valore di __cplusplus|
|-|-|-|
Zc:__cplusplus|/std:c++14 (impostazione predefinita)|201402L
Zc:__cplusplus|/std:c++17|201703L
Zc:__cplusplus|/std:c++latest|201704L
Zc:__cplusplus- (disabilitata)|Qualsiasi valore|199711L
Non specificato|Qualsiasi valore|199711L

Il compilatore non supporta le opzioni standard per C++98, C++03 o C++11.

Per rilevare in modo dettagliato le modifiche apportate al set di strumenti del compilatore, usare la macro predefinita [_MSC_VER](../../preprocessor/predefined-macros.md). Il valore di questa macro predefinita viene incrementato per ogni aggiornamento del set di strumenti apportato in Visual Studio 2017 e versioni successive. La macro predefinita [_MSVC_LANG](../../preprocessor/predefined-macros.md) segnala la versione standard indipendentemente dal fatto che l'opzione **/Zc:__cplusplus** sia abilitata o disabilitata. Se **/Zc:__cplusplus** è abilitata, `__cplusplus == _MSVC_LANG`.

### <a name="to-set-this-compiler-option-in-visual-studio"></a>Per impostare questa opzione del compilatore in Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione** proprietà della riga di comando di  >  **c/C++**  >   .

1. Aggiungere **/Zc:__cplusplus** o **/Zc:__cplusplus-** nel riquadro **Opzioni aggiuntive**.

## <a name="see-also"></a>Vedi anche

- [/Zc (Conformità)](zc-conformance.md)
- [/std (Specifica la versione standard del linguaggio)](std-specify-language-standard-version.md)
- [Macro predefinite](../../preprocessor/predefined-macros.md)

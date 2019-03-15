---
title: /Zc:__cplusplus (Abilita cplusplus aggiornato macro)
ms.date: 05/30/2018
f1_keywords:
- /Zc:__cplusplus
helpviewer_keywords:
- -Zc:__cplusplus compiler option (C++)
- __cplusplus macro (C++)
ms.openlocfilehash: 89545f541f32374a47dce7f87958e61873c1b47c
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57810094"
---
# <a name="zccplusplus-enable-updated-cplusplus-macro"></a>/Zc:__cplusplus (Abilita cplusplus aggiornato macro)

Il **/Zc:__cplusplus** Abilita opzione del compilatore il  **\_ \_cplusplus** macro del preprocessore per segnalare un valore aggiornato di recente supporto degli standard di linguaggio C++. Per impostazione predefinita, Visual Studio restituisce sempre il valore "199711L" per il  **\_ \_cplusplus** macro del preprocessore.

## <a name="syntax"></a>Sintassi

> **/Zc:__cplusplus**[**-**]

## <a name="remarks"></a>Note

Il  **\_ \_cplusplus** macro del preprocessore viene comunemente usato per il supporto di report per una particolare versione dello standard C++. Perché si verifichi una grande quantità di codice esistente dipendono dal valore di questa macro corrispondenti "199711L", il compilatore non modifica il valore della macro, a meno che acconsentire esplicitamente tramite il **/Zc:__cplusplus** opzione del compilatore. Il **/Zc:__cplusplus** opzione è disponibile a partire da Visual Studio 2017 versione 15.7 ed è disattivata per impostazione predefinita. Nelle versioni precedenti di Visual Studio e per impostazione predefinita, oppure se **/Zc:__cplusplus-** è specificato, Visual Studio restituisce il valore "199711 L" per il  **\_ \_cplusplus** macro del preprocessore. Il [/PERMISSIVE--](permissive-standards-conformance.md) non abilita l'opzione **/Zc:__cplusplus**.

Quando la **/Zc:__cplusplus** opzione è abilitata, il valore restituito dal  **\_ \_cplusplus** dipende dalla macro il [/std](std-specify-language-standard-version.md) Cambia versione l'impostazione. Questa tabella mostra i valori possibili per la macro:

|Commutatore /Zc:__cplusplus|commutatore /std:c++|valore cplusplus|
|-|-|-|
Zc:__cplusplus|/std:c++14 (default)|201402L
Zc:__cplusplus|/std:c++17|201703L
Zc:__cplusplus|/std: c + + più recente|201704L
Zc:__cplusplus-(disabilitato)|Qualsiasi valore|199711L
Non è specificato|Qualsiasi valore|199711L

Il compilatore non supporta parametri standard per c++98, c++03 o linguaggio c++11.

Per il rilevamento delle modifiche per il set di strumenti del compilatore granularità, usare il [msc_ver](../../preprocessor/predefined-macros.md) la macro predefinita. Il valore di questa macro predefinita viene incrementato per ogni aggiornamento di set di strumenti in Visual Studio 2017 e versioni successive. Il [_MSVC_LANG](../../preprocessor/predefined-macros.md) la macro predefinita segnala se la versione standard le **/Zc:__cplusplus** opzione è abilitata o disabilitata. Quando **/Zc:__cplusplus** è abilitata, `__cplusplus == _MSVC_LANG`.

### <a name="to-set-this-compiler-option-in-visual-studio"></a>Per impostare questa opzione del compilatore in Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **della riga di comando** pagina delle proprietà.

1. Aggiungere **/Zc:__cplusplus** oppure **/Zc:__cplusplus-** per il **opzioni aggiuntive:** riquadro.

## <a name="see-also"></a>Vedere anche

- [/Zc (conformità)](zc-conformance.md)
- [/ std:<c++14|c++17|c++Latest> (versione standard del linguaggio di specifica)](std-specify-language-standard-version.md)
- [Macro predefinite](../../preprocessor/predefined-macros.md)

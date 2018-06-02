---
title: /Zc:__cplusplus (Abilita aggiornato cplusplus (macro))
ms.custom: ''
ms.date: 05/30/2018
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /Zc:__cplusplus
dev_langs:
- C++
helpviewer_keywords:
- -Zc:__cplusplus compiler option (C++)
- __cplusplus macro (C++)
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a796794c0086b09c15ee88442e0fea4d1b114d98
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/01/2018
ms.locfileid: "34705714"
---
# <a name="zccplusplus-enable-updated-cplusplus-macro"></a>/Zc:__cplusplus (Abilita aggiornato cplusplus (macro))

Il **/Zc:__cplusplus** consente di opzione del compilatore il  **\_ \_cplusplus** macro del preprocessore per segnalare un valore aggiornato di recente supporto degli standard di linguaggio C++. Per impostazione predefinita, Visual Studio restituisce sempre il valore "199711L" per il  **\_ \_cplusplus** macro del preprocessore.

## <a name="syntax"></a>Sintassi

> **/Zc:__cplusplus**[**-**]

## <a name="remarks"></a>Note

Il  **\_ \_cplusplus** macro del preprocessore viene comunemente utilizzato per il supporto di report per una particolare versione dello standard C++. Perché si verifichi una grande quantità di codice esistente dipendono dal valore di questa macro corrispondenza "199711L", il compilatore non modifica il valore della macro a meno che non in modo esplicito opt-in usando il **/Zc:__cplusplus** opzione del compilatore. Il **/Zc:__cplusplus** opzione è disponibile a partire da Visual Studio 2017 versione 15.7 ed è disattivata per impostazione predefinita. Nelle versioni precedenti di Visual Studio e per impostazione predefinita, oppure se **/Zc:__cplusplus-** è specificato, Visual Studio restituisce il valore "199711 L" per il  **\_ \_cplusplus** macro del preprocessore. Il [/ permissiva-](permissive-standards-conformance.md) opzione non consente **/Zc:__cplusplus**.

Quando il **/Zc:__cplusplus** opzione è abilitata, il valore restituito dal  **\_ \_cplusplus** dipende dalla macro il [/std](std-specify-language-standard-version.md) Cambia versione l'impostazione. Questa tabella mostra i valori possibili per la macro:

|Commutatore /Zc:__cplusplus|commutatore /std:c++|valore cplusplus|
|-|-|-|
Zc:__cplusplus|/std:c + + 14 (impostazione predefinita)|L 201402
Zc:__cplusplus|/std:c + + 17|L 201703
Zc:__cplusplus|/std:c + + più recente|L 201704
Zc:__cplusplus-(disabilitato)|Qualsiasi valore|L 199711
Non è specificato|Qualsiasi valore|L 199711

Il compilatore non supporta i commutatori standard per c++98, c++03 o c++11.

Per il rilevamento delle modifiche per il set di strumenti del compilatore granularità, usare il [msc_ver](../../preprocessor/predefined-macros.md) macro predefinita. Il valore di questa macro predefinita viene incrementato per ogni aggiornamento di set di strumenti in Visual Studio 2017 e versioni successive. Il [_MSVC_LANG](../../preprocessor/predefined-macros.md) macro predefinita indica la versione standard se il **/Zc:__cplusplus** opzione è abilitata o disabilitata. Quando si **/Zc:__cplusplus** è abilitata, `__cplusplus == _MSVC_LANG`.

### <a name="to-set-this-compiler-option-in-visual-studio"></a>Per impostare questa opzione del compilatore in Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **riga di comando** pagina delle proprietà.

1. Aggiungere **/Zc:__cplusplus** oppure **/Zc:__cplusplus-** per il **opzioni aggiuntive:** riquadro.

## <a name="see-also"></a>Vedere anche

- [/Zc (conformità)](zc-conformance.md)
- [/std (versione standard del linguaggio di specifica)](std-specify-language-standard-version.md)
- [Macro predefinite](../../preprocessor/predefined-macros.md)

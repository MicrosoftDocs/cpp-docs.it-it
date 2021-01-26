---
title: '/Zc: hiddenFriend (applica regole standard Friend nascoste in C++)'
description: "Informazioni sull'opzione del compilatore Microsoft C++/Zc: hiddenFriend per la compatibilità con la compatibilità con l'amico nascosto."
ms.date: 01/23/2021
f1_keywords:
- /Zc:hiddenFriend
helpviewer_keywords:
- /Zc:hiddenFriend
- Zc:hiddenFriend
- -Zc:hiddenFriend
ms.openlocfilehash: 5a3487cc4899cf6a07e91dc5ce5b7cd8f8784737
ms.sourcegitcommit: 74e58bee5cffb30b66e17be6dbfde2544369638e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/25/2021
ms.locfileid: "98766837"
---
# <a name="zchiddenfriend-enforce-standard-c-hidden-friend-rules"></a>`/Zc:hiddenFriend` (Applica regole standard Friend nascoste in C++)

Specifica che il compilatore è conforme al trattamento standard C++ per le funzioni Friend nascoste o i modelli di funzione.

## <a name="syntax"></a>Sintassi

> **`/Zc:hiddenFriend`**\[**`-`**]

## <a name="remarks"></a>Osservazioni

L' **`/Zc:hiddenFriend`** opzione Abilita un subset del [`/permissive-`](permissive-standards-conformance.md) comportamento dell'opzione. Indica al compilatore di conformarsi allo standard per gli amici nascosti. Il compilatore include solo gli amici nascosti nella [ricerca dipendente dall'argomento](../../cpp/argument-dependent-name-koenig-lookup-on-functions.md) (ADL) per le istanze esplicite o i parametri del modello del tipo di classe contenitore. La restrizione consente di usare gli amici nascosti per evitare che le operazioni su un tipo vengano applicate alle conversioni implicite. Questa opzione può migliorare la velocità di compilazione nel codice che non può altrimenti usare [`/permissive-`](permissive-standards-conformance.md) .

Un *Friend nascosto* è un **`friend`** modello di funzione o funzione dichiarato solo all'interno di una classe o di una definizione di modello di classe. Per impostazione predefinita, il compilatore Microsoft C++ non rimuove le dichiarazioni Friend nascoste come candidati per la risoluzione dell'overload in qualsiasi posizione. Questo comportamento legacy può rallentare il compilatore, includendo le funzioni Friend nascoste come possibili candidati in più contesti.

Il comportamento Friend nascosto standard di C++ è abilitato per impostazione predefinita in **`/permissive-`** . Per specificare il comportamento dell'amico nascosto legacy quando **`/permissive-`** si specifica l'opzione, usare **`/Zc:hiddenFriend-`** . L'uso dei moduli C++ 20 richiede il comportamento dell'amico nascosto standard.

L' **`/Zc:hiddenFriend`** opzione è disponibile a partire da Visual Studio 2019 versione 16,4.

Per esempi di comportamento del compilatore quando si specifica **`/Zc:hiddenFriend`** , vedere [regole di ricerca del nome Friend nascoste](./permissive-standards-conformance.md#hidden-friend-name-lookup-rules).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione** proprietà della riga di comando di  >  **c/C++**  >   .

1. Modificare la proprietà **Opzioni aggiuntive** in modo da includere *`/Zc:hiddenFriend`* o *`/Zc:hiddenFriend-`* , quindi scegliere **OK**.

## <a name="see-also"></a>Vedere anche

[`/Zc` Conformità](zc-conformance.md)\
[`/permissive-`](permissive-standards-conformance.md)

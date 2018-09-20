---
title: -GUARD (Abilita i controlli di Guard) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
ms.assetid: 72758e23-70ac-4616-94d7-d767477406d1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 71dc4a3a1f2c08d3bac2fcf5c474768f438feccd
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46394985"
---
# <a name="guard-enable-guard-checks"></a>/GUARD (abilita i controlli di protezione)

Specifica il supporto per i controlli di Guard flusso di controllo nell'immagine eseguibile.

## <a name="syntax"></a>Sintassi

```
/GUARD:{CF|NO}
```

## <a name="remarks"></a>Note

Quando si specifica /GUARD:CF, il linker modifica l'intestazione di un file DLL o EXE in modo che indichi il supporto per i controlli di runtime di Guard flusso di controllo. Anche il linker aggiunge all'intestazione i dati dell'indirizzo di destinazione del flusso di controllo richiesti. Per impostazione predefinita, /GUARD:CF è disabilitato. Può essere disabilitato in modo esplicito con /GUARD:NO. Per essere efficace, /Guard: CF richiede anche il [/DYNAMICBASE (uso ASLR)](../../build/reference/dynamicbase-use-address-space-layout-randomization.md) opzione del linker, che è attivata per impostazione predefinita.

Quando il codice sorgente viene compilato con il [/Guard: CF](../../build/reference/guard-enable-control-flow-guard.md) opzione, il compilatore analizza il flusso di controllo esaminando tutte le chiamate indirette per possibili indirizzi di destinazione. Il compilatore inserisce codice per verificare che l'indirizzo di destinazione di un'istruzione di chiamata indiretta sia incluso nell'elenco degli indirizzi di destinazione noti in fase di esecuzione. Con i sistemi operativi che supportano Guard flusso di controllo un programma che non supera il controllo di runtime di questa funzionalità viene arrestato. In questo modo l'autore di un attacco può meno facilmente eseguire codice dannoso sfruttando dati danneggiati per modificare una destinazione di chiamata.

Per creare immagini di eseguibili abilitati per Guard flusso di controllo, l'opzione /GUARD:CF deve essere specificata sia nel compilatore che nel linker. Al codice compilato ma non collegato con /GUARD:CF è associato un certo costo per i controlli di runtime. In questa situazione, inoltre, la protezione di Guard flusso di controllo non viene abilitata. Quando l'opzione /Guard: CF è specificato per il `cl` comando per compilare e collegare in un unico passaggio, il compilatore passa il flag al linker. Quando la **Guard flusso di controllo** proprietà è impostata in Visual Studio, l'opzione /Guard: CF viene passata al compilatore e linker. Quando i file oggetto o le librerie sono state compilate separatamente, l'opzione deve essere specificata esplicitamente nel `link` comando.

### <a name="to-set-this-linker-option-in-visual-studio"></a>Per impostare questa opzione del linker in Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [Uso delle proprietà del progetto](../../ide/working-with-project-properties.md).

1. Espandere **le proprietà di configurazione**, **Linker**, **riga di comando**.

1. Nelle **opzioni aggiuntive**, immettere `/GUARD:CF`.

## <a name="see-also"></a>Vedere anche

[/guard (abilita guard flusso di controllo)](../../build/reference/guard-enable-control-flow-guard.md)<br/>
[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)